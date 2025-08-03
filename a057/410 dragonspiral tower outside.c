#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	FlagReset(604);
	ActorAdd(2);
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	WordSetPlayerName(0);
	MsgInfo(2, 2);
	MsgWinCloseAll();

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnDown, 1,
	};

	VMSleep(8);

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();
	WorkCmpConst(0x8020, 177);
	if (1) goto label0;
	goto label1;

label0: ;

	Movement m[] = { //255
		WalkRight, 4,
		TurnDown, 1,
	};

	goto label2;

label1: ;
	WorkCmpConst(0x8020, 178);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //255
		WalkRight, 3,
		TurnDown, 1,
	};

	goto label2;

label4: ;
	WorkCmpConst(0x8020, 179);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //255
		WalkRight, 2,
		TurnDown, 1,
	};

	goto label2;

label6: ;
	WorkCmpConst(0x8020, 180);
	if (1) goto label7;
	goto label8;

label7: ;

	Movement m[] = { //255
		WalkRight, 1,
		TurnDown, 1,
	};

	goto label2;

label8: ;
	WorkCmpConst(0x8020, 182);
	if (1) goto label9;
	goto label2;

label9: ;

	Movement m[] = { //255
		WalkLeft, 1,
		TurnDown, 1,
	};

	goto label2;

label2: ;

	Movement m[] = { //2
		WalkUp, 8,
		WalkLeft, 1,
		WalkUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //2
		TurnRight, 1,
	};

	VMSleep(4);

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	VMSleep(10);

	Movement m[] = { //255
		TurnUp, 1,
	};

	VMSleep(4);

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9694, 0, 0xED02B, 0xB58000, 0x3002F, 0x918000, 16);
	EVCameraWait();
	MsgActorEx(1024, 3, 0, 5, 0);
	MsgActorClose();

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 2, 4, 0);
	MsgActorClose();
	MsgActorEx(1024, 5, 0, 5, 0);
	MsgActorClose();

	Movement m[] = { //0
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 2, 4, 0);
	MsgActorClose();

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 7, 8, 0, 5, 0);
	MsgActorEx(1024, 9, 0, 5, 0);
	MsgActorClose();

	Movement m[] = { //2
		TurnUp, 1,
	};

	MsgActorEx(1024, 10, 2, 4, 0);
	ActorCmdWait();
	MsgActorClose();
	VMSleep(24);
	MsgActorEx(1024, 11, 0, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 14, 0, 5, 0);
	MsgActorClose();

	Movement m[] = { //0
		WalkDown, 1,
	};


	Movement m[] = { //2
		TurnRight, 1,
	};

	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(310);

	Movement m[] = { //0
		SlowWalkUp, 1,
	};

	VMSleep(16);

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 15, 0, 5, 0);
	MsgActorClose();
	EVCameraReturn(12);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	FlagSet(577);
	FlagReset(659);
	FlagSet(624);
	WorkSetConst(0x40A7, 2);
	WorkSetConst(0x4097, 5);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x40A7);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	MsgActorVersioned(1024, 0, 1, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label11;

label10: ;
	MsgActor(1024, 16, 0, 0);
	InputWaitLast();
	MsgActorClose();

label11: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	StackPush(0x40A7);
	StackPushConst(9);
	StackCmp(1);
	if (255) goto label12;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 47, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label13;

label12: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 17, 0, 0);
	InputWaitLast();
	MsgActorClose();

