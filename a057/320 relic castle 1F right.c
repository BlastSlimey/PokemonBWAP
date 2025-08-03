#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	MapChangeQuicksand(161, 15, 11);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	MapChangeQuicksand(161, 10, 10);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8020, 0);
	StackPushFlag(145);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	MsgActorEx(1024, 5, 3, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label1;

label0: ;
	StackPushFlag(146);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	ListMenuInitTR(31, 1, 0, 1, 0x8020);
	ListMenuAdd(6, 0xFFFF, 0);
	ListMenuAdd(7, 0xFFFF, 1);
	ListMenuAdd(8, 0xFFFF, 2);
	MsgActorEx(1024, 0, 3, 2, 0);
	ListMenuShow();
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	MsgActorEx(1024, 1, 3, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(145);
	goto label4;

label3: ;
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label5;
	MsgActorEx(1024, 2, 3, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(145);
	goto label4;

label5: ;
	MsgActorEx(1024, 3, 3, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(146);

label4: ;
	goto label1;

label2: ;
	ListMenuInitTR(31, 1, 0, 1, 0x8020);
	ListMenuAdd(6, 0xFFFF, 0);
	ListMenuAdd(7, 0xFFFF, 1);
	ListMenuAdd(8, 0xFFFF, 2);
	MsgActorEx(1024, 4, 3, 2, 0);
	ListMenuShow();
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	MsgActorEx(1024, 1, 3, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(145);
	goto label1;

label6: ;
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	MsgActorEx(1024, 2, 3, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(145);
	goto label1;

label7: ;
	MsgActorEx(1024, 3, 3, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(146);

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 12, 0, 0);
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
	if (0x40ED == 0)
	{
		WorkSetConst(0x8020, 0);
		ItemGetCount(0x01AC, 0x8020);
		if (0x8020 == 0)
		{
			MsgActorEx(1024, 13, 2, 0, 0);
			MsgWinCloseAll();
		}
		else
		{
			MsgActorEx(1024, 14, 2, 0, 0);
			MsgWinCloseAll();
			FadeEx(3, 0, 16, 3);
			FadeExWait();
			WorkSetConst(0x40ED, 1);
			FadeEx(3, 16, 0, 3);
			FadeExWait();
			MsgActorEx(1024, 11, 2, 0, 0);
			InputWaitLast();
			MsgWinCloseAll();
		}
		WorkSetConst(0x8020, 0);
	}
	else
	{
		MsgActor(1024, 11, 0, 0);
		InputWaitLast();
		MsgActorClose();
	}
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	Movement m[] = { //2
		Exclaimation, 1,
		TurnRight, 1,
	};
	ActorCmdWait();
	Movement m[] = { //255
		LookLeft, 1,
	};
	ActorCmdWait();
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x01AC, 0x8020);
	if (0x8020 == 0)
	{
		MsgActorEx(1024, 13, 2, 0, 0);
		MsgWinCloseAll();
		Movement m[] = { //255
			SlowWalkUp, 1,
		};
		ActorCmdWait();
		Movement m[] = { //2
			LookUp, 1,
		};
		ActorCmdWait();
	}
	else
	{
		MsgActorEx(1024, 14, 2, 0, 0);
		MsgWinCloseAll();
		FadeEx(3, 0, 16, 3);
		FadeExWait();
		WorkSetConst(0x40ED, 1);
		FadeEx(3, 16, 0, 3);
		FadeExWait();
		MsgActorEx(1024, 11, 2, 0, 0);
		InputWaitLast();
		MsgWinCloseAll();
	}
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	StackPushFlag(277);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	FlagSet(277);

label10: ;
	VMHalt();
}
