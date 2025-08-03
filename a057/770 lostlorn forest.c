#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 0, 1, 0, 0);
	MsgActorEx(1024, 1, 1, 0, 0);
	MsgActorClose();
	Routine0();
	FlagSet(733);
	ActorDelete(1);
	FlagSet(291);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	WorkSetConst(0x4000, 0);
	Routine1();
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8029, 0);
	WorkSetConst(0x802A, 0);
	WorkSetConst(0x802B, 0);
	WorkSetConst(0x802C, 0);
	PokePartyFind(244, 0x8029, 0x8028);
	PokePartyFind(243, 0x802A, 0x8028);
	PokePartyFind(245, 0x802B, 0x8028);
	WorkSetConst(0x802C, 0);
	StackPush(0x8029);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	WorkSetConst(0x802C, 1);
	goto label1;

label0: ;
	StackPush(0x802A);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	WorkSetConst(0x802C, 1);
	goto label1;

label2: ;
	StackPush(0x802B);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label1;
	WorkSetConst(0x802C, 1);

label1: ;
	StackPush(0x802C);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	Routine2();

label3: ;
	WorkSetConst(0x802C, 0);
	WorkSetConst(0x802B, 0);
	WorkSetConst(0x802A, 0);
	WorkSetConst(0x8029, 0);
	WorkSetConst(0x8028, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x4000, 0);
	WorkSetConst(0x8022, 0);
	FlagSet(734);
	StackPush(0x40C9);
	StackPushConst(2);
	StackCmp(4);
	if (255) goto label4;
	WorkSetConst(0x8022, 1);
	CMD_1eb(1, 0, 0, 0);
	FlagSet(733);
	goto label5;

label4: ;
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	PokePartyFind(244, 0x8024, 0x8023);
	PokePartyFind(243, 0x8025, 0x8023);
	PokePartyFind(245, 0x8026, 0x8023);
	WorkSetConst(0x8027, 0);
	StackPush(0x8024);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	WorkSetConst(0x8027, 1);
	goto label7;

label6: ;
	StackPush(0x8025);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	WorkSetConst(0x8027, 1);
	goto label7;

label8: ;
	StackPush(0x8026);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	WorkSetConst(0x8027, 1);

label7: ;
	StackPush(0x8027);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	WorkSetConst(0x4000, 1);
	FlagSet(733);
	goto label10;

label9: ;
	StackPushFlag(291);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	FlagSet(733);
	goto label10;

label11: ;
	FlagReset(733);

label10: ;
	WorkSetConst(0x40C9, 0);
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);

label5: ;
	MapReplaceSetEvent(7, 0x8022, 1);
	VMHalt();
}

void Sequence3()
{
	FieldGetContinueFlag(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	StackPush(0x40C9);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label12;
	CMD_1eb(1, 0, 0, 0);

label12: ;
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8036, 0);
	PlayerGetDir(0x8036);
	StackPush(0x8036);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label13;

	Movement m[] = { //1
		WalkRight, 1,
		WalkDown, 4,
		Wait8, 1,
		TurnUp, 1,
	};

	goto label14;

label13: ;

	Movement m[] = { //1
		WalkDown, 3,
		Wait8, 1,
		TurnUp, 1,
	};


label14: ;
	ActorCmdWait();
	StackPush(0x8036);
	StackPushConst(1);
	StackCmp(5);
	if (255) goto label15;

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();

label15: ;
	MsgActorEx(1024, 2, 1, 0, 0);
	MsgActorClose();
	StackPush(0x8036);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label16;

	Movement m[] = { //1
		WalkRight, 2,
		WalkDown, 3,
	};

	goto label17;

label16: ;

	Movement m[] = { //1
		WalkDown, 1,
		WalkRight, 3,
		WalkDown, 3,
	};


label17: ;
	ActorCmdWait();
	WorkSetConst(0x8036, 0);
	VMReturn();
}

void Routine1()
{
	WorkSetConst(0x8030, 0);
	WorkSetConst(0x8031, 0);
	WorkSetConst(0x8032, 0);
	WorkSetConst(0x8033, 0);
	WorkSetConst(0x8034, 0);
	WorkSetConst(0x8035, 0);
	PokePartyFind(244, 0x8033, 0x8030);
	PokePartyFind(243, 0x8034, 0x8031);
	PokePartyFind(245, 0x8035, 0x8032);
	WorkSetConst(0x8020, 6);
	StackPush(0x8033);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label18;
	WorkSetConst(0x8021, 244);
	WorkGet(0x8020, 0x8030);

label18: ;
	StackPush(0x8034);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label19;
	StackPush(0x8031);
	StackPush(0x8020);
	StackCmp(0);
	if (255) goto label19;
	WorkSetConst(0x8021, 243);
	WorkGet(0x8020, 0x8031);

label19: ;
	StackPush(0x8035);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label20;
	StackPush(0x8032);
	StackPush(0x8020);
	StackCmp(0);
	if (255) goto label20;
	WorkSetConst(0x8021, 245);
	WorkGet(0x8020, 0x8032);

label20: ;
	WorkSetConst(0x8035, 0);
	WorkSetConst(0x8034, 0);
	WorkSetConst(0x8033, 0);
	WorkSetConst(0x8032, 0);
	WorkSetConst(0x8031, 0);
	WorkSetConst(0x8030, 0);
	VMReturn();
}

