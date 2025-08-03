#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	SEPlay(1369);
	FlagReset(805);
	ActorAdd(3);
	SEWait();

	Movement m[] = { //3
		WalkUp, 2,
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		WalkUp, 2,
	};

	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x48000, 0, 0x88000, 50);
	EVCameraWait();
	MsgActorEx(1024, 0, 2, 3, 0);
	MsgActorClose();

	Movement m[] = { //3
		WalkUp, 4,
	};


	Movement m[] = { //255
		WalkUp, 4,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 3, 3, 0);
	MsgActorClose();

	Movement m[] = { //2
		Exclaimation, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 2, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 3, 5, 5, 0);
	MsgActorClose();

	Movement m[] = { //0
		WalkDown, 3,
	};


	Movement m[] = { //1
		WalkLeft, 1,
		WalkDown, 2,
	};


	Movement m[] = { //5
		WalkRight, 1,
		WalkDown, 1,
		WalkRight, 1,
		WalkDown, 3,
	};


	Movement m[] = { //6
		WalkLeft, 1,
		WalkDown, 3,
	};


	Movement m[] = { //7
		WalkRight, 1,
		WalkDown, 3,
	};


	Movement m[] = { //8
		WalkLeft, 2,
		WalkDown, 2,
	};


	Movement m[] = { //9
		TurnDown, 1,
	};


	Movement m[] = { //10
		WalkDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //3
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 3, 3, 0);
	MsgActorClose();

	Movement m[] = { //255
		TurnUp, 1,
	};


	Movement m[] = { //3
		TurnUp, 1,
	};

	ActorCmdWait();
	EVCameraMoveToDefault(30);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	WorkSetConst(0x408B, 3);
	FlagSet(545);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8022, 0);
	PlayerGetDir(0x8022);
	MsgActorEx(1024, 30, 2, 0, 0);
	MsgActorClose();
	Routine0();
	Routine1();
	MsgActorEx(1024, 31, 2, 0, 0);
	MsgActorClose();
	Routine0();
	Routine1();
	MsgActorEx(1024, 32, 2, 0, 0);
	MsgActorClose();
	Routine0();
	Routine1();
	MsgActorEx(1024, 33, 2, 0, 0);
	MsgActorClose();
	Routine0();
	Routine1();
	MsgActorEx(1024, 34, 2, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1A1);
	Routine0();
	Routine1();
	MsgActorEx(1024, 35, 2, 0, 0);
	MsgWinCloseAll();
	SEPlay(1369);
	SEWait();
	BGMPlay(1100);
	ActorNew(4, 17, 0, 251, 106, 0);
	WorkCmpConst(0x8022, 2);
	if (1) goto label0;
	goto label1;

label0: ;

	Movement m[] = { //251
		FastWalkUp, 8,
	};


	Movement m[] = { //2
		TurnDown, 1,
	};


	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label2;

label1: ;
	WorkCmpConst(0x8022, 3);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //251
		FastWalkUp, 8,
	};


	Movement m[] = { //2
		TurnDown, 1,
	};


	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label2;

label4: ;
	WorkCmpConst(0x8022, 0);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //251
		FastWalkUp, 7,
		WalkLeft, 1,
		FastWalkUp, 2,
		TurnRight, 1,
	};

	VMSleep(44);

	Movement m[] = { //2
		TurnLeft, 1,
	};


	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	goto label2;

label6: ;
	WorkCmpConst(0x8022, 1);
	if (1) goto label7;
	goto label2;

label7: ;

	Movement m[] = { //251
		FastWalkUp, 8,
	};


	Movement m[] = { //2
		TurnDown, 1,
	};


	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label2;

label2: ;
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label8;
	MsgActorEx(1024, 36, 251, 1, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 37, 2, 2, 0);
	MsgWinCloseAll();
	goto label9;

label8: ;
	MsgActorEx(1024, 36, 251, 2, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 37, 2, 1, 0);
	MsgWinCloseAll();

label9: ;
	WorkCmpConst(0x8022, 2);
	if (1) goto label10;
	goto label11;

