#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(260);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActorEx(1024, 9, 0, 1, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(260);
	MsgActorEx(1024, 10, 0, 1, 0);
	goto label1;

label0: ;
	MsgActorEx(1024, 10, 0, 1, 0);

label1: ;
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 11, 1, 1, 0);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	StackPush(0x40A4);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label2;
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	StackPush(0x4001);
	StackPushConst(3);
	StackCmp(1);
	StackPush(0x4001);
	StackPushConst(2);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label2;
	StackPush(0x4000);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label2;
	CasteliaRushInit();
	StackPush(0x8021);
	StackPushConst(34);
	StackCmp(0);
	if (255) goto label3;
	ActorSetGPos(10, 15, 0, 37, 0);
	goto label2;

label3: ;
	StackPush(0x8021);
	StackPushConst(156);
	StackCmp(3);
	StackPush(0x8021);
	StackPushConst(35);
	StackCmp(4);
	StackCmp(7);
	if (255) goto label4;
	WorkSetConst(0x40DB, 2);
	goto label2;

label4: ;
	StackPush(0x8021);
	StackPushConst(157);
	StackCmp(2);
	if (255) goto label2;
	ActorSetGPos(10, 15, 0, 154, 1);

label2: ;
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	VMHalt();
}

void Sequence3()
{
	StackPush(0x40A4);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label5;
	StackPush(0x4001);
	StackPushConst(3);
	StackCmp(1);
	StackPush(0x4001);
	StackPushConst(2);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label5;
	StackPush(0x4000);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label5;
	CasteliaRushInit();

label5: ;
	VMHalt();
}

