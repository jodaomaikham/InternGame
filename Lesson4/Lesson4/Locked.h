#pragma once
#include "StateBase.h"
#include "Door.h"

class Locked: public StateBase
{
public:
	void open(Door* door)override;
	void close(Door* door)override;
	void unlock(Door* door)override;
	void lock(Door* door)override;
};