#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x4083);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	WordSetPokeSpecies(0, 495);
	WordSetPokeSpecies(1, 515);
	goto label2;

label1: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	WordSetPokeSpecies(0, 498);
	WordSetPokeSpecies(1, 511);
	goto label2;

label3: ;
	WordSetPokeSpecies(0, 501);
	WordSetPokeSpecies(1, 513);

label2: ;
	MsgActorEx(1024, 0, 0, 0, 0);
	WorkSetConst(0x4083, 1);
	Routine0();
	goto label4;

label0: ;
	StackPush(0x4083);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label5;
	Routine0();
	goto label4;

label5: ;
	MsgActorEx(1024, 9, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label4: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	FlagReset(532);
	ActorAdd(1);
	WordSetPlayerName(0);
	BGMPlay(1088);

	Movement m[] = { //1
		WalkRight, 7,
	};

	VMSleep(32);

	Movement m[] = { //255
		WalkDown, 1,
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 10, 1, 0, 0);
	MsgActorClose();

	Movement m[] = { //1
		WalkUp, 1,
		WalkRight, 1,
		WalkUp, 4,
		SlowTurnRight, 0,
		SlowTurnLeft, 0,
		SlowTurnRight, 0,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnUp, 0,
	};

	ActorCmdWait();
	BGMChangeMap();
	WorkSetConst(0x4094, 2);
	FlagReset(533);
	ActorAdd(2);
	ActorAdd(11);
	ActorAdd(3);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	StackPush(0x4094);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label6;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label7;

label6: ;
	StackPush(0x4094);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label8;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 12, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label7;

label8: ;
	StackPush(0x4094);
	StackPushConst(4);
	StackCmp(1);
	StackPush(0x4094);
	StackPushConst(5);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label9;
	WordSetPlayerName(0);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 50, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label7;

label9: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgActorClose();

label7: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	PlayerGetGPos(0x8024, 0x8025);
	PVPlay(517, 0);
	PVWait();

	Movement m[] = { //1
		LookUp, 8,
		Exclaimation, 1,
		WalkRight, 1,
	};

	ActorCmdWait();
	WorkCmpConst(0x8025, 22);
	if (1) goto label10;
	goto label11;

label10: ;

	Movement m[] = { //255
		TurnLeft, 0,
	};

	ActorCmdWait();
	goto label12;

label11: ;
	WorkCmpConst(0x8025, 23);
	if (1) goto label13;
	goto label14;

label13: ;

	Movement m[] = { //1
		WalkDown, 1,
		TurnRight, 0,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 0,
	};

	ActorCmdWait();
	goto label12;

label14: ;

	Movement m[] = { //255
		TurnLeft, 0,
	};

	ActorCmdWait();

label12: ;
	MsgActorEx(1024, 12, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x4094, 3);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	PlayerGetGPos(0x8026, 0x8027);
	ActorSetGPos(1, 27, 0, 18, 0);
	WorkCmpConst(0x8026, 26);
	if (1) goto label15;
	goto label16;

label15: ;

	Movement m[] = { //1
		WalkUp, 3,
		WalkLeft, 1,
		WalkUp, 1,
	};


	Movement m[] = { //255
		WalkRight, 1,
		LookUp, 1,
	};

	ActorCmdWait();
	goto label17;

label16: ;
	WorkCmpConst(0x8026, 27);
	if (1) goto label18;
	goto label19;

label18: ;

	Movement m[] = { //1
		WalkUp, 3,
		WalkLeft, 1,
		WalkUp, 1,
	};


	Movement m[] = { //255
		LookUp, 1,
	};

	ActorCmdWait();
	goto label17;

label19: ;
	WorkCmpConst(0x8026, 28);
	if (1) goto label20;
	goto label21;

label20: ;

	Movement m[] = { //1
		WalkUp, 3,
		WalkLeft, 1,
		WalkUp, 1,
	};


	Movement m[] = { //255
		WalkLeft, 1,
		LookUp, 1,
	};

	ActorCmdWait();
	goto label17;

label21: ;
	WorkCmpConst(0x8026, 29);
	if (1) goto label22;
	goto label23;

label22: ;

	Movement m[] = { //1
		WalkUp, 3,
		WalkLeft, 1,
		WalkUp, 1,
	};


	Movement m[] = { //255
		WalkLeft, 2,
		LookUp, 1,
	};

	ActorCmdWait();
	goto label17;

label23: ;

	Movement m[] = { //1
		WalkUp, 3,
		WalkLeft, 1,
		WalkUp, 1,
	};


	Movement m[] = { //255
		LookUp, 1,
	};

	ActorCmdWait();

label17: ;
	PVPlay(517, 0);
	MsgActorEx(1024, 13, 2, 5, 0);
	PVWait();
	MsgWaitAdvance();
	MsgActorClose();

	Movement m[] = { //2
		WalkUp, 4,
	};

	ActorCmdWait();
	MsgActorEx(1024, 14, 1, 4, 0);
	MsgActorClose();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x1B8000, 0, 0x88000, 48);

	Movement m[] = { //1
		WalkUp, 4,
	};


	Movement m[] = { //255
		WalkUp, 4,
	};

	ActorCmdWait();
	EVCameraWait();

	Movement m[] = { //3
		WalkRight, 3,
		WalkDown, 1,
	};


	Movement m[] = { //11
		WalkRight, 3,
		WalkDown, 1,
	};

	ActorCmdWait();
	BGMPlay(1091);
	MsgActorEx(1024, 15, 3, 3, 0);
	MsgActorClose();

	Movement m[] = { //3
		WalkRight, 3,
		WalkDown, 1,
		TurnLeft, 0,
	};


	Movement m[] = { //11
		WalkRight, 2,
		WalkDown, 1,
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 16, 11, 3, 0);
	MsgActorClose();

	Movement m[] = { //11
		TurnRight, 1,
	};

	ActorCmdWait();
	PVPlay(517, 0);
	MsgActorEx(1024, 17, 2, 5, 0);
	PVWait();
	MsgWaitAdvance();
	MsgActorClose();

	Movement m[] = { //2
		LookRight, 24,
		LookLeft, 24,
		LookRight, 24,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 1, 4, 0);
	MsgActorClose();

	Movement m[] = { //3
		TurnDown, 1,
	};


	Movement m[] = { //11
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 19, 11, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 20, 3, 5, 0);
	MsgActorClose();

	Movement m[] = { //11
		LookRight, 1,
		LockDirection, 1,
		SlowWalkLeft, 1,
		UnlockDirection, 1,
		FastWalkRight, 1,
		TurnRight, 1,
	};

	VMSleep(22);
	SEPlay(1653);
	ActorCmdWait();
	SEWait();
	PVPlay(517, 0);
	MsgActorEx(1024, 21, 2, 5, 0);
	PVWait();
	MsgWaitAdvance();
	MsgActorClose();
	MsgActorEx(1024, 22, 11, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 23, 1, 4, 0);
	MsgActorClose();

	Movement m[] = { //11
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 24, 3, 5, 0);
	MsgActorClose();
	MsgActorEx(1024, 25, 11, 3, 0);
	MsgActorClose();

	Movement m[] = { //11
		WalkDown, 1,
		WalkRight, 1,
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 26, 1, 4, 0);
	MsgActorClose();
	CallTrainerBattle(293, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label24;
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x1B8000, 0, 0x88000, 1);
	CallTrainerBattleEnd();
	goto label25;

