#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	VMHalt();
}

void Sequence1()
{
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label0;
	CMD_182(1);

label0: ;
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();

	Movement m[] = { //1
		Exclaimation, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	WorkCmpConst(0x8020, 8);
	if (1) goto label1;
	goto label2;

label1: ;

	Movement m[] = { //1
		WalkLeft, 3,
		WalkDown, 2,
	};

	ActorCmdWait();
	goto label3;

label2: ;
	WorkCmpConst(0x8020, 9);
	if (1) goto label4;
	goto label5;

label4: ;

	Movement m[] = { //1
		WalkLeft, 2,
		WalkDown, 2,
	};

	ActorCmdWait();
	goto label3;

label5: ;
	WorkCmpConst(0x8020, 10);
	if (1) goto label6;
	goto label3;

label6: ;

	Movement m[] = { //1
		WalkLeft, 1,
		WalkDown, 2,
	};

	ActorCmdWait();
	goto label3;

label3: ;
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	MsgActorEx(1024, 0, 1, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(119);
	MsgActorEx(1024, 1, 1, 0, 0);
	MsgActorClose();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8022, 0x8023);
	WorkCmpConst(0x8022, 8);
	if (1) goto label7;
	goto label8;

label7: ;

	Movement m[] = { //1
		WalkUp, 2,
		WalkRight, 3,
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label9;

label8: ;
	WorkCmpConst(0x8022, 9);
	if (1) goto label10;
	goto label11;

label10: ;

	Movement m[] = { //1
		WalkUp, 2,
		WalkRight, 2,
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label9;

label11: ;
	WorkCmpConst(0x8022, 10);
	if (1) goto label12;
	goto label9;

label12: ;

	Movement m[] = { //1
		WalkUp, 2,
		WalkRight, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label9;

label9: ;
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x408A, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	FlagGet(0x173, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label13; // jump if defeated
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label14;

label13: ;
	StackPushFlag(126);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label15;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label14;

label15: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();

label14: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	FlagGet(0x173, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label16; // jump if defeated
	StackPush(0x408A);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(129);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label17;
	MsgActor(1024, 8, 0, 0);
	MsgActorClose();

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label18;

label17: ;
	StackPush(0x408A);
	StackPushConst(2);
	StackCmp(1);
	StackPushFlag(129);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label19;
	StackPushFlag(1);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label20;
	MsgActor(1024, 9, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label21;
	MsgActor(1024, 10, 0, 0);
	goto label22;

label21: ;
	MsgActor(1024, 11, 0, 0);

label22: ;
	MsgWinCloseAll();
	FlagSet(1);
	goto label23;

label20: ;
	MsgActor(1024, 12, 0, 0);
	MsgWinCloseAll();

label23: ;

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label18;

label19: ;
	StackPush(0x408A);
	StackPushConst(3);
	StackCmp(1);
	StackPushFlag(129);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label24;
	StackPushFlag(2);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label25;
	MsgActor(1024, 13, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label26;
	MsgActor(1024, 14, 0, 0);
	goto label27;

label26: ;
	MsgActor(1024, 15, 0, 0);

label27: ;
	MsgWinCloseAll();
	FlagSet(2);
	goto label28;

label25: ;
	MsgActor(1024, 16, 0, 0);
	MsgWinCloseAll();

label28: ;

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label18;

label24: ;
	StackPush(0x408A);
	StackPushConst(4);
	StackCmp(1);
	StackPushFlag(129);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label29;
	StackPushFlag(2);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label30;
	MsgActor(1024, 13, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label31;
	MsgActor(1024, 14, 0, 0);
	goto label32;

label31: ;
	MsgActor(1024, 15, 0, 0);

label32: ;
	MsgWinCloseAll();
	FlagSet(2);
	goto label33;

label30: ;
	MsgActor(1024, 16, 0, 0);
	MsgWinCloseAll();

label33: ;

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label18;

label29: ;
	StackPush(0x408A);
	StackPushConst(5);
	StackCmp(1);
	StackPushFlag(129);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label34;
	StackPushFlag(3);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label35;
	MsgActor(1024, 17, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label36;
	MsgActor(1024, 18, 0, 0);
	goto label37;

label36: ;
	MsgActor(1024, 19, 0, 0);

label37: ;
	MsgWinCloseAll();
	FlagSet(3);
	goto label38;

label35: ;
	MsgActor(1024, 20, 0, 0);
	MsgWinCloseAll();

label38: ;

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label18;

label34: ;
	StackPush(0x408A);
	StackPushConst(6);
	StackCmp(1);
	StackPushFlag(129);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label39;
	MsgActor(1024, 21, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label40;
	MsgActor(1024, 22, 0, 0);
	goto label41;

label40: ;
	MsgActor(1024, 23, 0, 0);

label41: ;
	MsgWinCloseAll();
	CallTrainerBattle(87, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label42;
	CallTrainerBattleEnd();
	goto label43;

label42: ;
	CallTrainerLose();

label43: ;
	MsgActor(1024, 24, 0, 0);
	MsgActorClose();
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	PlayerGetGPos(0x8024, 0x8025);
	WorkCmpConst(0x8024, 12);
	if (1) goto label44;
	goto label45;

label44: ;

	Movement m[] = { //2
		WalkDown, 1,
		WalkRight, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();
	goto label46;

label45: ;
	WorkCmpConst(0x8024, 13);
	if (1) goto label47;
	goto label46;

label47: ;

	Movement m[] = { //255
		LookUp, 1,
		WalkLeft, 1,
		LookRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //2
		WalkDown, 1,
		WalkRight, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();
	goto label46;

label46: ;
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);
	FlagSet(129);
	goto label18;

label39: ;
	MsgActor(1024, 25, 0, 0);
	InputWaitLast();
	MsgActorClose();

label18: ;
	goto label48;

label16: ;
	MsgActor(1024, 26, 0, 0);
	InputWaitLast();
	MsgActorClose();

label48: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x408A);
	StackPushConst(2);
	StackCmp(3);
	StackPushFlag(128);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label49;
	MsgActor(1024, 27, 0, 0);
	MsgActorClose();

	Movement m[] = { //0
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label50;

label49: ;
	StackPush(0x408A);
	StackPushConst(3);
	StackCmp(1);
	StackPushFlag(128);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label51;
	MsgActor(1024, 28, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label52;
	MsgActor(1024, 29, 0, 0);
	goto label53;

label52: ;
	MsgActor(1024, 30, 0, 0);

label53: ;
	MsgWinCloseAll();
	CallTrainerBattle(88, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label54;
	CallTrainerBattleEnd();
	goto label55;

label54: ;
	CallTrainerLose();

label55: ;
	MsgActor(1024, 31, 0, 0);
	MsgActorClose();
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	PlayerGetGPos(0x8026, 0x8027);
	WorkCmpConst(0x8026, 5);
	if (1) goto label56;
	goto label57;

label56: ;

	Movement m[] = { //0
		WalkDown, 1,
		WalkRight, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();
	goto label58;

label57: ;
	WorkCmpConst(0x8026, 6);
	if (1) goto label59;
	goto label58;

label59: ;

	Movement m[] = { //255
		LookUp, 1,
		WalkLeft, 1,
		LookRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		WalkDown, 1,
		WalkRight, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();
	goto label58;

label58: ;
	FlagSet(128);
	WorkSetConst(0x408A, 4);

	Movement m[] = { //2
		LookDown, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8026, 0);
	goto label50;

label51: ;
	MsgActor(1024, 32, 0, 0);
	InputWaitLast();
	MsgActorClose();

label50: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	FlagGet(0x173, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label60; // jump if defeated
	MsgInfo(5, 2);
	InputWaitLast();
	MsgWinCloseAll();
	goto label61;

label60: ;
	WordSetPlayerName(0);
	StackPushFlag(2484);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label62;
	MsgInfo(7, 2);
	goto label63;

label62: ;
	MsgInfo(6, 2);

label63: ;
	InputWaitLast();
	MsgWinCloseAll();

label61: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	FlagGet(0x173, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label64; // jump if defeated
	MsgInfo(5, 2);
	InputWaitLast();
	MsgWinCloseAll();
	goto label65;

label64: ;
	WordSetPlayerName(0);
	StackPushFlag(2484);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label66;
	MsgInfo(7, 2);
	goto label67;

label66: ;
	MsgInfo(6, 2);

label67: ;
	InputWaitLast();
	MsgWinCloseAll();

label65: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(33, 2);
	MsgInfo(36, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label68;
	MsgInfo(48, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label69;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label69: ;
	InputWaitLast();

label68: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(33, 2);
	MsgInfo(36, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label70;
	MsgInfo(48, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label71;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label71: ;
	InputWaitLast();

label70: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(33, 2);
	MsgInfo(37, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label72;
	MsgInfo(49, 2);
	StackPush(0x408A);
	StackPushConst(4);
	StackCmp(0);
	if (255) goto label73;
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label74;
	MsgInfo(65, 2);

label74: ;
	goto label75;

label73: ;
	StackPush(0x408A);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label76;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgInfo(60, 2);
	WorkSetConst(0x408A, 5);

	Movement m[] = { //2
		LookDown, 1,
	};

	ActorCmdWait();
	goto label75;

label76: ;
	StackPush(0x408A);
	StackPushConst(4);
	StackCmp(2);
	if (255) goto label75;
	MsgInfo(60, 2);

label75: ;
	InputWaitLast();

label72: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(33, 2);
	MsgInfo(37, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label77;
	MsgInfo(49, 2);
	StackPush(0x408A);
	StackPushConst(4);
	StackCmp(0);
	if (255) goto label78;
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label79;
	MsgInfo(65, 2);

label79: ;
	goto label80;

label78: ;
	StackPush(0x408A);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label81;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgInfo(60, 2);
	WorkSetConst(0x408A, 5);

	Movement m[] = { //2
		LookDown, 1,
	};

	ActorCmdWait();
	goto label80;

label81: ;
	StackPush(0x408A);
	StackPushConst(4);
	StackCmp(2);
	if (255) goto label80;
	MsgInfo(60, 2);

label80: ;
	InputWaitLast();

label77: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(34, 2);
	MsgInfo(40, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label82;
	MsgInfo(52, 2);
	StackPush(0x408A);
	StackPushConst(2);
	StackCmp(0);
	if (255) goto label83;
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label84;
	MsgInfo(65, 2);

label84: ;
	goto label85;

label83: ;
	StackPush(0x408A);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label86;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgInfo(61, 2);
	StackPushFlag(128);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label87;
	WorkSetConst(0x408A, 4);

	Movement m[] = { //2
		LookDown, 1,
	};

	ActorCmdWait();
	goto label88;

label87: ;
	WorkSetConst(0x408A, 3);

	Movement m[] = { //2
		LookDown, 1,
	};


	Movement m[] = { //0
		LookDown, 1,
	};

	ActorCmdWait();

label88: ;
	goto label85;

label86: ;
	StackPush(0x408A);
	StackPushConst(2);
	StackCmp(2);
	if (255) goto label85;
	MsgInfo(61, 2);

label85: ;
	InputWaitLast();

label82: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(34, 2);
	MsgInfo(40, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label89;
	MsgInfo(52, 2);
	StackPush(0x408A);
	StackPushConst(2);
	StackCmp(0);
	if (255) goto label90;
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label91;
	MsgInfo(65, 2);

label91: ;
	goto label92;

label90: ;
	StackPush(0x408A);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label93;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgInfo(61, 2);
	StackPushFlag(128);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label94;
	WorkSetConst(0x408A, 4);

	Movement m[] = { //2
		LookDown, 1,
	};

	ActorCmdWait();
	goto label95;

label94: ;
	WorkSetConst(0x408A, 3);

	Movement m[] = { //2
		LookDown, 1,
	};


	Movement m[] = { //0
		LookDown, 1,
	};

	ActorCmdWait();

label95: ;
	goto label92;

label93: ;
	StackPush(0x408A);
	StackPushConst(2);
	StackCmp(2);
	if (255) goto label92;
	MsgInfo(61, 2);

label92: ;
	InputWaitLast();

label89: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(34, 2);
	MsgInfo(41, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label96;
	MsgInfo(53, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label97;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label97: ;
	InputWaitLast();

label96: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(34, 2);
	MsgInfo(41, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label98;
	MsgInfo(53, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label99;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label99: ;
	InputWaitLast();

label98: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(35, 2);
	MsgInfo(44, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label100;
	MsgInfo(56, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label101;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label101: ;
	InputWaitLast();

label100: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence17()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(35, 2);
	MsgInfo(44, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label102;
	MsgInfo(56, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label103;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label103: ;
	InputWaitLast();

label102: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence18()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(35, 2);
	MsgInfo(45, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label104;
	MsgInfo(57, 2);
	StackPush(0x408A);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label105;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgInfo(63, 2);
	WorkSetConst(0x408A, 2);

	Movement m[] = { //2
		LookDown, 1,
	};

	ActorCmdWait();
	goto label106;

label105: ;
	StackPush(0x408A);
	StackPushConst(1);
	StackCmp(2);
	if (255) goto label106;
	MsgInfo(63, 2);

label106: ;
	InputWaitLast();

label104: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence19()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(35, 2);
	MsgInfo(45, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label107;
	MsgInfo(57, 2);
	StackPush(0x408A);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label108;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgInfo(63, 2);
	WorkSetConst(0x408A, 2);

	Movement m[] = { //2
		LookDown, 1,
	};

	ActorCmdWait();
	goto label109;

label108: ;
	StackPush(0x408A);
	StackPushConst(1);
	StackCmp(2);
	if (255) goto label109;
	MsgInfo(63, 2);

label109: ;
	InputWaitLast();

label107: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence20()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(33, 2);
	MsgInfo(38, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label110;
	MsgInfo(50, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label111;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label111: ;
	InputWaitLast();

label110: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence21()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(33, 2);
	MsgInfo(38, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label112;
	MsgInfo(50, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label113;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label113: ;
	InputWaitLast();

label112: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence22()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(33, 2);
	MsgInfo(39, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label114;
	MsgInfo(51, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label115;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label115: ;
	InputWaitLast();

label114: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence23()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(33, 2);
	MsgInfo(39, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label116;
	MsgInfo(51, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label117;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label117: ;
	InputWaitLast();

label116: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence24()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(35, 2);
	MsgInfo(46, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label118;
	MsgInfo(58, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label119;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label119: ;
	InputWaitLast();

label118: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence25()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(35, 2);
	MsgInfo(46, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label120;
	MsgInfo(58, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label121;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label121: ;
	InputWaitLast();

label120: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence26()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(35, 2);
	MsgInfo(47, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label122;
	MsgInfo(59, 2);
	StackPush(0x408A);
	StackPushConst(5);
	StackCmp(0);
	if (255) goto label123;
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label124;
	MsgInfo(65, 2);

label124: ;
	goto label125;

label123: ;
	StackPush(0x408A);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label126;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgInfo(64, 2);
	WorkSetConst(0x408A, 6);
	goto label125;

label126: ;
	StackPush(0x408A);
	StackPushConst(5);
	StackCmp(2);
	if (255) goto label125;
	MsgInfo(64, 2);

label125: ;
	InputWaitLast();

label122: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence27()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(35, 2);
	MsgInfo(47, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label127;
	MsgInfo(59, 2);
	StackPush(0x408A);
	StackPushConst(5);
	StackCmp(0);
	if (255) goto label128;
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label129;
	MsgInfo(65, 2);

label129: ;
	goto label130;

label128: ;
	StackPush(0x408A);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label131;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgInfo(64, 2);
	WorkSetConst(0x408A, 6);
	goto label130;

label131: ;
	StackPush(0x408A);
	StackPushConst(5);
	StackCmp(2);
	if (255) goto label130;
	MsgInfo(64, 2);

label130: ;
	InputWaitLast();

label127: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence28()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(34, 2);
	MsgInfo(42, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label132;
	MsgInfo(54, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label133;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label133: ;
	InputWaitLast();

label132: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence29()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(34, 2);
	MsgInfo(42, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label134;
	MsgInfo(54, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label135;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label135: ;
	InputWaitLast();

label134: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence30()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(34, 2);
	MsgInfo(43, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label136;
	MsgInfo(55, 2);
	MsgWaitAdvance();
	StackPush(0x408A);
	StackPushConst(6);
	StackCmp(1);
	if (255) goto label137;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgInfo(62, 2);
	MsgWaitAdvance();
	SEPlay(1693);
	MsgInfo(66, 2);
	SEWait();
	MsgWinCloseAll();
	SEPlay(1685);
	CMD_185(0);
	SEStop();

	Movement m[] = { //3
		FastestWalkRight, 3,
	};

	ActorCmdWait();
	CMD_1ea(22, 14, 1, 10);
	CMD_1ea(23, 15, 0, 10);
	CMD_1ea(24, 16, 0, 10);
	CMD_1ea(25, 17, 0, 10);
	MsgInfo(67, 2);
	WorkSetConst(0x408A, 7);
	goto label138;

label137: ;
	MsgInfo(62, 2);

label138: ;
	InputWaitLast();

label136: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence31()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(34, 2);
	MsgInfo(43, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label139;
	MsgInfo(55, 2);
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(5);
	if (255) goto label140;
	MsgWaitAdvance();
	MsgInfo(65, 2);

label140: ;
	InputWaitLast();

label139: ;
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence32()
{
	StackPushFlag(128);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label141;
	ActorSetGPos(0, 7, 0, 4, 2);

label141: ;
	StackPushFlag(129);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label142;
	ActorSetGPos(2, 14, 0, 12, 2);

label142: ;
	StackPush(0x408A);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label143;
	ActorSetGPos(3, 14, 0, 10, 0);
	CMD_1ea(22, 14, 1, 10);
	CMD_1ea(23, 15, 0, 10);
	CMD_1ea(24, 16, 0, 10);
	CMD_1ea(25, 17, 0, 10);

label143: ;
	VMHalt();
}
