#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(193);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	WorkSetConst(0x8020, 0);
	MsgActorEx(1024, 0, 0, 0, 0);
	YesNoWin(0x8020);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	Routine0();
	goto label2;

label1: ;
	MsgActorEx(1024, 4, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label2: ;
	FlagSet(193);
	goto label3;

label0: ;
	StackPushFlag(2740);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	StackPushFlag(2739);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label5;
	WorkSetConst(0x8021, 0);
	MsgActorEx(1024, 1, 0, 0, 0);
	YesNoWin(0x8021);
	StackPush(0x8021);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	Routine0();
	goto label7;

label6: ;
	MsgActorEx(1024, 4, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label7: ;
	goto label8;

label5: ;
	Routine0();

label8: ;
	goto label3;

label4: ;
	WordSetMoveName(0, 0x413B);
	MsgActorEx(1024, 7, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
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

void Routine0()
{
	StackPushFlag(2739);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	CMD_238(0x413B);
	FlagSet(2739);
	WordSetMoveName(0, 0x413B);
	WorkSetConst(0x8022, 0);
	PokePartyHasMoveAny(0x8022, 0x413B);
	DebugPrint(0x8022);
	DebugPrint(0x413B);
	StackPush(0x8022);
	StackPushConst(6);
	StackCmp(1);
	if (255) goto label10;
	MsgActorEx(1024, 2, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label11;

label10: ;
	WordSetPartyPokeSpecies(1, 0x8022);
	MsgActorEx(1024, 3, 0, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 93);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	WordSetMoveName(0, 0x413B);
	MsgActorEx(1024, 7, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(2740);

label11: ;
	WorkSetConst(0x8022, 0);
	goto label12;

label9: ;
	WordSetMoveName(0, 0x413B);
	WorkSetConst(0x8023, 0);
	PokePartyHasMoveAny(0x8023, 0x413B);
	DebugPrint(0x8023);
	DebugPrint(0x413B);
	StackPush(0x8023);
	StackPushConst(6);
	StackCmp(1);
	if (255) goto label13;
	MsgActorEx(1024, 2, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label14;

label13: ;
	WordSetPartyPokeSpecies(1, 0x8023);
	MsgActorEx(1024, 6, 0, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(2740);
	WordSetMoveName(0, 0x413B);
	MsgActorEx(1024, 7, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label14: ;
	WorkSetConst(0x8023, 0);

label12: ;
	VMReturn();
}
