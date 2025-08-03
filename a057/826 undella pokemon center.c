#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 255);
	WorkSet(0x8001, 1);
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
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 11);
	WorkSet(0x8001, 1);
	RTCallGlobal(10110);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	StackPushFlag(359);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8020, 0);
	TrainerCardGetSex(0x8020);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActorEx(1024, 0, 7, 0, 0);
	MsgActorClose();
	goto label2;

label1: ;
	MsgActorEx(1024, 1, 7, 0, 0);
	MsgActorClose();

label2: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(359);
	MsgActorEx(1024, 2, 7, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label3;

label0: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();

label3: ;
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
