#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
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

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 11, 0, 0);
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
	MsgActor(1024, 12, 0, 0);
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
	MsgActor(1024, 13, 0, 0);
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
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	StackPushFlag(190);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActorEx(1024, 14, 2, 2, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActorEx(1024, 15, 2, 2, 0);
	ListMenuInitTR(31, 1, 0, 0, 0x8020);
	ListMenuAdd(16, 0xFFFF, 0);
	ListMenuAdd(17, 0xFFFF, 1);
	ListMenuAdd(18, 0xFFFF, 2);
	ListMenuShow();
	WorkCmpConst(0x8020, 0);
	if (1) goto label2;
	goto label3;

label2: ;
	MsgActorEx(1024, 19, 2, 2, 0);
	MsgActorEx(1024, 20, 2, 2, 0);
	ListMenuInitTR(31, 1, 0, 0, 0x8021);
	ListMenuAdd(16, 0xFFFF, 0);
	ListMenuAdd(17, 0xFFFF, 1);
	ListMenuAdd(18, 0xFFFF, 2);
	ListMenuShow();
	WorkCmpConst(0x8021, 0);
	if (1) goto label4;
	goto label5;

label4: ;
	MsgActorEx(1024, 24, 2, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label6;

label5: ;
	WorkCmpConst(0x8021, 1);
	if (1) goto label7;
	goto label8;

label7: ;
	MsgActorEx(1024, 24, 2, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label6;

label8: ;
	WorkCmpConst(0x8021, 2);
	if (1) goto label9;
	goto label6;

label9: ;
	MsgActorEx(1024, 21, 2, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	MsgActorEx(1024, 22, 2, 2, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(190);
	goto label6;

label6: ;
	goto label10;

label3: ;
	WorkCmpConst(0x8020, 1);
	if (1) goto label11;
	goto label12;

label11: ;
	MsgActorEx(1024, 24, 2, 4, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label10;

label12: ;
	WorkCmpConst(0x8020, 2);
	if (1) goto label13;
	goto label10;

label13: ;
	MsgActorEx(1024, 24, 2, 4, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label10;

label10: ;
	goto label14;

label1: ;
	MsgActorEx(1024, 23, 2, 4, 0);
	InputWaitLast();
	MsgWinCloseAll();

label14: ;
	goto label15;

label0: ;
	MsgActorEx(1024, 22, 2, 4, 0);
	InputWaitLast();
	MsgWinCloseAll();

label15: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 0);
	SEPlay(1351);
	MsgSystem(25, 2);

label23: ;
	StackPush(0x8022);
	StackPushConst(5);
	StackCmp(5);
	if (255) goto label16;
	MsgSystem(26, 2);
	ListMenuInitTR(31, 1, 0, 1, 0x8022);
	ListMenuAdd(32, 0xFFFF, 0);
	ListMenuAdd(33, 0xFFFF, 1);
	ListMenuAdd(34, 0xFFFF, 2);
	ListMenuAdd(35, 0xFFFF, 3);
	ListMenuAdd(36, 0xFFFF, 4);
	ListMenuAdd(37, 0xFFFF, 5);
	ListMenuShow();
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label17;
	MsgSystem(27, 2);
	goto label18;

label17: ;
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label19;
	MsgSystem(28, 2);
	goto label18;

label19: ;
	StackPush(0x8022);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label20;
	MsgSystem(29, 2);
	goto label18;

label20: ;
	StackPush(0x8022);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label21;
	MsgSystem(30, 2);
	goto label18;

label21: ;
	StackPush(0x8022);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label22;
	MsgSystem(31, 2);
	goto label18;

label22: ;
	WorkSetConst(0x8022, 5);

label18: ;
	goto label23;

label16: ;
	MsgSystemClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	StackPushFlag(192);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label24;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 9, 5, 1, 0);
	MsgActorClose();

	Movement m[] = { //5
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label25;

label24: ;
	StackPushFlag(113);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label26;
	SEPlay(1351);
	MsgActorEx(1024, 0, 5, 1, 0);
	Routine0();
	WordSetPlayerName(0);
	MsgActorEx(1024, 1, 5, 1, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label27;
	MsgActorEx(1024, 2, 5, 1, 0);
	goto label28;

label27: ;
	MsgActorEx(1024, 3, 5, 1, 0);

label28: ;
	WordSetPlayerName(0);
	MsgActorEx(1024, 4, 5, 1, 0);
	YesNoWin(0x8010);
	Routine1();
	goto label25;

label26: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	WordSetPlayerName(0);
	MsgActorEx(1024, 5, 5, 1, 0);
	YesNoWin(0x8010);
	Routine1();

label25: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8023, 0);
	PlayerGetDir(0x8023);
	WorkCmpConst(0x8023, 2);
	if (1) goto label29;
	goto label30;

label29: ;

	Movement m[] = { //5
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label31;

label30: ;
	WorkCmpConst(0x8023, 3);
	if (1) goto label32;
	goto label33;

label32: ;

	Movement m[] = { //5
		TurnLeft, 1,
	};

	ActorCmdWait();
	goto label31;

label33: ;
	WorkCmpConst(0x8023, 0);
	if (1) goto label34;
	goto label31;

label34: ;

	Movement m[] = { //5
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label31;

label31: ;
	VMReturn();
}

void Routine1()
{
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label35;
	MsgActorEx(1024, 7, 5, 1, 0);
	MsgWinCloseAll();
	StackPush(0x4030);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label36;
	CallTrainerBattle(289, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label37;
	CallTrainerBattleEnd();
	goto label38;

label37: ;
	CallTrainerLose();

label38: ;
	goto label39;

label36: ;
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label40;
	CallTrainerBattle(287, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label41;
	CallTrainerBattleEnd();
	goto label42;

label41: ;
	CallTrainerLose();

label42: ;
	goto label39;

label40: ;
	CallTrainerBattle(288, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label43;
	CallTrainerBattleEnd();
	goto label39;

label43: ;
	CallTrainerLose();

label39: ;
	WordSetPlayerName(0);
	MsgActorEx(1024, 8, 5, 1, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 3);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	MsgActorEx(1024, 9, 5, 1, 0);
	MsgActorClose();

	Movement m[] = { //5
		TurnUp, 1,
	};

	ActorCmdWait();
	FlagSet(538);
	FlagReset(539);
	FlagSet(192);
	goto label44;

label35: ;
	MsgActorEx(1024, 6, 5, 1, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(113);

label44: ;
	VMReturn();
}
