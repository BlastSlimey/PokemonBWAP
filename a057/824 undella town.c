#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(11, 1);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(2747);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	MsgActorEx(1024, 2, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label1;

label0: ;
	MsgActorEx(1024, 0, 0, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	MsgActorClose();
	CallTrainerBattle(520, 0, 0);
	WorkSetConst(0x8023, 0);
	TrainerBattleIsVictory(0x8023);
	StackPush(0x8023);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	FlagSet(2747);
	CallTrainerBattleEnd();
	Routine0();
	goto label4;

label3: ;
	FlagSet(2747);
	CallTrainerLose();

label4: ;
	goto label5;

label2: ;
	MsgActorEx(1024, 1, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label5: ;
	WorkSetConst(0x8023, 0);

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	FlagSet(802);
	WorkSetConst(0x8020, 0);
	RTCGetSeason(0x8020);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	FlagReset(802);

label6: ;
	StackPush(0x40E4);
	StackPushConst(0);
	StackCmp(1);
	StackPush(0x40E4);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label7;
	FlagSet(823);
	FlagSet(824);
	FlagSet(825);
	FlagSet(826);
	FlagSet(827);
	FlagSet(828);
	FlagReset(822);
	goto label8;

label7: ;
	StackPush(0x40E4);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label8;
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	StackPushFlag(2760);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label9;
	FlagSet(822);
	FlagSet(823);
	FlagSet(824);
	FlagSet(825);
	FlagSet(826);
	FlagSet(827);
	FlagSet(828);
	FlagReset(822);
	Random(0x8022, 2);
	WorkGet(0x4118, 0x8022);
	Random(0x8021, 4);
	StackPush(0x8021);
	StackPushConst(2);
	StackCmp(3);
	if (255) goto label10;
	FlagReset(823);
	Random(0x8022, 5);
	WorkGet(0x4119, 0x8022);
	goto label11;

label10: ;
	FlagSet(823);

label11: ;
	Random(0x8021, 2);
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	FlagReset(824);
	Random(0x8022, 5);
	WorkGet(0x411A, 0x8022);
	goto label13;

label12: ;
	FlagSet(824);

label13: ;
	FlagSet(2760);
	goto label8;

label9: ;
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(2760);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label14;
	FlagSet(822);
	FlagSet(823);
	FlagSet(824);
	FlagSet(825);
	FlagSet(826);
	FlagSet(827);
	FlagSet(828);
	Random(0x8022, 5);
	WorkGet(0x4118, 0x8022);
	FlagReset(822);
	Random(0x8021, 4);
	DebugPrint(0x8021);
	StackPush(0x8021);
	StackPushConst(2);
	StackCmp(3);
	if (255) goto label15;
	FlagReset(825);
	Random(0x8022, 5);
	WorkGet(0x411B, 0x8022);
	goto label16;

label15: ;
	FlagSet(825);

label16: ;
	Random(0x8021, 4);
	DebugPrint(0x8021);
	StackPush(0x8021);
	StackPushConst(2);
	StackCmp(3);
	if (255) goto label17;
	FlagReset(826);
	Random(0x8022, 5);
	WorkGet(0x411C, 0x8022);
	goto label18;

label17: ;
	FlagSet(826);

label18: ;
	Random(0x8021, 2);
	DebugPrint(0x8021);
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label19;
	FlagReset(827);
	Random(0x8022, 5);
	WorkGet(0x411D, 0x8022);
	goto label20;

label19: ;
	FlagSet(827);

label20: ;
	Random(0x8021, 4);
	DebugPrint(0x8021);
	StackPush(0x8021);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label21;
	FlagReset(828);
	Random(0x8022, 5);
	WorkGet(0x411E, 0x8022);
	goto label22;

label21: ;
	FlagSet(828);

label22: ;
	FlagSet(2760);
	goto label8;

label14: ;
	StackPush(0x8020);
	StackPushConst(2);
	StackCmp(1);
	StackPush(0x8020);
	StackPushConst(3);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label8;
	FlagSet(822);
	FlagSet(823);
	FlagSet(824);
	FlagSet(825);
	FlagSet(826);
	FlagSet(827);
	FlagSet(828);

label8: ;
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(12, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	StackPush(0x8002);
	StackPush(0x8003);
	StackPush(0x8004);
	StackPush(0x8005);
	StackPush(0x8006);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	WorkSet(0x8002, 346);
	WorkSet(0x8003, 4);
	WorkSet(0x8004, 5);
	WorkSet(0x8005, 5);
	RTGetTextFile(0x8006);
	RTCallGlobal(2800);
	StackPop(0x8006);
	StackPop(0x8005);
	StackPop(0x8004);
	StackPop(0x8003);
	StackPop(0x8002);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 6, 2, 0, 1);
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
	MsgActor(1024, 7, 0, 0);
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
	MsgActor(1024, 8, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 9, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 10, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	MsgActorEx(1024, 3, 0, 0, 0);
	MsgActorClose();
	WorkSetConst(0x8024, 0);
	PlayerGetDir(0x8024);
	WorkCmpConst(0x8024, 2);
	if (1) goto label23;
	goto label24;

label23: ;

	Movement m[] = { //0
		WalkUp, 7,
	};


	Movement m[] = { //255
		WalkLeft, 1,
		WalkUp, 6,
	};

	ActorCmdWait();
	goto label25;

label24: ;
	WorkCmpConst(0x8024, 3);
	if (1) goto label26;
	goto label27;

label26: ;

	Movement m[] = { //0
		WalkUp, 7,
	};


	Movement m[] = { //255
		WalkRight, 1,
		WalkUp, 6,
	};

	ActorCmdWait();
	goto label25;

label27: ;
	WorkCmpConst(0x8024, 0);
	if (1) goto label28;
	goto label29;

label28: ;

	Movement m[] = { //0
		WalkRight, 1,
		WalkUp, 2,
		WalkLeft, 1,
		TurnDown, 1,
		WalkUp, 5,
	};


	Movement m[] = { //255
		TurnUp, 1,
		WalkUp, 5,
	};

	ActorCmdWait();
	goto label25;

label29: ;
	WorkCmpConst(0x8024, 1);
	if (1) goto label30;
	goto label25;

label30: ;

	Movement m[] = { //0
		WalkRight, 1,
		WalkUp, 2,
		WalkLeft, 1,
		TurnDown, 1,
		WalkUp, 5,
	};

	VMSleep(32);

	Movement m[] = { //255
		TurnUp, 1,
		WalkUp, 5,
	};

	ActorCmdWait();
	goto label25;

label25: ;
	ActorDelete(0);

	Movement m[] = { //255
		WalkUp, 2,
	};

	ActorCmdWait();
	FlagSet(741);
	FlagReset(742);
	RTReserveScript(2);
	MapChangeWarp(414, 18, 20, 0);
	WorkSetConst(0x8024, 0);
	VMReturn();
}