void Sequence4()
{
	FlagReset(778);
	FlagSet(777);
	WorkSetConst(0x40DB, 0);
	StackPush(0x40A4);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label6;
	StackPushFlag(2752);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label7;
	TrainerFlagReset(544);
	TrainerFlagReset(545);
	StackPush(0x4114);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label7;
	WorkSetConst(0x4114, 395);

label7: ;
	RTCGetWeekDay(0x4000);
	StackPush(0x4000);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label6;
	Routine0();

label6: ;
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	WordSetPokeSpecies(0, 0x4114);
	SEPlay(1351);
	ActorSetEyeToEye();
	TrainerFlagGet(544, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	MsgActorEx(1024, 16, 10, 1, 0);
	goto label9;

label8: ;
	MsgActorEx(1024, 12, 10, 1, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	MsgActorEx(1024, 14, 10, 1, 0);
	goto label9;

label10: ;
	MsgActorEx(1024, 13, 10, 1, 0);
	MsgWinCloseAll();
	CallTrainerBattle(544, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	CallTrainerBattleEnd();
	TrainerFlagSet(544);
	FlagSet(2752);
	goto label12;

label11: ;
	CallTrainerLose();

label12: ;
	MsgActorEx(1024, 16, 10, 1, 0);

label9: ;
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	WorkSetConst(0x8026, 0);
	WordSetPokeSpecies(0, 0x4114);
	SEPlay(1351);
	ActorSetEyeToEye();
	TrainerFlagGet(545, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label13;
	MsgActorEx(1024, 22, 5, 1, 0);
	goto label14;

label13: ;
	MsgActorEx(1024, 19, 5, 1, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label15;
	MsgActorEx(1024, 21, 5, 1, 0);
	goto label14;

label15: ;
	MsgActorEx(1024, 20, 5, 1, 0);
	MsgWinCloseAll();
	CallTrainerBattle(545, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label16;
	CallTrainerBattleEnd();
	TrainerFlagSet(545);
	FlagSet(2752);
	PokePartyGetMemberByType(0x8026, 2);
	PokePartyGetSpecies(0x4114, 0x8026);
	goto label17;

label16: ;
	CallTrainerLose();

label17: ;
	WordSetPokeSpecies(0, 0x4114);
	MsgActorEx(1024, 22, 5, 1, 0);

label14: ;
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	WordSetPokeSpecies(0, 0x4114);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 23, 4, 1, 0);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	WordSetPokeSpecies(0, 0x4114);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 24, 2, 1, 0);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	WordSetPokeSpecies(0, 0x4114);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 25, 3, 1, 0);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	PlayerGetGPos(0x8024, 0x8025);
	StackPush(0x8024);
	StackPushConst(10);
	StackCmp(3);
	StackPush(0x8024);
	StackPushConst(21);
	StackCmp(4);
	StackCmp(6);
	if (255) goto label18;
	MsgInfo(18, 1);
	goto label19;

label18: ;

	Movement m[] = { //10
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 10, 1, 0);

label19: ;
	StackPush(0x8024);
	StackPushConst(15);
	StackCmp(5);
	if (255) goto label20;
	MsgWinCloseAll();

label20: ;
	StackPush(0x8025);
	StackPushConst(34);
	StackCmp(1);
	if (255) goto label21;
	StackPush(0x8024);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label22;

	Movement m[] = { //10
		FastWalkLeft, 8,
		FastWalkUp, 1,
	};

	goto label23;

label22: ;
	StackPush(0x8024);
	StackPushConst(8);
	StackCmp(1);
	if (255) goto label24;

	Movement m[] = { //10
		FastWalkLeft, 7,
		FastWalkUp, 1,
	};

	goto label23;

label24: ;
	StackPush(0x8024);
	StackPushConst(9);
	StackCmp(1);
	if (255) goto label25;

	Movement m[] = { //10
		FastWalkLeft, 6,
		FastWalkUp, 1,
	};

	goto label23;

label25: ;
	StackPush(0x8024);
	StackPushConst(10);
	StackCmp(1);
	if (255) goto label26;

	Movement m[] = { //10
		FastWalkLeft, 5,
		FastWalkUp, 1,
	};

	goto label23;

label26: ;
	StackPush(0x8024);
	StackPushConst(11);
	StackCmp(1);
	if (255) goto label27;

	Movement m[] = { //10
		FastWalkLeft, 4,
		FastWalkUp, 1,
	};

	goto label23;

label27: ;
	StackPush(0x8024);
	StackPushConst(12);
	StackCmp(1);
	if (255) goto label28;

	Movement m[] = { //10
		FastWalkLeft, 3,
		FastWalkUp, 1,
	};

	goto label23;

label28: ;
	StackPush(0x8024);
	StackPushConst(13);
	StackCmp(1);
	if (255) goto label29;

	Movement m[] = { //10
		FastWalkLeft, 2,
		FastWalkUp, 1,
	};

	goto label23;

label29: ;
	StackPush(0x8024);
	StackPushConst(14);
	StackCmp(1);
	if (255) goto label30;

	Movement m[] = { //10
		FastWalkLeft, 1,
		FastWalkUp, 1,
	};

	goto label23;

label30: ;
	StackPush(0x8024);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label31;

	Movement m[] = { //10
		FastWalkRight, 1,
		FastWalkUp, 1,
	};

	goto label23;

label31: ;
	StackPush(0x8024);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label32;

	Movement m[] = { //10
		FastWalkRight, 2,
		FastWalkUp, 1,
	};

	goto label23;

label32: ;
	StackPush(0x8024);
	StackPushConst(18);
	StackCmp(1);
	if (255) goto label33;

	Movement m[] = { //10
		FastWalkRight, 3,
		FastWalkUp, 1,
	};

	goto label23;

label33: ;
	StackPush(0x8024);
	StackPushConst(19);
	StackCmp(1);
	if (255) goto label34;

	Movement m[] = { //10
		FastWalkRight, 4,
		FastWalkUp, 1,
	};

	goto label23;

label34: ;
	StackPush(0x8024);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label35;

	Movement m[] = { //10
		FastWalkRight, 5,
		FastWalkUp, 1,
	};

	goto label23;

label35: ;
	StackPush(0x8024);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label36;

	Movement m[] = { //10
		FastWalkRight, 6,
		FastWalkUp, 1,
	};

	goto label23;

label36: ;
	StackPush(0x8024);
	StackPushConst(22);
	StackCmp(1);
	if (255) goto label37;

	Movement m[] = { //10
		FastWalkRight, 7,
		FastWalkUp, 1,
	};

	goto label23;

label37: ;
	StackPush(0x8024);
	StackPushConst(23);
	StackCmp(1);
	if (255) goto label38;

	Movement m[] = { //10
		FastWalkRight, 8,
		FastWalkUp, 1,
	};

	goto label23;

label38: ;
	StackPush(0x8024);
	StackPushConst(24);
	StackCmp(1);
	if (255) goto label23;

	Movement m[] = { //10
		FastWalkRight, 9,
		FastWalkUp, 1,
	};


label23: ;
	goto label39;

label21: ;
	StackPush(0x8025);
	StackPushConst(157);
	StackCmp(1);
	if (255) goto label39;
	StackPush(0x8024);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label40;

	Movement m[] = { //10
		FastWalkLeft, 8,
		FastWalkDown, 1,
	};

	goto label39;

label40: ;
	StackPush(0x8024);
	StackPushConst(8);
	StackCmp(1);
	if (255) goto label41;

	Movement m[] = { //10
		FastWalkLeft, 7,
		FastWalkDown, 1,
	};

	goto label39;

label41: ;
	StackPush(0x8024);
	StackPushConst(9);
	StackCmp(1);
	if (255) goto label42;

	Movement m[] = { //10
		FastWalkLeft, 6,
		FastWalkDown, 1,
	};

	goto label39;

label42: ;
	StackPush(0x8024);
	StackPushConst(10);
	StackCmp(1);
	if (255) goto label43;

	Movement m[] = { //10
		FastWalkLeft, 5,
		FastWalkDown, 1,
	};

	goto label39;

label43: ;
	StackPush(0x8024);
	StackPushConst(11);
	StackCmp(1);
	if (255) goto label44;

	Movement m[] = { //10
		FastWalkLeft, 4,
		FastWalkDown, 1,
	};

	goto label39;

label44: ;
	StackPush(0x8024);
	StackPushConst(12);
	StackCmp(1);
	if (255) goto label45;

	Movement m[] = { //10
		FastWalkLeft, 3,
		FastWalkDown, 1,
	};

	goto label39;

label45: ;
	StackPush(0x8024);
	StackPushConst(13);
	StackCmp(1);
	if (255) goto label46;

	Movement m[] = { //10
		FastWalkLeft, 2,
		FastWalkDown, 1,
	};

	goto label39;

label46: ;
	StackPush(0x8024);
	StackPushConst(14);
	StackCmp(1);
	if (255) goto label47;

	Movement m[] = { //10
		FastWalkLeft, 1,
		FastWalkDown, 1,
	};

	goto label39;

label47: ;
	StackPush(0x8024);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label48;

	Movement m[] = { //10
		FastWalkRight, 1,
		FastWalkDown, 1,
	};

	goto label39;

label48: ;
	StackPush(0x8024);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label49;

	Movement m[] = { //10
		FastWalkRight, 2,
		FastWalkDown, 1,
	};

	goto label39;

label49: ;
	StackPush(0x8024);
	StackPushConst(18);
	StackCmp(1);
	if (255) goto label50;

	Movement m[] = { //10
		FastWalkRight, 3,
		FastWalkDown, 1,
	};

	goto label39;

label50: ;
	StackPush(0x8024);
	StackPushConst(19);
	StackCmp(1);
	if (255) goto label51;

	Movement m[] = { //10
		FastWalkRight, 4,
		FastWalkDown, 1,
	};

	goto label39;

label51: ;
	StackPush(0x8024);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label52;

	Movement m[] = { //10
		FastWalkRight, 5,
		FastWalkDown, 1,
	};

	goto label39;

label52: ;
	StackPush(0x8024);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label53;

	Movement m[] = { //10
		FastWalkRight, 6,
		FastWalkDown, 1,
	};

	goto label39;

label53: ;
	StackPush(0x8024);
	StackPushConst(22);
	StackCmp(1);
	if (255) goto label54;

	Movement m[] = { //10
		FastWalkRight, 7,
		FastWalkDown, 1,
	};

	goto label39;

label54: ;
	StackPush(0x8024);
	StackPushConst(23);
	StackCmp(1);
	if (255) goto label55;

	Movement m[] = { //10
		FastWalkRight, 8,
		FastWalkDown, 1,
	};

	goto label39;

label55: ;
	StackPush(0x8024);
	StackPushConst(24);
	StackCmp(1);
	if (255) goto label39;

	Movement m[] = { //10
		FastWalkRight, 9,
		FastWalkDown, 1,
	};


label39: ;
	ActorCmdWait();
	WordSetPokeSpecies(0, 0x4114);
	MsgActorEx(1024, 12, 10, 1, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label56;
	StackPush(0x8024);
	StackPushConst(15);
	StackCmp(5);
	if (255) goto label57;
	MsgActorEx(1024, 15, 10, 1, 0);
	goto label58;

label57: ;
	MsgActorEx(1024, 14, 10, 1, 0);
	InputWaitLast();

label58: ;
	goto label59;

label56: ;
	MsgActorEx(1024, 13, 10, 1, 0);
	MsgWinCloseAll();
	CallTrainerBattle(544, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label60;
	CallTrainerBattleEnd();
	TrainerFlagSet(544);
	FlagSet(2752);
	goto label61;

label60: ;
	CallTrainerLose();

label61: ;
	StackPush(0x8024);
	StackPushConst(15);
	StackCmp(5);
	if (255) goto label62;
	MsgActorEx(1024, 17, 10, 1, 0);
	goto label59;

label62: ;
	MsgActorEx(1024, 16, 10, 1, 0);
	InputWaitLast();

label59: ;
	MsgWinCloseAll();
	StackPush(0x8025);
	StackPushConst(34);
	StackCmp(1);
	if (255) goto label63;
	StackPush(0x8024);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label64;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkRight, 8,
		FastTurnUp, 1,
	};

	goto label65;

label64: ;
	StackPush(0x8024);
	StackPushConst(8);
	StackCmp(1);
	if (255) goto label66;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkRight, 7,
		FastTurnUp, 1,
	};

	goto label65;

label66: ;
	StackPush(0x8024);
	StackPushConst(9);
	StackCmp(1);
	if (255) goto label67;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkRight, 6,
		FastTurnUp, 1,
	};

	goto label65;

label67: ;
	StackPush(0x8024);
	StackPushConst(10);
	StackCmp(1);
	if (255) goto label68;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkRight, 5,
		FastTurnUp, 1,
	};

	goto label65;

label68: ;
	StackPush(0x8024);
	StackPushConst(11);
	StackCmp(1);
	if (255) goto label69;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkRight, 4,
		FastTurnUp, 1,
	};

	goto label65;

label69: ;
	StackPush(0x8024);
	StackPushConst(12);
	StackCmp(1);
	if (255) goto label70;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkRight, 3,
		FastTurnUp, 1,
	};

	goto label65;

