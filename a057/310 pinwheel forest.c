#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 37, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 38, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 39, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	WorkCmpConst(0x8020, 71);
	if (1) goto label0;
	goto label1;

label0: ;

	Movement m[] = { //3
		WalkLeft, 2,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label2;

label1: ;
	WorkCmpConst(0x8020, 72);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //3
		WalkLeft, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label2;

label4: ;
	WorkCmpConst(0x8020, 74);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //3
		WalkRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label2;

label6: ;
	WorkCmpConst(0x8020, 75);
	if (1) goto label7;
	goto label8;

label7: ;

	Movement m[] = { //3
		WalkRight, 2,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label2;

label8: ;
	WorkCmpConst(0x8020, 76);
	if (1) goto label9;
	goto label2;

label9: ;

	Movement m[] = { //3
		WalkRight, 3,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label2;

label2: ;
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	MsgActorEx(1024, 6, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		SlowTurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 7, 3, 0, 0);

	Movement m[] = { //3
		LookDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 8, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		SlowTurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 9, 3, 0, 0);

	Movement m[] = { //3
		LookDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 10, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		WalkUp, 8,
	};

	ActorCmdWait();
	ActorSetGPos(3, 74, 0, 27, 1);
	WorkSetConst(0x408D, 2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
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

void Sequence11()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8022, 0x8023);
	WorkCmpConst(0x8022, 71);
	if (1) goto label10;
	goto label11;

label10: ;

	Movement m[] = { //3
		Exclaimation, 1,
		WalkLeft, 3,
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	goto label12;

label11: ;
	WorkCmpConst(0x8022, 72);
	if (1) goto label13;
	goto label14;

label13: ;

	Movement m[] = { //3
		Exclaimation, 1,
		WalkLeft, 2,
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	goto label12;

label14: ;
	WorkCmpConst(0x8022, 73);
	if (1) goto label15;
	goto label16;

label15: ;

	Movement m[] = { //3
		Exclaimation, 1,
		WalkLeft, 1,
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	goto label12;

label16: ;
	WorkCmpConst(0x8022, 75);
	if (1) goto label17;
	goto label18;

label17: ;

	Movement m[] = { //3
		Exclaimation, 1,
		WalkRight, 1,
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	goto label12;

label18: ;
	WorkCmpConst(0x8022, 76);
	if (1) goto label19;
	goto label20;

label19: ;

	Movement m[] = { //3
		Exclaimation, 1,
		WalkRight, 2,
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	goto label12;

label20: ;
	WorkCmpConst(0x8022, 74);
	if (1) goto label21;
	goto label12;

label21: ;

	Movement m[] = { //3
		Exclaimation, 1,
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	goto label12;

label12: ;
	MsgActorEx(1024, 12, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		LookDown, 1,
		LockDirection, 1,
		SlowWalkDown, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	WorkCmpConst(0x8022, 71);
	if (1) goto label22;
	goto label23;

label22: ;

	Movement m[] = { //3
		WalkRight, 3,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label24;

label23: ;
	WorkCmpConst(0x8022, 72);
	if (1) goto label25;
	goto label26;

label25: ;

	Movement m[] = { //3
		WalkRight, 2,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label24;

label26: ;
	WorkCmpConst(0x8022, 73);
	if (1) goto label27;
	goto label28;

label27: ;

	Movement m[] = { //3
		WalkRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label24;

label28: ;
	WorkCmpConst(0x8022, 75);
	if (1) goto label29;
	goto label30;

label29: ;

	Movement m[] = { //3
		WalkLeft, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label24;

label30: ;
	WorkCmpConst(0x8022, 76);
	if (1) goto label31;
	goto label24;

label31: ;

	Movement m[] = { //3
		WalkLeft, 2,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label24;

label24: ;
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	PlayerGetGPos(0x8024, 0x8025);

	Movement m[] = { //24
		Exclaimation, 1,
	};

	ActorCmdWait();
	BGMPlayPush(1127);
	WorkCmpConst(0x8024, 59);
	if (1) goto label32;
	goto label33;

label32: ;

	Movement m[] = { //24
		WalkLeft, 1,
	};

	ActorCmdWait();
	goto label34;

label33: ;
	WorkCmpConst(0x8024, 61);
	if (1) goto label35;
	goto label36;

label35: ;

	Movement m[] = { //24
		WalkRight, 1,
	};

	ActorCmdWait();
	goto label34;

label36: ;
	WorkCmpConst(0x8024, 62);
	if (1) goto label37;
	goto label34;

label37: ;

	Movement m[] = { //24
		WalkRight, 2,
	};

	ActorCmdWait();
	goto label34;

label34: ;
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);

	Movement m[] = { //24
		LookUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 13, 24, 0, 0);
	MsgWinCloseAll();
	CallTrainerBattle(295, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label38;
	CallTrainerBattleEnd();
	goto label39;

label38: ;
	CallTrainerLose();

label39: ;
	MsgActorEx(1024, 14, 24, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x40AA, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	StackPush(0x408D);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label40;
	ActorSetGPos(3, 74, 0, 27, 1);

label40: ;
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(41, 2);
	InputWaitLast();
	MsgInfoClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 14, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
{
	ActorPauseAll();
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	PlayerGetGPos(0x8026, 0x8027);

	Movement m[] = { //25
		Exclaimation, 1,
	};

	ActorCmdWait();
	BGMPlayPush(1127);
	WorkCmpConst(0x8027, 69);
	if (1) goto label41;
	goto label42;

label41: ;

	Movement m[] = { //25
		WalkUp, 5,
	};

	ActorCmdWait();
	goto label43;

label42: ;
	WorkCmpConst(0x8027, 70);
	if (1) goto label44;
	goto label45;

label44: ;

	Movement m[] = { //25
		WalkUp, 4,
	};

	ActorCmdWait();
	goto label43;

label45: ;
	WorkCmpConst(0x8027, 71);
	if (1) goto label46;
	goto label47;

label46: ;

	Movement m[] = { //25
		WalkUp, 3,
	};

	ActorCmdWait();
	goto label43;

label47: ;
	WorkCmpConst(0x8027, 72);
	if (1) goto label48;
	goto label49;

label48: ;

	Movement m[] = { //25
		WalkUp, 2,
	};

	ActorCmdWait();
	goto label43;

label49: ;
	WorkCmpConst(0x8027, 73);
	if (1) goto label50;
	goto label51;

label50: ;

	Movement m[] = { //25
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label43;

label51: ;
	WorkCmpConst(0x8027, 75);
	if (1) goto label52;
	goto label53;

label52: ;

	Movement m[] = { //25
		WalkDown, 1,
	};

	ActorCmdWait();
	goto label43;

label53: ;
	WorkCmpConst(0x8027, 76);
	if (1) goto label54;
	goto label55;

label54: ;

	Movement m[] = { //25
		WalkDown, 2,
	};

	ActorCmdWait();
	goto label43;

label55: ;
	WorkCmpConst(0x8027, 77);
	if (1) goto label56;
	goto label57;

label56: ;

	Movement m[] = { //25
		WalkDown, 3,
	};

	ActorCmdWait();
	goto label43;

label57: ;
	WorkCmpConst(0x8027, 78);
	if (1) goto label58;
	goto label59;

label58: ;

	Movement m[] = { //25
		WalkDown, 4,
	};

	ActorCmdWait();
	goto label43;

label59: ;
	WorkCmpConst(0x8027, 79);
	if (1) goto label60;
	goto label43;

label60: ;

	Movement m[] = { //25
		WalkDown, 5,
	};

	ActorCmdWait();
	goto label43;

label43: ;
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8026, 0);

	Movement m[] = { //25
		LookRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 15, 25, 0, 0);
	MsgWinCloseAll();
	CallTrainerBattle(309, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label61;
	CallTrainerBattleEnd();
	goto label62;

label61: ;
	CallTrainerLose();

label62: ;
	MsgActorEx(1024, 16, 25, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x40AA, 2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence17()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 16, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence18()
{
	ActorPauseAll();

	Movement m[] = { //5
		Exclaimation, 1,
	};

	ActorCmdWait();
	BGMPlayPush(1127);
	MsgActorEx(1024, 17, 5, 5, 0);
	MsgWinCloseAll();
	CallTrainerBattle(296, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label63;
	CallTrainerBattleEnd();
	goto label64;

label63: ;
	CallTrainerLose();

label64: ;
	MsgActorEx(1024, 18, 5, 5, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x40AA, 3);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence19()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 18, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence20()
{
	ActorPauseAll();

	Movement m[] = { //255
		WalkUp, 2,
	};

	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x2B8000, 0, 0x1D8000, 20);
	EVCameraWait();

	Movement m[] = { //26
		Exclaimation, 1,
	};

	ActorCmdWait();
	BGMPlayPush(1127);
	MsgActorEx(1024, 19, 26, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //26
		FastWalkDown, 1,
	};

	ActorCmdWait();
	CallTrainerBattle(297, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label65;
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x2B8000, 0, 0x1D8000, 1);
	EVCameraWait();
	CallTrainerBattleEnd();
	goto label66;

label65: ;
	CallTrainerLose();

label66: ;
	FlagReset(551);
	FlagReset(636);
	MsgActorEx(1024, 20, 26, 0, 0);
	MsgWinCloseAll();
	WordSetPlayerName(0);
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x187);

	Movement m[] = { //26
		LookDown, 1,
		LockDirection, 1,
		SlowWalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 21, 26, 0, 0);
	MsgWinCloseAll();
	BGMPlay(1093);
	ActorAdd(27);

	Movement m[] = { //27
		WalkUp, 5,
		TurnUp, 1,
		WalkUp, 2,
		WalkLeft, 1,
		WalkUp, 1,
		TurnRight, 1,
	};


	Movement m[] = { //255
		Wait8, 5,
		LookLeft, 1,
		LockDirection, 1,
		WalkRight, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		Wait8, 1,
		WalkLeft, 1,
		LookUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 22, 27, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //26
		LookLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 23, 26, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //27
		LookRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 24, 27, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //27
		WalkRight, 1,
		LookDown, 1,
	};


	Movement m[] = { //26
		WalkRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 25, 27, 3, 0);
	MsgWinCloseAll();
	ActorSetGPos(3, 43, 0, 37, 0);

	Movement m[] = { //3
		WalkUp, 5,
		WalkRight, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 26, 3, 0, 0);
	MsgWinCloseAll();
	ActorAdd(4);

	Movement m[] = { //4
		FastWalkUp, 5,
		FastWalkLeft, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 27, 4, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 28, 27, 3, 0);
	MsgActorEx(1024, 29, 27, 3, 0);
	MsgWinCloseAll();
	FadeEx(3, 0, 16, 4);
	FadeExWait();

	Movement m[] = { //4
		FastWalkUp, 1,
	};


	Movement m[] = { //3
		FastWalkUp, 1,
	};

	ActorCmdWait();
	FlagReset(2416);
	ActorDelete(27);
	ActorDelete(24);
	ActorDelete(25);
	ActorDelete(5);
	ActorDelete(26);
	BGMChangeMap();
	VMSleep(30);
	FadeEx(3, 16, 0, 4);
	FadeExWait();
	BGMChangeMap();

	Movement m[] = { //4
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 30, 4, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 31, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		WalkLeft, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 32, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		WalkRight, 8,
		WalkDown, 4,
	};

	ActorCmdWait();

	Movement m[] = { //4
		WalkRight, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 33, 4, 0, 0);
	MsgWinCloseAll();
	WordSetPlayerName(0);
	WordSetItemName(1, 579);
	SEPlay(2018);
	MsgSystem(34, 0);
	MsgSystemClose();
	SEWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 35, 4, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x188);
	MsgActorEx(1024, 36, 4, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		Wait8, 2,
		LookRight, 1,
	};


	Movement m[] = { //4
		WalkRight, 8,
		WalkDown, 4,
	};

	ActorCmdWait();
	EVCameraReturn(20);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	FlagSet(552);
	FlagSet(551);
	FlagSet(550);
	FlagSet(549);
	FlagSet(636);
	ActorDelete(4);
	ActorDelete(3);
	WorkSetConst(0x408D, 3);
	WorkSetConst(0x40AA, 4);
	FlagReset(126);
	FlagReset(564);
	FlagReset(569);
	FlagReset(623);
	FlagSet(562);
	FlagSet(547);
	WorkSetConst(0x4092, 5);
	MapReplaceSetEvent(0, 0, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence21()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(42, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence22()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 40, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence23()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	ItemGetCount(579, 0x8020);
	if (0x8020 == 0)
	{
		WorkSetConst(0x8020, 0);
		WorkSetConst(0x8021, 0);
		WorkSetConst(0x8022, 0);
		PlayerGetGPos(0x8020, 0x8021);
		WorkSetConst(0x8022, 1);
		WorkSub(0x8021, 0x8022);
		ActorSetGPos(48, 0x8020, 0, 0x8021, 1);
		ActorCmdWait();
		MsgActorEx(1024, 45, 48, 0, 0);
		MsgActorClose();
		ActorSetGPos(48, 70, 0, 0, 1);
		Movement m[] = { //255
			WalkDown, 1,
		};
		ActorCmdWait();
		WorkSetConst(0x8020, 0);
		WorkSetConst(0x8021, 0);
		WorkSetConst(0x8022, 0);
	}
	else
	{
		WorkSetConst(0x8020, 0);
		WorkSetConst(0x8021, 0);
		WorkSetConst(0x8022, 0);
		PlayerGetGPos(0x8020, 0x8021);
		WorkSetConst(0x8022, 1);
		WorkSub(0x8021, 0x8022);
		ActorSetGPos(48, 0x8020, 0, 0x8021, 1);
		ActorCmdWait();
		MsgActorEx(1024, 46, 48, 0, 0);
		MsgActorClose();
		WorkSetConst(0x40EC, 1);
		ActorSetGPos(48, 70, 0, 0, 1);
		ActorCmdWait();
		WorkSetConst(0x8020, 0);
		WorkSetConst(0x8021, 0);
		WorkSetConst(0x8022, 0);
	}
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence24()
{
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence25()
{
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8020, 0);
	ItemGetCount(429, 0x8020);
	if (0x8020 == 0)
	{
		MsgActorEx(1024, 43, 23, 0, 0);
		MsgActorClose();
	}
	else
	{
		ActorSetEyeToEye();
		MsgActor(1024, 44, 0, 0);
		MsgActorClose();
		FadeEx(3, 0, 16, 3);
		FadeExWait();
		FlagSet(0x17C);
		ActorDelete(16);
		ActorDelete(17);
		ActorDelete(18);
		ActorDelete(19);
		ActorDelete(20);
		ActorDelete(21);
		ActorDelete(22);
		ActorDelete(23);
		FadeEx(3, 16, 0, 3);
		FadeExWait();
	}
	WorkSetConst(0x8020, 0);
	VMReturn();
}
