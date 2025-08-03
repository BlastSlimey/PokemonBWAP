#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(2, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(3, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x01D8, 0x8020);
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(4);
	if (255) goto label3a;
	goto label3b;

label3a: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();

label3b: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 4, 0, 0);
	MsgActorClose();
	FadeEx(3, 0, 16, 3);
	FadeExWait();
	ActorDelete(8);
	ActorDelete(12);
	FlagSet(0x180);
	FadeEx(3, 16, 0, 3);
	FadeExWait();
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x01D8, 0x8020);
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(4);
	if (255) goto label3; // jump if not collected
	goto label4;

label3: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();

label4: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 4, 0, 0);
	MsgActorClose();
	FadeEx(3, 0, 16, 3);
	FadeExWait();
	ActorDelete(8);
	ActorDelete(12);
	FlagSet(0x180);
	FadeEx(3, 16, 0, 3);
	FadeExWait();
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	VMHalt();
}
