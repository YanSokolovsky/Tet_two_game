#pragma once

class click_action
{
public:
	virtual void action() = 0;
	virtual ~click_action() {};
};

class click_START : public click_action
{
public:
	void action() override;
};

class click_SETUP : public click_action
{
public:
	void action() override;
};

class click_SCORE : public click_action
{
public:
	void action() override;
};

class click_RIGHT : public click_action
{
public:
	void action() override;
};