label24: ;
	CallTrainerLose();

label25: ;
	MsgActorEx(1024, 27, 3, 5, 0);
	MsgActorClose();

	Movement m[] = { //3
		WalkDown, 1,
		WalkLeft, 1,
		TurnDown, 0,
	};


	Movement m[] = { //11
		LookRight, 1,
		LockDirection, 1,
		WalkLeft, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	CallTrainerBattle(308, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label26;
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x1B8000, 0, 0x88000, 1);
	CallTrainerBattleEnd();
	goto label27;

label26: ;
	CallTrainerLose();

label27: ;

	Movement m[] = { //11
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 28, 11, 3, 0);
	MsgActorClose();

	Movement m[] = { //11
		WalkUp, 1,
		TurnRight, 0,
	};

	ActorCmdWait();
	VMSleep(12);

	Movement m[] = { //11
		LookRight, 1,
		LockDirection, 1,
		SlowWalkLeft, 1,
		UnlockDirection, 1,
		FastWalkRight, 1,
		TurnRight, 1,
	};

	VMSleep(22);
	SEPlay(1653);
	ActorCmdWait();
	SEWait();
	MsgActorEx(1024, 29, 11, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 30, 1, 4, 0);
	MsgActorClose();
	FadeEx(12, 0, 16, 2);
	FadeExWait();
	FadeEx(12, 16, 0, 2);
	FadeExWait();
	BGMPlay(1093);
	FlagReset(757);
	ActorAdd(17);
	VMSleep(16);

	Movement m[] = { //3
		TurnLeft, 0,
		Exclaimation, 1,
	};


	Movement m[] = { //11
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 31, 17, 3, 0);
	MsgActorClose();
	ActorAdd(18);
	VMSleep(16);

	Movement m[] = { //3
		TurnRight, 0,
		QuestionMark, 1,
	};


	Movement m[] = { //11
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 32, 18, 5, 0);
	MsgActorClose();
	ActorDelete(17);
	ActorDelete(18);
	ActorAdd(19);
	VMSleep(16);

	Movement m[] = { //3
		TurnUp, 0,
	};


	Movement m[] = { //11
		TurnUp, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 33, 19, 3, 0);
	MsgActorClose();

	Movement m[] = { //3
		TurnLeft, 0,
	};


	Movement m[] = { //11
		WalkDown, 1,
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 34, 3, 5, 0);
	MsgActorClose();
	MsgActorEx(1024, 35, 11, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 36, 3, 5, 0);
	MsgActorClose();

	Movement m[] = { //3
		FastWalkRight, 1,
		FastWalkDown, 8,
	};


	Movement m[] = { //11
		FastWalkRight, 2,
		FastWalkDown, 8,
	};

	ActorCmdWait();
	VMSleep(16);
	FadeEx(12, 0, 16, 2);
	FadeExWait();
	BGMChangeMap();
	ActorDelete(19);
	ActorDelete(3);
	ActorDelete(11);
	FadeEx(12, 16, 0, 2);
	FadeExWait();
	ActorAdd(20);

	Movement m[] = { //20
		SlowWalkRight, 2,
		SlowWalkDown, 2,
		SlowWalkRight, 2,
	};

	ActorCmdWait();
	PVPlay(518, 0);
	MsgActorEx(1024, 37, 20, 3, 0);
	PVWait();
	MsgWaitAdvance();
	MsgActorClose();

	Movement m[] = { //1
		TurnRight, 0,
	};


	Movement m[] = { //255
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 38, 1, 1, 0);
	MsgActorClose();

	Movement m[] = { //1
		TurnUp, 0,
	};


	Movement m[] = { //255
		TurnUp, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 39, 1, 1, 0);
	MsgActorClose();
	MsgInfo(40, 2);
	MsgWinCloseAll();

	Movement m[] = { //1
		TurnDown, 1,
	};


	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	ActorNew(27, 17, 0, 251, 74, 0);

	Movement m[] = { //251
		WalkUp, 5,
	};

	ActorCmdWait();
	MsgActorEx(1024, 41, 251, 5, 0);
	MsgActorClose();

	Movement m[] = { //1
		TurnUp, 0,
	};


	Movement m[] = { //255
		TurnUp, 0,
	};

	ActorCmdWait();
	PVPlay(518, 0);
	MsgActorEx(1024, 42, 20, 3, 0);
	PVWait();
	MsgWaitAdvance();
	MsgActorClose();
	PVPlay(517, 0);
	MsgActorEx(1024, 43, 2, 5, 0);
	PVWait();
	MsgWaitAdvance();
	MsgActorClose();

	Movement m[] = { //2
		WalkLeft, 1,
	};


	Movement m[] = { //20
		WalkLeft, 1,
	};

	ActorCmdWait();
	FlagReset(534);
	ActorAdd(12);

	Movement m[] = { //2
		WalkUp, 2,
		WalkLeft, 4,
	};


	Movement m[] = { //20
		WalkUp, 2,
		WalkLeft, 4,
	};

	ActorCmdWait();
	ActorDelete(2);
	ActorDelete(20);
	MsgActorEx(1024, 44, 251, 5, 0);
	MsgActorClose();

	Movement m[] = { //1
		TurnDown, 1,
	};


	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 45, 1, 1, 0);
	MsgActorClose();
	MsgActorEx(1024, 46, 251, 5, 0);
	MsgActorClose();

	Movement m[] = { //251
		WalkRight, 1,
		WalkUp, 4,
		TurnLeft, 0,
	};

	ActorCmdWait();

	Movement m[] = { //1
		TurnUp, 0,
	};


	Movement m[] = { //255
		TurnUp, 0,
	};

	ActorCmdWait();

	Movement m[] = { //251
		Exclaimation, 1,
		HopLeft, 2,
	};

	ActorCmdWait();
	MsgActorEx(1024, 47, 251, 1, 0);
	MsgActorClose();
	ActorDelete(12);

	Movement m[] = { //251
		WalkLeft, 1,
		WalkDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 48, 251, 1, 0);
	MsgActorClose();

	Movement m[] = { //251
		FastWalkRight, 1,
		FastWalkDown, 9,
	};

	ActorCmdWait();

	Movement m[] = { //1
		TurnRight, 0,
	};


	Movement m[] = { //255
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 49, 1, 1, 0);
	MsgActorClose();
	EVCameraMoveToDefault(40);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	ActorDelete(251);
	WorkSetConst(0x4094, 4);
	FlagSet(533);
	FlagSet(534);
	FlagSet(757);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	StackPush(0x4094);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label28;
	ActorSetGPos(1, 23, 0, 22, 1);
	goto label29;

