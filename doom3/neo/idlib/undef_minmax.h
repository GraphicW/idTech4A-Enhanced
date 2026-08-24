#ifndef IDLIB_UNDEF_MINMAX_H
#define IDLIB_UNDEF_MINMAX_H

// If third-party headers define min/max macros, remove them so STL works.
#ifdef max
#  undef max
#endif
#ifdef min
#  undef min
#endif

// Optionally restore previous macro state if needed (MSVC supports push/pop)
#if defined(_MSC_VER)
#  pragma push_macro("max")
#  pragma push_macro("min")
#  pragma pop_macro("max")
#  pragma pop_macro("min")
#endif

#endif // IDLIB_UNDEF_MINMAX_H
