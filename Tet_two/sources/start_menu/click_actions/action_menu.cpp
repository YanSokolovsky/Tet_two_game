#include "action_menu.h"

void click_START::action(action_parameters param)
{
	return;
};

void click_SETUP::action(action_parameters param)
{
	return;
};

void click_SCORE::action(action_parameters param)
{
	return;
};

void click_1RIGHT::action(action_parameters param)
{
	*param.a += 2;
};

void click_1LEFT::action(action_parameters param)
{
	*param.a -= 2;
};

void click_2RIGHT::action(action_parameters param)
{
	*param.a += 2;
};

void click_INFO::action(action_parameters param)
{
	return;
};

void click_HELP::action(action_parameters param)
{
	return;
};

void click_EXIT::action(action_parameters param)
{
	return;
};

void click_2LEFT::action(action_parameters param)
{
	*param.a -= 2;
}
