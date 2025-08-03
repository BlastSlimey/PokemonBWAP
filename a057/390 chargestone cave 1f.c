#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	FlagReset(584);
	ActorAdd(0);
	ActorAdd(1);
	WordSetPlayerName(0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8022, 0x8023);
	TrainerCardGetSex(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgInfo(7, 2);
	goto label1;

label0: ;
	MsgInfo(8, 2);

label1: ;
	MsgWinCloseAll();

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	WorkCmpConst(0x8022, 15);
	if (1) goto label2;
	goto label3;

label2: ;

	Movement m[] = { //255
		WalkRight, 1,
		WalkDown, 1,
		Wait8, 7,
		TurnUp, 1,
	};

	goto label4;

label3: ;
	WorkCmpConst(0x8022, 16);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //255
		WalkDown, 1,
		Wait8, 8,
		TurnUp, 1,
	};

	goto label4;

label6: ;
	WorkCmpConst(0x8022, 17);
	if (1) goto label7;
	goto label4;

label7: ;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkDown, 1,
		Wait8, 7,
		TurnUp, 1,
	};

	goto label4;

label4: ;

	Movement m[] = { //0
		WalkRight, 7,
		WalkUp, 5,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 9, 0, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 10, 0, 3, 0);
	MsgActorClose();

	Movement m[] = { //255
		TurnDown, 1,
	};

	VMSleep(8);
	BGMPlay(1089);

	Movement m[] = { //1
		WalkRight, 8,
		WalkUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 1, 6, 0);
	MsgActorClose();

	Movement m[] = { //1
		TurnRight, 1,
	};

	ActorCmdWait();
	VMSleep(4);

	Movement m[] = { //1
		TurnLeft, 1,
	};

	ActorCmdWait();
	VMSleep(16);

	Movement m[] = { //1
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 12, 1, 6, 0);
	MsgActorEx(1024, 13, 1, 6, 0);
	MsgActorClose();

	Movement m[] = { //1
		WalkUp, 1,
	};

	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1A3);

	Movement m[] = { //1
		LockDirection, 1,
		WalkDown, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 14, 1, 6, 0);
	InputWaitLast();
	MsgWinCloseAll();
	BGMChangeMap();
	WorkSetConst(0x409B, 2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	PlayerGetGPos(0x8024, 0x8025);
	ActorSetGPos(1, 24, 1, 22, 1);
	ActorSetGPos(0, 24, 1, 22, 1);

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //1
		WalkRight, 4,
		WalkDown, 3,
		WalkRight, 3,
	};

	StackPush(0x8025);
	StackPushConst(24);
	StackCmp(1);
	if (255) goto label8;

	Movement m[] = { //0
		Wait8, 1,
		WalkRight, 4,
		WalkDown, 2,
		WalkRight, 2,
	};

	goto label9;

label8: ;

	Movement m[] = { //0
		Wait8, 1,
		WalkRight, 4,
		WalkDown, 4,
		WalkRight, 2,
	};


label9: ;
	ActorCmdWait();
	StackPush(0x8025);
	StackPushConst(24);
	StackCmp(1);
	if (255) goto label10;
	MsgActorEx(1024, 17, 1, 4, 0);
	MsgActorClose();

	Movement m[] = { //1
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 1, 4, 0);
	MsgActorClose();

	Movement m[] = { //1
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 19, 1, 4, 0);
	MsgActorClose();
	MsgActorEx(1024, 20, 0, 3, 0);
	InputWaitLast();
	MsgActorClose();
	goto label11;

label10: ;
	MsgActorEx(1024, 17, 1, 3, 0);
	MsgActorClose();

	Movement m[] = { //1
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 1, 3, 0);
	MsgActorClose();

	Movement m[] = { //1
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 19, 1, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 20, 0, 4, 0);
	InputWaitLast();
	MsgActorClose();

label11: ;
	WorkSetConst(0x409B, 3);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	FlagReset(655);
	ActorAdd(2);
	ActorAdd(3);
	ActorAdd(5);
	PlayerGetGPos(0x8020, 0x8021);
	StackPush(0x8021);
	StackPushConst(41);
	StackCmp(1);
	if (255) goto label12;
	ActorSetGPos(2, 37, 0, 41, 3);
	ActorSetGPos(3, 38, 0, 42, 0);
	ActorSetGPos(5, 39, 0, 41, 2);
	goto label13;

label12: ;
	StackPush(0x8021);
	StackPushConst(42);
	StackCmp(1);
	if (255) goto label13;
	ActorSetGPos(2, 37, 0, 42, 3);
	ActorSetGPos(3, 38, 0, 41, 1);
	ActorSetGPos(5, 39, 0, 42, 2);