label70: ;
	StackPush(0x8024);
	StackPushConst(13);
	StackCmp(1);
	if (255) goto label71;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkRight, 2,
		FastTurnUp, 1,
	};

	goto label65;

label71: ;
	StackPush(0x8024);
	StackPushConst(14);
	StackCmp(1);
	if (255) goto label72;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkRight, 1,
		FastTurnUp, 1,
	};

	goto label65;

label72: ;
	StackPush(0x8024);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label73;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkLeft, 1,
		FastTurnUp, 1,
	};

	goto label65;

label73: ;
	StackPush(0x8024);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label74;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkLeft, 2,
		FastTurnUp, 1,
	};

	goto label65;

label74: ;
	StackPush(0x8024);
	StackPushConst(18);
	StackCmp(1);
	if (255) goto label75;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkLeft, 3,
		FastTurnUp, 1,
	};

	goto label65;

label75: ;
	StackPush(0x8024);
	StackPushConst(19);
	StackCmp(1);
	if (255) goto label76;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkLeft, 4,
		FastTurnUp, 1,
	};

	goto label65;

label76: ;
	StackPush(0x8024);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label77;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkLeft, 5,
		FastTurnUp, 1,
	};

	goto label65;

label77: ;
	StackPush(0x8024);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label78;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkLeft, 6,
		FastTurnUp, 1,
	};

	goto label65;

