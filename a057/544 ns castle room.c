#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(504, 0);
	MsgActor(1024, 0, 0, 0);
	PVWait();
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
	MsgActor(1024, 2, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActor(1024, 3, 0, 0);
	MsgWinCloseAll();
	VMSleep(8);
	MapChangeWarpPad(146, 7, 14, 1);
	goto label1;

label0: ;
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(362);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	MsgActorEx(1024, 5, 3, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(362);
	goto label3;

label2: ;
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8022, 0);

label7: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(5);
	if (255) goto label4;
	ItemCheckCount(0x8020, 1, 0x8021);
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label5;
	WorkSetConst(0x8020, 17);
	goto label6;

label5: ;
	WorkAdd(0x8020, 1);
	WorkAdd(0x8022, 1);

label6: ;
	goto label7;

label4: ;
	ItemCheckCount(576, 1, 0x8021);
	StackPush(0x8021);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label8;
	WorkAdd(0x8022, 1);

label8: ;
	StackPush(0x8022);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label9;
	MsgActorEx(1024, 7, 3, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 2);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label3;

label9: ;
	MsgActorEx(1024, 6, 3, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
