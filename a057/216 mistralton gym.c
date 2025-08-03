#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	PlayerGetDir(0x400A);
	StackPush(0x400A);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;

	Movement m[] = { //255
		WalkUp, 2,
	};

	ActorCmdWait();
	goto label1;

label0: ;
	StackPush(0x400A);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label2;

	Movement m[] = { //255
		WalkRight, 2,
	};

	ActorCmdWait();
	goto label1;

label2: ;
	StackPush(0x400A);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label3;

	Movement m[] = { //255
		WalkLeft, 2,
	};

	ActorCmdWait();
	goto label1;

label3: ;

	Movement m[] = { //255
		WalkDown, 2,
	};

	ActorCmdWait();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	StackPushFlag(123);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	StackPush(0x8000);
	StackPush(0x8001);
	StackPush(0x8002);
	StackPush(0x8003);
	StackPush(0x8004);
	StackPush(0x8005);
	StackPush(0x8006);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	WorkSet(0x8002, 123);
	WorkSet(0x8003, 7);
	WorkSet(0x8004, 8);
	WorkSet(0x8005, 8);
	RTGetTextFile(0x8006);
	RTCallGlobal(2800);
	StackPop(0x8006);
	StackPop(0x8005);
	StackPop(0x8004);
	StackPop(0x8003);
	StackPop(0x8002);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label5;

label4: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 9, 0, 0);
	InputWaitLast();
	MsgActorClose();

label5: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8020, 0);
	FlagGet(0x177, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	WordSetPlayerName(0);
	MsgInfo(10, 2);
	goto label7;

label6: ;
	FlagGet(0x178, 0x8008);
	StackPush(0x40B4);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label8;
	WordSetPlayerName(0);
	MsgInfo(12, 2);
	goto label7;

label8: ;
	WordSetPlayerName(0);
	MsgInfo(11, 2);

label7: ;
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
	ActorSetEyeToEye();
	FlagGet(0x177, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	MsgActorEx(1024, 0, 1, 0, 0);
	MsgActorClose();
	CallTrainerBattle(25, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	CallTrainerBattleEnd();
	goto label11;

label10: ;
	CallTrainerLose();

label11: ;
	MsgActorEx(1024, 1, 1, 0, 0);
	MsgActorClose();
	TrainerCardSaveGymVictoryParty(5);
	FlagSet(0x177);
	WordSetPlayerName(0);
	MEPlay(1306);
	WorkSetConst(0x8021, 0);
	TrainerCardGetSex(0x8021);
	StackPush(0x8021);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label12;
	PlayFieldEffect(8);
	goto label13;

label12: ;
	PlayFieldEffect(47);

label13: ;
	MEWait();
	WorkSetConst(0x8021, 0);
	MsgSystem(2, 0);
	MsgSystemClose();
	MsgActorEx(1024, 3, 1, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	MsgActorEx(1024, 4, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(687);
	WorkSetConst(0x40B4, 1);
	FlagSet(2422);
	WorkSetConst(0x4099, 2);
	FlagReset(804);
	goto label14;

label9: ;
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label15;
	MsgActorEx(1024, 5, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label14;

label15: ;
	MsgActorEx(1024, 6, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label14: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