label78: ;
	StackPush(0x8024);
	StackPushConst(22);
	StackCmp(1);
	if (255) goto label79;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkLeft, 7,
		FastTurnUp, 1,
	};

	goto label65;

label79: ;
	StackPush(0x8024);
	StackPushConst(23);
	StackCmp(1);
	if (255) goto label80;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkLeft, 8,
		FastTurnUp, 1,
	};

	goto label65;

label80: ;
	StackPush(0x8024);
	StackPushConst(24);
	StackCmp(1);
	if (255) goto label65;

	Movement m[] = { //10
		FastWalkDown, 1,
		FastWalkLeft, 9,
		FastTurnUp, 1,
	};


label65: ;
	goto label81;

label63: ;
	StackPush(0x8025);
	StackPushConst(157);
	StackCmp(1);
	if (255) goto label81;
	StackPush(0x8024);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label82;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkRight, 8,
		FastTurnDown, 1,
	};

	goto label81;

label82: ;
	StackPush(0x8024);
	StackPushConst(8);
	StackCmp(1);
	if (255) goto label83;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkRight, 7,
		FastTurnDown, 1,
	};

	goto label81;

label83: ;
	StackPush(0x8024);
	StackPushConst(9);
	StackCmp(1);
	if (255) goto label84;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkRight, 6,
		FastTurnDown, 1,
	};

	goto label81;

