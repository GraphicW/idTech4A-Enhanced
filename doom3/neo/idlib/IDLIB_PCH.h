// doom3/neo/idlib/IDLIB_PCH.h
// Umbrella-style compatibility PCH for compiling idTech 4 source files.

#ifndef IDLIB_PCH_H
#define IDLIB_PCH_H

#include <cstdint>
#include <cstdarg>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <cmath>
#include <cfloat>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
#include <cerrno>
#include <cctype>

// Compiler compatibility
#ifndef ID_INLINE
#if defined(_MSC_VER)
#define ID_INLINE __forceinline
#elif defined(__GNUC__) || defined(__clang__)
#define ID_INLINE inline __attribute__((always_inline))
#else
#define ID_INLINE inline
#endif
#endif

#ifndef id_attribute
#define id_attribute(x)
#endif

#ifndef ID_TIME_T
#define ID_TIME_T time_t
#endif

// Windows compatibility
#ifdef _WIN32

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifndef NOMINMAX
#define NOMINMAX
#endif

#ifndef WINVER
#define WINVER 0x501
#endif

#include <winsock2.h>
#include <windows.h>
#include <mmsystem.h>
#include <mmreg.h>
#include <dsound.h>
#include <dinput.h>
#include <malloc.h>

#undef FindText

#pragma warning(disable : 4100)
#pragma warning(disable : 4244)
#pragma warning(disable : 4714)
#pragma warning(disable : 4996)

#endif // _WIN32

// System and idlib
#include "../sys/sys_public.h"
#include "Lib.h"

// Framework foundations
#include "../framework/BuildVersion.h"
#include "../framework/BuildDefines.h"
#include "../framework/Licensee.h"
#include "../framework/CmdSystem.h"
#include "../framework/CVarSystem.h"
#include "../framework/Common.h"
#include "../framework/File.h"
#include "../framework/FileSystem.h"
#include "../framework/UsercmdGen.h"

// Declarations
#include "../framework/DeclManager.h"
#include "../framework/DeclTable.h"
#include "../framework/DeclSkin.h"
#include "../framework/DeclEntityDef.h"
#include "../framework/DeclFX.h"
#include "../framework/DeclParticle.h"
#include "../framework/DeclAF.h"
#include "../framework/DeclPDA.h"

// Constants originally supplied by the legacy PCH
const int MAX_EXPRESSION_OPS = 4096;
const int MAX_EXPRESSION_REGISTERS = 4096;

// Renderer
#include "../renderer/qgl.h"
#include "../renderer/Cinematic.h"
#include "../renderer/Material.h"
#include "../renderer/Model.h"
#include "../renderer/ModelManager.h"
#include "../renderer/RenderSystem.h"
#include "../renderer/RenderWorld.h"

// Game.h prerequisites
#include "../sound/sound.h"
#include "../framework/async/NetworkSystem.h"

#include "../ui/ListGUI.h"
#include "../ui/UserInterface.h"

#include "../cm/CollisionModel.h"
#include "../tools/compilers/aas/AASFile.h"
#include "../tools/compilers/aas/AASFileManager.h"
#include "../tools/compilers/compiler_public.h"

// Select the correct public game interface
#if defined(_D3XP)

#if defined(_D3LE)
#include "../mod/doom3/d3le/Game.h"
#elif defined(_SABOT)
#include "../mod/doom3/sabot/Game.h"
#elif defined(_FRAGGINGFREE)
#include "../framework/Game.h"
#elif defined(_LIBRECOOPXP)
#include "../framework/Game.h"
#elif defined(_PERFECTEDROE)
#include "../framework/Game.h"
#elif defined(_PHOBOS)
#include "../framework/Game.h"
#else
#include "../d3xp/Game.h"
#endif

#elif defined(_RAVEN)

#ifdef _SDK
#include "../game/Game.h"
#else
#ifdef _HARDQORE
#include "../mod/quake4/hardqore/Game.h"
#else
#include "../quake4/Game.h"
#endif
#endif

#elif defined(_HUMANHEAD)

#ifdef _SDK
#include "../game/Game.h"
#else
#include "../prey/Game.h"
#endif

#elif defined(_SPLASHDAMAGE)

#include "../etqw/Game.h"

#else

#if defined(_CDOOM)
#include "../mod/doom3/cdoom/Game.h"
#elif defined(_RIVENSIN)
#include "../framework/Game.h"
#elif defined(_HARDCORPS)
#include "../framework/Game.h"
#elif defined(_OVERTHINKED)
#include "../mod/doom3/overthinked/Game.h"
#elif defined(_HEXENEOC)
#include "../framework/Game.h"
#elif defined(_LIBRECOOP)
#include "../framework/Game.h"
#elif defined(_PERFECTED)
#include "../framework/Game.h"
#else
#include "../game/Game.h"
#endif

#endif

// Remaining framework services
#include "../framework/EventLoop.h"
#include "../framework/KeyInput.h"
#include "../framework/EditField.h"
#include "../framework/Console.h"
#include "../framework/Compressor.h"
#include "../framework/DemoFile.h"
#include "../framework/Session.h"
#include "../framework/async/AsyncNetwork.h"

#endif // IDLIB_PCH_H