#pragma once
#include "StateBase.h"
#include "Door.h"

class Closed : public StateBase
{
public:
	void open(Door* door)override;
	void close(Door* door)override;
	void unlock(Door* door)override;
	void lock(Door* door)override;
};