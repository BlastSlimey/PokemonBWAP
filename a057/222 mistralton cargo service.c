#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
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

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(572, 0);
	MsgActor(1024, 3, 0, 0);
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
	MsgActor(1024, 1, 0, 0);
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
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
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
	WorkSet(0x8002, 144);
	WorkSet(0x8003, 6);
	WorkSet(0x8004, 7);
	WorkSet(0x8005, 7);
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

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 8, 0, 0);
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
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
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

void Sequence8()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	RTCGetDate(0x8021, 0x8020);
	ItemGetCount(134, 0x8022);
	ItemCheckSpace(93, 1, 0x8023);
	WordSetItemName(0, 93);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 9, 8, 0, 0);
	StackPush(0x8022);
	StackPushConst(9);
	StackCmp(2);
	if (255) goto label0;
	MsgActorEx(1024, 10, 8, 0, 0);
	Routine0();
	goto label1;

label0: ;
	MsgActorEx(1024, 12, 8, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	MsgActorEx(1024, 14, 8, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label4;

label3: ;
	MsgActorEx(1024, 13, 8, 0, 0);
	MsgWinCloseAll();
	MsgSystem(16, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 93);
	WorkSet(0x8001, 1);
	RTCallGlobal(2802);
	StackPop(0x8001);
	StackPop(0x8000);
	ItemSub(134, 10, 0x8024);

label4: ;
	goto label5;

label2: ;
	MsgActorEx(1024, 15, 8, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label5: ;
	VMReturn();
}
