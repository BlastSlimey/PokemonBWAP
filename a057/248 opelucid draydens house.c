#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	StackPushFlag(2400);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 1, 2, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label1;

label0: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
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
	WorkSet(0x8002, 324);
	WorkSet(0x8003, 3);
	WorkSet(0x8004, 4);
	WorkSet(0x8005, 4);
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

void Sequence2()
{
	ActorPauseAll();
	StackPushFlag(325);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 5, 2, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	MsgActorEx(1024, 7, 2, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(325);
	MsgActorEx(1024, 8, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label4;

label3: ;
	MsgActorEx(1024, 6, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();

label4: ;
	goto label5;

label2: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 8, 0, 0);
	InputWaitLast();
	MsgActorClose();

label5: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
