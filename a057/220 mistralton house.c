#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 1, 0, 2, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	FlagGet(0x177, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label1;

label0: ;
	StackPushFlag(181);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label1;

label2: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	FlagGet(0x177, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label4;

label3: ;
	StackPushFlag(181);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label5;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 6, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagReset(662);
	goto label4;

label5: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 7, 0, 0);
	InputWaitLast();
	MsgActorClose();

label4: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
