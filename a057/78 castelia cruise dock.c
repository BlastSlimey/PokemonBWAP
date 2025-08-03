#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	CMD_1b5();
	FadeExWait();

	Movement m[] = { //0
		TurnRight, 1,
		LookDown, 1,
		LockDirection, 1,
		WalkUp, 1,
		UnlockDirection, 1,
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		WalkLeft, 2,
		LookRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		WalkDown, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();
	StackPush(0x4135);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label0;
	MsgActorEx(1024, 12, 0, 0, 0);
	MsgWinCloseAll();
	WorkSetConst(0x8020, 0);
	RTCGetWeekDay(0x8020);
	WorkCmpConst(0x8020, 1);
	if (1) goto label1;
	goto label2;

label1: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label0;

label2: ;
	WorkCmpConst(0x8020, 2);
	if (1) goto label3;
	goto label4;

label3: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label0;

label4: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label5;
	goto label6;

label5: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label0;

label6: ;
	WorkCmpConst(0x8020, 4);
	if (1) goto label7;
	goto label8;

label7: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label0;

label8: ;
	WorkCmpConst(0x8020, 5);
	if (1) goto label9;
	goto label10;

label9: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label0;

label10: ;
	WorkCmpConst(0x8020, 6);
	if (1) goto label11;
	goto label12;

label11: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label0;

label12: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label13;
	goto label0;

label13: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label0;

label0: ;
	FlagSet(0x198);
	MsgActorEx(1024, 10, 0, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x4135, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	StackPushFlag(2400);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label14;
	StackPushFlag(2754);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label15;
	RTCGetDayPart(0x8021);
	StackPush(0x8021);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label16;
	MoneyWinDisp(31, 1);
	MsgActorEx(1024, 0, 0, 2, 0);
	WorkSetConst(0x8024, 0);

label31: ;
	StackPush(0x8024);
	StackPushConst(1);
	StackCmp(5);
	if (255) goto label17;
	ListMenuInitTR(31, 5, 0, 1, 0x8023);
	ListMenuAdd(14, 0xFFFF, 0);
	ListMenuAdd(15, 0xFFFF, 1);
	ListMenuAdd(16, 0xFFFF, 2);
	ListMenuShow();
	WorkCmpConst(0x8023, 0);
	if (1) goto label18;
	goto label19;

label18: ;
	WorkSetConst(0x8024, 1);
	MoneyCheck(0x8022, 1000);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label20;
	WorkSetConst(0x8025, 0);
	CMD_25d(0x8025);
	StackPush(0x8025);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label21;
	MsgActorEx(1024, 7, 0, 2, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label22;
	Routine0();
	goto label23;

label22: ;
	MoneyWinClose();
	MsgActorEx(1024, 9, 0, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();

label23: ;
	goto label24;

label21: ;
	Routine0();

label24: ;
	goto label25;

label20: ;
	MoneyWinClose();
	MsgActorEx(1024, 3, 0, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();

label25: ;
	goto label26;

label19: ;
	WorkCmpConst(0x8023, 1);
	if (1) goto label27;
	goto label28;

label27: ;
	Routine1();
	goto label26;

label28: ;
	WorkCmpConst(0x8023, 2);
	if (1) goto label29;
	goto label30;

label29: ;
	MoneyWinClose();
	WorkSetConst(0x8024, 1);
	MsgActorEx(1024, 9, 0, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label26;

label30: ;
	MoneyWinClose();
	WorkSetConst(0x8024, 1);
	MsgActorEx(1024, 9, 0, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();

label26: ;
	goto label31;

label17: ;
	goto label32;

label16: ;
	MsgActorEx(1024, 2, 0, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();

label32: ;
	goto label33;

label15: ;
	MsgActorEx(1024, 11, 0, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();

label33: ;
	goto label34;

label14: ;
	MsgActorEx(1024, 13, 0, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();

label34: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	MoneySub(1000);
	MoneyWinUpdate();
	SEPlay(1621);
	SEWait();
	CMD_25e();
	MsgActorEx(1024, 8, 0, 2, 0);
	MsgWinCloseAll();
	MoneyWinClose();
	PlayerGetExState(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label35;
	PlayerSetSpecialSequence(1);

label35: ;

	Movement m[] = { //0
		LookDown, 1,
		LockDirection, 1,
		WalkUp, 1,
		UnlockDirection, 1,
		TurnDown, 1,
	};


	Movement m[] = { //255
		Wait16, 1,
		WalkRight, 3,
	};

	ActorCmdWait();
	WorkSetConst(0x4135, 0);
	FlagSet(2754);
	RTReserveScript(29);
	MapChangeWarp(52, 29, 29, 0);
	VMReturn();
}

void Routine1()
{
	MsgActorEx(1024, 1, 0, 2, 0);
	MsgActorEx(1024, 5, 0, 2, 0);
	MsgActorEx(1024, 6, 0, 2, 0);
	MsgActorEx(1024, 4, 0, 2, 0);
	VMReturn();
}
