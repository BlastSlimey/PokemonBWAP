#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	CMD_13d();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x1AE8000, 0x1000F, 0x1D26000, 45);
	PlayerGetGPos(0x8020, 0x8021);
	StackPush(0x8020);
	StackPushConst(427);
	StackCmp(1);
	if (255) goto label0;

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 3,
		WalkUp, 1,
	};

	goto label1;

label0: ;
	StackPush(0x8020);
	StackPushConst(428);
	StackCmp(1);
	if (255) goto label2;

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 2,
		WalkUp, 1,
	};

	goto label1;

label2: ;
	StackPush(0x8020);
	StackPushConst(429);
	StackCmp(1);
	if (255) goto label3;

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 1,
		WalkUp, 1,
	};

	goto label1;

label3: ;
	StackPush(0x8020);
	StackPushConst(430);
	StackCmp(1);
	if (255) goto label4;

	Movement m[] = { //255
		WalkUp, 2,
	};

	goto label1;

label4: ;
	StackPush(0x8020);
	StackPushConst(431);
	StackCmp(1);
	if (255) goto label5;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 1,
		WalkUp, 1,
	};

	goto label1;

label5: ;
	StackPush(0x8020);
	StackPushConst(432);
	StackCmp(1);
	if (255) goto label6;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 2,
		WalkUp, 1,
	};

	goto label1;

label6: ;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 3,
		WalkUp, 1,
	};


