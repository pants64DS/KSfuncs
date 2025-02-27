#ifndef KUPPA_FUNCS_INCLUDED
#define KUPPA_FUNCS_INCLUDED

#include "SM64DS_PI.h"

void RunKuppaScriptIfNotRanYet(char* file);
void UpdateScriptFiles(char** file_ptr_ptr, size_t size);
char* LoadAndRunKuppaScript(int ov0FileID);
char* LoadKuppaScriptAndRunIfNotRanYet(int ov0FileID);

#endif