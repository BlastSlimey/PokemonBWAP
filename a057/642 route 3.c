#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 46, 0, 0);
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
	MsgActor(1024, 38, 0, 0);
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
	MsgActor(1024, 39, 0, 0);
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
	MsgActor(1024, 40, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	FlagReset(517);
	FlagReset(572);
	ActorAdd(21);
	ActorAdd(6);
	ActorAdd(4);
	ActorAdd(7);
	ActorAdd(5);
	BGMPlayPush(1087);

	Movement m[] = { //21
		WalkLeft, 7,
	};

	ActorCmdWait();

	Movement m[] = { //255
		LookRight, 1,
		Exclaimation, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 6, 21, 0, 0);
	MsgActorClose();
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	PlayerGetGPos(0x8026, 0x8027);
	WorkCmpConst(0x8027, 561);
	if (1) goto label0;
	goto label1;

label0: ;

	Movement m[] = { //255
		WalkDown, 2,
		WalkDown, 1,
		TurnRight, 0,
	};

	ActorCmdWait();
	goto label2;

label1: ;
	WorkCmpConst(0x8027, 562);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //255
		WalkDown, 1,
		TurnRight, 0,
	};

	ActorCmdWait();
	goto label2;

label4: ;
	WorkCmpConst(0x8027, 563);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //255
		LookRight, 1,
	};

	ActorCmdWait();
	goto label2;

label6: ;
	WorkCmpConst(0x8027, 564);
	if (1) goto label7;
	goto label8;

label7: ;

	Movement m[] = { //255
		WalkUp, 1,
		TurnRight, 0,
	};

	ActorCmdWait();
	goto label2;

label8: ;
	WorkCmpConst(0x8027, 565);
	if (1) goto label9;
	goto label10;

label9: ;

	Movement m[] = { //255
		WalkUp, 2,
		TurnRight, 0,
	};

	ActorCmdWait();
	goto label2;

label10: ;

	Movement m[] = { //255
		LookRight, 1,
	};

	ActorCmdWait();

