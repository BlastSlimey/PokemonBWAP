#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	StackPushFlag(276);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	StackPush(0x8000);
	StackPush(0x8001);
	StackPush(0x8002);
	StackPush(0x8003);
	StackPush(0x8004);
	StackPush(0x8005);
	StackPush(0x8006);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	WorkSet(0x8002, 276);
	WorkSet(0x8003, 21);
	WorkSet(0x8004, 22);
	WorkSet(0x8005, 22);
	RTGetTextFile(0x8006);
	RTCallGlobal(2800);
	StackPop(0x8006);
	StackPop(0x8005);
	StackPop(0x8004);
	StackPop(0x8003);
	StackPop(0x8002);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label1;

label0: ;
	StackPushFlag(277);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 22, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label1;

label2: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 23, 0, 0);
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
	ActorSetEyeToEye();
	MsgActor(1024, 20, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	MsgInfo(9, 2);
	MsgWinCloseAll();
	FlagReset(587);
	ActorAdd(2);
	ActorSetGPos(2, 61, 0, 38, 1);

	Movement m[] = { //255
		TurnDown, 1,
	};


	Movement m[] = { //2
		WalkUp, 6,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 10, 2, 0, 0);

	Movement m[] = { //2
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 2, 0, 0);

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 12, 2, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x409E, 1);
	FlagReset(688);
	WorkSetConst(0x409D, 2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 19, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	CMD_1b5();
	CMD_1b1();
	MsgActorEx(1024, 13, 3, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 14, 4, 0, 0);
	MsgWinCloseAll();
	MEPlay(1327);
	MsgSystem(16, 2);
	MEWait();
	WordSetPlayerName(0);
	MsgSystem(17, 2);
	MsgWinCloseAll();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CallXTransceiver(5, 330);
	CMD_1ad();
	CMD_1b1();
	MsgActorEx(1024, 18, 4, 0, 0);
	MsgWinCloseAll();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x3C9000, 0x18017, 0x219000, 10);
	EVCameraWait();

	Movement m[] = { //4
		TurnDown, 1,
	};

	ActorCmdWait();
	PlayAlderFlyEffect(4);
	EVCameraReturn(10);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();

	Movement m[] = { //3
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 19, 3, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(589);
	FlagReset(614);
	FlagSet(604);
	WorkSetConst(0x4092, 6);
	FlagReset(580);
	FlagSet(607);
	FlagSet(688);
	FlagReset(751);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8021, 0);
	ItemCheckCount(504, 1, 0x8021);
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	MsgSystem(7, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	WorkSetConst(0x8022, 1);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label5;
	FlagSet(663);
	Routine0();
	MsgSystem(8, 2);
	MsgSystemClose();
	WorkSetConst(0x8023, 0);
	Routine1();
	CallWildBattle(555, 35, 0x8020);
	WildBattleIsVictory(0x8023);
	StackPush(0x8023);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	ActorDelete(0x8011);
	CallWildBattleEnd();
	goto label5;

label6: ;
	CallWildLose();

label5: ;
	goto label7;

label4: ;
	MsgSystemClose();

label7: ;
	goto label8;

label3: ;
	MsgSystem(6, 2);
	InputWaitLast();
	MsgSystemClose();

label8: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8024, 0);
	ItemCheckCount(504, 1, 0x8024);
	StackPush(0x8024);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	MsgSystem(7, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	WorkSetConst(0x8025, 1);
	StackPush(0x8025);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	FlagSet(664);
	Routine0();
	MsgSystem(8, 2);
	MsgSystemClose();
	WorkSetConst(0x8026, 0);
	Routine1();
	CallWildBattle(555, 35, 0x8020);
	WildBattleIsVictory(0x8026);
	StackPush(0x8026);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	ActorDelete(0x8011);
	CallWildBattleEnd();
	goto label11;

label12: ;
	CallWildLose();

label11: ;
	goto label13;

label10: ;
	MsgSystemClose();

label13: ;
	goto label14;

label9: ;
	MsgSystem(6, 2);
	InputWaitLast();
	MsgSystemClose();

label14: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8027, 0);
	ItemCheckCount(504, 1, 0x8027);
	StackPush(0x8027);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label15;
	MsgSystem(7, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label16;
	WorkSetConst(0x8028, 1);
	StackPush(0x8028);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label17;
	FlagSet(665);
	Routine0();
	MsgSystem(8, 2);
	MsgSystemClose();
	WorkSetConst(0x8029, 0);
	Routine1();
	CallWildBattle(555, 35, 0x8020);
	WildBattleIsVictory(0x8029);
	StackPush(0x8029);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label18;
	ActorDelete(0x8011);
	CallWildBattleEnd();
	goto label17;

label18: ;
	CallWildLose();

label17: ;
	goto label19;

label16: ;
	MsgSystemClose();

label19: ;
	goto label20;

label15: ;
	MsgSystem(6, 2);
	InputWaitLast();
	MsgSystemClose();

label20: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x802A, 0);
	ItemCheckCount(504, 1, 0x802A);
	StackPush(0x802A);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label21;
	MsgSystem(7, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label22;
	WorkSetConst(0x802B, 1);
	StackPush(0x802B);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label23;
	FlagSet(666);
	Routine0();
	MsgSystem(8, 2);
	MsgSystemClose();
	WorkSetConst(0x802C, 0);
	Routine1();
	CallWildBattle(555, 35, 0x8020);
	WildBattleIsVictory(0x802C);
	StackPush(0x802C);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label24;
	ActorDelete(0x8011);
	CallWildBattleEnd();
	goto label23;

label24: ;
	CallWildLose();

label23: ;
	goto label25;

label22: ;
	MsgSystemClose();

label25: ;
	goto label26;

label21: ;
	MsgSystem(6, 2);
	InputWaitLast();
	MsgSystemClose();

label26: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x802D, 0);
	ItemCheckCount(504, 1, 0x802D);
	StackPush(0x802D);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label27;
	MsgSystem(7, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label28;
	WorkSetConst(0x802E, 1);
	StackPush(0x802E);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label29;
	FlagSet(667);
	Routine0();
	MsgSystem(8, 2);
	MsgSystemClose();
	WorkSetConst(0x802F, 0);
	Routine1();
	CallWildBattle(555, 35, 0x8020);
	WildBattleIsVictory(0x802F);
	StackPush(0x802F);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label30;
	ActorDelete(0x8011);
	CallWildBattleEnd();
	goto label29;

label30: ;
	CallWildLose();

label29: ;
	goto label31;

label28: ;
	MsgSystemClose();

label31: ;
	goto label32;

label27: ;
	MsgSystem(6, 2);
	InputWaitLast();
	MsgSystemClose();

label32: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 25, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
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

void Sequence12()
{
	ActorPauseAll();
	SEPlay(1369);
	ActorNew(61, 29, 1, 251, 105, 0);
	SEWait();

	Movement m[] = { //251
		Exclaimation, 1,
	};

	ActorCmdWait();
	BGMPlay(1089);

	Movement m[] = { //251
		WalkDown, 1,
	};


	Movement m[] = { //255
		LookUp, 1,
		LockDirection, 1,
		WalkDown, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 0, 251, 0, 0);
	MsgActorEx(1024, 1, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkLeft, 1,
		WalkDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		LookLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		Wait16, 1,
		LookDown, 1,
	};


	Movement m[] = { //251
		WalkDown, 2,
		WalkRight, 1,
		TurnLeft, 1,
		TurnRight, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 4, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkUp, 1,
	};

	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x19C);
	MsgActorEx(1024, 5, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkDown, 10,
	};

	ActorCmdWait();
	ActorDelete(251);
	BGMChangeMap();
	WorkSetConst(0x4077, 2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	StackPushFlag(663);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(664);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(665);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(666);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(667);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(7);
	StackCmp(7);
	StackCmp(7);
	StackCmp(7);
	if (255) goto label33;
	WorkSetConst(0x4077, 2);

label33: ;
	VMReturn();
}

void Routine1()
{
	WorkSetConst(0x8020, 128);
	WorkOr(0x8020, 8);
	VMReturn();
}
