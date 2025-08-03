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
	WorkSetConst(0x4000, 1);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(301);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActorEx(1024, 2, 2, 2, 0);

label8: ;
	StackPush(0x4000);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label1;
	ListMenuInitTR(31, 1, 0, 1, 0x8010);
	ListMenuAdd(7, 0xFFFF, 1);
	ListMenuAdd(8, 0xFFFF, 2);
	ListMenuAdd(9, 0xFFFF, 3);
	ListMenuAdd(10, 0xFFFF, 0);
	ListMenuShow();
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(0);
	StackPush(0x8010);
	StackPushConst(3);
	StackCmp(2);
	StackCmp(6);
	if (255) goto label2;
	WorkSetConst(0x8010, 0);

label2: ;
	WorkSetConst(0x4000, 0);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	MsgActorEx(1024, 11, 2, 2, 0);
	YesNoWin(0x4000);
	goto label4;

label3: ;
	StackPush(0x8010);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label5;
	MsgActorEx(1024, 12, 2, 2, 0);
	YesNoWin(0x4000);
	goto label4;

label5: ;
	StackPush(0x8010);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label6;
	MsgActorEx(1024, 13, 2, 2, 0);
	YesNoWin(0x4000);
	goto label4;

label6: ;
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	MsgActorEx(1024, 15, 2, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x4000, 0);

label4: ;
	StackPush(0x4000);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	MsgActorEx(1024, 14, 2, 2, 0);

label7: ;
	goto label8;

label1: ;
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label9;
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	MsgActorEx(1024, 3, 2, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(301);
	goto label11;

label10: ;
	StackPush(0x8010);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label12;
	MsgActorEx(1024, 4, 2, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(301);
	goto label11;

label12: ;
	StackPush(0x8010);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label11;
	MsgActorEx(1024, 5, 2, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(301);

label11: ;
	MsgActor(1024, 6, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label9: ;
	goto label13;

label0: ;
	MsgActor(1024, 6, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label13: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
