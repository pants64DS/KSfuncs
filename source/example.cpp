#include "kuppa_funcs.h"

char* KuppaFile[2] = {nullptr};

void hook_0200da0c() // this address was found by a guy called dy and it's called every frame pretty much before rendering
{
	UpdateScriptFiles(KuppaFile, sizeof(KuppaFile)); // this function deletes every file if the script isn't running
	
	if (INPUT_1_FRAME & Input::A)
	{
		KuppaFile[0] = LoadAndRunKuppaScript(0x0690);
	}

	if ((unsigned)(PLAYER_ARR[0]->currState) == Player::ST_ON_WALL)
	{
		KuppaFile[1] = LoadKuppaScriptAndRunIfNotRanYet(0x068f);
	}
}