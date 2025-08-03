#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 0, 0, 0);
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
	MsgActor(1024, 2, 0, 0);
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
	MsgActor(1024, 3, 0, 0);
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
	MsgActor(1024, 13, 0, 0);
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
	MsgActor(1024, 14, 0, 0);
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
	MsgInfo(15, 1);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 16, 0, 0);
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
	StackPushFlag(262);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActorEx(1024, 17, 7, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActorEx(1024, 18, 7, 0, 0);
	goto label2;

label1: ;
	MsgActorEx(1024, 19, 7, 0, 0);

label2: ;
	MsgActorEx(1024, 20, 7, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(262);
	goto label3;

label0: ;
	MsgActorEx(1024, 21, 7, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(22, 2);
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
	ActorSetEyeToEye();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 16);
	WorkSet(0x8001, 1);
	RTCallGlobal(10110);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 17);
	WorkSet(0x8001, 2);
	RTCallGlobal(10110);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 18);
	WorkSet(0x8001, 1);
	RTCallGlobal(10110);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 19);
	WorkSet(0x8001, 1);
	RTCallGlobal(10110);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 13);
	WorkSet(0x8001, 1);
	RTCallGlobal(10110);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MoneyWinDisp(10, 1);
	MsgActor(1024, 23, 2, 0);
label_loop: ;
	ListMenuInitTR(31, 1, 0, 1, 0x8010);
	ListMenuAdd(25, 0xFFFF, 0x00DD);
	ListMenuAdd(26, 0xFFFF, 0x0141);
	ListMenuAdd(27, 0xFFFF, 0x00EB);
	ListMenuAdd(28, 0xFFFF, 0x0145);
	ListMenuAdd(29, 0xFFFF, 0x006E);
	ListMenuAdd(30, 0xFFFF, 0);
	ListMenuShow();
	if (0x8010 == 0)
	{
		MsgActor(1024, 33, 0, 0);
	}
	else
	{
		WordSetItemNameWithArticle(0, 0x8010);
		MsgActor(1024, 31, 0, 0);
		YesNoWin(0x8011);
		if (0x8011 == 0)
		{
			MoneyCheck(0x8011, 500);
			if (0x8011 == 1)
			{
				MEPlay(1621);
				MoneySub(500);
				MoneyWinUpdate();
				StackPush(0x8000);
				StackPush(0x8007);
				WorkGet(0x8000, 0x8010);
				WorkSet(0x8007, 2);
				RTCallGlobal(2815);
				StackPop(0x8007);
				StackPop(0x8000);
				MsgActor(1024, 32, 0, 0);
				InputWaitLast();
				MsgActorClose();
			}
			else
			{
				MsgActor(1024, 34, 0, 0);
				InputWaitLast();
				MsgActorClose();
			}
		}
		else
		{
			goto label_loop;
		}

	}
	MoneyWinClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
