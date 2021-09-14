#pragma once
#include "GameStateBase.h"


class Sprite2D;
class Sprite3D;
class Text;
class GameButton;
class Parallel;
class AnimationSprite;

class GSPlay :
	public GameStateBase
{
public:
	GSPlay();
	~GSPlay();

	void	Init() override;
	void	Exit() override;

	void	Pause() override;
	void	Resume() override;

	void	HandleEvents() override;
	void	HandleKeyEvents(int key, bool bIsPressed) override;
	void	HandleTouchEvents(int x, int y, bool bIsPressed) override;
	void	HandleMouseMoveEvents(int x, int y) override;
	void	Update(float deltaTime) override;
	void	Draw() override;

private:
	std::shared_ptr<Parallel>	m_background;
	std::shared_ptr<Text>		m_score;
	std::shared_ptr<AnimationSprite>		m_Character;
	std::shared_ptr<AnimationSprite>		m_Obstacle;
	std::list<std::shared_ptr<GameButton>>	m_listButton;

	//KeyPressed
	int KeyPressed = 0;

	//Character jump
	bool isjumping = false;
	bool isfalling = true;
	int speed = 0;

	//Score
	int Score =0;

	//Obstacle
	int ObsSpeed = 0;
  
};