label10: ;

	Movement m[] = { //251
		FastWalkRight, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label12;

label11: ;
	WorkCmpConst(0x8022, 3);
	if (1) goto label13;
	goto label14;

label13: ;

	Movement m[] = { //251
		FastWalkLeft, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label12;

label14: ;
	WorkCmpConst(0x8022, 0);
	if (1) goto label15;
	goto label16;

label15: ;

	Movement m[] = { //251
		FastWalkDown, 1,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label12;

label16: ;
	WorkCmpConst(0x8022, 1);
	if (1) goto label17;
	goto label12;

label17: ;

	Movement m[] = { //251
		FastWalkLeft, 1,
		FastWalkUp, 2,
		TurnRight, 1,
	};


	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	goto label12;

label12: ;
	WorkAdd(0x40CC, 1);
	StackPush(0x40CC);
	StackPushConst(6);
	StackCmp(1);
	if (255) goto label18;
	WordSetPlayerName(0);
	MsgActorEx(1024, 39, 251, 0, 0);
	MsgWinCloseAll();
	goto label19;

label18: ;
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8023, 6);
	WorkSub(0x8023, 0x40CC);
	WordSetNumber(0, 0x8023, 1);
	MsgActorEx(1024, 38, 251, 0, 0);
	MsgWinCloseAll();

label19: ;
	BGMChangeMap();
	FadeEx(3, 0, 16, 4);
	FadeExWait();
	VMSleep(16);
	ActorDelete(251);
	ActorDelete(2);
	FadeEx(3, 16, 0, 4);
	FadeExWait();
	FlagSet(716);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	SEPlay(1351);
	MsgActorEx(1024, 5, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 19, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 20, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	StackPushFlag(282);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label20;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 7, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label21;

label20: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 6, 5, 0, 0);
	MsgActorClose();
	CallTrainerBattle(81, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label22;
	WorkAdd(0x408B, 1);
	FlagSet(282);
	CallTrainerBattleEnd();
	goto label23;

label22: ;
	CallTrainerLose();

label23: ;
	StackPush(0x408B);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label24;
	MsgActorEx(1024, 8, 5, 0, 0);
	MsgActorClose();
	Routine2();
	goto label21;

label24: ;
	MsgActorEx(1024, 7, 5, 0, 0);
	InputWaitLast();
	MsgActorClose();

label21: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 21, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	StackPushFlag(283);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label25;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 16, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label26;

label25: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 15, 7, 0, 0);
	MsgActorClose();
	CallTrainerBattle(278, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label27;
	WorkAdd(0x408B, 1);
	FlagSet(283);
	CallTrainerBattleEnd();
	goto label28;

label27: ;
	CallTrainerLose();

label28: ;
	StackPush(0x408B);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label29;
	MsgActorEx(1024, 17, 7, 0, 0);
	MsgActorClose();
	Routine2();
	goto label26;

label29: ;
	MsgActorEx(1024, 16, 7, 0, 0);
	InputWaitLast();
	MsgActorClose();

label26: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 20, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	StackPushFlag(284);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label30;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 13, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label31;

label30: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 12, 9, 0, 0);
	MsgActorClose();
	CallTrainerBattle(276, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label32;
	WorkAdd(0x408B, 1);
	FlagSet(284);
	CallTrainerBattleEnd();
	goto label33;

label32: ;
	CallTrainerLose();

label33: ;
	StackPush(0x408B);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label34;
	MsgActorEx(1024, 14, 9, 0, 0);
	MsgActorClose();
	Routine2();
	goto label31;

label34: ;
	MsgActorEx(1024, 13, 9, 0, 0);
	InputWaitLast();
	MsgActorClose();

label31: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	StackPushFlag(285);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label35;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 10, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label36;

label35: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 9, 10, 0, 0);
	MsgActorClose();
	CallTrainerBattle(610, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label37;
	WorkAdd(0x408B, 1);
	FlagSet(285);
	CallTrainerBattleEnd();
	goto label38;

label37: ;
	CallTrainerLose();

label38: ;
	StackPush(0x408B);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label39;
	MsgActorEx(1024, 11, 10, 0, 0);
	MsgActorClose();
	Routine2();
	goto label36;

label39: ;
	MsgActorEx(1024, 10, 10, 0, 0);
	InputWaitLast();
	MsgActorClose();

label36: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	StackPush(0x408B);
	StackPushConst(3);
	StackCmp(4);
	StackPush(0x408B);
	StackPushConst(8);
	StackCmp(0);
	StackCmp(7);
	if (255) goto label40;
	ActorSetGPos(0, 3, 0, 10, 1);
	ActorSetGPos(1, 3, 0, 9, 1);
	ActorSetGPos(5, 7, 0, 11, 1);
	ActorSetGPos(6, 2, 0, 11, 1);
	ActorSetGPos(7, 6, 0, 11, 1);
	ActorSetGPos(8, 1, 0, 11, 1);
	ActorSetGPos(9, 4, 0, 9, 1);
	ActorSetGPos(10, 5, 0, 10, 1);
	ActorSetGPos(3, 3, 0, 11, 0);

label40: ;
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8024, 0);
	PlayerGetDir(0x8024);
	StackPush(0x8024);
	StackPushConst(2);
	StackCmp(1);
	StackPush(0x8024);
	StackPushConst(3);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label41;

	Movement m[] = { //2
		SlowWalkUp, 1,
		Wait8, 1,
		SlowWalkDown, 2,
		Wait8, 1,
		SlowWalkUp, 1,
	};

	ActorCmdWait();
	goto label42;

label41: ;

	Movement m[] = { //2
		SlowWalkLeft, 1,
		Wait8, 1,
		SlowWalkRight, 2,
		Wait8, 1,
		SlowWalkLeft, 1,
	};

	ActorCmdWait();

label42: ;
	WorkSetConst(0x8024, 0);
	VMReturn();
}

void Routine1()
{
	WorkSetConst(0x8025, 0);
	PlayerGetDir(0x8025);
	WorkCmpConst(0x8025, 2);
	if (1) goto label43;
	goto label44;

label43: ;

	Movement m[] = { //2
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label45;

label44: ;
	WorkCmpConst(0x8025, 3);
	if (1) goto label46;
	goto label47;

label46: ;

	Movement m[] = { //2
		TurnLeft, 1,
	};

	ActorCmdWait();
	goto label45;

label47: ;
	WorkCmpConst(0x8025, 0);
	if (1) goto label48;
	goto label49;

label48: ;

	Movement m[] = { //2
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label45;

label49: ;
	WorkCmpConst(0x8025, 1);
	if (1) goto label50;
	goto label45;

label50: ;

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label45;

label45: ;
	WorkSetConst(0x8025, 0);
	VMReturn();
}

void Routine2()
{
	WordSetPlayerName(0);
	SEPlay(1369);
	FlagReset(546);
	ActorAdd(4);
	ActorAdd(11);
	ActorAdd(12);
	ActorAdd(13);
	ActorAdd(14);
	SEWait();
	EVCameraInit();
	EVCameraUnbind();
	VMSleep(16);

	Movement m[] = { //14
		WalkUp, 4,
	};


	Movement m[] = { //4
		WalkUp, 3,
	};


	Movement m[] = { //11
		WalkUp, 3,
	};


	Movement m[] = { //12
		WalkUp, 3,
	};


	Movement m[] = { //13
		WalkUp, 3,
	};

	EVCameraMoveTo(9688, 0, 0xED000, 0x48000, 0, 0xB8000, 40);
	EVCameraWait();
	ActorCmdWait();

	Movement m[] = { //255
		TurnDown, 1,
	};


	Movement m[] = { //3
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 22, 14, 5, 0);
	MsgActorClose();

	Movement m[] = { //14
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 23, 14, 5, 0);
	MsgActorClose();
	MsgInfo(24, 2);
	MsgInfoClose();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	WorkCmpConst(0x8020, 4);
	if (1) goto label51;
	goto label52;

label51: ;

	Movement m[] = { //255
		WalkDown, 2,
		WalkRight, 3,
		TurnLeft, 1,
	};


	Movement m[] = { //3
		WalkDown, 1,
		WalkLeft, 2,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label53;

label52: ;
	WorkCmpConst(0x8020, 5);
	if (1) goto label54;
	goto label55;

label54: ;

	Movement m[] = { //255
		WalkDown, 1,
		WalkRight, 2,
		TurnLeft, 1,
	};


	Movement m[] = { //3
		WalkDown, 1,
		WalkLeft, 2,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label53;

label55: ;
	WorkCmpConst(0x8020, 6);
	if (1) goto label56;
	goto label57;

label56: ;

	Movement m[] = { //255
		WalkRight, 1,
		TurnLeft, 1,
	};


	Movement m[] = { //3
		WalkDown, 1,
		WalkLeft, 2,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label53;

label57: ;
	WorkCmpConst(0x8020, 7);
	if (1) goto label58;
	goto label59;

label58: ;

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //3
		WalkDown, 1,
		WalkLeft, 2,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label53;

label59: ;

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //3
		WalkDown, 1,
		WalkLeft, 2,
		TurnRight, 1,
	};

	ActorCmdWait();

label53: ;
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);

	Movement m[] = { //4
		WalkUp, 3,
		WalkLeft, 1,
		TurnUp, 1,
	};


	Movement m[] = { //11
		WalkUp, 4,
		WalkLeft, 1,
		TurnUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //12
		WalkUp, 1,
		WalkLeft, 1,
		WalkUp, 2,
	};


	Movement m[] = { //13
		WalkUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //12
		WalkRight, 1,
		WalkUp, 1,
	};


	Movement m[] = { //13
		WalkUp, 5,
	};

	ActorCmdWait();
	MsgMulti(25, 3, 9, 1);

	Movement m[] = { //11
		WalkDown, 7,
	};


	Movement m[] = { //0
		WalkDown, 8,
	};


	Movement m[] = { //1
		WalkDown, 9,
	};

	VMSleep(32);
	MsgWinCloseNo(1);
	ActorCmdWait();
	ActorDelete(11);
	ActorDelete(0);
	ActorDelete(1);
	SEPlay(1369);
	SEWait();
	MsgMulti(26, 10, 14, 2);

	Movement m[] = { //4
		WalkRight, 1,
		WalkDown, 7,
	};


	Movement m[] = { //6
		WalkDown, 1,
		WalkRight, 1,
		WalkDown, 7,
	};


	Movement m[] = { //8
		WalkRight, 1,
		WalkDown, 1,
		WalkRight, 1,
		WalkDown, 7,
	};

	VMSleep(32);
	MsgWinCloseNo(2);
	ActorCmdWait();
	ActorDelete(4);
	ActorDelete(6);
	ActorDelete(8);
	SEPlay(1369);
	SEWait();
	MsgMulti(27, 20, 10, 3);

	Movement m[] = { //12
		WalkLeft, 1,
	};


	Movement m[] = { //10
		WalkDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //12
		WalkDown, 7,
	};


	Movement m[] = { //10
		WalkLeft, 1,
		WalkDown, 7,
	};


	Movement m[] = { //7
		WalkLeft, 2,
		WalkDown, 7,
	};


	Movement m[] = { //5
		WalkLeft, 3,
		WalkDown, 7,
	};

	VMSleep(32);
	MsgWinCloseNo(3);
	ActorCmdWait();
	ActorDelete(12);
	ActorDelete(10);
	ActorDelete(7);
	ActorDelete(5);
	SEPlay(1369);
	SEWait();

	Movement m[] = { //13
		WalkDown, 8,
	};


	Movement m[] = { //9
		WalkDown, 9,
	};


	Movement m[] = { //2
		WalkDown, 10,
	};

	ActorCmdWait();
	ActorDelete(13);
	ActorDelete(9);
	ActorDelete(2);
	SEPlay(1369);
	SEWait();

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 2,
		TurnDown, 1,
	};


	Movement m[] = { //3
		WalkUp, 1,
		WalkRight, 3,
		TurnDown, 1,
	};


	Movement m[] = { //14
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 28, 14, 6, 0);
	MsgActorClose();

	Movement m[] = { //14
		WalkDown, 5,
	};

	ActorCmdWait();
	ActorDelete(14);
	SEPlay(1369);
	SEWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //3
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 29, 3, 3, 0);
	MsgActorClose();

	Movement m[] = { //3
		WalkDown, 7,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	ActorDelete(3);
	SEPlay(1369);
	SEWait();
	EVCameraMoveToDefault(16);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	WorkSetConst(0x408B, 8);
	FlagSet(626);
	FlagSet(546);
	FlagSet(716);
	FlagSet(805);
	FlagSet(559);
	WorkSetConst(0x408F, 2);
	FlagReset(557);
	FlagReset(555);
	FlagSet(560);
	VMReturn();
}