label13: ;

	Movement m[] = { //2
		0xB8, 1,
	};


	Movement m[] = { //3
		0xB8, 1,
	};


	Movement m[] = { //5
		0xB8, 1,
	};

	ActorCmdWait();
	PlayerGetExState(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label14;
	PlayerSetSpecialSequence(1);

label14: ;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 23, 5, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		FastWalkRight, 20,
	};


	Movement m[] = { //3
		FastWalkRight, 20,
	};


	Movement m[] = { //5
		FastWalkRight, 20,
	};


	Movement m[] = { //255
		FastWalkRight, 20,
	};

	ActorCmdWait();
	VMSleep(10);

	Movement m[] = { //5
		TurnLeft, 1,
	};

	ActorCmdWait();
	VMSleep(16);

	Movement m[] = { //5
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 24, 5, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //2
		0xB9, 1,
		Vanish, 1,
	};


	Movement m[] = { //3
		0xB9, 1,
		Vanish, 1,
	};


	Movement m[] = { //5
		0xB9, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	ActorDelete(2);
	ActorDelete(3);
	ActorDelete(5);
	WorkSetConst(0x409B, 4);
	FlagSet(655);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	PlayerGetGPos(0x8020, 0x8021);
	ActorSetGPos(1, 56, 0, 13, 3);
	ActorSetGPos(0, 58, 0, 14, 3);
	StackPush(0x8021);
	StackPushConst(12);
	StackCmp(1);
	if (255) goto label15;

	Movement m[] = { //255
		WalkRight, 1,
		WalkDown, 1,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label16;

label15: ;
	StackPush(0x8021);
	StackPushConst(13);
	StackCmp(1);
	if (255) goto label17;

	Movement m[] = { //255
		WalkRight, 1,
	};

	ActorCmdWait();
	goto label16;

label17: ;
	StackPush(0x8021);
	StackPushConst(14);
	StackCmp(1);
	if (255) goto label16;

	Movement m[] = { //255
		WalkRight, 1,
		WalkUp, 1,
		TurnRight, 1,
	};

	ActorCmdWait();

label16: ;
	BGMPlay(1092);
	MsgActorEx(1024, 25, 4, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label18;
	MsgActorEx(1024, 26, 4, 0, 0);
	MsgWinCloseAll();
	FlagSet(340);
	goto label19;

label18: ;
	MsgActorEx(1024, 27, 4, 0, 0);
	MsgWinCloseAll();
	FlagReset(340);

label19: ;
	Routine0();
	MsgActorVersioned(1024, 29, 30, 4, 0, 0);
	MsgActorClose();
	VMSleep(20);
	WordSetPlayerName(0);
	MsgInfo(31, 2);
	MsgWinCloseAll();

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		WalkRight, 7,
	};

	ActorCmdWait();
	MsgActorEx(1024, 32, 0, 0, 0);
	MsgActorClose();

	Movement m[] = { //1
		WalkRight, 9,
	};

	ActorCmdWait();
	MsgActorEx(1024, 33, 1, 3, 0);
	MsgActorClose();

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 34, 4, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 35, 1, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 36, 4, 0, 0);
	MsgActorClose();

	Movement m[] = { //4
		WalkUp, 3,
		WalkRight, 6,
		WalkUp, 5,
	};

	VMSleep(48);

	Movement m[] = { //255
		TurnUp, 1,
	};

	VMSleep(4);

	Movement m[] = { //1
		TurnUp, 1,
	};

	VMSleep(2);

	Movement m[] = { //0
		TurnUp, 1,
	};

	ActorCmdWait();
	SEPlay(1369);
	ActorDelete(4);
	SEWait();
	BGMChangeMap();
	MsgActorEx(1024, 37, 1, 3, 0);
	MsgActorClose();

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //1
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 38, 1, 3, 0);
	MsgActorClose();

	Movement m[] = { //1
		WalkLeft, 6,
	};

	VMSleep(12);

	Movement m[] = { //0
		TurnLeft, 1,
	};

	ActorCmdWait();
	VMSleep(20);

	Movement m[] = { //0
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 39, 0, 0, 0);
	MsgActorClose();

	Movement m[] = { //0
		WalkLeft, 6,
	};

	ActorCmdWait();
	ActorDelete(0);
	ActorDelete(1);
	WorkSetConst(0x409B, 5);
	FlagSet(584);
	FlagSet(585);
	FlagSet(738);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	StackPush(0x409B);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label20;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 16, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label21;

label20: ;
	StackPush(0x409B);
	StackPushConst(3);
	StackCmp(4);
	if (255) goto label21;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 22, 0, 0);
	InputWaitLast();
	MsgActorClose();

label21: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	StackPush(0x409B);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label22;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 15, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label23;

label22: ;
	StackPush(0x409B);
	StackPushConst(3);
	StackCmp(4);
	if (255) goto label23;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 21, 0, 0);
	InputWaitLast();
	MsgActorClose();

label23: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	FlagReset(655);
	ActorAdd(2);
	ActorAdd(3);
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	StackPush(0x8020);
	StackPushConst(6);
	StackCmp(1);
	if (255) goto label24;
	ActorSetGPos(2, 6, 0, 53, 1);
	ActorSetGPos(3, 6, 0, 55, 0);
	goto label25;

label24: ;
	StackPush(0x8020);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label26;
	ActorSetGPos(2, 7, 0, 53, 1);
	ActorSetGPos(3, 7, 0, 55, 0);
	goto label25;

