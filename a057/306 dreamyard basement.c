#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	PVPlay(518, 0);
	MsgActorEx(1024, 0, 0, 0, 0);
	PVWait();
	MsgWaitAdvance();
	MsgActorClose();
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8021, 128);
	WorkOr(0x8021, 8);
	CallWildBattle(518, 50, 0x8021);
	WildBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	ActorDelete(0);
	FlagSet(748);
	CallWildBattleEnd();
	goto label1;

label0: ;
	CallWildLose();

label1: ;
	WorkSetConst(0x8021, 0);
	WildBattleGetResult(0x8010);
	WorkCmpConst(0x8010, 1);
	if (1) goto label2;
	WorkCmpConst(0x8010, 2);
	if (1) goto label2;
	goto label3;

label2: ;
	MsgSystem(1, 2);
	InputWaitLast();
	MsgSystemClose();
	FlagSet(2748);
	goto label4;

label3: ;
	WorkCmpConst(0x8010, 0);
	if (1) goto label5;
	goto label4;

label5: ;
	FlagSet(2748);
	goto label4;

label4: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	VMHalt();
}
