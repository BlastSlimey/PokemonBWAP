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
	MsgActor(1024, 1, 0, 0);
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
	StackPushFlag(366);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	PokePartyGetMemberByType(0x8008, 2);
	PokePartySetHappiness(0x8009, 0x8008);
	StackPush(0x8009);
	StackPushConst(70);
	StackCmp(4);
	if (255) goto label1;
	WordSetPartyPokeSpecies(0, 0x8008);
	MsgActor(1024, 2, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(366);
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label2;

label1: ;
	WordSetPartyPokeSpecies(0, 0x8008);
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label2: ;
	goto label3;

label0: ;
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
