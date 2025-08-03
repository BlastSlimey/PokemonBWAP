#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 255);
	WorkSet(0x8001, 1);
	RTCallGlobal(10110);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 10);
	WorkSet(0x8001, 1);
	RTCallGlobal(10110);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	PokePartyFind(492, 0x8025, 0x8024);
	DebugPrint(0x8025);
	StackPush(0x8025);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	StackPushFlag(329);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label1;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label2;

label1: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 0, 7, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 466);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	MsgActorEx(1024, 1, 7, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(329);

label2: ;
	goto label3;

label0: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();

label3: ;
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	FlagSet(786);
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
	if (255) goto label4;
	StackPush(0x8021);
	StackPushConst(4);
	StackCmp(5);
	if (255) goto label4;
	FlagReset(786);

label4: ;
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
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
	MsgActorEx(1024, 3, 0x8011, 2, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label5;
	MsgActorEx(1024, 4, 0x8011, 2, 0);
	InputWaitLast();
	MsgActorClose();
	goto label6;

label5: ;
	WorkSetConst(0x8022, 1);

label7: ;
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	Routine0();
	goto label7;

label6: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8023, 0);
	MsgActorEx(1024, 5, 0x8011, 2, 0);
	ListMenuInitTR(31, 1, 0, 1, 0x8023);
	TrainerCardHasBadge(0x8010, 0);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	ListMenuAdd(21, 0xFFFF, 0);

label8: ;
	TrainerCardHasBadge(0x8010, 1);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	ListMenuAdd(22, 0xFFFF, 1);

label9: ;
	TrainerCardHasBadge(0x8010, 2);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	ListMenuAdd(23, 0xFFFF, 2);

label10: ;
	TrainerCardHasBadge(0x8010, 3);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	ListMenuAdd(24, 0xFFFF, 3);

label11: ;
	TrainerCardHasBadge(0x8010, 4);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	ListMenuAdd(25, 0xFFFF, 4);

label12: ;
	TrainerCardHasBadge(0x8010, 5);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label13;
	ListMenuAdd(26, 0xFFFF, 5);

label13: ;
	TrainerCardHasBadge(0x8010, 6);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label14;
	ListMenuAdd(27, 0xFFFF, 6);

label14: ;
	TrainerCardHasBadge(0x8010, 7);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label15;
	ListMenuAdd(28, 0xFFFF, 7);

label15: ;
	ListMenuAdd(29, 0xFFFF, 255);
	ListMenuShow();
	StackPush(0x8023);
	StackPushConst(255);
	StackCmp(1);
	StackPush(0x8023);
	StackPushConst(0xFFFE);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label16;
	MsgActorEx(1024, 4, 0x8011, 2, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x8022, 0);
	VMReturn();

label16: ;
	WorkCmpConst(0x8023, 0);
	if (1) goto label17;
	goto label18;

label17: ;
	MsgActorEx(1024, 6, 0x8011, 2, 0);
	goto label19;

label18: ;
	WorkCmpConst(0x8023, 1);
	if (1) goto label20;
	goto label21;

label20: ;
	MsgActorEx(1024, 7, 0x8011, 2, 0);
	goto label19;

label21: ;
	WorkCmpConst(0x8023, 2);
	if (1) goto label22;
	goto label23;

label22: ;
	MsgActorEx(1024, 8, 0x8011, 2, 0);
	goto label19;

label23: ;
	WorkCmpConst(0x8023, 3);
	if (1) goto label24;
	goto label25;

label24: ;
	MsgActorEx(1024, 9, 0x8011, 2, 0);
	goto label19;

label25: ;
	WorkCmpConst(0x8023, 4);
	if (1) goto label26;
	goto label27;

label26: ;
	MsgActorEx(1024, 10, 0x8011, 2, 0);
	goto label19;

label27: ;
	WorkCmpConst(0x8023, 5);
	if (1) goto label28;
	goto label29;

label28: ;
	MsgActorEx(1024, 11, 0x8011, 2, 0);
	goto label19;

label29: ;
	WorkCmpConst(0x8023, 6);
	if (1) goto label30;
	goto label31;

label30: ;
	MsgActorEx(1024, 12, 0x8011, 2, 0);
	goto label19;

label31: ;
	WorkCmpConst(0x8023, 7);
	if (1) goto label32;
	goto label19;

label32: ;
	MsgActorEx(1024, 13, 0x8011, 2, 0);
	goto label19;

label19: ;
	WordSetGymVictoryParty(0x8023, 0x8010);
	WorkCmpConst(0x8010, 1);
	if (1) goto label33;
	goto label34;

label33: ;
	MsgActorEx(1024, 14, 0x8011, 2, 0);
	goto label35;

label34: ;
	WorkCmpConst(0x8010, 2);
	if (1) goto label36;
	goto label37;

label36: ;
	MsgActorEx(1024, 15, 0x8011, 2, 0);
	goto label35;

label37: ;
	WorkCmpConst(0x8010, 3);
	if (1) goto label38;
	goto label39;

label38: ;
	MsgActorEx(1024, 16, 0x8011, 2, 0);
	goto label35;

label39: ;
	WorkCmpConst(0x8010, 4);
	if (1) goto label40;
	goto label41;

label40: ;
	MsgActorEx(1024, 17, 0x8011, 2, 0);
	goto label35;

label41: ;
	WorkCmpConst(0x8010, 5);
	if (1) goto label42;
	goto label43;

label42: ;
	MsgActorEx(1024, 18, 0x8011, 2, 0);
	goto label35;

label43: ;
	WorkCmpConst(0x8010, 6);
	if (1) goto label44;
	goto label35;

label44: ;
	MsgActorEx(1024, 19, 0x8011, 2, 0);
	goto label35;

label35: ;
	MsgActorEx(1024, 20, 0x8011, 2, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label45;
	MsgActorClose();
	WorkSetConst(0x8022, 0);
	VMReturn();

label45: ;
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 1);
	VMReturn();
}
