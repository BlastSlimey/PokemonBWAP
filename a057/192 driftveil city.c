#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
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

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 26, 0, 0);
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
	MsgActor(1024, 27, 0, 0);
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
	MsgActor(1024, 28, 0, 0);
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
	MsgActor(1024, 29, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 30, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 31, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	CMD_13d();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	WorkCmpConst(0x8021, 430);
	if (1) goto label0;
	goto label1;

label0: ;

	Movement m[] = { //255
		WalkLeft, 2,
		WalkDown, 1,
		TurnLeft, 0,
	};

	ActorCmdWait();
	goto label2;

label1: ;
	WorkCmpConst(0x8021, 431);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //255
		WalkLeft, 2,
	};

	ActorCmdWait();
	goto label2;

label4: ;
	WorkCmpConst(0x8021, 432);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkDown, 1,
		WalkLeft, 1,
	};

	ActorCmdWait();
	goto label2;

label6: ;
	WorkCmpConst(0x8021, 433);
	if (1) goto label7;
	goto label8;

label7: ;

	Movement m[] = { //255
		WalkLeft, 2,
	};

	ActorCmdWait();
	goto label2;

label8: ;
	WorkCmpConst(0x8021, 434);
	if (1) goto label9;
	goto label10;

label9: ;

	Movement m[] = { //255
		WalkLeft, 2,
		WalkUp, 1,
		TurnLeft, 0,
	};

	ActorCmdWait();
	goto label2;

label10: ;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkDown, 1,
		WalkLeft, 1,
	};

	ActorCmdWait();

label2: ;
	WordSetPlayerName(0);
	MsgActorEx(1024, 0, 12, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 1, 13, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 2, 12, 0, 0);
	MsgActorClose();

	Movement m[] = { //12
		WalkLeft, 3,
		Wait32, 0,
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 12, 0, 0);
	MsgActorClose();

	Movement m[] = { //12
		WalkLeft, 4,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 13, 0, 0);
	MsgActorClose();
	StackPush(0x8021);
	StackPushConst(432);
	StackCmp(4);
	if (255) goto label11;

	Movement m[] = { //13
		TurnDown, 0,
	};

	ActorCmdWait();
	goto label12;

label11: ;

	Movement m[] = { //13
		TurnUp, 0,
	};

	ActorCmdWait();