label1: ;
	ActorCmdWait();
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	EVCameraWait();
	BGMPlay(1091);
	MsgActorEx(1024, 0, 8, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 1, 9, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 2, 10, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //10
		LookLeft, 1,
		Wait8, 1,
		LookRight, 1,
		Wait8, 2,
		TurnDown, 1,
		Exclaimation, 1,
	};

	ActorCmdWait();
	EVCameraMoveToDefault(16);

	Movement m[] = { //10
		FastWalkDown, 3,
		FastWalkRight, 1,
	};


	Movement m[] = { //8
		TurnDown, 1,
	};

	VMSleep(4);

	Movement m[] = { //9
		TurnDown, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	MsgActorEx(1024, 3, 10, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //8
		Wait8, 2,
		WalkDown, 2,
	};


	Movement m[] = { //9
		WalkLeft, 2,
		WalkDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 9, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //9
		FastWalkDown, 1,
	};

	ActorCmdWait();
	CallTrainerBattle(279, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	CallTrainerBattleEnd();
	goto label8;

label7: ;
	CallTrainerLose();

label8: ;
	MsgActorEx(1024, 5, 9, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //9
		LockDirection, 1,
		SlowWalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 8, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //8
		MediumFastWalkRight, 2,
		MediumFastWalkUp, 5,
		MediumFastWalkRight, 8,
	};


	Movement m[] = { //9
		Wait4, 1,
		MediumFastWalkRight, 3,
		MediumFastWalkUp, 5,
		MediumFastWalkRight, 8,
	};

	VMSleep(60);
	BGMChangeMap();
	ActorCmdWait();
	ActorDelete(8);
	ActorDelete(9);

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 7, 10, 4, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(153);
	MsgActorEx(1024, 8, 10, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //10
		WalkDown, 8,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	SEPlay(1369);
	ActorDelete(10);
	SEWait();
	ActorNew(431, 477, 0, 251, 134, 0);
	WordSetPlayerName(0);
	TrainerCardGetSex(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	MsgInfo(9, 2);
	goto label10;

label9: ;
	MsgInfo(10, 2);

label10: ;
	MsgWinCloseAll();
	BGMPlay(1088);

	Movement m[] = { //251
		WalkUp, 8,
		TurnLeft, 1,
	};

	VMSleep(50);

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 251, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		LookUp, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 12, 251, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkUp, 3,
		WalkRight, 2,
		WalkUp, 7,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnUp, 1,
	};

	ActorCmdWait();
	ActorDelete(251);
	BGMChangeMap();
	FlagSet(2485);
	WorkSetConst(0x4089, 1);
	FlagSet(543);
	FlagReset(625);
	FlagSet(841);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 1);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	WordSetPlayerName(0);
	TrainerCardGetSex(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label11;
	MsgInfo(13, 2);
	goto label12;

label11: ;
	MsgInfo(14, 2);

label12: ;
	MsgWinCloseAll();
	BGMPlay(1088);

	Movement m[] = { //255
		TurnRight, 1,
	};

	PlayerGetGPos(0x8023, 0x8024);
	StackPush(0x8024);
	StackPushConst(436);
	StackCmp(1);
	if (255) goto label13;
	ActorSetGPos(11, 399, 0, 437, 2);
	goto label14;

label13: ;
	ActorSetGPos(11, 399, 0, 0x8024, 2);

label14: ;
	StackPush(0x8024);
	StackPushConst(436);
	StackCmp(1);
	if (255) goto label15;

	Movement m[] = { //11
		WalkLeft, 6,
		WalkUp, 1,
		WalkLeft, 1,
	};

	goto label16;

label15: ;

	Movement m[] = { //11
		WalkLeft, 7,
	};


label16: ;
	ActorCmdWait();
	MsgActorEx(1024, 15, 11, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8024);
	StackPushConst(436);
	StackCmp(1);
	if (255) goto label17;

	Movement m[] = { //11
		WalkRight, 1,
		WalkDown, 2,
		WalkRight, 40,
		WalkUp, 4,
		TurnDown, 1,
	};


	Movement m[] = { //255
		Wait4, 1,
		WalkRight, 2,
		WalkDown, 2,
		WalkRight, 40,
		WalkUp, 3,
	};

	goto label18;

label17: ;
	StackPush(0x8024);
	StackPushConst(437);
	StackCmp(1);
	if (255) goto label19;

	Movement m[] = { //11
		WalkRight, 1,
		WalkDown, 1,
		WalkRight, 40,
		WalkUp, 4,
		TurnDown, 1,
	};


	Movement m[] = { //255
		Wait4, 1,
		WalkRight, 2,
		WalkDown, 1,
		WalkRight, 40,
		WalkUp, 3,
	};

	goto label18;

label19: ;
	StackPush(0x8024);
	StackPushConst(438);
	StackCmp(1);
	if (255) goto label20;

	Movement m[] = { //11
		WalkRight, 41,
		WalkUp, 4,
		TurnDown, 1,
	};


	Movement m[] = { //255
		Wait4, 1,
		WalkRight, 42,
		WalkUp, 3,
	};

	goto label18;

label20: ;
	StackPush(0x8024);
	StackPushConst(439);
	StackCmp(1);
	if (255) goto label21;

	Movement m[] = { //11
		WalkRight, 1,
		WalkUp, 1,
		WalkRight, 40,
		WalkUp, 4,
		TurnDown, 1,
	};


	Movement m[] = { //255
		Wait4, 1,
		WalkRight, 2,
		WalkUp, 1,
		WalkRight, 40,
		WalkUp, 3,
	};

	goto label18;

label21: ;

	Movement m[] = { //11
		WalkRight, 1,
		WalkUp, 2,
		WalkRight, 40,
		WalkUp, 4,
		TurnDown, 1,
	};


	Movement m[] = { //255
		Wait4, 1,
		WalkRight, 2,
		WalkUp, 2,
		WalkRight, 40,
		WalkUp, 3,
	};


label18: ;
	ActorCmdWait();
	MsgActorEx(1024, 16, 11, 0, 0);
	MsgWinCloseAll();
	Routine0();
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);
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

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 41, 0, 0);
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
	ActorSetEyeToEye();
	MsgActor(1024, 42, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 43, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 44, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 45, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 46, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(51, 1);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(52, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(53, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(54, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(55, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(56, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
{
	ActorPauseAll();
	CMD_252();

	Movement m[] = { //255
		WalkDown, 1,
	};

	ActorCmdWait();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence17()
{
	WorkSetConst(0x4136, 1);
	WorkSetConst(0x4110, 0);
	FlagReset(286);
	FlagSet(670);
	FlagSet(671);
	FlagSet(672);
	FlagSet(673);
	FlagSet(674);
	FlagSet(752);
	FlagSet(753);
	FlagSet(754);
	FlagSet(755);
	FlagSet(756);
	FlagSet(326);
	VMHalt();
}

void Sequence18()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WordSetPlayerName(0);
	MsgActor(1024, 17, 0, 0);
	MsgWinCloseAll();
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence19()
{
	ActorPauseAll();
	CMD_13d();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9840, 0, 0xED000, 0x1B18000, 0x1000F, 0x1B58000, 30);
	CMD_248(1097, 90);

	Movement m[] = { //255
		WalkDown, 2,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 18, 11, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 19, 12, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		LookLeft, 1,
		LockDirection, 1,
		WalkRight, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 20, 11, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //12
		WalkRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 21, 12, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 22, 11, 5, 0);
	MsgWinCloseAll();
	VMSleep(8);
	MsgInfo(23, 2);
	MsgWinCloseAll();

	Movement m[] = { //11
		QuestionMark, 1,
	};

	VMSleep(8);

	Movement m[] = { //12
		QuestionMark, 1,
	};

	ActorCmdWait();

	Movement m[] = { //11
		TurnDown, 1,
	};


	Movement m[] = { //12
		TurnDown, 1,
	};

	EVCameraMoveTo(10840, 0, 0xED000, 0x1B18000, 0x1000F, 0x1B58000, 20);
	ActorNew(433, 444, 0, 251, 88, 0);

	Movement m[] = { //251
		WalkUp, 5,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 24, 12, 3, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 25, 251, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkRight, 1,
		TurnUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //12
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 26, 251, 6, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 27, 12, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 28, 251, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		WalkLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 29, 11, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //12
		LookDown, 1,
		Ellipses, 1,
	};

	ActorCmdWait();
	VMSleep(15);
	MsgActorEx(1024, 30, 12, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //12
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 31, 12, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //12
		TurnUp, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 32, 12, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //12
		WalkDown, 2,
		WalkRight, 1,
		WalkDown, 5,
	};

	VMSleep(16);

	Movement m[] = { //251
		TurnDown, 1,
	};


	Movement m[] = { //11
		TurnDown, 1,
	};

	ActorCmdWait();
	ActorDelete(12);
	EVCameraMoveTo(10840, 0, 0xED000, 0x1B18000, 0x1000F, 0x1B68000, 8);

	Movement m[] = { //11
		MediumFastWalkDown, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 33, 11, 3, 0);
	MsgWinCloseAll();
	VMSleep(30);
	MsgActorEx(1024, 34, 251, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //11
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 35, 251, 5, 0);
	FlagGet(0x175, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label22; // jump if defeated
	MsgActorEx(1024, 36, 251, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkDown, 1,
		WalkLeft, 1,
		WalkDown, 5,
	};

	VMSleep(16);

	Movement m[] = { //11
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label23;

label22: ;
	MsgWinCloseAll();

	Movement m[] = { //251
		TurnUp, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 37, 251, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		LookDown, 1,
		LockDirection, 1,
		WalkUp, 1,
		UnlockDirection, 1,
		Wait8, 2,
		TurnLeft, 1,
	};

	VMSleep(8);

	Movement m[] = { //251
		WalkLeft, 9,
	};

	ActorCmdWait();

label23: ;
	ActorDelete(251);
	EVCameraMoveToDefault(20);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	FlagGet(0x175, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label24; // jump if defeated

	Movement m[] = { //11
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label25;

label24: ;

	Movement m[] = { //11
		TurnUp, 1,
	};

	ActorCmdWait();

label25: ;
	MsgActorEx(1024, 38, 11, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		WalkDown, 6,
	};

	ActorCmdWait();
	ActorDelete(11);
	CMD_24b(120);
	WorkSetConst(0x4089, 3);
	FlagSet(561);
	FlagSet(639);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence20()
{
	StackPush(0x4089);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label26;
	ActorSetGPos(11, 433, 1, 438, 2);

label26: ;
	VMHalt();
}

void Sequence21()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(57, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence22()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(58, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence23()
{
	ActorPauseAll();
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	ActorNew(422, 458, 1, 251, 31, 0);
	SEPlay(1369);
	SEWait();

	Movement m[] = { //251
		SlowWalkDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 47, 251, 0, 0);
	MsgWinCloseAll();
	PlayerGetGPos(0x8025, 0x8026);
	StackPush(0x8025);
	StackPushConst(421);
	StackCmp(1);
	if (255) goto label27;

	Movement m[] = { //255
		Wait8, 1,
		TurnRight, 1,
	};

	goto label28;

label27: ;
	StackPush(0x8025);
	StackPushConst(422);
	StackCmp(1);
	if (255) goto label29;

	Movement m[] = { //255
		LookRight, 1,
		LockDirection, 1,
		WalkLeft, 1,
		UnlockDirection, 1,
	};

	VMSleep(8);
	goto label28;

label29: ;

	Movement m[] = { //255
		Wait8, 1,
		TurnLeft, 1,
	};


label28: ;

	Movement m[] = { //251
		SlowWalkDown, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 48, 251, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8025);
	StackPushConst(421);
	StackCmp(1);
	if (255) goto label30;

	Movement m[] = { //251
		TurnLeft, 1,
	};

	goto label31;

label30: ;
	StackPush(0x8025);
	StackPushConst(422);
	StackCmp(1);
	if (255) goto label32;

	Movement m[] = { //251
		TurnLeft, 1,
	};

	goto label31;

label32: ;

	Movement m[] = { //251
		TurnRight, 1,
	};


label31: ;
	ActorCmdWait();
	MsgActorEx(1024, 49, 251, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x19E);
	MsgActorEx(1024, 50, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkDown, 5,
		WalkLeft, 8,
	};

	ActorCmdWait();
	ActorDelete(251);
	WorkSetConst(0x40D6, 1);
	FlagReset(842);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8025, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

// Season changing npc
void Sequence24()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();

	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	ListMenuInitTR(31, 10, 0, 0, 0x40C1);

	// Add one available season after another to the list
	FlagGet(0x181, 0x8020);
	WorkAdd(0x8021, 0x8020);
	if (0x8020 == 1)
	{
		ListMenuAdd(60, 0xFFFF, 0);
	}
	FlagGet(0x182, 0x8020);
	WorkAdd(0x8021, 0x8020);
	if (0x8020 == 1)
	{
		ListMenuAdd(61, 0xFFFF, 1);
	}
	FlagGet(0x183, 0x8020);
	WorkAdd(0x8021, 0x8020);
	if (0x8020 == 1)
	{
		ListMenuAdd(62, 0xFFFF, 2);
	}
	FlagGet(0x184, 0x8020);
	WorkAdd(0x8021, 0x8020);
	if (0x8020 == 1)
	{
		ListMenuAdd(63, 0xFFFF, 3);
	}

	// If no season available, then all unlocked from start
	if (0x8021 == 0)
	{
		ListMenuAdd(60, 0xFFFF, 0);
		ListMenuAdd(61, 0xFFFF, 1);
		ListMenuAdd(62, 0xFFFF, 2);
		ListMenuAdd(63, 0xFFFF, 3);
	}

	// Choose season
	MsgActor(1024, 59, 0, 0);
	ListMenuShow();

	// Show result
	WorkSetConst(0x8020, 64);
	WorkAdd(0x8020, 0x40C1);
	MsgActor(1024, 0x8020, 0, 0);
	MsgWinCloseAll();

	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{

	Movement m[] = { //11
		TurnUp, 1,
		Wait4, 1,
		WalkUp, 1,
		Vanish, 1,
	};

	VMSleep(12);
	PlayerGetDir(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label33;

	Movement m[] = { //255
		WalkUp, 1,
	};

	goto label34;

label33: ;
	StackPush(0x8010);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label35;

	Movement m[] = { //255
		WalkLeft, 1,
		TurnUp, 1,
	};

	goto label34;

label35: ;

	Movement m[] = { //255
		WalkRight, 1,
		TurnUp, 1,
	};


label34: ;
	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(8664, 0, 0x105000, 0x1B18000, 0x2500F, 0x1AF0000, 20);
	EVCameraWait();
	EVCameraEnd();

	Movement m[] = { //255
		WalkUp, 1,
	};

	ActorCmdWait();
	MapChangeWarp(77, 14, 20, 0);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label36;
	CMD_25f();

label36: ;
	VMReturn();
}
