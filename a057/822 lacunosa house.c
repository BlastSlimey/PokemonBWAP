#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	FlagSet(782);
	FlagSet(783);
	FlagSet(784);
	FlagSet(785);
	FlagSet(786);
	FlagSet(787);
	FlagSet(788);
	FlagSet(789);
	WorkSetConst(0x8020, 0);
	RTCGetDayPart(0x8020);
	WorkSetConst(0x8021, 0);
	RTCGetWeekDay(0x8021);
	StackPush(0x8020);
	StackPushConst(3);
	StackCmp(1);
	StackPush(0x8020);
	StackPushConst(4);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label0;
	FlagReset(782);
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label1;
	FlagReset(783);
	goto label0;

label1: ;
	StackPush(0x8021);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label2;
	FlagReset(784);
	goto label0;

label2: ;
	StackPush(0x8021);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label3;
	FlagReset(785);
	goto label0;

label3: ;
	StackPush(0x8021);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label4;
	FlagReset(786);
	goto label0;

label4: ;
	StackPush(0x8021);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label5;
	FlagReset(787);
	goto label0;

label5: ;
	StackPush(0x8021);
	StackPushConst(6);
	StackCmp(1);
	if (255) goto label6;
	FlagReset(788);
	goto label0;

label6: ;
	FlagReset(789);

label0: ;
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 27, 0, 0);
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
	MsgActor(1024, 28, 0, 0);
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
	MsgActor(1024, 29, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 30, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 31, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 32, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(572, 0);
	MsgActor(1024, 33, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	StackPushFlag(2753);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label7;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 34, 6, 0, 0);
	MsgActorClose();
	Random(0x400F, 4);
	StackPush(0x400F);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label8;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label9;

label8: ;
	StackPush(0x400F);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label9;

label10: ;
	StackPush(0x400F);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label11;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label9;

label11: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);

label9: ;
	FlagSet(2753);
	MsgActorEx(1024, 35, 6, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label12;

label7: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 35, 0, 0);
	InputWaitLast();
	MsgActorClose();

label12: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
