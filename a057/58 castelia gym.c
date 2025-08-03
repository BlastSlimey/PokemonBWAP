#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	FlagGet(0x174, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0; // jump if defeated
	WordSetPlayerName(0);
	MsgInfo(18, 2);
	goto label1;

label0: ;
	StackPush(0x4089);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	WordSetPlayerName(0);
	MsgInfo(19, 2);
	goto label1;

label2: ;
	WordSetPlayerName(0);
	MsgInfo(20, 2);

label1: ;
	InputWaitLast();
	MsgInfoClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	FlagReset(570);
	ActorAdd(7);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	FlagReset(571);
	ActorAdd(8);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	StackPushFlag(130);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	SEWait();

	Movement m[] = { //255
		LookUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 7, 7, 0, 0);
	MsgActorClose();
	CallTrainerBattle(199, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label4;
	CallTrainerBattleEnd();
	goto label5;

label4: ;
	CallTrainerLose();

label5: ;
	MsgActorEx(1024, 8, 7, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(130);
	goto label6;

label3: ;
	MsgActorEx(1024, 9, 7, 0, 0);
	InputWaitLast();
	MsgActorClose();

label6: ;
	WorkSetConst(0x4008, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	StackPushFlag(131);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label7;
	SEWait();

	Movement m[] = { //255
		LookUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 10, 8, 0, 0);
	MsgActorClose();
	CallTrainerBattle(200, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	CallTrainerBattleEnd();
	goto label9;

label8: ;
	CallTrainerLose();

label9: ;
	MsgActorEx(1024, 11, 8, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(131);
	goto label10;

label7: ;
	MsgActorEx(1024, 12, 8, 0, 0);
	InputWaitLast();
	MsgActorClose();

label10: ;
	WorkSetConst(0x4009, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	Routine0();
	WorkSetConst(0x8020, 0);
	Routine1();
	WorkSetConst(0x4000, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 1);
	Routine0();
	WorkSetConst(0x8020, 1);
	Routine1();
	WorkSetConst(0x4001, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 2);
	Routine0();
	WorkSetConst(0x8020, 2);
	Routine1();
	WorkSetConst(0x4002, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 3);
	Routine0();
	WorkSetConst(0x8020, 3);
	Routine1();
	WorkSetConst(0x8020, 4);
	Routine1();
	WorkSetConst(0x4003, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 4);
	Routine0();
	WorkSetConst(0x8020, 5);
	Routine1();
	WorkSetConst(0x4004, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 5);
	Routine0();
	WorkSetConst(0x8020, 6);
	Routine1();
	WorkSetConst(0x4005, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 6);
	Routine0();
	WorkSetConst(0x8020, 7);
	Routine1();
	WorkSetConst(0x8020, 8);
	Routine1();
	WorkSetConst(0x4006, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 7);
	Routine0();
	WorkSetConst(0x8020, 9);
	Routine1();
	WorkSetConst(0x4007, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	SEPlay(1737);
	CMD_18e(0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	SEPlay(1737);
	CMD_18e(1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
{
	CMD_18f(0x4000, 0x4001, 0x4002, 0x4003, 0x4004, 0x4005, 0x4006, 0x4007);
	FlagSet(570);
	FlagSet(571);
	DebugPrint(0x4000);
	DebugPrint(0x4001);
	DebugPrint(0x4002);
	DebugPrint(0x4003);
	DebugPrint(0x4004);
	DebugPrint(0x4005);
	DebugPrint(0x4006);
	DebugPrint(0x4007);
	VMHalt();
}

void Sequence17()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 8, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence18()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence19()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	FlagGet(0x174, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label11; // jump if defeated
	Routine2();
	goto label12;

label11: ;
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label13;
	MsgActorEx(1024, 5, 9, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label12;

label13: ;
	MsgActorEx(1024, 6, 9, 0, 0);
	InputWaitLast();
	MsgActorClose();

label12: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence20()
{
	ActorPauseAll();
	StackPush(0x40D7);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label14;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 16, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label15;

label14: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(120);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label17;
	MsgActor(1024, 13, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(120);
	MsgActor(1024, 14, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label18;

label17: ;
	FlagGet(0x174, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label16; // jump if defeated
	MsgActor(1024, 14, 0, 0);
	InputWaitLast();
	MsgActorClose();

label18: ;
	goto label15;

label16: ;
	MsgActor(1024, 15, 0, 0);
	InputWaitLast();
	MsgActorClose();

label15: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence21()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8022, 0x8023);
	WorkCmpConst(0x8022, 31);
	if (1) goto label19;
	goto label20;

label19: ;

	Movement m[] = { //10
		WalkLeft, 3,
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label21;

label20: ;
	WorkCmpConst(0x8022, 32);
	if (1) goto label22;
	goto label23;

label22: ;

	Movement m[] = { //10
		WalkLeft, 2,
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label21;

label23: ;
	WorkCmpConst(0x8022, 33);
	if (1) goto label24;
	goto label21;

label24: ;

	Movement m[] = { //10
		WalkLeft, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label21;

label21: ;

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 17, 10, 0, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8022, 31);
	if (1) goto label25;
	goto label26;

label25: ;

	Movement m[] = { //255
		WalkDown, 1,
	};


	Movement m[] = { //10
		WalkRight, 3,
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label27;

label26: ;
	WorkCmpConst(0x8022, 32);
	if (1) goto label28;
	goto label29;

label28: ;

	Movement m[] = { //255
		WalkDown, 1,
	};


	Movement m[] = { //10
		WalkRight, 2,
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label27;

label29: ;
	WorkCmpConst(0x8022, 33);
	if (1) goto label30;
	goto label27;

label30: ;

	Movement m[] = { //255
		WalkDown, 1,
	};


	Movement m[] = { //10
		WalkRight, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label27;

label27: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	SEPlay(1734);
	CMD_18c(0x8020, 168);
	VMReturn();
}

void Routine1()
{
	Routine3();
	SEPlay(1735);
	CMD_18d(0x8020);
	SEWait();
	EVCameraReturn(15);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	VMReturn();
}

void Routine2()
{
	MsgActor(1024, 0, 0, 0);
	MsgActorClose();
	CallTrainerBattle(22, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label31;
	CallTrainerBattleEnd();
	goto label32;

label31: ;
	CallTrainerLose();

label32: ;
	MsgActor(1024, 1, 0, 0);
	MsgActorClose();
	TrainerCardSaveGymVictoryParty(2);
	FlagSet(0x174);
	WordSetPlayerName(0);
	MEPlay(1306);
	WorkSetConst(0x8021, 0);
	TrainerCardGetSex(0x8021);
	StackPush(0x8021);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label33;
	PlayFieldEffect(5);
	goto label34;

label33: ;
	PlayFieldEffect(44);

label34: ;
	MEWait();
	WorkSetConst(0x8021, 0);
	MsgSystem(2, 0);
	MsgSystemClose();
	MsgActor(1024, 3, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x409C, 1);
	WorkSetConst(0x40AC, 1);
	WorkSetConst(0x40AD, 2);
	WorkSetConst(0x40AF, 4);
	FlagSet(2419);
	VMReturn();
}

void Routine3()
{
	EVCameraInit();
	EVCameraUnbind();
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 30);
	EVCameraMoveTo(8408, 1792, 0xED000, 0x1E8000, 0, 0x118000, 15);
	VMJump(416);
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 30);
	EVCameraMoveTo(8408, 0xFD80, 0xED000, 0x228000, 0, 0x118000, 15);
	VMJump(367);
	StackPush(0x8020);
	StackPushConst(2);
	StackCmp(1);
	VMJumpIf(255, 30);
	EVCameraMoveTo(8408, 1792, 0xED000, 0x188000, 0, 0x158000, 15);
	VMJump(318);
	StackPush(0x8020);
	StackPushConst(3);
	StackCmp(1);
	VMJumpIf(255, 30);
	EVCameraMoveTo(8408, 0xFD80, 0xED000, 0x1C8000, 0, 0x158000, 15);
	VMJump(269);
	StackPush(0x8020);
	StackPushConst(4);
	StackCmp(1);
	VMJumpIf(255, 30);
	EVCameraMoveTo(8408, 1792, 0xED000, 0x248000, 0, 0x158000, 15);
	VMJump(220);
	StackPush(0x8020);
	StackPushConst(5);
	StackCmp(1);
	VMJumpIf(255, 30);
	EVCameraMoveTo(8408, 0xFD80, 0xED000, 0x288000, 0, 0x158000, 15);
	VMJump(171);
	StackPush(0x8020);
	StackPushConst(6);
	StackCmp(1);
	VMJumpIf(255, 30);
	EVCameraMoveTo(8408, 0xFD80, 0xED000, 0x168000, 0, 0x198000, 15);
	VMJump(122);
	StackPush(0x8020);
	StackPushConst(7);
	StackCmp(1);
	VMJumpIf(255, 30);
	EVCameraMoveTo(8408, 0xFD80, 0xED000, 0x1C8000, 0, 0x1E8000, 15);
	VMJump(73);
	StackPush(0x8020);
	StackPushConst(8);
	StackCmp(1);
	VMJumpIf(255, 30);
	EVCameraMoveTo(8408, 1792, 0xED000, 0x248000, 0, 0x1D8000, 15);
	VMJump(24);
	EVCameraMoveTo(8408, 0xFD80, 0xED000, 0x288000, 0, 0x1D8000, 15);
	EVCameraWait();
	VMReturn();
}
