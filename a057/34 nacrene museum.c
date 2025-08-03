#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	StackPushFlag(126);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label1;

label0: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	StackPushFlag(126);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label3;

label2: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	FlagGet(0x173, 0x8008);
	StackPushFlag(126);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label4;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 20, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label5;

label4: ;
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label5;

label6: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 23, 0, 0);
	InputWaitLast();
	MsgActorClose();

label5: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
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

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 22, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	StackPushFlag(126);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 25, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label8;

label7: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 24, 0, 0);
	InputWaitLast();
	MsgActorClose();

label8: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	StackPushFlag(126);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 27, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label10;

label9: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 26, 0, 0);
	InputWaitLast();
	MsgActorClose();

label10: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	StackPushFlag(126);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 29, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label12;

label11: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();

label12: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	StackPushFlag(126);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label13;
	MsgInfo(31, 2);
	goto label14;

label13: ;
	MsgInfo(30, 2);

label14: ;
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(32, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(33, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(34, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(35, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(36, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(37, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0xC8000, 0, 0x158000, 32);
	EVCameraWait();
	MsgActorEx(1024, 4, 2, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		Wait8, 1,
		TurnDown, 1,
		Exclaimation, 1,
		Wait4, 1,
	};

	ActorCmdWait();
	WorkCmpConst(0x8020, 11);
	if (1) goto label15;
	goto label16;

label15: ;

	Movement m[] = { //2
		WalkLeft, 1,
		WalkDown, 1,
	};

	ActorCmdWait();
	goto label17;

label16: ;
	WorkCmpConst(0x8020, 12);
	if (1) goto label18;
	goto label19;

label18: ;

	Movement m[] = { //2
		WalkDown, 1,
	};

	ActorCmdWait();
	goto label17;

label19: ;
	WorkCmpConst(0x8020, 13);
	if (1) goto label20;
	goto label17;

label20: ;

	Movement m[] = { //2
		WalkRight, 1,
		WalkDown, 1,
	};

	ActorCmdWait();
	goto label17;

label17: ;
	MsgActorEx(1024, 5, 2, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		SlowTurnUp, 1,
	};

	ActorCmdWait();
	WorkCmpConst(0x8020, 11);
	if (1) goto label21;
	goto label22;

label21: ;

	Movement m[] = { //2
		WalkUp, 1,
	};

	VMSleep(2);

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label23;

label22: ;
	WorkCmpConst(0x8020, 12);
	if (1) goto label24;
	goto label25;

label24: ;

	Movement m[] = { //2
		WalkUp, 1,
		WalkLeft, 1,
		TurnUp, 1,
	};

	VMSleep(2);

	Movement m[] = { //255
		WalkUp, 2,
	};

	ActorCmdWait();
	goto label23;

label25: ;
	WorkCmpConst(0x8020, 13);
	if (1) goto label26;
	goto label23;

label26: ;

	Movement m[] = { //2
		WalkUp, 1,
		WalkLeft, 2,
		TurnUp, 1,
	};

	VMSleep(2);

	Movement m[] = { //255
		WalkUp, 2,
		WalkLeft, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label23;

label23: ;
	MsgActorEx(1024, 6, 2, 4, 0);
	MsgActorClose();
	EVCameraMoveToDefault(1);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();

	Movement m[] = { //2
		WalkLeft, 4,
		WalkUp, 8,
		WalkLeft, 1,
	};

	VMSleep(2);

	Movement m[] = { //255
		WalkLeft, 5,
		WalkUp, 7,
		WalkLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 7, 2, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		WalkUp, 2,
		WalkRight, 1,
		TurnUp, 1,
	};

	VMSleep(2);

	Movement m[] = { //255
		WalkUp, 3,
	};

	ActorCmdWait();
	MsgActorEx(1024, 8, 2, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		WalkRight, 5,
		WalkUp, 7,
		WalkRight, 1,
		TurnUp, 1,
	};

	VMSleep(2);

	Movement m[] = { //255
		WalkRight, 6,
		WalkUp, 5,
	};

	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9694, 0, 0xED02B, 0xC8000, 0x3002F, 0x28000, 32);
	EVCameraWait();
	MsgActorEx(1024, 9, 2, 5, 0);
	MsgActorClose();

	Movement m[] = { //2
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 10, 2, 5, 0);
	MsgActorClose();
	EVCameraMoveToDefault(32);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	WorkSetConst(0x4084, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8022, 0x8023);
	MsgActorEx(1024, 12, 251, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9694, 0, 0xED02B, 0xC8000, 0, 0xC8000, 40);
	StackPush(0x8022);
	StackPushConst(10);
	StackCmp(1);
	if (255) goto label27;

	Movement m[] = { //255
		0xA4, 2,
		0xA6, 1,
		0xA4, 1,
	};

	goto label28;

label27: ;
	StackPush(0x8022);
	StackPushConst(11);
	StackCmp(1);
	if (255) goto label29;

	Movement m[] = { //255
		0xA4, 3,
	};

	goto label28;

label29: ;
	StackPush(0x8022);
	StackPushConst(12);
	StackCmp(1);
	if (255) goto label30;

	Movement m[] = { //255
		0xA4, 2,
		0xA5, 1,
		0xA4, 1,
	};

	goto label28;

label30: ;
	StackPush(0x8022);
	StackPushConst(13);
	StackCmp(1);
	if (255) goto label31;

	Movement m[] = { //255
		0xA4, 2,
		0xA5, 2,
		0xA4, 1,
	};

	goto label28;

label31: ;
	StackPush(0x8022);
	StackPushConst(14);
	StackCmp(1);
	if (255) goto label28;

	Movement m[] = { //255
		0xA4, 2,
		0xA5, 3,
		0xA4, 1,
	};


label28: ;
	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 13, 11, 3, 0);
	MsgWinCloseAll();
	EVCameraMoveTo(9688, 0, 0xED000, 0xC8000, 0x8007, 0x129000, 30);
	EVCameraWait();
	MsgActorEx(1024, 14, 14, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		SlowTurnDown, 1,
	};

	VMSleep(2);

	Movement m[] = { //14
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 15, 11, 4, 0);
	VMSleep(10);
	MsgMulti(16, 2, 2, 1);
	VMSleep(10);
	MsgMulti(17, 22, 9, 2);
	VMSleep(20);
	MsgActorClose();
	VMSleep(8);
	MsgWinCloseNo(1);
	VMSleep(8);
	MsgWinCloseNo(2);

	Movement m[] = { //13
		SlowTurnDown, 1,
	};

	VMSleep(4);

	Movement m[] = { //15
		SlowTurnDown, 1,
	};

	VMSleep(2);

	Movement m[] = { //12
		SlowTurnDown, 1,
	};

	VMSleep(1);

	Movement m[] = { //16
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	FadeEx(12, 0, 16, 4);
	FadeExWait();
	FlagSet(648);
	ActorDelete(11);
	ActorDelete(14);
	ActorDelete(13);
	ActorDelete(12);
	ActorDelete(15);
	ActorDelete(16);
	FlagSet(569);
	ActorDelete(8);
	WorkSetConst(0x8024, 0);
	BMCreateHandleByGPos(0x8024, 8, 14, 15);
	BMHndAudioVisualAnmPlay(0x8024, 0);
	FadeEx(12, 16, 0, 4);
	SEPlay(1923);
	FadeExWait();
	SEWait();
	BMHndAnmWait(0x8024);
	BMReleaseHandle(0x8024);
	VMSleep(32);
	EVCameraMoveTo(9694, 0, 0xED02B, 0xC8000, 0, 0xC8000, 32);
	EVCameraWait();

	Movement m[] = { //251
		Exclaimation, 1,
	};


	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //251
		SlowestWalkDown, 2,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 251, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		FastWalkLeft, 5,
		FastWalkDown, 10,
	};

	VMSleep(40);

	Movement m[] = { //2
		SlowTurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //2
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 19, 2, 6, 0);
	MsgWinCloseAll();
	ActorDelete(251);
	EVCameraMoveToDefault(8);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	WorkSetConst(0x4084, 3);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence17()
{
	FlagGet(0x173, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label32; // jump if defeated
	StackPush(0x4084);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label33;
	StackPushFlag(126);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label33;
	ActorSetGPos(2, 13, 3, 4, 1);

label33: ;
	goto label34;

label32: ;
	StackPush(0x4084);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label34;
	ActorNew(12, 12, 1, 251, 86, 15);
	ActorSetGPos(2, 13, 0, 12, 1);

label34: ;
	VMHalt();
}

void Sequence18()
{
	GameGetVersion(0x8010);
	StackPush(0x8010);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label35;
	WorkSetConst(0x4020, 144);
	goto label36;

label35: ;
	WorkSetConst(0x4020, 143);

label36: ;
	VMHalt();
}
