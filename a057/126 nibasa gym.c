#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	FlagGet(0x175, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0; // jump if defeated
	Routine0();
	goto label1;

label0: ;
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	StackPush(0x4093);
	StackPushConst(3);
	StackCmp(4);
	if (255) goto label3;
	MsgActor(1024, 6, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label4;

label3: ;
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgActorClose();

label4: ;
	goto label1;

label2: ;
	MsgActor(1024, 7, 0, 0);
	InputWaitLast();
	MsgActorClose();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	StackPushFlag(116);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label5;
	WorkSetConst(0x8020, 1);
	goto label6;

label5: ;
	WorkSetConst(0x8020, 0);

label6: ;
	StackPushFlag(117);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	WorkSetConst(0x8021, 1);
	goto label8;

label7: ;
	WorkSetConst(0x8021, 0);

label8: ;
	CMD_17f(0x8020, 0x8021);
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	CMD_180(0);
	Routine1();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	CMD_180(1);
	Routine1();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	CMD_180(2);
	Routine1();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	CMD_180(3);
	Routine1();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	PlayerGetGPos(0x8025, 0x8026);
	StackPush(0x8025);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label9;
	Routine2();
	goto label10;

label9: ;
	Routine3();

label10: ;
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8025, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8028, 0);
	PlayerGetGPos(0x8027, 0x8028);
	StackPush(0x8027);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label11;
	Routine4();
	CMD_181(1);
	goto label12;

label11: ;
	Routine5();
	CMD_181(2);

label12: ;
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8027, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
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

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 15, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(121);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label14;
	MsgActor(1024, 17, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(121);
	MsgActor(1024, 18, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label15;

label14: ;
	FlagGet(0x175, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label13; // jump if defeated
	MsgActor(1024, 18, 0, 0);
	InputWaitLast();
	MsgActorClose();

label15: ;
	goto label16;

label13: ;
	MsgActor(1024, 19, 0, 0);
	InputWaitLast();
	MsgActorClose();

label16: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	WordSetPlayerName(0);
	FlagGet(0x175, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label17; // jump if defeated
	MsgInfo(20, 2);
	goto label18;

label17: ;
	StackPush(0x4093);
	StackPushConst(2);
	StackCmp(0);
	if (255) goto label19;
	MsgInfo(21, 2);
	goto label18;

label19: ;
	MsgInfo(22, 2);

label18: ;
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();

	Movement m[] = { //255
		JumpUp2, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();

	Movement m[] = { //255
		JumpDown2, 1,
	};

	ActorCmdWait();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	PlayerGetGPos(0x8023, 0x8024);
	StackPush(0x8023);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label20;
	Routine6();
	goto label21;

label20: ;
	Routine7();

label21: ;
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	StackPushFlag(116);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label22;
	ActorSetGPos(4, 17, 2, 17, 2);

label22: ;
	StackPushFlag(117);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label23;
	ActorSetGPos(0, 51, 2, 42, 2);

label23: ;
	VMHalt();
}

void Sequence16()
{
	FieldGetContinueFlag(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label24;
	CMD_260();

label24: ;
	VMHalt();
}

void Routine0()
{
	MsgActor(1024, 0, 0, 0);
	MsgActorClose();
	CallTrainerBattle(23, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label25;
	CallTrainerBattleEnd();
	goto label26;

label25: ;
	CallTrainerLose();

label26: ;
	MsgActor(1024, 1, 0, 0);
	MsgActorClose();
	TrainerCardSaveGymVictoryParty(3);
	FlagSet(0x175);
	MEPlay(1306);
	WorkSetConst(0x8022, 0);
	TrainerCardGetSex(0x8022);
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label27;
	PlayFieldEffect(6);
	goto label28;

label27: ;
	PlayFieldEffect(45);

label28: ;
	MEWait();
	WorkSetConst(0x8022, 0);
	WordSetPlayerName(0);
	MsgSystem(2, 0);
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
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x4093, 1);
	FlagReset(568);
	FlagSet(565);
	FlagReset(735);
	FlagSet(2420);
	VMReturn();
}

void Routine1()
{
	WordSetPlayerName(0);
	MsgSystem(16, 2);
	InputWaitLast();
	MsgSystemClose();
	VMReturn();
}

void Routine2()
{

	Movement m[] = { //255
		LockDirection, 1,
		FastWalkDown, 2,
		UnlockDirection, 1,
	};


	Movement m[] = { //4
		JumpDown2, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 8, 4, 0, 0);
	MsgActorClose();
	VMReturn();
}

void Routine3()
{

	Movement m[] = { //255
		LockDirection, 1,
		FastWalkDown, 2,
		UnlockDirection, 1,
	};


	Movement m[] = { //0
		JumpDown2, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 12, 0, 0, 0);
	MsgActorClose();
	VMReturn();
}

void Routine4()
{
	TrainerBGMPlayPush(67);

	Movement m[] = { //4
		WalkDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 9, 4, 0, 0);
	MsgActorClose();
	CallTrainerBattle(67, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label29;
	CallTrainerBattleEnd();
	goto label30;

label29: ;
	FlagSet(536);
	CallTrainerLose();

label30: ;
	MsgActorEx(1024, 10, 4, 0, 0);
	MsgActorClose();

	Movement m[] = { //4
		LookLeft, 1,
		LockDirection, 1,
		WalkRight, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	FlagSet(116);
	VMReturn();
}

void Routine5()
{
	TrainerBGMPlayPush(69);

	Movement m[] = { //0
		WalkDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 13, 0, 0, 0);
	MsgActorClose();
	CallTrainerBattle(69, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label31;
	CallTrainerBattleEnd();
	goto label32;

label31: ;
	FlagSet(537);
	CallTrainerLose();

label32: ;
	MsgActorEx(1024, 14, 0, 0, 0);
	MsgActorClose();

	Movement m[] = { //0
		LookLeft, 1,
		LockDirection, 1,
		WalkRight, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	FlagSet(117);
	VMReturn();
}

void Routine6()
{
	FlagReset(536);
	ActorAdd(4);
	VMReturn();
}

void Routine7()
{
	FlagReset(537);
	ActorAdd(0);
	VMReturn();
}
