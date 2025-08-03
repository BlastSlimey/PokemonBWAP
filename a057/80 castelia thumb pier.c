#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WorkSetConst(0x4000, 1);
	SEPlay(1351);
	ActorSetEyeToEye();
	MoneyWinDisp(10, 1);
	MsgActor(1024, 16, 2, 0);
	ListMenuInitTR(31, 1, 0, 0, 0x8010);
	ListMenuAdd(17, 0xFFFF, 0x0055);
	ListMenuAdd(18, 0xFFFF, 0x0052);
	ListMenuAdd(19, 0xFFFF, 0x0054);
	ListMenuAdd(8, 0xFFFF, 0);
	ListMenuShow();
	if (0x8010 == 0)
	{
		MsgActor(1024, 21, 2, 0);
		InputWaitLast();
		MsgActorClose();
	}
	else
	{
		MsgActor(1024, 22, 2, 0);
		YesNoWin(0x8011);
		if (0x8011 == 0)
		{
			MoneyCheck(0x8011, 1000);
			if (0x8011 == 1)
			{
				MsgActorClose();
				WordSetPlayerName(0);
				WordSetItemNameWithArticle(1, 0x8010);
				MEPlay(1621);
				MoneySub(1000);
				MoneyWinUpdate();
				StackPush(0x8000);
				StackPush(0x8007);
				WorkGet(0x8000, 0x8010);
				WorkSet(0x8007, 2);
				RTCallGlobal(2815);
				StackPop(0x8007);
				StackPop(0x8000);
				MsgSystem(20, 2);
				MEWait();
				MsgWinCloseAll();
				MsgActor(1024, 21, 2, 0);
				InputWaitLast();
				MsgActorClose();
			}
			else
			{
				MsgActor(1024, 15, 2, 0);
				InputWaitLast();
				MsgActorClose();
			}
		}
		else
		{
			MsgActor(1024, 21, 2, 0);
			InputWaitLast();
			MsgActorClose();
		}
	}
	MoneyWinClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	RTCGetDate(0x8020, 0x8021);
	WorkCmpConst(0x8021, 2);
	if (1) goto label0;
	WorkCmpConst(0x8021, 4);
	if (1) goto label0;
	WorkCmpConst(0x8021, 6);
	if (1) goto label0;
	WorkCmpConst(0x8021, 8);
	if (1) goto label0;
	WorkCmpConst(0x8021, 10);
	if (1) goto label0;
	WorkCmpConst(0x8021, 12);
	if (1) goto label0;
	WorkCmpConst(0x8021, 14);
	if (1) goto label0;
	WorkCmpConst(0x8021, 16);
	if (1) goto label0;
	WorkCmpConst(0x8021, 18);
	if (1) goto label0;
	WorkCmpConst(0x8021, 20);
	if (1) goto label0;
	WorkCmpConst(0x8021, 22);
	if (1) goto label0;
	WorkCmpConst(0x8021, 24);
	if (1) goto label0;
	WorkCmpConst(0x8021, 26);
	if (1) goto label0;
	WorkCmpConst(0x8021, 28);
	if (1) goto label0;
	WorkCmpConst(0x8021, 30);
	if (1) goto label0;
	goto label1;

label0: ;
	WorkSetConst(0x4001, 1);
	goto label2;

label1: ;
	WorkSetConst(0x4001, 0);

label2: ;
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	VMHalt();
}

void Sequence2()
{
	StackPush(0x4001);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	BMSetVisible(8, 12, 25, 0);

label3: ;
	VMHalt();
}

void Sequence3()
{
	StackPush(0x4001);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label4;
	BMSetVisible(8, 12, 25, 0);

label4: ;
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	WorkSetConst(0x4000, 1);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(269);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label5;
	MsgActorEx(1024, 4, 1, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label6;

label5: ;
	WorkSetConst(0x8022, 0);
	MsgActorEx(1024, 0, 1, 2, 0);

label14: ;
	StackPush(0x4000);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	ListMenuInitTR(31, 1, 0, 1, 0x8010);
	ListMenuAdd(5, 0xFFFF, 1);
	ListMenuAdd(6, 0xFFFF, 2);
	ListMenuAdd(7, 0xFFFF, 3);
	ListMenuAdd(8, 0xFFFF, 0);
	ListMenuShow();
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(0);
	StackPush(0x8010);
	StackPushConst(3);
	StackCmp(2);
	StackCmp(6);
	if (255) goto label8;
	WorkSetConst(0x8010, 0);

label8: ;
	WorkSetConst(0x4000, 0);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	MsgActorEx(1024, 9, 1, 2, 0);
	YesNoWin(0x4000);
	goto label10;

label9: ;
	StackPush(0x8010);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label11;
	MsgActorEx(1024, 10, 1, 2, 0);
	YesNoWin(0x4000);
	goto label10;

label11: ;
	StackPush(0x8010);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label12;
	MsgActorEx(1024, 11, 1, 2, 0);
	YesNoWin(0x4000);
	goto label10;

label12: ;
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	MsgActorEx(1024, 13, 1, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();

label10: ;
	StackPush(0x4000);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label13;
	MsgActorEx(1024, 12, 1, 2, 0);

label13: ;
	goto label14;

label7: ;
	WorkCmpConst(0x8010, 1);
	if (1) goto label15;
	goto label16;

label15: ;
	MsgActorEx(1024, 1, 1, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(269);
	MsgActorEx(1024, 4, 1, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label6;

label16: ;
	WorkCmpConst(0x8010, 2);
	if (1) goto label17;
	goto label18;

label17: ;
	MsgActorEx(1024, 2, 1, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(269);
	MsgActorEx(1024, 4, 1, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label6;

label18: ;
	WorkCmpConst(0x8010, 3);
	if (1) goto label19;
	goto label6;

label19: ;
	MsgActorEx(1024, 3, 1, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(269);
	MsgActorEx(1024, 4, 1, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label6;

label6: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