label12: ;
	MsgActorEx(1024, 5, 13, 0, 0);
	MsgActorClose();

	Movement m[] = { //13
		WalkLeft, 10,
	};

	ActorCmdWait();
	ActorDelete(13);
	ActorDelete(12);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	FlagSet(2486);
	FlagSet(554);
	WorkSetConst(0x408F, 1);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	CMD_13d();
	CMD_248(1093, 60);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9694, 0, 0xED030, 0xD48000, 0, 0x1938000, 40);
	EVCameraWait();
	MsgActorEx(1024, 6, 6, 6, 0);
	MsgActorClose();
	MsgActorEx(1024, 7, 9, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 8, 6, 6, 0);
	MsgActorClose();
	MsgActorEx(1024, 9, 9, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 10, 6, 6, 0);
	MsgActorClose();

	Movement m[] = { //9
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 9, 3, 0);
	MsgActorClose();
	MsgActorEx(1024, 12, 6, 6, 0);
	MsgActorClose();

	Movement m[] = { //6
		WalkUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //10
		WalkDown, 2,
		TurnRight, 0,
	};


	Movement m[] = { //23
		WalkDown, 3,
		TurnLeft, 0,
	};


	Movement m[] = { //24
		WalkDown, 3,
		WalkLeft, 1,
		TurnUp, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 13, 10, 4, 0);
	MsgActorClose();
	MsgActorEx(1024, 14, 6, 6, 0);
	MsgActorClose();
	BGMChangeMap();
	FadeEx(3, 0, 16, 4);
	FadeExWait();
	VMSleep(16);
	ActorDelete(7);
	ActorDelete(8);
	ActorDelete(18);
	ActorDelete(19);
	ActorDelete(20);
	ActorDelete(21);
	ActorDelete(22);
	ActorDelete(23);
	ActorDelete(24);
	ActorDelete(6);
	ActorDelete(10);
	ActorSetGPos(11, 211, 0, 404, 0);
	ActorSetGPos(255, 212, 0, 404, 0);
	FadeEx(3, 16, 0, 4);
	FadeExWait();
	MsgActorEx(1024, 15, 9, 3, 0);
	MsgActorClose();

	Movement m[] = { //9
		WalkUp, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x8022, 0);
	BMCreateHandleByGPos(0x8022, 1, 212, 400);
	BMHndAudioVisualAnmPlay(0x8022, 0);
	BMHndAnmWait(0x8022);

	Movement m[] = { //9
		WalkUp, 1,
	};

	ActorCmdWait();
	ActorDelete(9);
	BMHndAudioVisualAnmPlay(0x8022, 1);
	BMHndAnmWait(0x8022);
	BMReleaseHandle(0x8022);

	Movement m[] = { //11
		TurnRight, 0,
	};


	Movement m[] = { //255
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 16, 11, 3, 0);
	MsgActorClose();

	Movement m[] = { //11
		WalkLeft, 9,
	};

	ActorCmdWait();
	EVCameraMoveToDefault(16);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	ActorDelete(11);
	FlagSet(555);
	FlagSet(557);
	WorkSetConst(0x408F, 3);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 18, 0, 0);
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
	MsgPlaceSign(55, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(54, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 32, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 33, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
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

void Sequence15()
{
	ActorPauseAll();
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	PlayerGetGPos(0x8023, 0x8024);
	CMD_13d();
	WordSetPlayerName(0);
	WorkSetConst(0x8025, 0);
	TrainerCardGetSex(0x8025);
	StackPush(0x8025);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label13;
	MsgInfo(19, 2);
	MsgWinCloseAll();
	goto label14;

label13: ;
	MsgInfo(20, 2);
	MsgWinCloseAll();

label14: ;

	Movement m[] = { //255
		Exclaimation, 1,
		TurnRight, 0,
	};

	ActorCmdWait();
	WorkCmpConst(0x8024, 403);
	if (1) goto label15;
	goto label16;

label15: ;
	ActorNew(172, 403, 2, 251, 134, 0);
	goto label17;

label16: ;
	WorkCmpConst(0x8024, 404);
	if (1) goto label18;
	goto label19;

label18: ;
	ActorNew(172, 404, 2, 251, 134, 0);
	goto label17;

label19: ;
	WorkCmpConst(0x8024, 405);
	if (1) goto label20;
	goto label21;

label20: ;
	ActorNew(172, 405, 2, 251, 134, 0);
	goto label17;

label21: ;
	WorkCmpConst(0x8024, 406);
	if (1) goto label22;
	goto label23;

label22: ;
	ActorNew(172, 406, 2, 251, 134, 0);
	goto label17;

label23: ;
	WorkCmpConst(0x8024, 407);
	if (1) goto label24;
	goto label25;

label24: ;
	ActorNew(172, 406, 2, 251, 134, 0);
	goto label17;

label25: ;
	ActorNew(172, 405, 2, 251, 134, 0);

label17: ;
	BGMPlay(1088);

	Movement m[] = { //251
		WalkLeft, 7,
	};

	ActorCmdWait();
	WorkCmpConst(0x8024, 407);
	if (1) goto label26;
	goto label27;

label26: ;

	Movement m[] = { //255
		WalkUp, 1,
		TurnRight, 0,
	};

	ActorCmdWait();
	goto label27;

label27: ;
	MsgActorEx(1024, 21, 251, 0, 0);
	MsgActorClose();

	Movement m[] = { //251
		Exclaimation, 1,
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 22, 251, 0, 0);
	MsgActorClose();
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label28;
	CallTrainerBattle(491, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label29;
	CallTrainerBattleEnd();
	goto label30;

label29: ;
	CallTrainerLose();

label30: ;
	goto label31;

label28: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label32;
	CallTrainerBattle(492, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label33;
	CallTrainerBattleEnd();
	goto label34;

label33: ;
	CallTrainerLose();

label34: ;
	goto label31;

label32: ;
	CallTrainerBattle(493, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label35;
	CallTrainerBattleEnd();
	goto label31;

label35: ;
	CallTrainerLose();

label31: ;
	MsgActorEx(1024, 23, 251, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1A0);
	WordSetPlayerName(0);
	MsgActorEx(1024, 24, 251, 0, 0);
	MsgActorClose();

	Movement m[] = { //251
		WalkRight, 8,
	};

	ActorCmdWait();
	ActorDelete(251);
	BGMChangeMap();
	WorkSetConst(0x408F, 5);
	CMD_13e();
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(56, 1);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence17()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(57, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence18()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(58, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence19()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 35, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence20()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8026, 0);
	GameGetVersion(0x8026);
	StackPush(0x8026);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label36;
	StackPush(0x40E3);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label37;
	MsgActorEx(1024, 45, 28, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label38;
	WorkSetConst(0x40E3, 1);
	MsgActorEx(1024, 47, 28, 0, 0);
	Routine0();
	goto label39;

label38: ;
	MsgActorEx(1024, 46, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();

label39: ;
	goto label40;

label37: ;
	StackPush(0x40E3);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label41;
	Routine0();
	goto label40;

label41: ;
	MsgActorEx(1024, 53, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();

label40: ;
	goto label42;

label36: ;
	StackPush(0x40E3);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label43;
	MsgActorEx(1024, 36, 28, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label44;
	WorkSetConst(0x40E3, 1);
	MsgActorEx(1024, 38, 28, 0, 0);
	Routine1();
	goto label45;

label44: ;
	MsgActorEx(1024, 37, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();

label45: ;
	goto label42;

label43: ;
	StackPush(0x40E3);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label46;
	Routine1();
	goto label42;

label46: ;
	MsgActorEx(1024, 44, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();

label42: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence21()
{
	ActorPauseAll();
	Movement m[] = { //25
		LookUp, 1,
	};
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x01F7, 0x8020);
	if (0x8020 > 0)
	{
		WorkSetConst(0x40E9, 1);
		MsgActorEx(1024, 60, 25, 0, 0);
		MsgWinCloseAll();
	}
	else
	{
		MsgActorEx(1024, 59, 25, 0, 0);
		MsgWinCloseAll();
		Movement m[] = { //255
			WalkLeft, 1,
		};
		ActorCmdWait();
	}
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	MsgActorEx(1024, 48, 28, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label47;
	WorkSetConst(0x8028, 0);
	PokePartyGetCount(0x8028, 2);
	StackPush(0x8028);
	StackPushConst(3);
	StackCmp(0);
	if (255) goto label48;
	MsgActorEx(1024, 50, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label49;

label48: ;
	MsgActorEx(1024, 49, 28, 0, 0);
	MsgActorClose();
	CallTrainerBattle(603, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label50;
	CallTrainerBattleEnd();
	goto label51;

label50: ;
	CallTrainerLose();

label51: ;
	MsgActorEx(1024, 52, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x40E3, 2);

label49: ;
	goto label52;

label47: ;
	MsgActorEx(1024, 51, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();

label52: ;
	WorkSetConst(0x8028, 0);
	VMReturn();
}

void Routine1()
{
	MsgActorEx(1024, 39, 28, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label53;
	WorkSetConst(0x8027, 0);
	PokePartyGetCount(0x8027, 2);
	StackPush(0x8027);
	StackPushConst(3);
	StackCmp(0);
	if (255) goto label54;
	MsgActorEx(1024, 41, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label55;

label54: ;
	MsgActorEx(1024, 40, 28, 0, 0);
	MsgActorClose();
	CallTrainerBattle(506, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label56;
	CallTrainerBattleEnd();
	goto label57;

label56: ;
	CallTrainerLose();

label57: ;
	MsgActorEx(1024, 43, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x40E3, 2);

label55: ;
	goto label58;

label53: ;
	MsgActorEx(1024, 42, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();

label58: ;
	WorkSetConst(0x8027, 0);
	VMReturn();
}