label2: ;
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8026, 0);

	Movement m[] = { //21
		WalkLeft, 1,
	};

	ActorCmdWait();
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label11;
	CallTrainerBattle(56, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	CallTrainerBattleEnd();
	goto label13;

label12: ;
	FlagSet(517);
	FlagSet(572);
	CallTrainerLose();

label13: ;
	goto label14;

label11: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label15;
	CallTrainerBattle(57, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label16;
	CallTrainerBattleEnd();
	goto label17;

label16: ;
	FlagSet(517);
	FlagSet(572);
	CallTrainerLose();

label17: ;
	goto label14;

label15: ;
	CallTrainerBattle(58, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label18;
	CallTrainerBattleEnd();
	goto label14;

label18: ;
	FlagSet(517);
	FlagSet(572);
	CallTrainerLose();

label14: ;
	MsgActorEx(1024, 7, 21, 5, 0);
	MsgActorClose();
	MsgInfo(8, 2);
	MsgWinCloseAll();
	BGMPlay(1098);

	Movement m[] = { //7
		Wait16, 1,
		FastWalkLeft, 18,
	};


	Movement m[] = { //5
		Wait16, 1,
		FastWalkLeft, 18,
	};


	Movement m[] = { //21
		QuestionMark, 0,
		LookUp, 1,
		LockDirection, 1,
		WalkDown, 2,
		UnlockDirection, 1,
	};


	Movement m[] = { //255
		QuestionMark, 0,
		LookDown, 1,
		LockDirection, 1,
		WalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	ActorDelete(7);
	ActorDelete(5);

	Movement m[] = { //21
		WalkUp, 1,
		TurnLeft, 0,
	};


	Movement m[] = { //255
		WalkDown, 1,
		WalkRight, 1,
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 9, 21, 4, 0);
	MsgActorClose();

	Movement m[] = { //21
		Wait8, 1,
		TurnRight, 0,
	};


	Movement m[] = { //255
		Wait8, 1,
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 10, 21, 4, 0);
	MsgActorClose();

	Movement m[] = { //6
		WalkLeft, 6,
	};


	Movement m[] = { //4
		WalkLeft, 7,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 6, 5, 0);
	MsgActorClose();

	Movement m[] = { //21
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 12, 21, 4, 0);
	MsgActorClose();

	Movement m[] = { //21
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 13, 21, 4, 0);
	MsgActorClose();

	Movement m[] = { //6
		FastTurnLeft, 0,
		FastTurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 14, 6, 5, 0);
	MsgActorClose();

	Movement m[] = { //4
		TurnUp, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 15, 4, 6, 0);
	MsgActorClose();

	Movement m[] = { //6
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 16, 6, 5, 0);
	MsgActorClose();

	Movement m[] = { //21
		FastTurnRight, 0,
		FastTurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 17, 21, 4, 0);
	MsgActorClose();

	Movement m[] = { //6
		LookLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 6, 5, 0);
	MsgActorClose();
	MsgActorEx(1024, 19, 21, 4, 0);
	MsgActorClose();

	Movement m[] = { //21
		FastTurnUp, 0,
	};


	Movement m[] = { //255
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 20, 21, 4, 0);
	MsgActorClose();

	Movement m[] = { //255
		TurnLeft, 0,
	};


	Movement m[] = { //21
		FastWalkLeft, 10,
	};

	ActorCmdWait();
	BGMChangeMap();
	FlagSet(517);
	ActorDelete(21);
	FlagSet(532);
	WorkSetConst(0x4095, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	BGMPlay(1087);
	WorkSetConst(0x8033, 0);
	WorkSetConst(0x8034, 0);
	PlayerGetGPos(0x8033, 0x8034);
	WorkCmpConst(0x8034, 581);
	if (1) goto label19;
	goto label20;

label19: ;

	Movement m[] = { //8
		Exclaimation, 1,
		WalkLeft, 4,
		WalkUp, 1,
		WalkLeft, 1,
	};

	ActorCmdWait();
	goto label21;

label20: ;
	WorkCmpConst(0x8034, 582);
	if (1) goto label22;
	goto label23;

label22: ;

	Movement m[] = { //8
		Exclaimation, 1,
		WalkLeft, 5,
	};

	ActorCmdWait();
	goto label21;

label23: ;
	WorkCmpConst(0x8034, 583);
	if (1) goto label24;
	goto label25;

label24: ;

	Movement m[] = { //8
		Exclaimation, 1,
		WalkLeft, 4,
		WalkDown, 1,
		WalkLeft, 1,
	};

	ActorCmdWait();
	goto label21;

label25: ;

	Movement m[] = { //8
		Exclaimation, 1,
		WalkLeft, 5,
	};

	ActorCmdWait();

label21: ;
	MsgActorEx(1024, 33, 8, 0, 0);
	MsgActorClose();

	Movement m[] = { //8
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 34, 8, 0, 0);
	MsgActorClose();

	Movement m[] = { //8
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 35, 8, 0, 0);
	MsgActorClose();

	Movement m[] = { //8
		WalkDown, 8,
	};


	Movement m[] = { //255
		TurnDown, 0,
	};

	BGMChangeMap();
	ActorCmdWait();
	FlagSet(573);
	ActorDelete(8);
	WorkSetConst(0x407E, 2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();

	Movement m[] = { //22
		FastTurnDown, 0,
	};


	Movement m[] = { //255
		TurnUp, 0,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	StackPush(0x4095);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label26;
	MsgActorEx(1024, 24, 22, 0, 0);
	WorkSetConst(0x802C, 0);
	YesNoWin(0x802C);
	StackPush(0x802C);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label27;
	MsgActorEx(1024, 25, 22, 0, 0);
	MsgActorClose();

	Movement m[] = { //22
		WalkLeft, 1,
	};

	ActorCmdWait();
	ActorDelete(22);
	SEPlay(1369);
	SEWait();
	FlagSet(635);
	WorkSetConst(0x4095, 3);
	goto label28;

label27: ;
	MsgActorEx(1024, 27, 22, 0, 0);
	MsgActorClose();

	Movement m[] = { //255
		WalkRight, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x4095, 2);

label28: ;
	goto label29;

label26: ;
	MsgActorEx(1024, 28, 22, 0, 0);
	WorkSetConst(0x802D, 0);
	YesNoWin(0x802D);
	StackPush(0x802D);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label30;
	MsgActorEx(1024, 25, 22, 0, 0);
	MsgActorClose();

	Movement m[] = { //22
		WalkLeft, 1,
	};

	ActorCmdWait();
	ActorDelete(22);
	SEPlay(1369);
	SEWait();
	FlagSet(635);
	WorkSetConst(0x4095, 3);
	goto label29;

label30: ;
	MsgActorEx(1024, 27, 22, 0, 0);
	MsgActorClose();

	Movement m[] = { //255
		WalkRight, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x4095, 2);

label29: ;
	WorkSetConst(0x802D, 0);
	WorkSetConst(0x802C, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8029, 0);
	PlayerGetGPos(0x8028, 0x8029);
	WorkCmpConst(0x8028, 715);
	if (1) goto label31;
	goto label32;

label31: ;

	Movement m[] = { //6
		LookLeft, 1,
		Exclaimation, 1,
		WalkLeft, 5,
		WalkDown, 1,
	};

	ActorCmdWait();
	goto label33;

label32: ;
	WorkCmpConst(0x8028, 716);
	if (1) goto label34;
	goto label35;

label34: ;

	Movement m[] = { //6
		LookLeft, 1,
		Exclaimation, 1,
		WalkLeft, 4,
		WalkDown, 1,
	};

	ActorCmdWait();
	goto label33;

label35: ;
	WorkCmpConst(0x8028, 717);
	if (1) goto label36;
	goto label37;

label36: ;

	Movement m[] = { //6
		LookLeft, 1,
		Exclaimation, 1,
		WalkLeft, 3,
		WalkDown, 1,
	};

	ActorCmdWait();
	goto label33;

label37: ;

	Movement m[] = { //6
		LookLeft, 1,
		Exclaimation, 1,
		WalkLeft, 4,
		WalkDown, 1,
	};

	ActorCmdWait();

label33: ;

	Movement m[] = { //255
		TurnUp, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 22, 6, 0, 0);
	MsgActorClose();
	WorkCmpConst(0x8028, 715);
	if (1) goto label38;
	goto label39;

label38: ;

	Movement m[] = { //6
		WalkUp, 1,
		WalkRight, 5,
		FastTurnDown, 0,
	};


	Movement m[] = { //255
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label40;

label39: ;
	WorkCmpConst(0x8028, 716);
	if (1) goto label41;
	goto label42;

label41: ;

	Movement m[] = { //6
		WalkUp, 1,
		WalkRight, 4,
		FastTurnDown, 0,
	};


	Movement m[] = { //255
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label40;

label42: ;
	WorkCmpConst(0x8028, 717);
	if (1) goto label43;
	goto label44;

label43: ;

	Movement m[] = { //6
		WalkUp, 1,
		WalkRight, 3,
		FastTurnDown, 0,
	};


	Movement m[] = { //255
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label40;

label44: ;

	Movement m[] = { //6
		WalkUp, 1,
		WalkRight, 4,
		FastTurnDown, 0,
	};


	Movement m[] = { //255
		WalkUp, 1,
	};

	ActorCmdWait();

label40: ;
	WorkSetConst(0x8029, 0);
	WorkSetConst(0x8028, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 21, 0, 0);
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
	MsgActor(1024, 23, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();

	Movement m[] = { //6
		Exclaimation, 1,
		TurnUp, 0,
	};


	Movement m[] = { //4
		Exclaimation, 1,
		TurnUp, 0,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	WorkSetConst(0x802E, 0);
	WorkSetConst(0x802F, 0);
	PlayerGetGPos(0x802E, 0x802F);
	WorkCmpConst(0x802E, 715);
	if (1) goto label45;
	goto label46;

label45: ;

	Movement m[] = { //255
		WalkRight, 1,
		TurnDown, 0,
	};

	ActorCmdWait();
	goto label47;

label46: ;
	WorkCmpConst(0x802E, 716);
	if (1) goto label48;
	goto label49;

label48: ;
	goto label47;

label49: ;
	WorkCmpConst(0x802E, 717);
	if (1) goto label50;
	goto label47;

label50: ;

	Movement m[] = { //255
		WalkLeft, 1,
		TurnDown, 0,
	};

	ActorCmdWait();
	goto label47;

label47: ;
	WorkSetConst(0x802F, 0);
	WorkSetConst(0x802E, 0);
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(42, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(45, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(44, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	PokePartyGetCount(0x8020, 2);
	StackPush(0x8020);
	StackPushConst(2);
	StackCmp(0);
	if (255) goto label51;

	Movement m[] = { //2
		Exclaimation, 1,
		TurnDown, 0,
	};

	ActorCmdWait();

	Movement m[] = { //255
		LookUp, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	PlayerGetGPos(0x8021, 0x8022);
	StackPush(0x8022);
	StackPushConst(565);
	StackCmp(1);
	if (255) goto label52;
	MsgInfo(1, 1);
	MsgWinCloseAll();
	goto label53;

label52: ;
	MsgActorEx(1024, 1, 2, 0, 0);
	MsgActorClose();

label53: ;
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);

	Movement m[] = { //255
		WalkRight, 1,
	};

	ActorCmdWait();
	goto label54;

label51: ;

	Movement m[] = { //2
		Exclaimation, 1,
	};


	Movement m[] = { //1
		Exclaimation, 1,
	};

	ActorCmdWait();
	TrainerBGMPlayPush(18);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	PlayerGetGPos(0x8023, 0x8024);
	WorkCmpConst(0x8024, 563);
	if (1) goto label55;
	goto label56;

label55: ;

	Movement m[] = { //2
		LookDown, 1,
	};


	Movement m[] = { //1
		LookDown, 1,
	};


	Movement m[] = { //255
		LookUp, 1,
	};

	ActorCmdWait();
	goto label57;

label56: ;
	WorkCmpConst(0x8024, 564);
	if (1) goto label58;
	goto label59;

label58: ;

	Movement m[] = { //2
		WalkDown, 1,
	};


	Movement m[] = { //1
		WalkDown, 1,
	};


	Movement m[] = { //255
		LookUp, 1,
	};

	ActorCmdWait();
	goto label57;

label59: ;
	WorkCmpConst(0x8024, 565);
	if (1) goto label60;
	goto label61;

label60: ;

	Movement m[] = { //2
		WalkDown, 2,
	};


	Movement m[] = { //1
		WalkDown, 2,
	};


	Movement m[] = { //255
		LookUp, 1,
	};

	ActorCmdWait();
	goto label57;

label61: ;

	Movement m[] = { //2
		LookDown, 1,
	};


	Movement m[] = { //1
		LookDown, 1,
	};


	Movement m[] = { //255
		LookUp, 1,
	};

	ActorCmdWait();

label57: ;
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);
	Routine1();

label54: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WordSetPlayerName(0);
	StackPush(0x4095);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label62;
	MsgActorEx(1024, 24, 22, 0, 0);
	WorkSetConst(0x802A, 0);
	YesNoWin(0x802A);
	StackPush(0x802A);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label63;
	MsgActorEx(1024, 25, 22, 0, 0);
	MsgActorClose();

	Movement m[] = { //22
		WalkLeft, 1,
	};

	ActorCmdWait();
	ActorDelete(22);
	SEPlay(1369);
	SEWait();
	FlagSet(635);
	WorkSetConst(0x4095, 3);
	goto label64;

label63: ;
	MsgActorEx(1024, 26, 22, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x4095, 2);

label64: ;
	goto label65;

label62: ;
	MsgActorEx(1024, 28, 22, 0, 0);
	WorkSetConst(0x802B, 0);
	YesNoWin(0x802B);
	StackPush(0x802B);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label66;
	MsgActorEx(1024, 25, 22, 0, 0);
	MsgActorClose();

	Movement m[] = { //22
		WalkLeft, 1,
	};

	ActorCmdWait();
	ActorDelete(22);
	SEPlay(1369);
	SEWait();
	FlagSet(635);
	WorkSetConst(0x4095, 3);
	goto label65;

label66: ;
	MsgActorEx(1024, 26, 22, 0, 0);
	InputWaitLast();
	MsgActorClose();

label65: ;
	WorkSetConst(0x802B, 0);
	WorkSetConst(0x802A, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
{
	ActorPauseAll();

	Movement m[] = { //0
		LookDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	TrainerCardGetSex(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label67;
	MsgInfo(36, 1);
	goto label68;

label67: ;
	MsgInfo(37, 1);

label68: ;
	MsgWinCloseAll();

	Movement m[] = { //255
		TurnUp, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x4139, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence17()
{
	ActorPauseAll();
	WorkSetConst(0x8025, 0);
	PokePartyGetCount(0x8025, 2);
	StackPush(0x407E);
	StackPushConst(1);
	StackCmp(4);
	if (255) goto label69;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label70;

label69: ;
	StackPush(0x8025);
	StackPushConst(2);
	StackCmp(0);
	if (255) goto label71;
	SEPlay(1351);
	ActorSetEyeToEye();

	Movement m[] = { //2
		LookRight, 1,
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 2, 0, 0);
	MsgActorClose();

	Movement m[] = { //255
		WalkRight, 1,
	};

	ActorCmdWait();
	goto label70;

label71: ;
	SEPlay(1351);
	ActorSetEyeToEye();

	Movement m[] = { //2
		LookRight, 1,
		Exclaimation, 1,
	};


	Movement m[] = { //1
		LookRight, 1,
		Exclaimation, 1,
	};

	ActorCmdWait();
	TrainerBGMPlayPush(18);
	Routine1();

label70: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence18()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence19()
{
	ActorPauseAll();

	Movement m[] = { //6
		Exclaimation, 1,
		TurnUp, 0,
	};


	Movement m[] = { //4
		Exclaimation, 1,
		TurnUp, 0,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	WorkSetConst(0x8030, 0);
	WorkSetConst(0x8031, 0);
	PlayerGetGPos(0x8030, 0x8031);
	WorkCmpConst(0x8031, 562);
	if (1) goto label72;
	goto label73;

label72: ;

	Movement m[] = { //255
		WalkLeft, 2,
		WalkDown, 3,
	};

	ActorCmdWait();
	goto label74;

label73: ;
	WorkCmpConst(0x8031, 563);
	if (1) goto label75;
	goto label76;

label75: ;

	Movement m[] = { //255
		WalkLeft, 2,
		WalkDown, 2,
	};

	ActorCmdWait();
	goto label74;

label76: ;
	WorkCmpConst(0x8031, 564);
	if (1) goto label77;
	goto label78;

label77: ;

	Movement m[] = { //255
		WalkLeft, 2,
		WalkDown, 1,
	};

	ActorCmdWait();
	goto label74;

label78: ;
	WorkCmpConst(0x8031, 565);
	if (1) goto label79;
	goto label80;

label79: ;

	Movement m[] = { //255
		WalkLeft, 2,
		TurnDown, 0,
	};

	ActorCmdWait();
	goto label74;

label80: ;

	Movement m[] = { //255
		WalkLeft, 2,
		TurnDown, 0,
	};

	ActorCmdWait();

label74: ;
	WorkSetConst(0x8031, 0);
	WorkSetConst(0x8030, 0);
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence20()
{
	GameGetVersion(0x8010);
	StackPush(0x8010);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label81;
	WorkSetConst(0x4020, 209);
	goto label82;

label81: ;
	WorkSetConst(0x4020, 129);

label82: ;
	StackPush(0x4095);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label83;
	CMD_1ec(6, 3, 715, 0, 566);
	CMD_1ec(4, 2, 717, 0, 566);
	goto label84;

label83: ;
	StackPush(0x4095);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label85;
	goto label84;

label85: ;
	StackPush(0x4095);
	StackPushConst(4);
	StackCmp(0);
	if (255) goto label84;
	CMD_1ec(6, 2, 720, 0, 563);
	CMD_1ec(4, 0, 720, 0, 564);
	goto label84;

label84: ;
	VMHalt();
}

void Sequence21()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 41, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	MsgActorEx(1024, 29, 6, 0, 0);
	MsgActorClose();
	WorkSetConst(0x8032, 0);
	TrainerCardGetSex(0x8032);
	StackPush(0x8032);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label86;
	MsgActorEx(1024, 30, 4, 0, 0);
	MsgActorClose();
	goto label87;

label86: ;
	MsgActorEx(1024, 31, 4, 0, 0);
	MsgActorClose();

label87: ;

	Movement m[] = { //4
		WalkLeft, 1,
		TurnUp, 0,
	};

	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 3);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x18E);
	WorkSetConst(0x4095, 5);
	WordSetPlayerName(0);
	MsgActorEx(1024, 32, 6, 0, 0);
	MsgActorClose();

	Movement m[] = { //6
		WalkUp, 2,
		WalkRight, 2,
		WalkDown, 1,
		Wait8, 1,
		WalkUp, 1,
		WalkRight, 1,
		WalkRight, 6,
	};


	Movement m[] = { //4
		Wait8, 4,
		WalkRight, 1,
		TurnUp, 0,
		WalkUp, 2,
		WalkRight, 7,
	};

	ActorCmdWait();
	FlagSet(572);
	ActorDelete(6);
	ActorDelete(4);
	VMReturn();
}

void Routine1()
{
	MsgActorEx(1024, 2, 2, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 3, 1, 0, 0);
	MsgActorClose();
	CallTrainerBattle(18, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label88;
	CallTrainerBattleEnd();
	goto label89;

label88: ;
	CallTrainerLose();

label89: ;
	WorkSetConst(0x407E, 1);
	VMReturn();
}
