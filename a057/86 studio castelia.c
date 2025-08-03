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
	MsgInfo(2, 2);
	InputWaitLast();
	MsgInfoClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(3, 2);
	InputWaitLast();
	MsgInfoClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(4, 2);
	InputWaitLast();
	MsgInfoClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(5, 2);
	InputWaitLast();
	MsgInfoClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(6, 2);
	InputWaitLast();
	MsgInfoClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(7, 2);
	InputWaitLast();
	MsgInfoClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(2732);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	Random(0x4137, 16);
	FlagSet(2732);

label0: ;
	WordSetPokeTypeName(0, 0x4137);
	StackPushFlag(2733);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActorEx(1024, 8, 2, 2, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	MsgActorEx(1024, 9, 2, 2, 0);
	MsgActorClose();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	CallPokeSelect(0x8021, 0x8020, 0);
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	WorkSetConst(0x8022, 0);
	PokePartyIsEgg(0x8022, 0x8020);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label4;
	MsgActorEx(1024, 21, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();
	goto label5;

label4: ;
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	PokePartyGetTypes(0x8023, 0x8024, 0x8020);
	StackPush(0x4137);
	StackPush(0x8023);
	StackCmp(1);
	StackPush(0x4137);
	StackPush(0x8024);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label6;
	MsgActorEx(1024, 10, 2, 2, 0);
	WorkSetConst(0x8025, 0);
	ListMenuInitTR(31, 1, 0, 0, 0x8025);
	ListMenuAdd(11, 0xFFFF, 0);
	ListMenuAdd(12, 0xFFFF, 1);
	ListMenuAdd(13, 0xFFFF, 2);
	ListMenuAdd(14, 0xFFFF, 3);
	ListMenuAdd(15, 0xFFFF, 4);
	ListMenuShow();
	StackPush(0x8025);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label7;
	WordSetItemName(0, 149);
	MsgActorEx(1024, 16, 2, 2, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label8;

label7: ;
	StackPush(0x8025);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	WordSetItemName(0, 150);
	MsgActorEx(1024, 16, 2, 2, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label8;

label9: ;
	StackPush(0x8025);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label10;
	WordSetItemName(0, 151);
	MsgActorEx(1024, 16, 2, 2, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label8;

label10: ;
	StackPush(0x8025);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label11;
	WordSetItemName(0, 152);
	MsgActorEx(1024, 16, 2, 2, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label8;

label11: ;
	StackPush(0x8025);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label8;
	WordSetItemName(0, 153);
	MsgActorEx(1024, 16, 2, 2, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);

label8: ;
	FlagSet(2733);
	MsgActorEx(1024, 17, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();
	goto label5;

label6: ;
	MsgActorEx(1024, 20, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();

label5: ;
	goto label12;

label3: ;
	MsgActorEx(1024, 19, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();

label12: ;
	goto label13;

label2: ;
	MsgActorEx(1024, 19, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();

label13: ;
	goto label14;

label1: ;
	MsgActorEx(1024, 18, 2, 2, 0);
	InputWaitLast();
	MsgActorClose();

label14: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
