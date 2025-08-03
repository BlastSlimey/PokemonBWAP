#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(250);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActorEx(1024, 0, 0, 0, 0);
	FlagSet(250);

label0: ;
	MsgActorEx(1024, 1, 0, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActorEx(1024, 3, 0, 0, 0);
	MsgActorClose();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	CallPokeSelect(0x8021, 0x8020, 0);
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	WorkSetConst(0x8022, 0);
	PokePartyIsEgg(0x8022, 0x8020);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	MsgActorEx(1024, 6, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label4;

label3: ;
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	PokePartyGetParam(0x8023, 0x8020, 153);
	PokePartyGetParam(0x8024, 0x8020, 158);
	WordSetPartyPokeSpecies(0, 0x8020);
	WordSetNumber(1, 0x8023, 3);
	WordSetNumber(2, 0x8024, 3);
	WorkSub(0x8024, 0x8023);
	MsgActorEx(1024, 7, 0, 0, 0);
	StackPush(0x8024);
	StackPushConst(99);
	StackCmp(1);
	if (255) goto label5;
	MsgActorEx(1024, 8, 0, 0, 0);
	StackPushFlag(253);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(253);
	MsgActorEx(1024, 12, 0, 0, 0);
	goto label7;

label6: ;
	MsgActorEx(1024, 13, 0, 0, 0);

label7: ;
	goto label8;

label5: ;
	StackPush(0x8024);
	StackPushConst(50);
	StackCmp(4);
	if (255) goto label9;
	MsgActorEx(1024, 9, 0, 0, 0);
	StackPushFlag(252);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(252);
	MsgActorEx(1024, 12, 0, 0, 0);
	goto label11;

label10: ;
	MsgActorEx(1024, 13, 0, 0, 0);

label11: ;
	goto label8;

label9: ;
	StackPush(0x8024);
	StackPushConst(25);
	StackCmp(4);
	if (255) goto label12;
	MsgActorEx(1024, 10, 0, 0, 0);
	StackPushFlag(251);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label13;
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(251);
	MsgActorEx(1024, 12, 0, 0, 0);
	goto label14;

label13: ;
	MsgActorEx(1024, 13, 0, 0, 0);

label14: ;
	goto label8;

label12: ;
	StackPush(0x8024);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label15;
	MsgActorEx(1024, 14, 0, 0, 0);
	goto label8;

label15: ;
	StackPush(0x8024);
	StackPushConst(1);
	StackCmp(4);
	if (255) goto label16;
	MsgActorEx(1024, 11, 0, 0, 0);
	MsgActorEx(1024, 13, 0, 0, 0);
	goto label8;

label16: ;
	MsgActorEx(1024, 5, 0, 0, 0);

label8: ;
	InputWaitLast();
	MsgActorClose();

label4: ;
	goto label17;

label2: ;
	MsgActorEx(1024, 2, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label17: ;
	goto label18;

label1: ;
	MsgActorEx(1024, 2, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label18: ;
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 15, 1, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label19;
	MsgActorClose();
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	CallPokeSelect(0x8027, 0x8026, 0);
	StackPush(0x8027);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label20;
	WorkSetConst(0x8028, 0);
	PokePartyIsEgg(0x8028, 0x8026);
	StackPush(0x8028);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label21;
	MsgActorEx(1024, 17, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label22;

label21: ;
	WordSetPartyPokeSpecies(0, 0x8026);
	MsgActorEx(1024, 18, 1, 0, 0);
	WorkSetConst(0x8029, 0);
	PokePartySetHappiness(0x8029, 0x8026);
	StackPush(0x8029);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label23;
	MsgActorEx(1024, 25, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label22;

label23: ;
	StackPush(0x8029);
	StackPushConst(255);
	StackCmp(1);
	if (255) goto label24;
	MsgActorEx(1024, 19, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label22;

label24: ;
	StackPush(0x8029);
	StackPushConst(200);
	StackCmp(4);
	if (255) goto label25;
	MsgActorEx(1024, 20, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label22;

label25: ;
	StackPush(0x8029);
	StackPushConst(150);
	StackCmp(4);
	if (255) goto label26;
	MsgActorEx(1024, 21, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label22;

label26: ;
	StackPush(0x8029);
	StackPushConst(100);
	StackCmp(4);
	if (255) goto label27;
	MsgActorEx(1024, 22, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label22;

label27: ;
	StackPush(0x8029);
	StackPushConst(50);
	StackCmp(4);
	if (255) goto label28;
	MsgActorEx(1024, 23, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label22;

label28: ;
	MsgActorEx(1024, 24, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label22: ;
	goto label29;

label20: ;
	MsgActorEx(1024, 26, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label29: ;
	goto label30;

label19: ;
	MsgActorEx(1024, 26, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label30: ;
	WorkSetConst(0x8029, 0);
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8026, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(517, 0);
	MsgActor(1024, 27, 0, 0);
	PVWait();
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
	PVPlay(552, 0);
	MsgActor(1024, 28, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
