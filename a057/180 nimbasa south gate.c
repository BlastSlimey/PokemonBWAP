#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
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

void Sequence1()
{
	ActorPauseAll();
	CMD_17e(36);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 10, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();

	Movement m[] = { //2
		Exclaimation, 1,
	};

	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x58000, 0, 0x78000, 30);

	Movement m[] = { //3
		TurnDown, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	BGMPlay(1089);
	WordSetPlayerName(0);
	MsgActorEx(1024, 0, 2, 1, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 1, 3, 1, 0);
	MsgWinCloseAll();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	StackPush(0x8020);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label0;

	Movement m[] = { //255
		WalkRight, 1,
		WalkUp, 2,
		WalkRight, 1,
		TurnUp, 1,
	};

	goto label1;

label0: ;
	StackPush(0x8020);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label2;

	Movement m[] = { //255
		WalkUp, 2,
		WalkRight, 1,
		TurnUp, 1,
	};

	goto label1;

label2: ;
	StackPush(0x8020);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label3;

	Movement m[] = { //255
		WalkUp, 2,
	};

	goto label1;

label3: ;
	StackPush(0x8020);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label4;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkUp, 2,
		TurnUp, 1,
	};

	goto label1;

label4: ;
	StackPush(0x8020);
	StackPushConst(6);
	StackCmp(1);
	if (255) goto label5;

	Movement m[] = { //255
		WalkUp, 2,
	};

	goto label1;

label5: ;

	Movement m[] = { //255
		WalkUp, 2,
		WalkLeft, 1,
		TurnUp, 1,
	};


label1: ;
	ActorCmdWait();

	Movement m[] = { //3
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 2, 1, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		WalkDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 2, 1, 0);
	MsgWinCloseAll();
	StackPush(0x8020);
	StackPushConst(5);
	StackCmp(3);
	if (255) goto label6;

	Movement m[] = { //2
		WalkLeft, 1,
		TurnDown, 1,
	};

	goto label7;

label6: ;

	Movement m[] = { //2
		WalkRight, 1,
		TurnDown, 1,
	};


label7: ;
	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 4, 2, 1, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 10);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x19B);

	Movement m[] = { //2
		LockDirection, 1,
		WalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 5, 2, 1, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 2, 1, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 7, 2, 1, 0);
	MsgWinCloseAll();
	StackPush(0x8020);
	StackPushConst(5);
	StackCmp(3);
	if (255) goto label8;

	Movement m[] = { //2
		WalkLeft, 1,
		WalkDown, 5,
		WalkRight, 2,
		WalkDown, 3,
		Vanish, 1,
	};

	goto label9;

label8: ;

	Movement m[] = { //2
		WalkRight, 1,
		WalkDown, 4,
		WalkLeft, 2,
		WalkDown, 4,
		Vanish, 1,
	};


label9: ;
	VMSleep(24);

	Movement m[] = { //255
		TurnDown, 1,
	};

	VMSleep(8);

	Movement m[] = { //3
		TurnDown, 1,
	};

	ActorCmdWait();
	SEPlay(1369);
	SEWait();
	ActorDelete(2);
	BGMChangeMap();
	VMSleep(35);
	MsgActorEx(1024, 8, 3, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8020);
	StackPushConst(5);
	StackCmp(3);
	if (255) goto label10;

	Movement m[] = { //3
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};

	goto label11;

label10: ;

	Movement m[] = { //3
		TurnRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};


label11: ;
	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 9, 3, 2, 0);
	MsgWinCloseAll();
	EVCameraMoveToDefault(8);

	Movement m[] = { //3
		WalkDown, 6,
		Vanish, 1,
	};

	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	ActorCmdWait();
	SEPlay(1369);
	SEWait();
	ActorDelete(3);
	WorkSetConst(0x40C2, 1);
	FlagSet(697);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
