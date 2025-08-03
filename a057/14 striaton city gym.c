#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	FlagGet(0x172, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 32, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label1;

label0: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 33, 0, 0);
	InputWaitLast();
	MsgActorClose();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	FlagGet(0x172, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	WordSetPlayerName(0);
	MsgInfo(35, 2);
	InputWaitLast();
	MsgInfoClose();
	goto label3;

label2: ;
	StackPush(0x4095);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	WordSetPlayerName(0);
	MsgInfo(36, 2);
	InputWaitLast();
	MsgInfoClose();
	goto label3;

label4: ;
	WordSetPlayerName(0);
	MsgInfo(37, 2);
	InputWaitLast();
	MsgInfoClose();

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	FlagGet(0x172, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label5;
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	SEPlay(1351);
	Routine0();

	Movement m[] = { //1
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 11, 0, 0);
	MsgActorClose();
	CallTrainerBattle(11, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;

	Movement m[] = { //1
		LookDown, 1,
	};


	Movement m[] = { //2
		LookDown, 1,
	};


	Movement m[] = { //3
		LookDown, 1,
	};

	ActorCmdWait();
	ActorSetGPos(255, 12, 1, 4, 0);
	CallTrainerBattleEnd();
	goto label8;

label7: ;
	CallTrainerLose();

label8: ;
	MsgActorEx(1024, 17, 1, 0, 0);
	MsgActorClose();
	TrainerCardSaveGymVictoryParty(0);
	FlagSet(0x172);
	WordSetPlayerName(0);
	MEPlay(1306);
	WorkSetConst(0x8026, 0);
	TrainerCardGetSex(0x8026);
	StackPush(0x8026);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	PlayFieldEffect(2);
	goto label10;

label9: ;
	PlayFieldEffect(42);

label10: ;
	MEWait();
	WorkSetConst(0x8026, 0);
	MsgSystem(20, 0);
	MsgSystemClose();

	Movement m[] = { //1
		WalkUp, 1,
		WalkLeft, 2,
		LookDown, 1,
	};


	Movement m[] = { //3
		WalkDown, 1,
		WalkRight, 2,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 23, 3, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	WordSetItemName(0, 410);
	WordSetTMMoveName(1, 410);
	MsgActorEx(1024, 24, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(542);
	FlagReset(540);
	WorkSetConst(0x4088, 1);
	FlagSet(2417);
	goto label11;

label6: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 14, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label11: ;
	goto label12;

label5: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label13;
	MsgActorEx(1024, 26, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label12;

label13: ;
	MsgActorEx(1024, 29, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label12: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	FlagGet(0x172, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label14; // jump if defeated
	SEPlay(1351);
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label15;
	Routine0();

	Movement m[] = { //2
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 12, 0, 0);
	MsgActorClose();
	CallTrainerBattle(13, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label16;
	ActorSetGPos(255, 12, 1, 4, 0);

	Movement m[] = { //1
		LookDown, 1,
	};


	Movement m[] = { //2
		LookDown, 1,
	};


	Movement m[] = { //3
		LookDown, 1,
	};

	ActorCmdWait();
	CallTrainerBattleEnd();
	goto label17;

label16: ;
	CallTrainerLose();

label17: ;
	MsgActorEx(1024, 18, 2, 0, 0);
	MsgActorClose();
	TrainerCardSaveGymVictoryParty(0);
	FlagSet(0x172);
	WordSetPlayerName(0);
	MEPlay(1306);
	WorkSetConst(0x8025, 0);
	TrainerCardGetSex(0x8025);
	StackPush(0x8025);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label18;
	PlayFieldEffect(2);
	goto label19;

label18: ;
	PlayFieldEffect(42);

label19: ;
	MEWait();
	WorkSetConst(0x8025, 0);
	MsgSystem(21, 0);
	MsgSystemClose();

	Movement m[] = { //2
		WalkUp, 1,
		WalkRight, 2,
		LookDown, 1,
	};


	Movement m[] = { //3
		WalkDown, 1,
		WalkLeft, 2,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 23, 3, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	WordSetItemName(0, 410);
	WordSetTMMoveName(1, 410);
	MsgActorEx(1024, 24, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(542);
	FlagReset(540);
	WorkSetConst(0x4088, 1);
	FlagSet(2417);
	goto label20;

label15: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 15, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();

label20: ;
	goto label21;

label14: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label22;
	MsgActorEx(1024, 27, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label21;

label22: ;
	MsgActorEx(1024, 30, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();

label21: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	FlagGet(0x172, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label23; // jump if defeated
	StackPush(0x4030);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label24;
	SEPlay(1351);
	Routine0();

	Movement m[] = { //3
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 13, 0, 0);
	MsgActorClose();
	CallTrainerBattle(12, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label25;
	ActorSetGPos(255, 12, 1, 4, 0);

	Movement m[] = { //1
		LookDown, 1,
	};


	Movement m[] = { //2
		LookDown, 1,
	};


	Movement m[] = { //3
		LookDown, 1,
	};

	ActorCmdWait();
	CallTrainerBattleEnd();
	goto label26;

label25: ;
	CallTrainerLose();

label26: ;
	MsgActorEx(1024, 19, 3, 0, 0);
	MsgActorClose();
	TrainerCardSaveGymVictoryParty(0);
	FlagSet(0x172);
	WordSetPlayerName(0);
	MEPlay(1306);
	WorkSetConst(0x8027, 0);
	TrainerCardGetSex(0x8027);
	StackPush(0x8027);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label27;
	PlayFieldEffect(2);
	goto label28;

label27: ;
	PlayFieldEffect(42);

label28: ;
	MEWait();
	WorkSetConst(0x8027, 0);
	MsgSystem(22, 0);
	MsgSystemClose();
	MsgActorEx(1024, 23, 3, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	WordSetItemName(0, 410);
	WordSetTMMoveName(1, 410);
	MsgActorEx(1024, 24, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(542);
	FlagReset(540);
	WorkSetConst(0x4088, 1);
	FlagSet(2417);
	goto label29;

label24: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 16, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();

label29: ;
	goto label30;

label23: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label31;
	MsgActorEx(1024, 25, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label30;

label31: ;
	MsgActorEx(1024, 28, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();

label30: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	PlayerGetGPos(0x8023, 0x8024);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0xC8000, 0x1000F, 0x36000, 30);
	StackPush(0x8023);
	StackPushConst(11);
	StackCmp(1);
	if (255) goto label32;

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 1,
		LookUp, 1,
	};

	goto label33;

label32: ;
	StackPush(0x8023);
	StackPushConst(12);
	StackCmp(1);
	if (255) goto label34;

	Movement m[] = { //255
		WalkUp, 1,
	};

	goto label33;

label34: ;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 1,
		LookUp, 1,
	};


label33: ;
	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 0, 3, 0, 0);
	MsgActorClose();

	Movement m[] = { //3
		0x64, 1,
	};

	ActorCmdWait();
	FlagReset(530);
	ActorAdd(1);
	ActorAdd(2);

	Movement m[] = { //1
		WalkLeft, 2,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //1
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 1, 0, 0);
	MsgActorClose();

	Movement m[] = { //2
		WalkRight, 2,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //2
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 2, 0, 0);
	MsgActorClose();

	Movement m[] = { //3
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 3, 0, 0);
	MsgActorClose();

	Movement m[] = { //1
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};


	Movement m[] = { //2
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};


	Movement m[] = { //3
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 5, 3, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 6, 1, 0, 0);
	MsgActorClose();
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label35;
	WordSetPokeTypeName(0, 11);
	MsgActorEx(1024, 7, 2, 0, 0);
	MsgActorClose();

	Movement m[] = { //1
		WalkRight, 2,
		TurnDown, 1,
	};


	Movement m[] = { //3
		WalkUp, 1,
		WalkLeft, 2,
		TurnDown, 1,
	};


	Movement m[] = { //2
		LockDirection, 1,
		WalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 8, 1, 0, 0);
	MsgActorClose();
	goto label36;

label35: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label37;
	WordSetPokeTypeName(0, 9);
	MsgActorEx(1024, 7, 2, 0, 0);
	MsgActorClose();

	Movement m[] = { //2
		WalkLeft, 2,
		TurnDown, 1,
	};


	Movement m[] = { //3
		WalkUp, 1,
		WalkRight, 2,
		TurnDown, 1,
	};


	Movement m[] = { //1
		LockDirection, 1,
		WalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 9, 2, 0, 0);
	MsgActorClose();
	goto label36;

label37: ;
	WordSetPokeTypeName(0, 10);
	MsgActorEx(1024, 7, 2, 0, 0);
	MsgActorClose();

	Movement m[] = { //3
		TurnDown, 1,
	};


	Movement m[] = { //1
		LockDirection, 1,
		WalkUp, 1,
		UnlockDirection, 1,
	};


	Movement m[] = { //2
		LockDirection, 1,
		WalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 10, 3, 0, 0);
	MsgActorClose();

label36: ;
	EVCameraMoveToDefault(30);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	WorkSetConst(0x4082, 5);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	StackPush(0x4082);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label38;
	CMD_187(5);
	SEPlay(1693);
	SEWait();
	SEPlay(1691);
	SEWait();
	CMD_189(5);
	goto label38;

label38: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	StackPush(0x4082);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label39;
	CMD_187(3);
	SEPlay(1693);
	SEWait();
	SEPlay(1691);
	SEWait();
	CMD_189(3);
	goto label39;

label39: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	StackPush(0x4082);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label40;
	CMD_187(1);
	SEPlay(1693);
	SEWait();
	SEPlay(1690);
	SEWait();

	Movement m[] = { //4
		FastWalkLeft, 7,
	};

	SEPlay(1692);
	CMD_188(0);
	SEWait();
	ActorCmdWait();
	CMD_189(1);
	WorkSetConst(0x4082, 2);
	goto label40;

label40: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	StackPush(0x4082);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label41;
	CMD_187(2);
	SEPlay(1693);
	SEWait();
	SEPlay(1690);
	SEWait();

	Movement m[] = { //5
		FastWalkLeft, 7,
	};

	SEPlay(1692);
	CMD_188(1);
	SEWait();
	ActorCmdWait();
	CMD_189(2);
	WorkSetConst(0x4082, 3);
	goto label41;

label41: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	StackPush(0x4082);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label42;
	CMD_187(6);
	SEPlay(1693);
	SEWait();
	SEPlay(1691);
	SEWait();
	CMD_189(6);
	goto label42;

label42: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	StackPush(0x4082);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label43;
	CMD_187(4);
	SEPlay(1693);
	SEWait();
	SEPlay(1691);
	SEWait();
	CMD_189(4);
	goto label43;

label43: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	StackPush(0x4082);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label44;
	CMD_187(8);
	SEPlay(1693);
	SEWait();
	SEPlay(1691);
	SEWait();
	CMD_189(8);
	goto label44;

label44: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	StackPush(0x4082);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label45;
	CMD_187(0);
	SEPlay(1693);
	SEWait();
	SEPlay(1690);
	SEWait();

	Movement m[] = { //6
		FastWalkLeft, 7,
	};

	SEPlay(1692);
	CMD_188(2);
	SEWait();
	ActorCmdWait();
	CMD_189(0);
	WorkSetConst(0x4082, 4);
	goto label45;

label45: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	StackPush(0x4082);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label46;
	CMD_187(7);
	SEPlay(1693);
	SEWait();
	SEPlay(1691);
	SEWait();
	CMD_189(7);
	goto label46;

label46: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	WorkSetConst(0x8020, 0);
	WorkCmpConst(0x4082, 0);
	if (1) goto label47;
	goto label48;

label47: ;
	WorkSetConst(0x8020, 0);
	goto label49;

label48: ;
	WorkCmpConst(0x4082, 1);
	if (1) goto label50;
	goto label51;

label50: ;
	WorkSetConst(0x8020, 0);
	goto label49;

label51: ;
	WorkCmpConst(0x4082, 2);
	if (1) goto label52;
	goto label53;

label52: ;
	WorkSetConst(0x8020, 1);
	goto label49;

label53: ;
	WorkCmpConst(0x4082, 3);
	if (1) goto label54;
	goto label55;

label54: ;
	WorkSetConst(0x8020, 3);
	goto label49;

label55: ;
	WorkCmpConst(0x4082, 4);
	if (1) goto label56;
	goto label57;

label56: ;
	WorkSetConst(0x8020, 7);
	goto label49;

label57: ;
	WorkCmpConst(0x4082, 5);
	if (1) goto label58;
	goto label59;

label58: ;
	WorkSetConst(0x8020, 7);
	goto label49;

label59: ;
	WorkSetConst(0x8020, 7);

label49: ;
	CMD_186(0x8020);
	VMHalt();
}

void Sequence16()
{
	Routine1();
	VMHalt();
}

void Sequence17()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 34, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence18()
{
	VMHalt();
}

void Sequence19()
{
	ActorPauseAll();
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	PlayerGetGPos(0x8021, 0x8022);
	WorkCmpConst(0x8021, 11);
	if (1) goto label60;
	goto label61;

label60: ;

	Movement m[] = { //0
		TurnLeft, 1,
		Exclaimation, 1,
		WalkLeft, 4,
		TurnDown, 1,
	};

	goto label62;

label61: ;
	WorkCmpConst(0x8021, 12);
	if (1) goto label63;
	goto label64;

label63: ;

	Movement m[] = { //0
		TurnLeft, 1,
		Exclaimation, 1,
		WalkLeft, 3,
		TurnDown, 1,
	};

	goto label62;

label64: ;
	WorkCmpConst(0x8021, 13);
	if (1) goto label65;
	goto label62;

label65: ;

	Movement m[] = { //0
		TurnLeft, 1,
		Exclaimation, 1,
		WalkLeft, 2,
		TurnDown, 1,
	};

	goto label62;

label62: ;
	ActorCmdWait();
	MsgActorEx(1024, 31, 0, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(118);
	WorkSetConst(0x4082, 1);
	WorkCmpConst(0x8021, 11);
	if (1) goto label66;
	goto label67;

label66: ;

	Movement m[] = { //0
		WalkRight, 4,
		TurnDown, 1,
	};

	goto label68;

label67: ;
	WorkCmpConst(0x8021, 12);
	if (1) goto label69;
	goto label70;

label69: ;

	Movement m[] = { //0
		WalkRight, 3,
		TurnDown, 1,
	};

	goto label68;

label70: ;
	WorkCmpConst(0x8021, 13);
	if (1) goto label71;
	goto label68;

label71: ;

	Movement m[] = { //0
		WalkRight, 2,
		TurnDown, 1,
	};

	goto label68;

label68: ;
	ActorCmdWait();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8028, 0);
	PlayerGetDir(0x8028);
	WorkCmpConst(0x8028, 2);
	if (1) goto label72;
	goto label73;

label72: ;

	Movement m[] = { //255
		WalkDown, 1,
		WalkLeft, 1,
		TurnUp, 1,
	};

	goto label74;

label73: ;
	WorkCmpConst(0x8028, 3);
	if (1) goto label75;
	goto label76;

label75: ;

	Movement m[] = { //255
		WalkDown, 1,
		WalkRight, 1,
		TurnUp, 1,
	};

	goto label74;

label76: ;
	WorkCmpConst(0x8028, 0);
	if (1) goto label77;
	goto label78;

label77: ;
	goto label74;

label78: ;
	WorkCmpConst(0x8028, 1);
	if (1) goto label79;
	goto label74;

label79: ;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkDown, 2,
		WalkRight, 1,
		TurnUp, 1,
	};

	goto label74;

label74: ;
	ActorCmdWait();
	VMReturn();
}

void Routine1()
{
	FlagGet(0x172, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label80; // jump if defeated
	StackPush(0x4082);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label81;
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label82;
	ActorSetGPos(1, 12, 1, 3, 1);
	ActorSetGPos(2, 14, 1, 2, 1);
	ActorSetGPos(3, 10, 1, 2, 1);
	goto label83;

label82: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label84;
	ActorSetGPos(1, 10, 1, 2, 1);
	ActorSetGPos(2, 12, 1, 3, 1);
	ActorSetGPos(3, 14, 1, 2, 1);
	goto label83;

label84: ;
	ActorSetGPos(1, 10, 1, 2, 1);
	ActorSetGPos(2, 14, 1, 2, 1);
	ActorSetGPos(3, 12, 1, 3, 1);

label83: ;
	goto label81;

label81: ;
	goto label85;

label80: ;
	ActorSetGPos(1, 10, 1, 2, 1);
	ActorSetGPos(2, 14, 1, 2, 1);
	ActorSetGPos(3, 12, 1, 3, 1);

label85: ;
	WorkCmpConst(0x4082, 0);
	if (1) goto label86;
	goto label87;

label86: ;
	goto label88;

label87: ;
	WorkCmpConst(0x4082, 1);
	if (1) goto label89;
	goto label90;

label89: ;
	goto label88;

label90: ;
	WorkCmpConst(0x4082, 2);
	if (1) goto label91;
	goto label92;

label91: ;
	ActorSetGPos(4, 24, 0, 34, 1);
	goto label88;

label92: ;
	WorkCmpConst(0x4082, 3);
	if (1) goto label93;
	goto label94;

label93: ;
	ActorSetGPos(4, 24, 0, 34, 1);
	ActorSetGPos(5, 24, 0, 34, 1);
	goto label88;

label94: ;
	WorkCmpConst(0x4082, 4);
	if (1) goto label95;
	goto label96;

label95: ;
	ActorSetGPos(4, 24, 0, 34, 1);
	ActorSetGPos(5, 24, 0, 34, 1);
	ActorSetGPos(6, 24, 0, 34, 1);
	goto label88;

label96: ;
	WorkCmpConst(0x4082, 5);
	if (1) goto label97;
	goto label98;

label97: ;
	ActorSetGPos(4, 24, 0, 34, 1);
	ActorSetGPos(5, 24, 0, 34, 1);
	ActorSetGPos(6, 24, 0, 34, 1);
	goto label88;

label98: ;
	ActorSetGPos(4, 24, 0, 34, 1);
	ActorSetGPos(5, 24, 0, 34, 1);
	ActorSetGPos(6, 24, 0, 34, 1);

label88: ;
	VMReturn();
}
