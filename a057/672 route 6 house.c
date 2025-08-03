#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 0, 1, 0, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x4000);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActor(1024, 6, 0, 0);
	MsgWinCloseAll();
	FadeEx(3, 0, 16, 2);
	FadeExWait();
	PokePartyRecoverAll();
	MEPlay(1300);
	MEWait();
	FadeEx(3, 16, 0, 2);
	FadeExWait();
	WorkSetConst(0x4000, 1);
	goto label1;

label0: ;
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(261);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	MsgActorGendered(1024, 2, 3, 1, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(261);
	goto label3;

label2: ;
	MsgActorEx(1024, 4, 1, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
