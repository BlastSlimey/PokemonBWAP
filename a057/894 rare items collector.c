#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	StackPushFlag(292);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActor(1024, 0, 0, 0);
	FlagSet(292);

label0: ;
	WorkSetConst(0x8023, 0);
	CMD_20e(0, 0x8023, 9, 0x8023, 8, 1);
	StackCmp(1);
	if (255) goto label1;
	MsgActor(1024, 1, 0, 0);
	MsgWinCloseAll();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CallBag(1, 0x8021, 0x8020);
	FieldOpen();
	CMD_1ad();
	CMD_1b1();
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	MsgActor(1024, 6, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label3;

label2: ;
	CMD_20f(0x8020, 0, 0x8022);
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label3;

label4: ;
	MoneyWinDisp(31, 1);
	CMD_249(0x8020, 0, 1, 8);
	WordSetItemName(0, 0x8020);
	MsgActorEx(1024, 2, 0, 2, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label5;
	MsgWinCloseAll();
	SEPlay(1621);
	CMD_24a(0x8020);
	VMNop();
	MoneyWinUpdate();
	MsgSystem(3, 2);
	SEWait();
	MsgWaitAdvance();
	MsgSystemClose();
	WorkSetConst(0x8024, 0);
	ItemSub(0x8020, 1, 0x8024);
	MoneyWinClose();
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label3;

label5: ;
	MoneyWinClose();
	MsgActor(1024, 6, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label3: ;
	goto label6;

label1: ;
	MsgActor(1024, 7, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label6: ;
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	StackPushFlag(293);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label7;
	MsgActor(1024, 8, 0, 0);
	FlagSet(293);

label7: ;
	WorkSetConst(0x8028, 0);
	CMD_20e(1, 0x8028, 9, 0x8028, 8, 1);
	StackCmp(1);
	if (255) goto label8;
	MsgActor(1024, 9, 0, 0);
	MsgWinCloseAll();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CallBag(1, 0x8026, 0x8025);
	FieldOpen();
	CMD_1ad();
	CMD_1b1();
	StackPush(0x8025);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	MsgActor(1024, 14, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label10;

label9: ;
	CMD_20f(0x8025, 1, 0x8027);
	StackPush(0x8027);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label11;
	MsgActor(1024, 13, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label10;

label11: ;
	MoneyWinDisp(31, 1);
	CMD_249(0x8025, 1, 1, 8);
	WordSetItemName(0, 0x8025);
	MsgActorEx(1024, 10, 8, 2, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label12;
	MsgWinCloseAll();
	SEPlay(1621);
	CMD_24a(0x8025);
	VMNop2();
	MoneyWinUpdate();
	MsgSystem(11, 2);
	SEWait();
	MsgWaitAdvance();
	MsgSystemClose();
	WorkSetConst(0x8029, 0);
	ItemSub(0x8025, 1, 0x8029);
	MoneyWinClose();
	MsgActor(1024, 12, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label10;

label12: ;
	MoneyWinClose();
	MsgActor(1024, 14, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label10: ;
	goto label13;

label8: ;
	MoneyWinClose();
	MsgActor(1024, 15, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label13: ;
	WorkSetConst(0x8029, 0);
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8025, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x802A, 0);
	WorkSetConst(0x802B, 0);
	WorkSetConst(0x802C, 0);
	WorkSetConst(0x802D, 0);
	StackPushFlag(294);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label14;
	MsgActor(1024, 16, 0, 0);
	FlagSet(294);

label14: ;
	StackPushFlag(306);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label15;
	ItemCheckCount(590, 1, 0x802D);
	StackPush(0x802D);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label16;
	WorkSetConst(0x802A, 590);
	CMD_20f(0x802A, 2, 0x802C);
	MoneyWinDisp(31, 1);
	CMD_249(0x802A, 2, 1, 8);
	WordSetItemName(0, 0x802A);
	MsgActorEx(1024, 23, 0, 2, 0);
	YesNoWin(0x8010);
	FlagSet(306);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label17;
	MsgWinCloseAll();
	SEPlay(1621);
	CMD_24a(0x802A);
	VMHalt();
	MoneyWinUpdate();
	MsgSystem(19, 2);
	SEWait();
	MsgWaitAdvance();
	MsgSystemClose();
	WorkSetConst(0x802E, 0);
	ItemSub(0x802A, 1, 0x802E);
	MoneyWinClose();
	MsgActor(1024, 20, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label18;

label17: ;
	MoneyWinClose();
	MsgActor(1024, 22, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label18: ;
	goto label19;

label16: ;
	Routine0();

label19: ;
	goto label20;

label15: ;
	Routine0();

label20: ;
	WorkSetConst(0x802E, 0);
	WorkSetConst(0x802D, 0);
	WorkSetConst(0x802C, 0);
	WorkSetConst(0x802B, 0);
	WorkSetConst(0x802A, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8034, 0);
	WorkSetConst(0x8035, 0);
	WorkSetConst(0x8036, 0);
	StackPushFlag(341);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label21;
	MsgActor(1024, 25, 0, 0);
	FlagSet(341);

label21: ;
	WorkSetConst(0x8037, 0);
	CMD_20e(3, 0x8037, 9, 0x8037, 8, 1);
	StackCmp(1);
	if (255) goto label22;
	MsgActor(1024, 26, 0, 0);
	MsgWinCloseAll();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CallBag(1, 0x8035, 0x8034);
	FieldOpen();
	CMD_1ad();
	CMD_1b1();
	StackPush(0x8034);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label23;
	MsgActor(1024, 31, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label24;

label23: ;
	CMD_20f(0x8034, 3, 0x8036);
	StackPush(0x8036);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label25;
	MsgActor(1024, 30, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label24;

label25: ;
	MoneyWinDisp(31, 1);
	CMD_249(0x8034, 3, 1, 8);
	WordSetItemName(0, 0x8034);
	MsgActorEx(1024, 27, 1, 2, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label26;
	MsgWinCloseAll();
	SEPlay(1621);
	CMD_24a(0x8034);
	VMSleep(66);
	MsgSystem(28, 2);
	SEWait();
	MsgWaitAdvance();
	MsgSystemClose();
	WorkSetConst(0x8038, 0);
	ItemSub(0x8034, 1, 0x8038);
	MoneyWinClose();
	MsgActor(1024, 29, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label24;

label26: ;
	MoneyWinClose();
	MsgActor(1024, 31, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label24: ;
	goto label27;

label22: ;
	MsgActor(1024, 32, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label27: ;
	WorkSetConst(0x8038, 0);
	WorkSetConst(0x8037, 0);
	WorkSetConst(0x8036, 0);
	WorkSetConst(0x8035, 0);
	WorkSetConst(0x8034, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x802F, 0);
	WorkSetConst(0x8030, 0);
	WorkSetConst(0x8031, 0);
	WorkSetConst(0x8032, 0);
	CMD_20e(2, 0x8032, 9, 0x8032, 8, 1);
	StackCmp(1);
	if (255) goto label28;
	MsgActor(1024, 17, 0, 0);
	MsgWinCloseAll();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CallBag(1, 0x8030, 0x802F);
	FieldOpen();
	CMD_1ad();
	CMD_1b1();
	StackPush(0x802F);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label29;
	MsgActor(1024, 22, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label30;

label29: ;
	CMD_20f(0x802F, 2, 0x8031);
	StackPush(0x8031);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label31;
	MsgActor(1024, 21, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label30;

label31: ;
	MoneyWinDisp(31, 1);
	CMD_249(0x802F, 2, 1, 8);
	WordSetItemName(0, 0x802F);
	MsgActorEx(1024, 18, 0, 2, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label32;
	MsgWinCloseAll();
	SEPlay(1621);
	CMD_24a(0x802F);
	VMHalt();
	MoneyWinUpdate();
	MsgSystem(19, 2);
	SEWait();
	MsgWaitAdvance();
	MsgSystemClose();
	WorkSetConst(0x8033, 0);
	ItemSub(0x802F, 1, 0x8033);
	MoneyWinClose();
	MsgActor(1024, 20, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label30;

label32: ;
	MoneyWinClose();
	MsgActor(1024, 22, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label30: ;
	goto label33;

label28: ;
	MsgActor(1024, 24, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label33: ;
	WorkSetConst(0x8033, 0);
	WorkSetConst(0x8032, 0);
	WorkSetConst(0x8031, 0);
	WorkSetConst(0x8030, 0);
	WorkSetConst(0x802F, 0);
	VMReturn();
}
