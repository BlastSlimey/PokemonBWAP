#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	MsgInfo(0, 2);
	MsgWinCloseAll();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	PlayerGetExState(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	PlayerSetSpecialSequence(1);

label0: ;

	Movement m[] = { //255
		LookLeft, 1,
	};

	ActorCmdWait();
	FlagReset(594);
	ActorAdd(0);
	ActorAdd(8);

	Movement m[] = { //0
		WalkRight, 8,
	};

	WorkCmpConst(0x8021, 117);
	if (1) goto label1;
	goto label2;

label1: ;
	VMSleep(16);

	Movement m[] = { //255
		WalkDown, 1,
		TurnLeft, 0,
	};

	ActorCmdWait();
	goto label3;

label2: ;
	WorkCmpConst(0x8021, 119);
	if (1) goto label4;
	goto label5;

label4: ;
	VMSleep(16);

	Movement m[] = { //255
		WalkUp, 1,
		TurnLeft, 0,
	};

	ActorCmdWait();
	goto label3;

label5: ;
	ActorCmdWait();

label3: ;

	Movement m[] = { //8
		WalkRight, 8,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 0, 3, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	MsgActorEx(1024, 2, 0, 3, 0);
	MsgActorClose();
	goto label7;

label6: ;
	MsgActorEx(1024, 3, 0, 3, 0);
	MsgActorClose();

label7: ;

	Movement m[] = { //0
		WalkRight, 1,
	};

	ActorCmdWait();
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label8;
	CallTrainerBattle(588, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	CallTrainerBattleEnd();
	goto label10;

label9: ;
	FlagSet(594);
	CallTrainerLose();

label10: ;
	goto label11;

label8: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	CallTrainerBattle(589, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label13;
	CallTrainerBattleEnd();
	goto label14;

label13: ;
	FlagSet(594);
	CallTrainerLose();

label14: ;
	goto label11;

label12: ;
	CallTrainerBattle(590, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label15;
	CallTrainerBattleEnd();
	goto label11;

label15: ;
	FlagSet(594);
	CallTrainerLose();

label11: ;
	MsgActorEx(1024, 4, 0, 3, 0);
	MsgActorClose();
	MsgSystem(5, 0);
	SEPlay(1391);
	PokePartyRecoverAll();
	SEWait();
	MsgWaitAdvance();
	MsgWinCloseAll();

	Movement m[] = { //0
		WalkLeft, 1,
		LookDown, 1,
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 0, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 7, 8, 0, 0);
	MsgActorClose();

	Movement m[] = { //8
		WalkRight, 2,
		TurnUp, 0,
	};


	Movement m[] = { //255
		Wait8, 1,
		TurnDown, 0,
	};

	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 2);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1B2);
	WordSetPlayerName(0);

	Movement m[] = { //8
		WalkLeft, 2,
		LookDown, 1,
		TurnRight, 0,
	};


	Movement m[] = { //255
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 8, 8, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 9, 0, 3, 0);
	MsgActorClose();

	Movement m[] = { //8
		TurnUp, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 10, 8, 0, 0);
	MsgActorClose();

	Movement m[] = { //0
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 0, 3, 0);
	MsgActorClose();

	Movement m[] = { //0
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 13, 0, 3, 0);
	MsgActorClose();

	Movement m[] = { //0
		FastWalkLeft, 8,
	};


	Movement m[] = { //8
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 14, 8, 0, 0);
	MsgActorClose();

	Movement m[] = { //8
		WalkUp, 1,
		WalkRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 15, 8, 0, 0);
	MsgActorClose();

	Movement m[] = { //8
		WalkLeft, 8,
	};

	ActorCmdWait();
	ActorDelete(0);
	ActorDelete(8);
	FlagSet(594);
	WorkSetConst(0x40B8, 4);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(18, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(19, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
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
	WorkSet(0x8002, 263);
	WorkSet(0x8003, 16);
	WorkSet(0x8004, 17);
	WorkSet(0x8005, 17);
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

void Sequence4()
{
	ActorPauseAll();
	Movement m[] = { //19
		TurnRight, 0,
	};
	Movement m[] = { //255
		TurnLeft, 0,
	};
	MsgActorEx(1024, 20, 19, 0, 0);
	ListMenuInitTR(31, 1, 0, 0, 0x8010);
	ListMenuAdd(21, 0xFFFF, 0x006C);
	ListMenuAdd(22, 0xFFFF, 0x006D);
	ListMenuAdd(23, 0xFFFF, 0x006B);
	ListMenuShow();
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkGet(0x8000, 0x8010);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	Movement m[] = { //19
		TurnLeft, 0,
	};
	MsgActorEx(1024, 24, 19, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