label84: ;
	StackPush(0x8024);
	StackPushConst(10);
	StackCmp(1);
	if (255) goto label85;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkRight, 5,
		FastTurnDown, 1,
	};

	goto label81;

label85: ;
	StackPush(0x8024);
	StackPushConst(11);
	StackCmp(1);
	if (255) goto label86;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkRight, 4,
		FastTurnDown, 1,
	};

	goto label81;

label86: ;
	StackPush(0x8024);
	StackPushConst(12);
	StackCmp(1);
	if (255) goto label87;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkRight, 3,
		FastTurnDown, 1,
	};

	goto label81;

label87: ;
	StackPush(0x8024);
	StackPushConst(13);
	StackCmp(1);
	if (255) goto label88;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkRight, 2,
		FastTurnDown, 1,
	};

	goto label81;

label88: ;
	StackPush(0x8024);
	StackPushConst(14);
	StackCmp(1);
	if (255) goto label89;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkRight, 1,
		FastTurnDown, 1,
	};

	goto label81;

label89: ;
	StackPush(0x8024);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label90;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkLeft, 1,
		FastTurnDown, 1,
	};

	goto label81;

label90: ;
	StackPush(0x8024);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label91;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkLeft, 2,
		FastTurnDown, 1,
	};

	goto label81;

label91: ;
	StackPush(0x8024);
	StackPushConst(18);
	StackCmp(1);
	if (255) goto label92;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkLeft, 3,
		FastTurnDown, 1,
	};

	goto label81;

label92: ;
	StackPush(0x8024);
	StackPushConst(19);
	StackCmp(1);
	if (255) goto label93;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkLeft, 4,
		FastTurnDown, 1,
	};

	goto label81;

label93: ;
	StackPush(0x8024);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label94;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkLeft, 5,
		FastTurnDown, 1,
	};

	goto label81;

label94: ;
	StackPush(0x8024);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label95;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkLeft, 6,
		FastTurnDown, 1,
	};

	goto label81;

label95: ;
	StackPush(0x8024);
	StackPushConst(22);
	StackCmp(1);
	if (255) goto label96;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkLeft, 7,
		FastTurnDown, 1,
	};

	goto label81;

label96: ;
	StackPush(0x8024);
	StackPushConst(23);
	StackCmp(1);
	if (255) goto label97;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkLeft, 8,
		FastTurnDown, 1,
	};

	goto label81;

label97: ;
	StackPush(0x8024);
	StackPushConst(24);
	StackCmp(1);
	if (255) goto label81;

	Movement m[] = { //10
		FastWalkUp, 1,
		FastWalkLeft, 9,
		FastTurnDown, 1,
	};


label81: ;
	ActorCmdWait();
	WorkSetConst(0x40DB, 2);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	CMD_13d();
	FlagReset(838);
	ActorAdd(7);
	ActorAdd(8);
	ActorAdd(9);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8022, 0x8023);
	StackPush(0x8022);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label98;
	ActorSetGPos(8, 7, 0, 49, 0);
	ActorSetGPos(7, 8, 0, 50, 0);
	ActorSetGPos(9, 7, 0, 51, 0);
	goto label99;

label98: ;
	StackPush(0x8022);
	StackPushConst(8);
	StackCmp(1);
	if (255) goto label100;
	ActorSetGPos(7, 7, 0, 50, 0);
	ActorSetGPos(8, 8, 0, 51, 0);
	ActorSetGPos(9, 9, 0, 50, 0);
	goto label99;

label100: ;
	StackPush(0x8022);
	StackPushConst(9);
	StackCmp(1);
	if (255) goto label101;
	ActorSetGPos(7, 8, 0, 50, 0);
	ActorSetGPos(8, 9, 0, 51, 0);
	ActorSetGPos(9, 10, 0, 50, 0);
	goto label99;

label101: ;
	StackPush(0x8022);
	StackPushConst(10);
	StackCmp(1);
	if (255) goto label102;
	ActorSetGPos(7, 9, 0, 50, 0);
	ActorSetGPos(8, 10, 0, 51, 0);
	ActorSetGPos(9, 11, 0, 50, 0);
	goto label99;

