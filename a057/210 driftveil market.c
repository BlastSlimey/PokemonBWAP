#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 0, 0, 0, 0);
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 14);
	WorkSet(0x8001, 0);
	RTCallGlobal(10110);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
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

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(365);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActorEx(1024, 12, 2, 0, 0);
	WorkSetConst(0x8020, 0);
	YesNoWin(0x8020);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActorEx(1024, 13, 2, 0, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	PokePartyGetCount(0x8021, 0);

label4: ;
	StackPush(0x8021);
	StackPush(0x8022);
	StackCmp(2);
	if (255) goto label2;
	PokePartyGetParam(0x8023, 0x8022, 158);
	StackPush(0x8023);
	StackPushConst(30);
	StackCmp(4);
	if (255) goto label3;
	WorkAdd(0x8024, 1);

label3: ;
	WorkAdd(0x8022, 1);
	goto label4;

label2: ;
	StackPush(0x8024);
	StackPushConst(1);
	StackCmp(4);
	if (255) goto label5;
	MsgActorEx(1024, 14, 2, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(365);
	goto label6;

label5: ;
	MsgActorEx(1024, 15, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();

label6: ;
	goto label7;

label1: ;
	MsgActorEx(1024, 16, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();

label7: ;
	goto label8;

label0: ;
	MsgActorEx(1024, 17, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();

label8: ;
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 18, 19, 6, 0, 0);
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
	MsgActorVersioned(1024, 20, 21, 4, 0, 0);
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
	MsgActorVersioned(1024, 22, 23, 5, 0, 0);
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
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8029, 0);
	MoneyWinDisp(31, 1);
	MsgActorEx(1024, 2, 1, 4, 0);
	ListMenuInitTR(31, 5, 0, 1, 0x8026);
	ListMenuAdd(8, 0xFFFF, 0);
	ListMenuAdd(9, 0xFFFF, 1);
	ListMenuAdd(10, 0xFFFF, 2);
	ListMenuShow();
	StackPush(0x8026);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	WorkSetConst(0x8025, 1);
	WorkSetConst(0x8027, 500);
	goto label10;

label9: ;
	StackPush(0x8026);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	WorkSetConst(0x8025, 12);
	WorkSetConst(0x8027, 6000);
	goto label10;

label10: ;
	StackPush(0x8026);
	StackPushConst(0);
	StackCmp(1);
	StackPush(0x8026);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label11;
	ItemCheckSpace(33, 0x8025, 0x8029);
	MoneyCheck(0x8028, 0x8027);
	StackPush(0x8029);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label12;
	MoneyWinClose();
	MsgActorEx(1024, 4, 1, 4, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label13;

label12: ;
	StackPush(0x8028);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label14;
	MoneyWinClose();
	MsgActorEx(1024, 5, 1, 4, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label13;

label14: ;
	SEPlay(1621);
	MoneySub(0x8027);
	MoneyWinUpdate();
	SEWait();
	StackPush(0x8025);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label15;
	MsgActorEx(1024, 3, 1, 4, 0);
	MsgWinCloseAll();
	goto label16;

label15: ;
	MsgActorEx(1024, 7, 1, 4, 0);
	MsgWinCloseAll();

label16: ;
	MoneyWinClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 33);
	WorkSet(0x8001, 0x8025);
	RTCallGlobal(2802);
	StackPop(0x8001);
	StackPop(0x8000);

label13: ;
	goto label17;

label11: ;
	MoneyWinClose();
	MsgActorEx(1024, 6, 1, 4, 0);
	InputWaitLast();
	MsgWinCloseAll();

label17: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 24, 8, 0, 0);
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 15);
	WorkSet(0x8001, 0);
	RTCallGlobal(10110);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
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
