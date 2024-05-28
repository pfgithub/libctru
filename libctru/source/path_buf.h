#pragma once
#include <stdint.h>
#include <limits.h>

// <>HACK!
// This will cause race conditions when using path related functions
// on two threads at the same time!
#define __thread
// </>

extern char     __thread __ctru_dev_path_buf[PATH_MAX+1];
extern uint16_t __thread __ctru_dev_utf16_buf[PATH_MAX+1];
