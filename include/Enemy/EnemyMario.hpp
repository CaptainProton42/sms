#ifndef ENEMY_ENEMY_MARIO_HPP
#define ENEMY_ENEMY_MARIO_HPP

#include "Strategic/HitActor.hpp"
#include <Player/MarioMain.hpp>

class TEnemyMario : public TMario {
public:
	// stub
	void initEnemyValues();
	void startMonteReplay(u32);
	void startDisappear(u16);
	void startRunAway();
	void startGateDrawing();
	void hitWater(THitActor*);
	u8 thinkTrample();
	void reachGoal();
};

#endif
