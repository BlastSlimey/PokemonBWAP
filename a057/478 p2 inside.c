#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkCmpConst(0x40CA, 2);
	if (1) goto label0;
	goto label1;

label0: ;
	MsgActorEx(1024, 14, 0, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	MsgActorClose();

label2: ;
	Routine0();
	goto label3;

label1: ;
	WorkCmpConst(0x40CA, 3);
	if (1) goto label4;
	goto label3;

label4: ;
	MsgActorEx(1024, 15, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label3;

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgSystem(16, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label5;
	MsgSystem(17, 0);
	InputWaitLast();

label5: ;
	MsgSystemClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	FlagReset(732);
	StackPush(0x40CA);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	WorkSetConst(0x8020, 0);
	PokePartyFind(649, 0x8010, 0x8020);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	WorkSetConst(0x40CA, 1);
	goto label8;

label7: ;
	FlagSet(732);

label8: ;
	WorkSetConst(0x8020, 0);

label6: ;
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	WorkSetConst(0x40CA, 2);
	Routine1();
	MsgSystem(8, 0);
	YesNoWin(0x8010);
	MsgSystemClose();
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	StackPush(0x40CA);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label9;
	ActorSetGPos(0, 6, 0, 5, 1);

label9: ;
	VMHalt();
}

void Routine0()
{
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	CallTrainerBattle(526, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	Routine2();
	CallTrainerBattleEnd();
	goto label12;

label11: ;
	CallTrainerLose();

label12: ;
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	GameGetVersion(0x8021);
	StackPush(0x8021);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label13;
	WorkSetConst(0x8022, 117);
	WorkSetConst(0x8023, 118);
	goto label14;

label13: ;
	WorkSetConst(0x8022, 116);
	WorkSetConst(0x8023, 119);

label14: ;
	MsgActorEx(1024, 9, 0, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 10, 0, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x8022);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	MsgActorEx(1024, 12, 0, 0, 0);
	MsgActorClose();

	Movement m[] = { //0
		WalkUp, 1,
		Wait8, 1,
		Exclaimation, 1,
		WalkDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 0, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x8023);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);

	Movement m[] = { //0
		WalkUp, 2,
		WalkLeft, 2,
		WalkUp, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x40CA, 3);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	goto label15;

label10: ;
	MsgActorEx(1024, 13, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label15: ;
	VMReturn();
}

void Routine1()
{
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x68000, 0, 0x38000, 16);
	EVCameraWait();

	Movement m[] = { //0
		Exclaimation, 1,
		Wait4, 1,
		TurnDown, 1,
		Wait8, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 0, 0, 0, 0);
	MsgActorClose();

	Movement m[] = { //0
		WalkDown, 1,
		WalkRight, 2,
		TurnDown, 1,
	};


	Movement m[] = { //255
		WalkUp, 3,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 0, 0, 0);
	MsgActorClose();
	EVCameraMoveTo(9688, 0, 0xED000, 0x68000, 0, 0x48000, 8);

	Movement m[] = { //0
		WalkDown, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 2, 0, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 3, 0, 0, 1);
	MsgActorClose();
	EVCameraMoveToDefault(12);

	Movement m[] = { //0
		WalkDown, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	MsgActorEx(1024, 4, 0, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 5, 0, 0, 1);
	MsgActorClose();
	MsgActorEx(1024, 6, 0, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 7, 0, 0, 1);
	MsgActorClose();
	VMReturn();
}

void Routine2()
{
	ActorSetGPos(0, 6, 0, 5, 1);
	ActorSetGPos(255, 6, 0, 6, 0);
	VMReturn();
}