label102: ;
	StackPush(0x8022);
	StackPushConst(11);
	StackCmp(1);
	if (255) goto label103;
	ActorSetGPos(7, 10, 0, 50, 0);
	ActorSetGPos(8, 11, 0, 51, 0);
	ActorSetGPos(9, 12, 0, 50, 0);
	goto label99;

label103: ;
	StackPush(0x8022);
	StackPushConst(12);
	StackCmp(1);
	if (255) goto label104;
	ActorSetGPos(7, 11, 0, 50, 0);
	ActorSetGPos(8, 12, 0, 51, 0);
	ActorSetGPos(9, 13, 0, 50, 0);
	goto label99;

label104: ;
	StackPush(0x8022);
	StackPushConst(13);
	StackCmp(1);
	if (255) goto label105;
	ActorSetGPos(7, 12, 0, 50, 0);
	ActorSetGPos(8, 13, 0, 51, 0);
	ActorSetGPos(9, 14, 0, 50, 0);
	goto label99;

label105: ;
	StackPush(0x8022);
	StackPushConst(14);
	StackCmp(1);
	if (255) goto label106;
	ActorSetGPos(7, 13, 0, 50, 0);
	ActorSetGPos(8, 14, 0, 51, 0);
	ActorSetGPos(9, 15, 0, 50, 0);
	goto label99;

label106: ;
	StackPush(0x8022);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label107;
	ActorSetGPos(7, 14, 0, 50, 0);
	ActorSetGPos(8, 15, 0, 51, 0);
	ActorSetGPos(9, 16, 0, 50, 0);
	goto label99;

label107: ;
	StackPush(0x8022);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label108;
	ActorSetGPos(7, 15, 0, 50, 0);
	ActorSetGPos(8, 16, 0, 51, 0);
	ActorSetGPos(9, 17, 0, 50, 0);
	goto label99;

label108: ;
	StackPush(0x8022);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label109;
	ActorSetGPos(7, 16, 0, 50, 0);
	ActorSetGPos(8, 17, 0, 51, 0);
	ActorSetGPos(9, 18, 0, 50, 0);
	goto label99;

label109: ;
	StackPush(0x8022);
	StackPushConst(18);
	StackCmp(1);
	if (255) goto label110;
	ActorSetGPos(7, 17, 0, 50, 0);
	ActorSetGPos(8, 18, 0, 51, 0);
	ActorSetGPos(9, 19, 0, 50, 0);
	goto label99;

label110: ;
	StackPush(0x8022);
	StackPushConst(19);
	StackCmp(1);
	if (255) goto label111;
	ActorSetGPos(7, 18, 0, 50, 0);
	ActorSetGPos(8, 19, 0, 51, 0);
	ActorSetGPos(9, 20, 0, 50, 0);
	goto label99;

label111: ;
	StackPush(0x8022);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label112;
	ActorSetGPos(7, 19, 0, 50, 0);
	ActorSetGPos(8, 20, 0, 51, 0);
	ActorSetGPos(9, 21, 0, 50, 0);
	goto label99;

label112: ;
	StackPush(0x8022);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label113;
	ActorSetGPos(7, 20, 0, 50, 0);
	ActorSetGPos(8, 21, 0, 51, 0);
	ActorSetGPos(9, 22, 0, 50, 0);
	goto label99;

label113: ;
	StackPush(0x8022);
	StackPushConst(22);
	StackCmp(1);
	if (255) goto label114;
	ActorSetGPos(7, 21, 0, 50, 0);
	ActorSetGPos(8, 22, 0, 51, 0);
	ActorSetGPos(9, 23, 0, 50, 0);
	goto label99;

label114: ;
	StackPush(0x8022);
	StackPushConst(23);
	StackCmp(1);
	if (255) goto label115;
	ActorSetGPos(7, 22, 0, 50, 0);
	ActorSetGPos(8, 23, 0, 51, 0);
	ActorSetGPos(9, 24, 0, 50, 0);
	goto label99;

label115: ;
	StackPush(0x8022);
	StackPushConst(24);
	StackCmp(1);
	if (255) goto label99;
	ActorSetGPos(8, 24, 0, 49, 0);
	ActorSetGPos(7, 23, 0, 50, 0);
	ActorSetGPos(9, 24, 0, 51, 0);

