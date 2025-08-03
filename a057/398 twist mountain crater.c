#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	Random(0x8021, 2);
	if (0x8021 == 0)
	{
		WorkSetConst(0x8022, 0x0050);
		MsgActor(1024, 4, 0, 0);
	}
	else
	{
		WorkSetConst(0x8022, 0x0051);
		MsgActor(1024, 5, 0, 0);
	}
	YesNoWin(0x8010);
	if (0x8010 == 1)
	{
		MsgActor(1024, 6, 0, 0);
		InputWaitLast();
		MsgActorClose();
	}
	else
	{
		MoneyCheck(0x8010, 1000);
		if (0x8010 == 0)
		{
			MsgActor(1024, 8, 0, 0);
			InputWaitLast();
			MsgActorClose();
		}
		else
		{
			MsgActorClose();
			WordSetPlayerName(0);
			WordSetItemNameWithArticle(1, 0x8022);
			MEPlay(1304);
			MoneySub(1000);
			MsgSystem(10, 2);
			StackPush(0x8000);
			StackPush(0x8007);
			WorkGet(0x8000, 0x8022);
			WorkSet(0x8007, 2);
			RTCallGlobal(2815);
			StackPop(0x8007);
			StackPop(0x8000);
			MEWait();
			InputWaitLast();
			MsgSystemClose();
			MsgActor(1024, 7, 0, 0);
			InputWaitLast();
			MsgActorClose();
		}
	}
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
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

void Sequence2()
{
	WorkSetConst(0x8020, 0);
	RTCGetSeason(0x8020);
	FlagSet(821);
	StackPush(0x8020);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label2;
	FlagReset(821);

label2: ;
	WorkSetConst(0x8020, 0);
	VMHalt();
}
