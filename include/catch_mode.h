#ifndef GUARD_CATCH_MODE_H
#define GUARD_CATCH_MODE_H

#include "global.h"

// Enter/exit catch mode
void EnterCatchMode(void);
void ExitCatchMode(void);

// Global state
extern bool8 gInCatchMode;

#endif // GUARD_CATCH_MODE_H