void Routine2()
{
	Routine3();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x148000, 8);
	EVCameraWait();
	FlagReset(734);
	ActorAdd(0);

	Movement m[] = { //0
		WalkDown, 4,
	};

	ActorCmdWait();
	PVPlay(571, 0);
	MsgScream(3, 1);
	PVWait();
	MsgWaitAdvance();
	MsgInfoClose();

	Movement m[] = { //0
		FastWalkDown, 2,
	};

	EVCameraMoveToDefault(8);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	ActorCmdWait();
	MapReplaceSetEvent(7, 1, 1);
	CMD_1eb(1, 0, 0, 0);
	MsgSystem(8, 2);
	MsgSystemClose();
	FlagSet(344);
	WorkSetConst(0x802D, 0);
	WorkSetConst(0x802D, 1);
	WorkOr(0x802D, 16);
	WorkOr(0x802D, 64);
	CallWildBattle(571, 25, 0x802D);
	WorkSetConst(0x802D, 0);
	WildBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label21;
	FlagSet(734);
	ActorDelete(0);
	CallWildBattleEnd();
	goto label22;

label21: ;
	CallWildLose();

label22: ;
	WildBattleGetResult(0x8010);
	WorkCmpConst(0x8010, 1);
	if (1) goto label23;
	WorkCmpConst(0x8010, 2);
	if (1) goto label23;
	goto label24;

label23: ;
	WorkSetConst(0x40C9, 1);
	goto label25;

label24: ;
	WorkCmpConst(0x8010, 0);
	if (1) goto label26;
	goto label25;

label26: ;
	Routine4();
	CMD_228(0x8021, 0x8020);
	WorkSetConst(0x40C9, 2);
	goto label25;

label25: ;
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label27;
	MsgSystem(9, 2);
	InputWaitLast();
	MsgSystemClose();

label27: ;
	VMReturn();
}

void Routine3()
{
	WorkSetConst(0x802E, 0);
	WorkSetConst(0x802F, 0);
	PlayerGetGPos(0x802E, 0x802F);
	WorkCmpConst(0x802E, 15);
	VMJumpIf(1, 6);
	VMJump(14);

	Movement m[] = { //255
		WalkUp, 4,
		WalkRight, 1,
		WalkUp, 2,
	};

	VMJump(132);
	WorkCmpConst(0x802E, 16);
	VMJumpIf(1, 6);
	VMJump(14);

	Movement m[] = { //255
		WalkUp, 6,
	};

	VMJump(99);
	WorkCmpConst(0x802E, 17);
	VMJumpIf(1, 6);
	VMJump(14);

	Movement m[] = { //255
		WalkUp, 4,
		WalkLeft, 1,
		WalkUp, 2,
	};

	VMJump(66);
	WorkCmpConst(0x802E, 18);
	VMJumpIf(1, 6);
	VMJump(14);

	Movement m[] = { //255
		WalkUp, 4,
		WalkLeft, 2,
		WalkUp, 2,
	};

	VMJump(33);
	WorkCmpConst(0x802E, 19);
	VMJumpIf(1, 6);
	VMJump(14);

	Movement m[] = { //255
		WalkUp, 4,
		WalkLeft, 3,
		WalkUp, 2,
	};

	VMJump(0);
	ActorCmdWait();
	WorkSetConst(0x802F, 0);
	WorkSetConst(0x802E, 0);
	VMReturn();
}

void Routine4()
{
	ActorNew(16, 30, 0, 251, 48, 0);

	Movement m[] = { //251
		WalkUp, 4,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 251, 1, 0);
	MsgActorClose();

	Movement m[] = { //255
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //251
		WalkUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 5, 251, 1, 0);
	MsgActorEx(1024, 6, 251, 1, 0);
	MsgActorClose();

	Movement m[] = { //251
		WalkDown, 2,
		LookRight, 1,
		Wait8, 1,
		LookLeft, 1,
		Wait8, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 7, 251, 1, 0);
	MsgActorClose();

	Movement m[] = { //251
		WalkDown, 3,
	};

	ActorCmdWait();
	ActorDelete(251);
	VMReturn();
}
