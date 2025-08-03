#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 28, 0, 0);
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
	MsgActor(1024, 29, 0, 0);
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
	MsgActor(1024, 30, 0, 0);
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
	MsgActor(1024, 31, 0, 0);
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
	MsgActor(1024, 32, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(33, 1);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();

	Movement m[] = { //5
		TurnRight, 1,
		Wait16, 1,
		TurnLeft, 1,
		Wait16, 1,
		TurnRight, 1,
		Wait8, 1,
		TurnLeft, 1,
	};


	Movement m[] = { //255
		WalkDown, 5,
	};

	ActorCmdWait();

	Movement m[] = { //6
		WalkRight, 7,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 6, 0, 0);
	MsgActorClose();

	Movement m[] = { //5
		TurnLeft, 1,
	};

	VMSleep(16);

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 12, 5, 0, 0);
	MsgActorClose();

	Movement m[] = { //5
		TurnUp, 1,
	};

	VMSleep(16);

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 13, 5, 0, 0);
	MsgActorClose();

	Movement m[] = { //5
		TurnLeft, 1,
	};

	VMSleep(16);

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 14, 6, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 15, 5, 0, 0);
	MsgActorClose();

	Movement m[] = { //8
		WalkLeft, 7,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 16, 8, 5, 0);
	MsgActorClose();

	Movement m[] = { //7
		WalkLeft, 7,
	};

	ActorCmdWait();
	MsgActorEx(1024, 17, 7, 5, 0);
	MsgActorClose();

	Movement m[] = { //5
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //5
		TurnUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnDown, 1,
	};

	VMSleep(12);

	Movement m[] = { //7
		TurnDown, 1,
	};

	VMSleep(2);

	Movement m[] = { //8
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 5, 6, 0);
	MsgActorClose();

	Movement m[] = { //5
		WalkRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //5
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 19, 5, 6, 0);
	MsgActorClose();

	Movement m[] = { //5
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 20, 5, 6, 0);
	MsgActorClose();

	Movement m[] = { //5
		FastWalkRight, 7,
	};

	ActorCmdWait();
	MsgActorGendered(1024, 21, 22, 6, 4, 0);
	MsgActorClose();

	Movement m[] = { //6
		WalkLeft, 8,
	};

	VMSleep(16);

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //8
		TurnLeft, 1,
	};


	Movement m[] = { //7
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //8
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 23, 8, 5, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x18F);
	WorkSetConst(0x4092, 4);
	MsgActorEx(1024, 24, 8, 5, 0);
	MsgActorClose();

	Movement m[] = { //7
		TurnUp, 1,
	};

	ActorCmdWait();
	VMSleep(16);

	Movement m[] = { //7
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 25, 7, 5, 0);
	MsgActorClose();

	Movement m[] = { //7
		WalkLeft, 1,
		WalkUp, 5,
		Vanish, 1,
	};


	Movement m[] = { //255
		TurnUp, 1,
	};

	ActorCmdWait();
	SEPlay(1369);
	SEWait();

	Movement m[] = { //8
		TurnUp, 1,
	};

	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 26, 8, 5, 0);
	MsgActorClose();

	Movement m[] = { //8
		WalkUp, 1,
		WalkLeft, 1,
		WalkUp, 5,
		Vanish, 1,
	};

	VMSleep(16);

	Movement m[] = { //255
		TurnUp, 1,
	};

	ActorCmdWait();
	SEPlay(1369);
	SEWait();
	ActorDelete(7);
	ActorDelete(8);
	ActorDelete(6);
	ActorSetGPos(5, 665, 0, 600, 3);
	FlagSet(563);
	FlagReset(547);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 27, 0, 0);
	InputWaitLast();
	MsgActorClose();
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

	Movement m[] = { //7
		Exclaimation, 1,
	};

	ActorCmdWait();
	BGMPlay(1086);
	WorkCmpConst(0x8021, 598);
	if (1) goto label0;
	goto label1;

