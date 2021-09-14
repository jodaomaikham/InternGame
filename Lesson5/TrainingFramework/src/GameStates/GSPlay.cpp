#include "GSPlay.h"

#include "Shader.h"
#include "Texture.h"
#include "Model.h"
#include "Camera.h"
#include "Font.h"
#include "Sprite2D.h"
#include "Sprite3D.h"
#include "Text.h"
#include "GameButton.h"
#include "Parallel.h"
#include "AnimationSprite.h"



#define HEIGHT 600
#define WIDTH 900



GSPlay::GSPlay()
{
}


GSPlay::~GSPlay()
{
}


void GSPlay::Init()
{
	auto model = ResourceManagers::GetInstance()->GetModel("Sprite2D.nfg");
	auto texture = ResourceManagers::GetInstance()->GetTexture("bg_play.tga");

	// background
	auto shader = ResourceManagers::GetInstance()->GetShader("TextureShader");
	m_background = std::make_shared<Parallel>(model, shader, texture, 150.0f);


	// button clode
	texture = ResourceManagers::GetInstance()->GetTexture("home.tga");
	std::shared_ptr<GameButton>  button = std::make_shared<GameButton>(model, shader, texture);
	button->Set2DPosition(Globals::screenWidth - 25, 30);
	button->SetSize(50, 50);
	button->SetOnClick([]() {
		GameStateMachine::GetInstance()->PopState();
		});
	m_listButton.push_back(button);

	//Character
	shader = ResourceManagers::GetInstance()->GetShader("AnimationShader");
	texture = ResourceManagers::GetInstance()->GetTexture("Character.tga");
	m_Character = std::make_shared<AnimationSprite>(model, shader, texture, 8, 0.07f);
	m_Character->Set2DPosition(100, 370);
	m_Character->SetSize(60, 60);

	//Obstacle
	shader = ResourceManagers::GetInstance()->GetShader("AnimationShader");
	texture = ResourceManagers::GetInstance()->GetTexture("Mace.tga");
	m_Obstacle= std::make_shared<AnimationSprite>(model, shader, texture,2, 1.0f);
	m_Obstacle->Set2DPosition(Vector2(1000,360));
	m_Obstacle->SetSize(55, 55);
	
	// score
	shader = ResourceManagers::GetInstance()->GetShader("TextShader");
	std::shared_ptr<Font> font = ResourceManagers::GetInstance()->GetFont("karma suture.otf");
	m_score = std::make_shared< Text>(shader, font, "score: 0" + std::to_string(Score), TextColor::RED, 1);
	m_score->Set2DPosition(Vector2(5, 30));
}
//Init Sound




void GSPlay::Exit()
{
}


void GSPlay::Pause()
{
}

void GSPlay::Resume()
{
}


void GSPlay::HandleEvents()
{
}

void GSPlay::HandleKeyEvents(int key, bool bIsPressed)
{
	if(bIsPressed == true) {
		switch (key)
		{
		case ' ':
			KeyPressed |= KEY_UP;
			break;
		default:
			break;
		}
	}
	else {
	switch (key)
	{
	case ' ':
		KeyPressed ^= KEY_UP;
		break;
	default:
		break;
	}
	}
}

void GSPlay::HandleTouchEvents(int x, int y, bool bIsPressed)
{
	for (auto button : m_listButton)
	{
		if(button->HandleTouchEvents(x, y, bIsPressed))
		{
			break;
		}
	}
}

void GSPlay::HandleMouseMoveEvents(int x, int y)
{
}

void GSPlay::Update(float deltaTime)
{
	Vector3 Position = m_Character->GetPosition();

	if (isjumping == true) {
		if (speed > -4000 && isfalling == false)
		{
			speed -= 1000 * deltaTime;
			isfalling = true;
		}

		if (isfalling == true)
		{
			speed += 1000 * deltaTime;
			if (Position.y >= 370)
			{
				speed = 0;
				isjumping = false;
				Position.y = 370;
			}
		}
	}
	if (KeyPressed & KEY_UP)
	{
		if (isjumping == false)
		{
			speed = - 500;
			isjumping = true;
			isfalling = false;
			

		}
	}
	Position.y += speed * deltaTime;
	m_Character->Set2DPosition(Position.x, Position.y);
	Score+=50*deltaTime;
	m_score->SetText("score :" + std::to_string(Score));



	{
		ObsSpeed = 4;
		ObsSpeed -= deltaTime;
		Vector3 ObsPos = m_Obstacle->GetPosition();
		if (ObsPos.x < 0) {
			ObsPos.x = WIDTH;
		}
		ObsPos.x -= ObsSpeed;
		m_Obstacle->Set2DPosition(ObsPos.x, ObsPos.y);
	}
	for (auto it : m_listButton)
	{
		it->Update(deltaTime);
	}
	m_Character->Update(deltaTime);
	m_Obstacle->Update(deltaTime);
	m_score->Update(deltaTime);
	m_background->Update(deltaTime);

}

void GSPlay::Draw()
{
	m_background->Draw();
	m_score->Draw();
	m_Character->Draw();
	m_Obstacle->Draw();
	for (auto it : m_listButton)
	{
		it->Draw();
	}
}