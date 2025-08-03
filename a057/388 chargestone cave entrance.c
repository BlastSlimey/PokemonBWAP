#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8020, 0);
	TrainerCardHasBadge(0x8020, 4);
	if (0x8020 == 0)
	{
		MsgSystem(0, 2);
		InputWaitLast();
		MsgSystemClose();
	}
	else
	{
		FlagReset(582);
		ActorAdd(1);
		WorkSetConst(0x8020, 0);
		WorkSetConst(0x8021, 0);
		PlayerGetGPos(0x8020, 0x8021);
		MsgInfo(1, 2);
		MsgWinCloseAll();
		Movement m[] = { //255
			Exclaimation, 1,
		};
		ActorCmdWait();
		Movement m[] = { //255
			TurnDown, 1,
		};
		ActorCmdWait();
		Movement m[] = { //1
			WalkUp, 3,
			WalkRight, 4,
			TurnUp, 1,
		};
		ActorCmdWait();
		MsgActorEx(1024, 2, 1, 0, 0);
		MsgActorClose();
		ActorNew(107, 344, 0, 251, 131, 0);
		if (0x8020 == 107)
		{
			Movement m[] = { //255
				WalkRight, 1,
				TurnDown, 1,
			};
			ActorCmdWait();
		}
		Movement m[] = { //251
			WalkUp, 1,
		};
		ActorCmdWait();
		MsgActorEx(1024, 3, 1, 0, 0);
		MsgActorClose();
		PVPlay(552, 0);
		PVWait();
		Movement m[] = { //251
			LockDirection, 1,
			SlowWalkDown, 1,
			FastTurnUp, 4,
			Wait8, 1,
			FastestWalkUp, 1,
			FastWalkDown, 1,
			UnlockDirection, 1,
		};
		VMSleep(50);
		SEPlay(1379);
		EVCameraShake(0, 1, 3, 6, 0, 0, 0, 0);
		ActorCmdWait();
		SEWait();
		VMSleep(2);
		Movement m[] = { //0
			0xAB, 1,
		};
		Movement m[] = { //2
			0xAB, 1,
		};
		Movement m[] = { //3
			0xAB, 1,
		};
		Movement m[] = { //4
			0xAB, 1,
		};
		Movement m[] = { //5
			0xAB, 1,
		};
		Movement m[] = { //6
			0xAB, 1,
		};
		VMSleep(8);
		SEPlay(1923);
		ActorCmdWait();
		ActorDelete(0);
		ActorDelete(2);
		ActorDelete(3);
		ActorDelete(4);
		ActorDelete(5);
		ActorDelete(6);
		VMSleep(4);
		SEWait();
		FlagSet(583);
		Movement m[] = { //251
			TurnDown, 1,
		};
		MsgActorEx(1024, 4, 1, 0, 0);
		MsgActorClose();
		StackPush(0x8000);
		StackPush(0x8001);
		WorkSet(0x8000, 0x80);
		WorkSet(0x8001, 1);
		RTCallGlobal(2805);
		StackPop(0x8001);
		StackPop(0x8000);
		FlagSet(0x1A2);
		MsgActorEx(1024, 5, 1, 0, 0);
		MsgActorClose();
		VMSleep(16);
		Movement m[] = { //1
			TurnDown, 1,
		};
		ActorCmdWait();
		VMSleep(8);
		MsgActorEx(1024, 6, 1, 0, 0);
		MsgActorClose();
		VMSleep(8);
		Movement m[] = { //1
			TurnUp, 1,
		};
		ActorCmdWait();
		Movement m[] = { //251
			TurnDown, 1,
		};
		ActorCmdWait();
		ActorDelete(251);
		VMSleep(16);
		Movement m[] = { //1
			WalkDown, 1,
			WalkLeft, 3,
			WalkDown, 5,
		};
		ActorCmdWait();
		WorkSetConst(0x409A, 2);
		ActorDelete(1);
		FlagSet(582);
		CMD_1eb(0, 107, 1, 339);
	}
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	StackPush(0x409A);
	StackPushConst(2);
	StackCmp(0);
	if (255) goto label18;
	CMD_1eb(0, 107, 1, 337);

label18: ;
	VMHalt();
}

void Sequence2()
{
	StackPush(0x409A);
	StackPushConst(2);
	StackCmp(0);
	if (255) goto label19;
	CMD_1eb(0, 107, 1, 337);

label19: ;
	VMHalt();
}

void Sequence3()
{
	StackPush(0x409A);
	StackPushConst(2);
	StackCmp(0);
	if (255) goto label20;
	CMD_1eb(0, 107, 1, 337);

label20: ;
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(7, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