label0: ;

	Movement m[] = { //7
		WalkUp, 2,
		WalkRight, 2,
	};

	ActorCmdWait();
	goto label2;

label1: ;
	WorkCmpConst(0x8021, 599);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //7
		WalkUp, 1,
		WalkRight, 2,
	};

	ActorCmdWait();
	goto label2;

label4: ;
	WorkCmpConst(0x8021, 600);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //7
		WalkRight, 2,
	};

	ActorCmdWait();
	goto label2;

label6: ;
	WorkCmpConst(0x8021, 601);
	if (1) goto label7;
	goto label2;

label7: ;

	Movement m[] = { //7
		WalkDown, 1,
		WalkRight, 2,
	};

	ActorCmdWait();
	goto label2;

label2: ;
	MsgActorEx(1024, 0, 7, 0, 0);
	MsgActorClose();

	Movement m[] = { //7
		WalkLeft, 21,
	};

	VMSleep(4);

	Movement m[] = { //255
		WalkLeft, 20,
	};

	ActorCmdWait();

	Movement m[] = { //7
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 7, 0, 0);
	MsgActorClose();

	Movement m[] = { //7
		WalkRight, 1,
	};

	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 3);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x194);
	WorkSetConst(0x4092, 1);
	MsgActorEx(1024, 2, 7, 0, 0);
	MsgActorClose();

	Movement m[] = { //7
		WalkLeft, 8,
	};

	VMSleep(30);
	BGMChangeMap();
	ActorCmdWait();
	ActorDelete(7);
	ActorDelete(8);
	ActorDelete(6);
	FlagSet(2483);
	FlagSet(563);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	SEPlay(1369);
	VMSleep(4);
	ActorNew(644, 581, 1, 251, 103, 0);
	VMSleep(12);

	Movement m[] = { //255
		Exclaimation, 1,
	};

	SEWait();
	ActorCmdWait();
	VMSleep(12);
	BGMPlay(1092);
	EVCameraInit();
	EVCameraUnbind();

	Movement m[] = { //255
		LockDirection, 1,
		SlowWalkDown, 3,
		UnlockDirection, 1,
	};

	VMSleep(8);

	Movement m[] = { //251
		SlowWalkDown, 2,
	};

	ActorCmdWait();
	GameGetVersion(0x8010);
	StackPush(0x8010);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label8;
	MsgActorEx(1024, 3, 251, 0, 0);
	goto label9;

label8: ;
	MsgActorEx(1024, 4, 251, 0, 0);

label9: ;
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	MsgActorEx(1024, 6, 251, 0, 0);
	MsgWinCloseAll();
	goto label11;

label10: ;
	MsgActorEx(1024, 5, 251, 0, 0);
	MsgWinCloseAll();

