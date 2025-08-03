#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	FlagGet(0x173, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0; // jump if defeated
	Routine0();
	VMSleep(16);
	Routine1();
	FlagSet(126);
	FlagSet(564);
	FlagReset(552);
	FlagSet(550);
	FlagReset(548);
	FlagSet(2418);
	FlagReset(648);
	FlagReset(562);
	FlagReset(563);
	FlagSet(2416);
	WorkSetConst(0x4084, 2);
	WorkSetConst(0x408C, 1);
	WorkSetConst(0x4092, 3);
	goto label1;

label0: ;
	StackPushFlag(2400);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	MsgActor(1024, 9, 0, 0);
	goto label3;

label2: ;
	MsgActor(1024, 5, 0, 0);

label3: ;
	InputWaitLast();
	MsgActorClose();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(10, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(11, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	MsgActor(1024, 0, 0, 0);
	MsgActorClose();
	CallTrainerBattle(21, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label4;
	CallTrainerBattleEnd();
	goto label5;

label4: ;
	CallTrainerLose();

label5: ;
	MsgActor(1024, 1, 0, 0);
	MsgActorClose();
	TrainerCardSaveGymVictoryParty(1);
	FlagSet(0x173);
	MEPlay(1306);
	WorkSetConst(0x8020, 0);
	TrainerCardGetSex(0x8020);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	PlayFieldEffect(4);
	goto label7;

label6: ;
	PlayFieldEffect(43);

label7: ;
	MEWait();
	WorkSetConst(0x8020, 0);
	WordSetPlayerName(0);
	MsgSystem(2, 2);
	MsgSystemClose();
	MsgActor(1024, 3, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	MsgActor(1024, 4, 0, 0);
	MsgActorClose();
	VMReturn();
}

void Routine1()
{
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	PlayerGetGPos(0x8021, 0x8022);
	ActorNew(5, 19, 1, 251, 73, 0);

	Movement m[] = { //255
		Wait4, 1,
		Exclaimation, 1,
	};

	MsgInfo(6, 2);
	ActorCmdWait();
	MsgWinCloseAll();
	BGMPlay(1098);

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();
	StackPush(0x8021);
	StackPushConst(5);
	StackCmp(1);
	StackPush(0x8022);
	StackPushConst(9);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label8;
	goto label9;

label8: ;

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();

label9: ;

	Movement m[] = { //251
		FastWalkUp, 7,
	};

	StackPush(0x8021);
	StackPushConst(5);
	StackCmp(1);
	StackPush(0x8022);
	StackPushConst(11);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label10;

	Movement m[] = { //255
		LookDown, 1,
		WalkLeft, 1,
		TurnRight, 1,
	};

	goto label11;

label10: ;
	StackPush(0x8021);
	StackPushConst(5);
	StackCmp(1);
	StackPush(0x8022);
	StackPushConst(9);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label11;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkDown, 1,
	};


label11: ;
	ActorCmdWait();
	MsgActorEx(1024, 7, 251, 0, 0);
	MsgActorClose();

	Movement m[] = { //0
		LockDirection, 1,
		WalkDown, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 8, 0, 0, 0);
	MsgActorClose();

	Movement m[] = { //251
		LockDirection, 1,
		WalkRight, 1,
		UnlockDirection, 1,
		LookLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		FastestWalkDown, 9,
	};

	VMSleep(16);
	StackPush(0x8021);
	StackPushConst(5);
	StackCmp(1);
	StackPush(0x8022);
	StackPushConst(11);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label12;

	Movement m[] = { //255
		TurnDown, 1,
	};


label12: ;
	ActorCmdWait();

	Movement m[] = { //251
		TurnDown, 1,
		Wait8, 1,
		FastWalkLeft, 1,
		FastWalkDown, 7,
	};

	ActorCmdWait();
	ActorDelete(0);
	ActorDelete(251);
	BGMChangeMap();
	VMReturn();
}