label28: ;
	StackPush(0x4094);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label30;
	ActorSetGPos(1, 24, 0, 22, 3);
	goto label29;

label30: ;
	StackPush(0x4094);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label31;
	ActorSetGPos(1, 27, 0, 12, 1);
	goto label29;

label31: ;
	StackPush(0x4094);
	StackPushConst(5);
	StackCmp(1);
	StackPushFlag(532);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label29;
	ActorSetGPos(1, 27, 0, 12, 1);
	goto label29;

label29: ;
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();

	Movement m[] = { //21
		FastWalkLeft, 4,
	};

	VMSleep(11);

	Movement m[] = { //255
		LookRight, 1,
		LockDirection, 1,
		FastWalkLeft, 1,
		UnlockDirection, 1,
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 51, 21, 0, 0);
	MsgActorEx(1024, 52, 21, 0, 0);
	MsgActorEx(1024, 53, 21, 0, 0);
	MsgActorEx(1024, 54, 21, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x19A);
	MsgActorEx(1024, 55, 21, 0, 0);
	MsgActorClose();
	BGMPlay(1100);
	SEPlay(1369);
	ActorNew(52, 48, 3, 251, 106, 0);
	SEWait();

	Movement m[] = { //251
		FastWalkRight, 1,
		FastWalkDown, 2,
		FastWalkLeft, 2,
		FastWalkDown, 2,
	};

	VMSleep(20);

	Movement m[] = { //21
		TurnUp, 1,
	};


	Movement m[] = { //255
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 56, 251, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 57, 21, 0, 0);
	MsgActorClose();
	WorkAdd(0x40CC, 1);

	Movement m[] = { //251
		FastWalkLeft, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	StackPush(0x40CC);
	StackPushConst(6);
	StackCmp(1);
	if (255) goto label32;
	WordSetPlayerName(0);
	MsgActorEx(1024, 59, 251, 0, 0);
	MsgActorClose();
	goto label33;

label32: ;
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8028, 6);
	WorkSub(0x8028, 0x40CC);
	WordSetNumber(0, 0x8028, 1);
	MsgActorEx(1024, 58, 251, 0, 0);
	MsgActorClose();