label99: ;

	Movement m[] = { //7
		Reappear, 1,
		0xB8, 1,
		Wait8, 1,
	};


	Movement m[] = { //8
		Reappear, 1,
		0xB8, 1,
		Wait8, 1,
	};


	Movement m[] = { //9
		Reappear, 1,
		0xB8, 1,
		Wait8, 1,
	};

	ActorCmdWait();
	PlayerGetExState(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label116;
	PlayerSetSpecialSequence(1);

label116: ;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 0, 8, 1, 0);
	MsgWinCloseAll();
	StackPush(0x8022);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label117;

	Movement m[] = { //255
		FastestWalkRight, 8,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkRight, 8,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkDown, 1,
		FastestWalkRight, 7,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkRight, 8,
		FastestWalkUp, 7,
	};

	goto label118;

label117: ;
	StackPush(0x8022);
	StackPushConst(8);
	StackCmp(1);
	if (255) goto label119;

	Movement m[] = { //255
		FastestWalkRight, 7,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkRight, 7,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkRight, 7,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkRight, 7,
		FastestWalkUp, 7,
	};

	goto label118;

label119: ;
	StackPush(0x8022);
	StackPushConst(9);
	StackCmp(1);
	if (255) goto label120;

	Movement m[] = { //255
		FastestWalkRight, 6,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkRight, 6,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkRight, 6,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkRight, 6,
		FastestWalkUp, 7,
	};

	goto label118;

label120: ;
	StackPush(0x8022);
	StackPushConst(10);
	StackCmp(1);
	if (255) goto label121;

	Movement m[] = { //255
		FastestWalkRight, 5,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkRight, 5,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkRight, 5,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkRight, 5,
		FastestWalkUp, 7,
	};

	goto label118;

label121: ;
	StackPush(0x8022);
	StackPushConst(11);
	StackCmp(1);
	if (255) goto label122;

	Movement m[] = { //255
		FastestWalkRight, 4,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkRight, 4,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkRight, 4,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkRight, 4,
		FastestWalkUp, 7,
	};

	goto label118;

label122: ;
	StackPush(0x8022);
	StackPushConst(12);
	StackCmp(1);
	if (255) goto label123;

	Movement m[] = { //255
		FastestWalkRight, 3,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkRight, 3,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkRight, 3,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkRight, 3,
		FastestWalkUp, 7,
	};

	goto label118;

label123: ;
	StackPush(0x8022);
	StackPushConst(13);
	StackCmp(1);
	if (255) goto label124;

	Movement m[] = { //255
		FastestWalkRight, 2,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkRight, 2,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkRight, 2,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkRight, 2,
		FastestWalkUp, 7,
	};

	goto label118;

label124: ;
	StackPush(0x8022);
	StackPushConst(14);
	StackCmp(1);
	if (255) goto label125;

	Movement m[] = { //255
		FastestWalkRight, 1,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkRight, 1,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkRight, 1,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkRight, 1,
		FastestWalkUp, 7,
	};

	goto label118;

label125: ;
	StackPush(0x8022);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label126;

	Movement m[] = { //255
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkUp, 7,
	};

	goto label118;

label126: ;
	StackPush(0x8022);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label127;

	Movement m[] = { //255
		FastestWalkLeft, 1,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkLeft, 1,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkLeft, 1,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkLeft, 1,
		FastestWalkUp, 7,
	};

	goto label118;

label127: ;
	StackPush(0x8022);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label128;

	Movement m[] = { //255
		FastestWalkLeft, 2,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkLeft, 2,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkLeft, 2,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkLeft, 2,
		FastestWalkUp, 7,
	};

	goto label118;

label128: ;
	StackPush(0x8022);
	StackPushConst(18);
	StackCmp(1);
	if (255) goto label129;

	Movement m[] = { //255
		FastestWalkLeft, 3,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkLeft, 3,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkLeft, 3,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkLeft, 3,
		FastestWalkUp, 7,
	};

	goto label118;

label129: ;
	StackPush(0x8022);
	StackPushConst(19);
	StackCmp(1);
	if (255) goto label130;

	Movement m[] = { //255
		FastestWalkLeft, 4,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkLeft, 4,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkLeft, 4,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkLeft, 4,
		FastestWalkUp, 7,
	};

	goto label118;

label130: ;
	StackPush(0x8022);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label131;

	Movement m[] = { //255
		FastestWalkLeft, 5,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkLeft, 5,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkLeft, 5,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkLeft, 5,
		FastestWalkUp, 7,
	};

	goto label118;

