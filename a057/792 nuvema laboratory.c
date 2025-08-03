#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();

	Movement m[] = { //255
		WalkUp, 4,
	};


	Movement m[] = { //2
		WalkUp, 2,
	};


	Movement m[] = { //1
		WalkUp, 2,
	};

	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x48000, 0, 0x52000, 30);
	EVCameraWait();
	MsgActorEx(1024, 2, 0, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 3, 2, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 0, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		WalkLeft, 1,
		TurnDown, 1,
		Wait8, 1,
		WalkRight, 2,
		TurnDown, 1,
		Wait8, 1,
		WalkLeft, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 5, 0, 5, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgWinCloseAll();
	Routine0();
	goto label1;

label0: ;
	MsgActorEx(1024, 8, 0, 0, 0);

label1: ;
	MsgActorEx(1024, 9, 0, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 10, 2, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		TurnRight, 1,
		QuestionMark, 1,
	};

	MsgActorEx(1024, 11, 1, 4, 0);
	MsgWinCloseAll();
	ActorCmdWait();
	MsgActorEx(1024, 12, 0, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		TurnUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		SlowWalkUp, 1,
		Wait8, 1,
		LookLeft, 1,
		Wait2, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 13, 0, 5, 0);
	WordSetPlayerName(0);
	MsgActorEx(1024, 14, 0, 5, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8020, 1);

label3: ;
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	MsgWinCloseAll();

	Movement m[] = { //0
		TurnDown, 1,
	};

	MsgActorEx(1024, 15, 0, 0, 0);
	ActorCmdWait();
	YesNoWin(0x8020);
	goto label3;

label2: ;
	MsgWinCloseAll();
	MsgActorEx(1024, 16, 1, 4, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 17, 2, 6, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 18, 0, 5, 0);
	MsgWinCloseAll();
	FlagSet(2402);
	MEPlay(1303);
	TrainerCardGetSex(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	PlayFieldEffect(50);
	goto label5;

label4: ;
	PlayFieldEffect(51);

label5: ;
	WordSetPlayerName(0);
	MsgSystem(19, 0);
	MEWait();
	MsgWaitAdvance();
	MsgSystemClose();
	MsgActorEx(1024, 20, 0, 5, 0);
	MsgWinCloseAll();
	EVCameraMoveToDefault(30);

	Movement m[] = { //1
		LookRight, 1,
		LockDirection, 1,
		WalkLeft, 1,
		UnlockDirection, 1,
	};


	Movement m[] = { //255
		LookRight, 1,
		LockDirection, 1,
		WalkLeft, 1,
		UnlockDirection, 1,
	};


	Movement m[] = { //0
		WalkDown, 2,
	};

	ActorCmdWait();
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();

	Movement m[] = { //0
		WalkDown, 5,
	};

	VMSleep(16);

	Movement m[] = { //2
		TurnDown, 1,
	};


	Movement m[] = { //255
		TurnDown, 1,
	};


	Movement m[] = { //1
		TurnDown, 1,
	};

	ActorCmdWait();
	ActorDelete(0);
	SEPlay(1369);
	FlagReset(2430);
	BGMChangeMap();
	SEWait();
	MsgActorEx(1024, 21, 1, 4, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 22, 2, 6, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(505);
	FlagSet(506);
	FlagSet(507);
	WorkSetConst(0x4079, 1);
	WorkSetConst(0x4080, 1);
	FlagReset(679);
	ActivateRelocator(0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WordSetPlayerName(0);
	MsgActor(1024, 25, 0, 0);
	RTCallGlobal(10380);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	StackPush(0x4099);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	MsgInfo(47, 2);
	goto label7;

label6: ;
	MsgInfo(48, 2);

label7: ;
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
	ActorSetEyeToEye();
	CMD_1d1(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	WordSetPlayerName(0);
	MsgActor(1024, 30, 0, 0);
	RTCallGlobal(10381);
	goto label9;

label8: ;
	WordSetPlayerName(0);
	MsgActor(1024, 26, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label9: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(49, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(50, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(51, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(52, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(504, 0);
	MsgActor(1024, 31, 0, 0);
	PVWait();
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
	MsgActor(1024, 24, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	WordSetPartyPokeName(1, 0);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 23, 0, 0);
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
	StackPushFlag(351);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	Routine1();
	goto label11;

label10: ;
	Routine2();

label11: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	StackPush(0x407B);
	StackPushConst(3);
	StackCmp(4);
	if (255) goto label12;
	Routine3();

label12: ;
	StackPush(0x4099);
	StackPushConst(1);
	StackCmp(4);
	if (255) goto label13;
	Routine4();

label13: ;
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);

label19: ;
	StackPush(0x8021);
	StackPushConst(555);
	StackCmp(5);
	if (255) goto label14;
	CMD_1ae();
	FadeExWait();
	EVCameraEnd();
	CallPokeNameInput(0x8010, 0, 0);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x48000, 0, 0x52000, 1);
	EVCameraWait();
	CMD_1ad();
	FadeExWait();
	PokePartyGetParam(0x8022, 0, 117);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label15;
	WordSetPartyPokeName(0, 0);
	MsgActorEx(1024, 6, 0, 5, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label16;
	WorkSetConst(0x8021, 555);
	goto label17;

label16: ;
	MsgWinCloseAll();

label17: ;
	goto label18;

label15: ;
	WorkSetConst(0x8021, 555);

label18: ;
	goto label19;

label14: ;
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label20;
	WordSetPartyPokeName(0, 0);
	MsgActorEx(1024, 7, 0, 5, 0);
	goto label21;

label20: ;
	MsgActorEx(1024, 8, 0, 5, 0);

label21: ;
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	VMReturn();
}

void Routine1()
{
	MsgActor(1024, 32, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //5
		Exclaimation, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActor(1024, 33, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label22;
	MsgActor(1024, 34, 0, 0);
	goto label23;

label22: ;
	MsgActor(1024, 35, 0, 0);

label23: ;
	MsgActor(1024, 36, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(351);
	FlagSet(2757);
	VMReturn();
}

void Routine2()
{
	StackPushFlag(2757);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label24;
	MsgActor(1024, 36, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	VMReturn();

label24: ;
	WordSetPlayerName(0);
	RTCGetWeekDay(0x8010);
	WorkCmpConst(0x8010, 1);
	if (1) goto label25;
	goto label26;

label25: ;
	MsgActor(1024, 37, 0, 0);
	goto label27;

label26: ;
	WorkCmpConst(0x8010, 2);
	if (1) goto label28;
	goto label29;

label28: ;
	MsgActor(1024, 38, 0, 0);
	goto label27;

label29: ;
	WorkCmpConst(0x8010, 3);
	if (1) goto label30;
	goto label31;

label30: ;
	MsgActor(1024, 39, 0, 0);
	goto label27;

label31: ;
	WorkCmpConst(0x8010, 4);
	if (1) goto label32;
	goto label33;

label32: ;
	MsgActor(1024, 40, 0, 0);
	goto label27;

label33: ;
	WorkCmpConst(0x8010, 5);
	if (1) goto label34;
	goto label35;

label34: ;
	MsgActor(1024, 41, 0, 0);
	goto label27;

label35: ;
	Routine5();

label27: ;
	InputWaitLast();
	MsgWinCloseAll();
	VMReturn();
}

void Routine3()
{
	FlagReset(505);
	StackPush(0x409C);
	StackPushConst(2);
	StackCmp(4);
	StackPushFlag(697);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label36;
	FlagSet(505);

label36: ;
	StackPushFlag(584);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label37;
	FlagSet(505);

label37: ;
	StackPushFlag(614);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label38;
	FlagSet(505);

label38: ;
	VMReturn();
}

void Routine4()
{
	FlagReset(656);
	StackPush(0x4097);
	StackPushConst(2);
	StackCmp(4);
	StackPushFlag(607);
	StackPushConst(0);
	StackCmp(1);
	StackPushFlag(602);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(6);
	StackCmp(7);
	if (255) goto label39;
	FlagSet(656);

label39: ;
	StackPushFlag(614);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label40;
	FlagSet(656);

label40: ;
	VMReturn();
}

void Routine5()
{
	StackPushFlag(2758);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 16);
	MsgActor(1024, 46, 0, 0);
	VMJump(223);
	StackPush(0x400B);
	StackPushConst(111);
	StackCmp(5);
	VMJumpIf(255, 16);
	MsgActor(1024, 42, 0, 0);
	VMJump(10);
	MsgActor(1024, 45, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 139);
	MsgActor(1024, 43, 0, 0);
	MsgWinCloseAll();
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 14);
	CallTrainerBattle(594, 0, 0);
	VMJump(41);
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 14);
	CallTrainerBattle(595, 0, 0);
	VMJump(8);
	CallTrainerBattle(596, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 8);
	CallTrainerBattleEnd();
	VMJump(2);
	CallTrainerLose();
	MsgActor(1024, 46, 0, 0);
	FlagSet(2758);
	VMJump(16);
	MsgActor(1024, 44, 0, 0);
	WorkSetConst(0x400B, 111);
	VMReturn();
}