label33: ;
	BGMChangeMap();
	FadeEx(3, 0, 16, 4);
	FadeExWait();
	VMSleep(16);
	ActorDelete(251);
	ActorDelete(21);
	FadeEx(3, 16, 0, 4);
	FadeExWait();
	FlagSet(707);
	WorkSetConst(0x40E2, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	WorkSetConst(0x8020, 0);
	ItemGetCount(476, 0x8020);
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(4);
	if (255) goto label34;
	ActorPauseAll();
	SEPlay(1351);
	FlagSet(0x17B);
	WorkSetConst(0x40EB, 1);
	ActorDelete(7);
	MsgActorEx(1024, 60, 0, 0, 0);
	MsgActorClose();
	ActorUnlockAll();
label34: ;
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	VMHalt();
}

void Routine0()
{
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label35;
	WordSetPokeSpecies(0, 495);
	WordSetPokeSpecies(1, 515);
	WordSetPokeTypeName(2, 9);
	goto label36;

label35: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label37;
	WordSetPokeSpecies(0, 498);
	WordSetPokeSpecies(1, 511);
	WordSetPokeTypeName(2, 10);
	goto label36;

label37: ;
	WordSetPokeSpecies(0, 501);
	WordSetPokeSpecies(1, 513);
	WordSetPokeTypeName(2, 11);

label36: ;
	MsgActorEx(1024, 1, 0, 0, 0);
	WorkSetConst(0x8020, 0);
	YesNoWin(0x8020);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label38;
	WorkSetConst(0x8021, 0);
	PokePartyGetCount(0x8021, 0);
	StackPush(0x8021);
	StackPushConst(6);
	StackCmp(1);
	if (255) goto label39;
	MsgActorEx(1024, 2, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label40;

label39: ;
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label41;
	MsgActorEx(1024, 5, 0, 0, 0);
	MsgActorClose();
	PokePartyAdd(0x8010, 515, 0, 10);
	goto label42;

label41: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label43;
	MsgActorEx(1024, 6, 0, 0, 0);
	MsgActorClose();
	PokePartyAdd(0x8010, 511, 0, 10);
	goto label42;

label43: ;
	MsgActorEx(1024, 4, 0, 0, 0);
	MsgActorClose();
	PokePartyAdd(0x8010, 513, 0, 10);

label42: ;
	WordSetPlayerName(0);
	MEPlay(1304);
	MsgSystem(7, 0);
	MEWait();
	MsgWaitAdvance();
	MsgSystemClose();
	MsgSystem(8, 0);
	WorkSetConst(0x8022, 0);
	YesNoWin(0x8022);
	MsgSystemClose();
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label44;
	WorkSetConst(0x8023, 0);
	CallPokeNameInput(0x8023, 0x8021, 1);
	goto label44;

label44: ;
	MsgActorEx(1024, 9, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x4083, 2);

label40: ;
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	goto label45;

label38: ;
	MsgActorEx(1024, 3, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label45: ;
	VMReturn();
}
