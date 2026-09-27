#include "PowerPC_EABI_Support/Runtime/MWCPlusLib.h"
#include <GC2D/SelectShine2.hpp>

// rogue includes needed for matching sinit & bss
#include <MSound/MSSetSound.hpp>
#include <MSound/MSoundBGM.hpp>

TSelectShineManager::TSelectShineManager(const char* pName)
    : JDrama::TViewObj(pName)
    , unk50(0)
    , unk54(0)
    , unk78(0.0f)
    , unk7C(0.0f)
    , unk88(0)
    , unk90(0.0f)
    , unk94(0.0f)
    , unk98(0)
    , unk9C(0)
    , unkA0(0.0f)
    , unkA4(false)
    , unkA5(false)
    , unkA6(false)
    , unkA7(false)
{
}