label131: ;
	StackPush(0x8022);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label132;

	Movement m[] = { //255
		FastestWalkLeft, 6,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkLeft, 6,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkLeft, 6,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkLeft, 6,
		FastestWalkUp, 7,
	};

	goto label118;

label132: ;
	StackPush(0x8022);
	StackPushConst(22);
	StackCmp(1);
	if (255) goto label133;

	Movement m[] = { //255
		FastestWalkLeft, 7,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkLeft, 7,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkLeft, 7,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkLeft, 7,
		FastestWalkUp, 7,
	};

	goto label118;

label133: ;
	StackPush(0x8022);
	StackPushConst(23);
	StackCmp(1);
	if (255) goto label134;

	Movement m[] = { //255
		FastestWalkLeft, 8,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkLeft, 8,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkLeft, 8,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkLeft, 8,
		FastestWalkUp, 7,
	};

	goto label118;

label134: ;
	StackPush(0x8022);
	StackPushConst(24);
	StackCmp(1);
	if (255) goto label118;

	Movement m[] = { //255
		FastestWalkLeft, 9,
		FastestWalkUp, 7,
	};


	Movement m[] = { //7
		FastestWalkLeft, 9,
		FastestWalkUp, 7,
	};


	Movement m[] = { //8
		FastestWalkDown, 1,
		FastestWalkLeft, 8,
		FastestWalkUp, 7,
	};


	Movement m[] = { //9
		FastestWalkLeft, 9,
		FastestWalkUp, 7,
	};


label118: ;
	ActorCmdWait();
	MsgActorEx(1024, 1, 8, 1, 0);
	MsgWinCloseAll();

	Movement m[] = { //7
		0xB9, 1,
		Vanish, 1,
	};


	Movement m[] = { //8
		0xB9, 1,
		Vanish, 1,
	};


	Movement m[] = { //9
		0xB9, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	VMSleep(8);
	ActorSetGPos(7, 14, 0, 38, 1);
	ActorSetGPos(8, 15, 0, 38, 1);
	ActorSetGPos(9, 16, 0, 38, 1);

	Movement m[] = { //7
		Reappear, 1,
		0xB8, 1,
		Wait8, 1,
	};


	Movement m[] = { //8
		Reappear, 1,
		0xB8, 1,
		Wait8, 1,
	};


	Movement m[] = { //9
		Reappear, 1,
		0xB8, 1,
		Wait8, 1,
	};

	ActorCmdWait();
	CMD_248(1093, 60);
	MsgActorVersioned(1024, 2, 3, 6, 1, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		Wait8, 1,
		SlowWalkRight, 2,
		SlowTurnDown, 1,
		Wait8, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 6, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		SlowWalkLeft, 4,
		Wait16, 1,
		TurnDown, 1,
		Wait8, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 5, 6, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		SlowWalkRight, 2,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 6, 5, 0);
	MsgWinCloseAll();
	VMSleep(8);

	Movement m[] = { //6
		SlowTurnRight, 1,
		Wait32, 1,
		SlowestTurnDown, 1,
	};

	VMSleep(8);
	MsgActorEx(1024, 7, 6, 5, 0);
	MsgWinCloseAll();
	ActorCmdWait();

	Movement m[] = { //6
		SlowWalkDown, 1,
		Wait8, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 8, 6, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //8
		WalkUp, 1,
		WalkLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		TurnRight, 1,
	};


	Movement m[] = { //8
		TurnRight, 1,
	};


	Movement m[] = { //9
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //6
		Wait8, 1,
		WalkUp, 10,
	};

	ActorCmdWait();
	SEPlay(1369);
	ActorDelete(6);
	SEWait();

	Movement m[] = { //7
		0xB9, 1,
		Vanish, 1,
	};


	Movement m[] = { //8
		0xB9, 1,
		Vanish, 1,
	};


	Movement m[] = { //9
		0xB9, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	ActorDelete(7);
	ActorDelete(8);
	ActorDelete(9);
	BGMChangeMap();
	WorkSetConst(0x40A4, 1);
	FlagSet(806);
	FlagSet(838);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	RTCGetDayPart(0x4001);
	StackPush(0x4001);
	StackPushConst(3);
	StackCmp(1);
	StackPush(0x4001);
	StackPushConst(2);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label135;
	FlagReset(777);
	FlagSet(778);
	TrainerFlagGet(544, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label135;
	WorkSetConst(0x40DB, 1);

label135: ;
	VMReturn();
}