label11: ;
	Routine0();
	MsgActorEx(1024, 7, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkLeft, 2,
		WalkDown, 5,
		WalkLeft, 1,
		SlowWalkLeft, 1,
	};

	VMSleep(24);
	EVCameraMoveTo(9694, 0, 0xED02B, 0x2848000, 0, 0x24B8000, 56);
	VMSleep(8);

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorVersioned(1024, 9, 10, 251, 4, 0);
	MsgActorClose();

	Movement m[] = { //251
		WalkLeft, 4,
	};

	ActorCmdWait();
	ActorDelete(251);
	BGMChangeMap();
	EVCameraMoveToDefault(32);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	WorkSetConst(0x4092, 2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	PlayerGetGPos(0x8022, 0x8023);
	GameGetVersion(0x8024);
	WorkCmpConst(0x8022, 640);
	if (1) goto label12;
	goto label13;

label12: ;

	Movement m[] = { //255
		WalkRight, 4,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label14;

label13: ;
	WorkCmpConst(0x8022, 641);
	if (1) goto label15;
	goto label16;

label15: ;

	Movement m[] = { //255
		WalkRight, 3,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label14;

label16: ;
	WorkCmpConst(0x8022, 642);
	if (1) goto label17;
	goto label18;

label17: ;

	Movement m[] = { //255
		WalkRight, 2,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label14;

label18: ;
	WorkCmpConst(0x8022, 643);
	if (1) goto label19;
	goto label20;

label19: ;

	Movement m[] = { //255
		WalkRight, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label14;

label20: ;
	WorkCmpConst(0x8022, 644);
	if (1) goto label21;
	goto label22;

label21: ;

	Movement m[] = { //255
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label14;

label22: ;
	WorkCmpConst(0x8022, 645);
	if (1) goto label23;
	goto label24;

label23: ;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label14;

label24: ;
	WorkCmpConst(0x8022, 646);
	if (1) goto label25;
	goto label26;

label25: ;

	Movement m[] = { //255
		WalkLeft, 2,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label14;

label26: ;
	WorkCmpConst(0x8022, 647);
	if (1) goto label27;
	goto label28;

label27: ;

	Movement m[] = { //255
		WalkLeft, 3,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label14;

label28: ;
	WorkCmpConst(0x8022, 648);
	if (1) goto label29;
	goto label14;

label29: ;

	Movement m[] = { //255
		WalkLeft, 4,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label14;

label14: ;
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9694, 0, 0xED02B, 0x2848000, 0, 0x2478000, 24);
	EVCameraWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 36, 9, 5, 0);
	MsgActorClose();
	SEPlay(1369);
	ActorSetGPos(13, 644, 0, 581, 1);

	Movement m[] = { //13
		WalkDown, 2,
	};

	SEWait();
	ActorCmdWait();
	MsgActorEx(1024, 37, 13, 5, 0);
	MsgActorClose();

	Movement m[] = { //10
		TurnRight, 1,
	};

	VMSleep(4);

	Movement m[] = { //9
		TurnLeft, 1,
	};

	VMSleep(2);

	Movement m[] = { //12
		TurnLeft, 1,
	};


	Movement m[] = { //11
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 38, 12, 6, 0);
	MsgActorClose();
	MsgActorEx(1024, 39, 13, 5, 0);
	MsgActorClose();
	MsgActorVersioned(1024, 40, 41, 10, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 42, 9, 5, 0);
	MsgActorClose();

	Movement m[] = { //13
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 43, 13, 5, 0);
	MsgActorClose();
	MsgActorEx(1024, 44, 12, 6, 0);
	MsgActorClose();

	Movement m[] = { //13
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 45, 13, 5, 0);
	MsgActorClose();

	Movement m[] = { //13
		WalkDown, 1,
	};

	VMSleep(4);

	Movement m[] = { //9
		TurnDown, 1,
	};

	VMSleep(2);

	Movement m[] = { //10
		TurnDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 46, 13, 6, 0);
	MsgActorClose();

	Movement m[] = { //11
		TurnRight, 1,
	};

	MsgActorEx(1024, 47, 11, 4, 0);
	MsgActorClose();
	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //13
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 48, 49, 11, 4, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label30;
	MsgActorEx(1024, 50, 11, 4, 0);
	MsgActorClose();
	goto label31;

label30: ;
	MsgActorEx(1024, 51, 11, 4, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label32;
	MsgActorEx(1024, 52, 11, 4, 0);
	YesNoWin(0x8010);

label34: ;
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label33;
	MsgActorEx(1024, 52, 11, 4, 0);
	YesNoWin(0x8010);
	goto label34;

label33: ;
	MsgActorEx(1024, 53, 11, 4, 0);
	MsgActorClose();
	goto label31;

label32: ;
	MsgActorEx(1024, 50, 11, 4, 0);
	MsgActorClose();

label31: ;

	Movement m[] = { //13
		TurnDown, 1,
	};


	Movement m[] = { //255
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 54, 55, 13, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //13
		TurnDown, 1,
	};

	ActorCmdWait();
	StackPush(0x8024);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label35;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label36;

label35: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);

label36: ;
	FlagSet(0x195);
	WorkSetConst(0x4092, 7);
	VMSleep(24);
	MsgActorEx(1024, 56, 10, 3, 0);
	VMSleep(10);
	MsgMulti(57, 20, 7, 1);
	VMSleep(16);
	MsgMulti(58, 8, 14, 2);
	VMSleep(24);
	MsgMulti(59, 22, 14, 3);
	MsgWaitAdvance();
	MsgActorClose();
	MsgWinCloseNo(1);
	MsgWinCloseNo(2);
	MsgWinCloseNo(3);
	VMSleep(24);

	Movement m[] = { //13
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //13
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 60, 13, 6, 0);
	MsgActorClose();

	Movement m[] = { //11
		TurnRight, 1,
	};

	MsgActorEx(1024, 61, 11, 4, 0);
	MsgActorClose();
	ActorCmdWait();

	Movement m[] = { //11
		TurnDown, 1,
	};


	Movement m[] = { //13
		TurnDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 62, 11, 4, 0);
	MsgActorClose();
	EVCameraMoveTo(9688, 0, 0xED000, 0x2828000, 0, 0x2488000, 24);
	EVCameraWait();
	PlayAlderFlyEffect(11);
	EVCameraMoveTo(9694, 0, 0xED02B, 0x2848000, 0, 0x2478000, 24);
	EVCameraWait();

	Movement m[] = { //9
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 63, 64, 9, 5, 0);
	MsgWinCloseAll();
	WordSetPlayerName(0);
	MsgActorEx(1024, 65, 10, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 66, 9, 5, 0);
	MsgActorClose();

	Movement m[] = { //10
		WalkRight, 2,
		WalkDown, 5,
		WalkRight, 7,
	};


	Movement m[] = { //9
		WalkDown, 6,
		WalkRight, 7,
	};

	VMSleep(42);

	Movement m[] = { //12
		TurnRight, 1,
	};

	VMSleep(2);

	Movement m[] = { //13
		TurnRight, 1,
	};


	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //13
		TurnDown, 1,
	};

	VMSleep(4);

	Movement m[] = { //255
		TurnUp, 1,
	};

	VMSleep(2);

	Movement m[] = { //12
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 67, 13, 5, 0);
	MsgActorClose();
	WordSetPlayerName(0);
	MsgActorEx(1024, 69, 12, 6, 0);
	MsgActorClose();
	EVCameraReturn(24);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	ActorDelete(10);
	ActorDelete(9);
	FlagSet(614);
	FlagSet(623);
	FlagSet(739);
	FlagSet(564);
	FlagSet(588);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 70, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 68, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(34, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(35, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
{
	StackPushFlag(126);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label37;
	StackPush(0x4092);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label37;
	CMD_1ec(5, 3, 665, 0, 600);

label37: ;
	StackPush(0x4092);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label38;
	CMD_1ec(7, 3, 662, 0, 600);
	goto label39;

label38: ;
	StackPush(0x4092);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label40;
	CMD_1ec(8, 2, 652, 0, 587);
	CMD_1ec(7, 2, 652, 0, 586);
	goto label39;

label40: ;
	StackPush(0x4092);
	StackPushConst(7);
	StackCmp(1);
	StackPushFlag(751);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label39;
	CMD_1ec(13, 3, 644, 0, 584);
	CMD_1ec(12, 2, 646, 0, 584);

label39: ;
	VMHalt();
}

void Routine0()
{
	CallTrainerBattle(65, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label41;
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9694, 0, 0xED055, 0x2848000, 0, 0x2468000, 1);
	EVCameraWait();
	CallTrainerBattleEnd();
	goto label42;

label41: ;
	CallTrainerLose();

label42: ;
	VMReturn();
}
