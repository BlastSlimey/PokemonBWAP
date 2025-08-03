#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	StackPush(0x8002);
	StackPush(0x8003);
	StackPush(0x8004);
	StackPush(0x8005);
	StackPush(0x8006);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	WorkSet(0x8002, 109);
	WorkSet(0x8003, 0);
	WorkSet(0x8004, 1);
	WorkSet(0x8005, 1);
	RTGetTextFile(0x8006);
	RTCallGlobal(2800);
	StackPop(0x8006);
	StackPop(0x8005);
	StackPop(0x8004);
	StackPop(0x8003);
	StackPop(0x8002);
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
	PVPlay(504, 0);
	MsgActor(1024, 2, 0, 0);
	PVWait();
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
	MsgActorEx(1024, 3, 2, 2, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	PlayerGetDir(0x8010);
	WorkCmpConst(0x8010, 0);
	if (1) goto label1;
	goto label2;

label1: ;
	WorkSetConst(0x8022, 12);
	WorkSetConst(0x8023, 14);
	WorkSetConst(0x8024, 18);
	WorkSetConst(0x8025, 8);
	goto label3;

label2: ;
	WorkCmpConst(0x8010, 1);
	if (1) goto label4;
	goto label5;

label4: ;
	WorkSetConst(0x8022, 18);
	WorkSetConst(0x8023, 8);
	WorkSetConst(0x8024, 12);
	WorkSetConst(0x8025, 14);
	goto label3;

label5: ;
	WorkCmpConst(0x8010, 2);
	if (1) goto label6;
	goto label7;

label6: ;
	WorkSetConst(0x8022, 18);
	WorkSetConst(0x8023, 8);
	WorkSetConst(0x8024, 9);
	WorkSetConst(0x8025, 8);
	goto label3;

label7: ;
	WorkSetConst(0x8022, 8);
	WorkSetConst(0x8023, 8);
	WorkSetConst(0x8024, 20);
	WorkSetConst(0x8025, 8);

label3: ;
	MsgActorEx(1024, 5, 2, 2, 0);
	ListMenuInitTR(31, 1, 0, 0, 0x8021);
	ListMenuAdd(12, 0xFFFF, 0);
	ListMenuAdd(13, 0xFFFF, 1);
	ListMenuAdd(14, 0xFFFF, 2);
	ListMenuShow();
	MsgActorClose();
	Random(0x8020, 2);
	WorkCmpConst(0x8021, 0);
	if (1) goto label8;
	goto label9;

label8: ;
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	MsgMulti(12, 0x8022, 0x8023, 0);
	VMSleep(15);
	MsgMulti(13, 0x8024, 0x8025, 1);
	VMSleep(30);
	MsgWinCloseNo(0);
	MsgWinCloseNo(1);
	MsgActorEx(1024, 6, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();
	goto label11;

label10: ;
	MsgMulti(12, 0x8022, 0x8023, 0);
	VMSleep(15);
	MsgMulti(14, 0x8024, 0x8025, 1);
	VMSleep(30);
	MsgWinCloseNo(0);
	MsgWinCloseNo(1);
	MsgActorEx(1024, 7, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();

label11: ;
	goto label12;

label9: ;
	WorkCmpConst(0x8021, 1);
	if (1) goto label13;
	goto label14;

label13: ;
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label15;
	MsgMulti(13, 0x8022, 0x8023, 0);
	VMSleep(15);
	MsgMulti(14, 0x8024, 0x8025, 1);
	VMSleep(30);
	MsgWinCloseNo(0);
	MsgWinCloseNo(1);
	MsgActorEx(1024, 10, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();
	goto label16;

label15: ;
	MsgMulti(13, 0x8022, 0x8023, 0);
	VMSleep(15);
	MsgMulti(12, 0x8024, 0x8025, 1);
	VMSleep(30);
	MsgWinCloseNo(0);
	MsgWinCloseNo(1);
	MsgActorEx(1024, 11, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();

label16: ;
	goto label12;

label14: ;
	WorkCmpConst(0x8021, 2);
	if (1) goto label17;
	goto label12;

label17: ;
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label18;
	MsgMulti(14, 0x8022, 0x8023, 0);
	VMSleep(15);
	MsgMulti(12, 0x8024, 0x8025, 1);
	VMSleep(30);
	MsgWinCloseNo(0);
	MsgWinCloseNo(1);
	MsgActorEx(1024, 8, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();
	goto label19;

label18: ;
	MsgMulti(14, 0x8022, 0x8023, 0);
	VMSleep(15);
	MsgMulti(13, 0x8024, 0x8025, 1);
	VMSleep(30);
	MsgWinCloseNo(0);
	MsgWinCloseNo(1);
	MsgActorEx(1024, 9, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();

label19: ;
	goto label12;

label12: ;
	goto label20;

label0: ;
	MsgActorEx(1024, 4, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();

label20: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
