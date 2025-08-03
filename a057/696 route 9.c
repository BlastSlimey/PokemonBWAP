#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(4, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(5, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(6, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(7, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
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

void Sequence5()
{
	ActorPauseAll();
	StackPushFlag(259);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;

	Movement m[] = { //255
		WalkRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //8
		Exclaimation, 1,
	};

	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //255
		TurnUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //8
		LookDown, 1,
	};

	ActorCmdWait();
	VMSleep(12);
	MsgActorEx(1024, 2, 8, 6, 0);
	MsgWinCloseAll();
	VMSleep(8);

	Movement m[] = { //8
		LookLeft, 1,
		Wait16, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	ActorNew(337, 172, 1, 251, 110, 0);

	Movement m[] = { //251
		FastWalkDown, 3,
	};

	ActorCmdWait();
	ActorDelete(251);
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1A9);
	MsgActorEx(1024, 3, 8, 6, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label1;

label0: ;
	MsgActorEx(1024, 3, 8, 6, 0);
	InputWaitLast();
	MsgWinCloseAll();

label1: ;
	WorkSetConst(0x40C6, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x01B9, 0x8020);
	if (0x8020 == 0)
	{
		MsgActor(1024, 8, 0, 0);
		MsgActorClose();
	}
	else
	{
		MsgActor(1024, 9, 0, 0);
		MsgActorClose();
		MsgActor(1024, 10, 0, 0);
		FadeEx(4, 0, 16, 3);
		FadeExWait();
		ActorDelete(9);
		FlagSet(0x17F);
		FadeEx(4, 16, 0, 3);
		FadeExWait();
		InputWaitLast();
		MsgActorClose();
	}
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
