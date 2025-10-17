#include "global.h"
#include "catch_mode.h"

bool8 gInCatchMode = FALSE;

void EnterCatchMode(void)
{
    gInCatchMode = TRUE;
    // Add any additional setup logic here (e.g., freeze player, show overlay)
}

void ExitCatchMode(void)
{
    gInCatchMode = FALSE;
    // Add any cleanup logic here (e.g., unfreeze player, hide overlay)
}