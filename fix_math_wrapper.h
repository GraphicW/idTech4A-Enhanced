#pragma push_macro("i")
#pragma push_macro("a")
#ifdef i
  #undef i
#endif
#ifdef a
  #undef a
#endif

#include "doom3/neo/idlib/IDLIB_PCH.h"

#pragma pop_macro("a")
#pragma pop_macro("i")
