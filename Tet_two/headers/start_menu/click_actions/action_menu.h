#pragma once

#include <process.h>

#include "params.h"

class click_action
{
public:
	virtual void action(action_parameters) = 0;
	virtual ~click_action() {};
};

class click_START : public click_action
{
public:
	void action(action_parameters) override;
};

class click_SETUP : public click_action
{
public:
	void action(action_parameters) override;
};

class click_SCORE : public click_action
{
public:
	void action(action_parameters) override;
};

class click_1RIGHT : public click_action
{
public:
	void action(action_parameters) override;
};
class click_1LEFT : public click_action
{
public:
	void action(action_parameters) override;
};

class click_2RIGHT : public click_action
{
public:
	void action(action_parameters) override;
};

class click_2LEFT : public click_action
{
public:
	void action(action_parameters) override;
};

class click_INFO : public click_action
{
public:
	void action(action_parameters) override;
};

class click_HELP : public click_action
{
public:
	void action(action_parameters) override;
};

class click_EXIT : public click_action
{
public:
	void action(action_parameters) override;
};