label26: ;
	StackPush(0x8020);
	StackPushConst(8);
	StackCmp(1);
	if (255) goto label25;
	ActorSetGPos(2, 8, 0, 53, 1);
	ActorSetGPos(3, 8, 0, 55, 0);

label25: ;

	Movement m[] = { //2
		0xB8, 1,
	};


	Movement m[] = { //3
		0xB8, 1,
	};

	ActorCmdWait();
	PlayerGetExState(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label27;
	PlayerSetSpecialSequence(1);

label27: ;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 0, 2, 3, 0);
	MsgWinCloseAll();
	StackPush(0x8020);
	StackPushConst(6);
	StackCmp(1);
	if (255) goto label28;

	Movement m[] = { //255
		FastWalkUp, 2,
		FastWalkRight, 3,
	};


	Movement m[] = { //2
		FastWalkUp, 1,
		FastWalkRight, 4,
		FastTurnUp, 1,
	};


	Movement m[] = { //3
		FastWalkUp, 3,
		FastWalkRight, 2,
		FastTurnUp, 1,
	};

	ActorCmdWait();
	goto label29;

label28: ;
	StackPush(0x8020);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label30;

	Movement m[] = { //255
		FastWalkUp, 2,
		FastWalkRight, 2,
	};


	Movement m[] = { //2
		FastWalkUp, 1,
		FastWalkRight, 3,
		FastTurnUp, 1,
	};


	Movement m[] = { //3
		FastWalkUp, 3,
		FastWalkRight, 1,
		FastTurnUp, 1,
	};

	ActorCmdWait();
	goto label29;

label30: ;
	StackPush(0x8020);
	StackPushConst(8);
	StackCmp(1);
	if (255) goto label29;

	Movement m[] = { //255
		FastWalkUp, 2,
		FastWalkRight, 1,
	};


	Movement m[] = { //2
		FastWalkUp, 1,
		FastWalkRight, 2,
		FastTurnUp, 1,
	};


	Movement m[] = { //3
		FastWalkUp, 3,
		FastTurnUp, 1,
	};

	ActorCmdWait();

label29: ;

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	VMSleep(4);

	Movement m[] = { //255
		TurnUp, 1,
	};

	VMSleep(20);
	MsgActorEx(1024, 1, 3, 3, 0);
	ActorCmdWait();
	MsgWinCloseAll();

	Movement m[] = { //2
		0xB9, 1,
		Vanish, 1,
	};


	Movement m[] = { //3
		0xB9, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	ActorDelete(2);
	ActorDelete(3);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9694, 0, 0xED02B, 0x98000, 0, 0x328000, 24);
	EVCameraWait();
	BGMPlay(1092);

	Movement m[] = { //4
		TurnDown, 1,
		0x64, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 4, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //4
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 4, 5, 0);

	Movement m[] = { //4
		TurnDown, 1,
	};

	ActorCmdWait();
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label31;
	MsgActorEx(1024, 4, 4, 5, 0);
	goto label32;

label31: ;
	MsgActorEx(1024, 5, 4, 5, 0);

label32: ;
	MsgActorEx(1024, 6, 4, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //4
		WalkUp, 5,
		WalkRight, 6,
		WalkUp, 5,
	};

	ActorCmdWait();
	BGMChangeMap();
	EVCameraReturn(24);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	WorkSetConst(0x409B, 1);
	ActorSetGPos(4, 69, 1, 13, 2);
	FlagSet(655);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	StackPush(0x409B);
	StackPushConst(0);
	StackCmp(2);
	StackPush(0x409B);
	StackPushConst(5);
	StackCmp(0);
	StackCmp(7);
	if (255) goto label33;
	ActorSetGPos(4, 69, 1, 13, 2);
	StackPush(0x409B);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label34;
	ActorSetGPos(1, 16, 0, 43, 2);
	ActorSetGPos(0, 15, 0, 40, 2);
	goto label33;

label34: ;
	StackPush(0x409B);
	StackPushConst(3);
	StackCmp(1);
	StackPush(0x409B);
	StackPushConst(4);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label33;
	ActorSetGPos(1, 31, 0, 25, 2);
	ActorSetGPos(0, 30, 0, 26, 2);

label33: ;
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 40, 2, 0);
	InputWaitLast();
	YesNoWin(0x8010);
	if (0x8010 == 0)
	{
		MsgActorClose();
		StackPush(0x8000);
		StackPush(0x8001);
		WorkSet(0x8000, 0x0053);
		WorkSet(0x8001, 1);
		RTCallGlobal(2805);
		WorkSet(0x8000, 0x00E9);
		WorkSet(0x8001, 1);
		RTCallGlobal(2805);
		StackPop(0x8001);
		StackPop(0x8000);
	}
	if (0x400A < 24)
	{
		WorkSetConst(0x400A, 24);
	}
	WorkSetConst(0x8010, 1);
	WorkAdd(0x400A, 0x8010);
	WordSetNumber(0, 0x400A, 2);
	MsgActor(1024, 41, 2, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	CallTrainerBattle(218, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label35;
	CallTrainerBattleEnd();
	goto label36;

label35: ;
	CallTrainerLose();

label36: ;
	VMReturn();
}
