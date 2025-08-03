#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x01C4, 0x8020);
	if (0x8020 > 0)
	{
		FlagSet(0x17A);
		WorkSetConst(0x40EA, 1);
		MsgActorEx(1024, 5, 0, 0, 0);
		MsgActorClose();
		FadeEx(3, 0, 16, 3);
		FadeExWait();
		ActorDelete(0);
		FadeEx(3, 16, 0, 3);
		FadeExWait();
	}
	else
	{
		MsgActorEx(1024, 4, 0, 0, 0);
		MsgActorClose();
		Movement m[] = { //255
			WalkLeft, 1,
		};
		ActorCmdWait();
	}
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	CMD_17e(36);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 0, 1, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	Movement m[] = { //0
		TurnRight, 1,
	};
	ActorCmdWait();
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x01C4, 0x8020);
	if (0x8020 > 0)
	{
		FlagSet(0x17A);
		WorkSetConst(0x40EA, 1);
		MsgActorEx(1024, 5, 0, 0, 0);
		MsgActorClose();
		FadeEx(3, 0, 16, 3);
		FadeExWait();
		ActorDelete(0);
		FadeEx(3, 16, 0, 3);
		FadeExWait();
	}
	else
	{
		MsgActorEx(1024, 4, 0, 0, 0);
		MsgActorClose();
		Movement m[] = { //255
			WalkRight, 1,
		};
		ActorCmdWait();
	}
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