label13: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	ActorSetGPos(0, 180, 3, 144, 1);
	ActorSetGPos(1, 180, 3, 146, 0);
	ActorSetGPos(2, 178, 3, 146, 0);
	CMD_1b5();
	CMD_1b1();
	WordSetPlayerName(0);
	MsgActorEx(1024, 29, 0, 5, 0);
	MsgActorClose();
	MsgActorEx(1024, 30, 1, 6, 0);
	MsgActorClose();

	Movement m[] = { //2
		TurnRight, 1,
		Wait4, 5,
		TurnUp, 1,
	};

	VMSleep(4);
	MsgActorEx(1024, 31, 2, 3, 0);
	ActorCmdWait();
	MsgActorClose();
	MsgInfo(32, 2);
	MsgWinCloseAll();

	Movement m[] = { //2
		Exclaimation, 1,
	};


	Movement m[] = { //1
		Exclaimation, 1,
	};


	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnDown, 1,
	};

	VMSleep(2);

	Movement m[] = { //1
		TurnDown, 1,
	};

	VMSleep(4);

	Movement m[] = { //2
		TurnDown, 1,
	};

	ActorCmdWait();
	VMSleep(8);
	BGMPlay(1101);

	Movement m[] = { //3
		WalkUp, 6,
		WalkLeft, 2,
		TurnUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		TurnDown, 1,
	};

	MsgActorEx(1024, 33, 0, 5, 0);
	MsgActorClose();
	ActorCmdWait();
	MsgActorVersioned(1024, 35, 36, 3, 6, 0);
	MsgActorClose();
	MsgActorVersioned(1024, 37, 38, 0, 5, 0);
	MsgActorClose();
	MsgActorVersioned(1024, 39, 40, 3, 6, 0);
	MsgActorClose();

	Movement m[] = { //2
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //2
		TurnDown, 1,
	};

	MsgActorEx(1024, 41, 2, 4, 0);
	MsgActorClose();
	ActorCmdWait();
	MsgActorEx(1024, 42, 3, 6, 0);
	MsgActorClose();
	MsgActorEx(1024, 43, 0, 5, 0);
	MsgActorClose();

	Movement m[] = { //4
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 44, 4, 3, 0);
	MsgActorClose();

	Movement m[] = { //0
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //4
		WalkUp, 3,
		Vanish, 1,
	};


	Movement m[] = { //0
		WalkLeft, 1,
		WalkUp, 3,
		Vanish, 1,
	};

	VMSleep(16);

	Movement m[] = { //255
		TurnUp, 1,
	};

	VMSleep(2);

	Movement m[] = { //1
		TurnUp, 1,
	};

	VMSleep(4);

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	ActorDelete(0);
	ActorDelete(4);
	SEPlay(1369);
	SEWait();

	Movement m[] = { //1
		Wait32, 1,
		TurnDown, 1,
	};

	VMSleep(40);

	Movement m[] = { //255
		TurnRight, 1,
	};

	VMSleep(4);

	Movement m[] = { //2
		TurnRight, 1,
	};

	MsgActorEx(1024, 45, 1, 5, 0);
	ActorCmdWait();
	MsgActorClose();
	VMSleep(4);

	Movement m[] = { //255
		TurnDown, 1,
	};

	VMSleep(4);
	ActorCmdWait();

	Movement m[] = { //2
		TurnDown, 1,
	};


	Movement m[] = { //1
		WalkDown, 2,
		WalkRight, 1,
		WalkDown, 5,
	};

	VMSleep(24);

	Movement m[] = { //3
		WalkRight, 2,
		WalkDown, 5,
	};

	ActorCmdWait();
	BGMChangeMap();
	VMSleep(16);

	Movement m[] = { //2
		TurnRight, 1,
	};

	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 46, 2, 3, 0);
	InputWaitLast();
	MsgActorClose();
	ActorDelete(1);
	ActorDelete(3);
	FlagSet(602);
	FlagSet(603);
	FlagSet(605);
	FlagSet(606);
	FlagReset(607);
	FlagSet(300);
	WorkSetConst(0x409D, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	StackPushFlag(300);
	StackPushConst(0);
	StackCmp(1);
	StackPush(0x40A7);
	StackPushConst(1);
	StackCmp(2);
	StackCmp(7);
	if (255) goto label14;
	CMD_1ec(2, 0, 180, 3, 146);
	goto label15;

label14: ;
	StackPush(0x40A7);
	StackPushConst(9);
	StackCmp(1);
	StackPushFlag(604);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label15;
	CMD_1ec(2, 1, 178, 3, 146);

label15: ;
	VMHalt();
}
