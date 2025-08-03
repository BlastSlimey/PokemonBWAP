#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 2, 0, 0);
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
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	FlagGet(0x172, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label1;

label0: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgActorClose();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();

	Movement m[] = { //3
		WalkUp, 4,
		LookDown, 1,
	};


	Movement m[] = { //255
		Wait8, 1,
		WalkUp, 4,
		LookUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //3
		LookDown, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 0, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		Wait16, 1,
		WalkUp, 3,
		LookUp, 1,
	};


	Movement m[] = { //3
		WalkUp, 3,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //3
		LookDown, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		WalkUp, 1,
		Wait8, 1,
		WalkRight, 1,
	};


	Movement m[] = { //3
		WalkRight, 1,
		LookRight, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	ActorDelete(3);
	MapChangeWarp(10, 11, 2, 3);
	FlagSet(541);
	WorkSetConst(0x4087, 2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	FlagGet(0x172, 0x8008);
	StackPush(0x8008);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	ActorSetGPos(2, 5, 0, 3, 1);
	goto label2;

label2: ;
	VMHalt();
}

void Sequence6()
{
	VMHalt();
}
