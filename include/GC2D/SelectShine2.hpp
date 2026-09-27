#ifndef GC2D_SELECT_SHINE_2_HPP
#define GC2D_SELECT_SHINE_2_HPP

#include <GC2D/Option.hpp>
#include <JSystem/JDrama/JDRViewObj.hpp>
#include <JSystem/JParticle/JPAEmitterManager.hpp>

class TSelectShineManager : public JDrama::TViewObj {
public:
	TSelectShineManager(const char*);
	virtual ~TSelectShineManager();
	virtual void perform(u32 cue, JDrama::TGraphics* graphics);

	void initData(u8*, u8, u8, JPAEmitterManager*);
	void startClose();
	void startIncrease(int);
	void startDecrease(int);

public:
	/* 0x10 */ TOptionRumbleUnit* mRumbleOption[8];
	/* 0x30 */ s32 unk10[8];
	/* 0x50 */ s32 unk50;
	/* 0x54 */ s32 unk54;
	/* 0x58 */ s32 unk58[8];
	/* 0x78 */ f32 unk78;
	/* 0x7C */ f32 unk7C;
	/* 0x80 */ s32 unk80;
	/* 0x84 */ s32 unk84;
	/* 0x88 */ s32 unk88;
	/* 0x8C */ s32 unk8C;
	/* 0x90 */ f32 unk90;
	/* 0x94 */ f32 unk94;
	/* 0x98 */ s32 unk98;
	/* 0x9C */ s32 unk9C;
	/* 0xA0 */ f32 unkA0;
	/* 0xA4 */ bool unkA4;
	/* 0xA5 */ bool unkA5;
	/* 0xA6 */ bool unkA6;
	/* 0xA7 */ bool unkA7;
	/* 0xA8 */ JGeometry::TVec3<f32> unkA8[8];
};

#endif // GC2D_SELECT_SHINE_2_HPP
