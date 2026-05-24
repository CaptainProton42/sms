#ifndef ENEMY_EMARIO_HPP
#define ENEMY_EMARIO_HPP

#include <Enemy/EnemyManager.hpp>
#include <Enemy/Enemy.hpp>

class TEnemyMario;

class TEMario : public TSpineEnemy {
public:
	TEMario(const char* pName);
	~TEMario();

	virtual void load(JSUMemoryInputStream& pStream);
	virtual void loadAfter();
	virtual void init(TLiveManager* pLiveManager);
	virtual BOOL receiveMessage(THitActor* pSender, u32 pMessage);
	virtual void kill();

	virtual void perform(u32, JDrama::TGraphics*);

	BOOL isGoal();
	BOOL isReachedToGate() const;
	BOOL isDownWaitingToTalk() const;
	void startRunAway();
	void startMonteReplay(u32 pParam1);
	void startGateDrawing();
	void forceDisappear();

	// TODO: I couldn't find any existing inlines that exactly match the ones
	// below but these should probably live in a shared space.

	// fabricated
	static JGeometry::TVec3<f32> vecDiff(const JGeometry::TVec3<f32>& a,
	                                     const JGeometry::TVec3<f32>& b)
	{
		return a - b;
	}

	// fabricated
	static f32 vecDist(const JGeometry::TVec3<f32>& a,
	                   const JGeometry::TVec3<f32>& b)
	{
		return vecDiff(a, b).length();
	}

private:
	TEnemyMario* mEnemyMario; // 0x150
	u32 unk154;
	u32 unk158;
	u32 unk15C;
	u32 unk160;
};

class TEMarioManager : public TEnemyManager {
	TEMarioManager(const char* pName);

	virtual void load(JSUMemoryInputStream&);
	virtual TSpineEnemy* createEnemyInstance();
};

#endif
