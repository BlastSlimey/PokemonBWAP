#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

// SCRIPT IS BROKEN!!!!!!!!!!
// Fixing it, either here or in the re-compiled binary, doesn't work.
// Editing the vanilla binary is required.

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 24, 0, 0);
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
	MsgActor(1024, 25, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActor(1024, 26, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label1;

label0: ;
	MsgActor(1024, 27, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x4078);
	StackPushConst(1);
	StackCmp(4);
	if (255) goto label2;
	MsgActor(1024, 3, 0, 0);
	MsgActorClose();

	Movement m[] = { //4
		TurnUp, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x8020, 0);
	BMCreateHandleByGPos(0x8020, 1, 777, 740);
	BMHndAudioVisualAnmPlay(0x8020, 0);
	BMHndAnmWait(0x8020);

	Movement m[] = { //4
		WalkUp, 1,
		Vanish, 1,
	};


	Movement m[] = { //3
		WalkRight, 1,
		WalkUp, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	PlayerGetDir(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;

	Movement m[] = { //255
		Wait8, 4,
		WalkUp, 2,
	};

	ActorCmdWait();
	goto label4;

label3: ;

	Movement m[] = { //255
		Wait8, 4,
		WalkLeft, 1,
		WalkUp, 1,
	};

	ActorCmdWait();

label4: ;
	ActorDelete(4);
	ActorDelete(3);
	FlagSet(513);
	FlagSet(514);
	MapChangeWarp(396, 4, 11, 0);
	WorkSetConst(0x8020, 0);
	goto label5;

label2: ;
	MsgActor(1024, 1, 0, 0);
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
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8022, 0x8023);
	WorkSub(0x8022, 8);
	ActorSetGPos(4, 0x8022, 0, 741, 3);

	Movement m[] = { //4
		FastWalkRight, 6,
	};

	ActorCmdWait();

	Movement m[] = { //255
		WalkDown, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 0, 4, 0, 0);
	MsgActorClose();

	Movement m[] = { //4
		MediumFastWalkLeft, 6,
	};

	ActorCmdWait();
	ActorSetGPos(4, 777, 0, 741, 1);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 2, 0, 0);
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
	MsgPlaceSign(31, 1);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	SEPlay(1351);
	MsgPlaceSign(32, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(33, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(34, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(35, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	FlagReset(513);
	FlagReset(514);
	WorkSetConst(0x8021, 0);
	BMCreateHandleByGPos(0x8021, 1, 777, 740);
	BMHndAudioVisualAnmPlay(0x8021, 0);
	BMHndAnmWait(0x8021);
	SEPlay(1369);
	ActorAdd(3);
	ActorSetGPos(3, 777, 0, 740, 1);
	WordSetPlayerName(0);
	MsgActorGendered(1024, 4, 5, 3, 5, 0);
	MsgWinCloseAll();
	SEWait();

	Movement m[] = { //3
		WalkDown, 1,
		WalkRight, 1,
		WalkDown, 1,
	};


	Movement m[] = { //255
		Wait4, 1,
		MediumFastWalkDown, 1,
	};

	ActorAdd(4);
	ActorSetGPos(4, 777, 0, 740, 1);

	Movement m[] = { //4
		WalkDown, 1,
		WalkLeft, 1,
		WalkDown, 1,
	};

	VMSleep(8);
	BMHndAudioVisualAnmPlay(0x8021, 1);
	ActorCmdWait();
	BMHndAnmWait(0x8021);
	BMReleaseHandle(0x8021);
	WorkSetConst(0x8021, 0);
	MsgActorEx(1024, 6, 5, 6, 0);
	MsgActorEx(1024, 7, 5, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //5
		WalkUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 8, 5, 6, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	// This part needs to be edited manually
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x185);

	Movement m[] = { //5
		WalkLeft, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 9, 5, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //4
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 10, 4, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //5
		WalkRight, 2,
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 5, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 12, 3, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //5
		LockDirection, 1,
		WalkDown, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 13, 5, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //5
		WalkLeft, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 14, 5, 6, 0);
	MsgActorEx(1024, 15, 5, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //5
		WalkDown, 6,
	};

	ActorCmdWait();
	ActorDelete(5);

	Movement m[] = { //4
		TurnRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //3
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 16, 4, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		TurnLeft, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 17, 3, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		TurnRight, 1,
	};


	Movement m[] = { //4
		MediumFastWalkUp, 1,
		MediumFastWalkRight, 10,
	};


	Movement m[] = { //3
		WalkRight, 9,
	};

	ActorCmdWait();
	ActorDelete(4);
	ActorDelete(3);
	ActorNew(787, 736, 0, 250, 7, 0);
	ActorNew(789, 736, 1, 240, 134, 0);
	WorkSetConst(0x4080, 2);
	FlagSet(679);
	FlagSet(513);
	FlagSet(514);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	StackPush(0x407F);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	ActorSetGPos(3, 781, 0, 751, 1);

label6: ;
	StackPush(0x4080);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	goto label8;

label7: ;
	StackPush(0x4080);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label9;
	ActorNew(787, 736, 0, 250, 7, 0);
	ActorNew(789, 736, 1, 240, 134, 0);
	goto label8;

label9: ;
	StackPush(0x4080);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label8;
	ActorSetGPos(4, 782, 0, 751, 0);
	ActorSetGPos(3, 781, 0, 752, 0);
	ActorSetGPos(2, 790, 0, 749, 0);

label8: ;
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	CMD_241(250);
	CMD_241(240);

	Movement m[] = { //240
		Exclaimation, 1,
	};

	ActorCmdWait();
	BGMPlay(1161);
	WordSetPlayerName(0);
	MsgInfo(18, 1);
	MsgWinCloseAll();
	PlayerGetGPos(0x8024, 0x8025);
	StackPush(0x8024);
	StackPushConst(786);
	StackCmp(1);
	if (255) goto label10;

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 2,
		WalkUp, 1,
	};

	goto label11;

label10: ;
	StackPush(0x8024);
	StackPushConst(787);
	StackCmp(1);
	if (255) goto label12;

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 1,
		WalkUp, 1,
	};

	goto label11;

label12: ;
	StackPush(0x8024);
	StackPushConst(788);
	StackCmp(1);
	if (255) goto label13;

	Movement m[] = { //255
		WalkUp, 1,
		WalkUp, 1,
	};

	goto label11;

label13: ;
	StackPush(0x8024);
	StackPushConst(789);
	StackCmp(1);
	if (255) goto label14;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 1,
		WalkUp, 1,
	};

	goto label11;

label14: ;
	StackPush(0x8024);
	StackPushConst(790);
	StackCmp(1);
	if (255) goto label15;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 2,
		WalkUp, 1,
	};

	goto label11;

label15: ;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 3,
		WalkUp, 1,
	};


label11: ;
	ActorCmdWait();

	Movement m[] = { //250
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 19, 250, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //240
		WalkDown, 1,
		TurnLeft, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 20, 240, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //250
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 21, 250, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		WalkUp, 1,
	};


	Movement m[] = { //240
		WalkUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 23, 240, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		WalkUp, 4,
	};


	Movement m[] = { //250
		WalkUp, 4,
	};


	Movement m[] = { //240
		WalkUp, 4,
	};

	VMSleep(8);
	CMD_252();
	ActorCmdWait();
	VMSleep(16);

	Movement m[] = { //255
		TurnRight, 1,
	};


	Movement m[] = { //250
		TurnRight, 1,
	};


	Movement m[] = { //240
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 29, 240, 2, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //250
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 30, 250, 2, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		WalkUp, 6,
	};


	Movement m[] = { //250
		WalkUp, 6,
	};


	Movement m[] = { //240
		WalkUp, 6,
	};

	ActorCmdWait();
	RTReserveScript(1);
	WorkSetConst(0x4080, 3);
	CMD_25f();
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	VMSleep(16);

	Movement m[] = { //4
		WalkUp, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 36, 4, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		SlowWalkUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 37, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //4
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 38, 4, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		QuestionMark, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 39, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //4
		WalkDown, 1,
		TurnLeft, 1,
	};


	Movement m[] = { //3
		TurnRight, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 40, 4, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 41, 42, 3, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 43, 4, 0, 0);
	MsgWinCloseAll();
	WorkSetConst(0x8026, 0);
	BMCreateHandleByGPos(0x8026, 1, 777, 740);
	BMHndAudioVisualAnmPlay(0x8026, 0);
	BMHndAnmWait(0x8026);
	BGMPlay(1090);
	ActorNew(777, 740, 1, 251, 104, 0);

	Movement m[] = { //251
		WalkDown, 1,
	};

	ActorCmdWait();
	BMHndAudioVisualAnmPlay(0x8026, 1);
	BMHndAnmWait(0x8026);

	Movement m[] = { //251
		WalkDown, 6,
		Exclaimation, 1,
		MediumFastWalkDown, 3,
		TurnRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //4
		TurnLeft, 1,
	};


	Movement m[] = { //3
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 44, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkRight, 3,
	};

	ActorCmdWait();
	MsgActorEx(1024, 45, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkRight, 1,
		TurnDown, 1,
	};


	Movement m[] = { //3
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 46, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkRight, 1,
		TurnDown, 1,
	};


	Movement m[] = { //4
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 47, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		TurnUp, 1,
	};


	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 48, 251, 0, 0);
	MsgWinCloseAll();
	MEPlay(1303);
	WordSetPlayerName(0);
	MsgSystem(49, 0);
	MEWait();
	MsgWaitAdvance();
	MsgWinCloseAll();
	CMD_1d0(60, 1024, 50, 251);
	VMNop();
	VMNop();
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkLeft, 5,
		WalkUp, 9,
	};

	ActorCmdWait();
	BMHndAudioVisualAnmPlay(0x8026, 0);
	BMHndAnmWait(0x8026);

	Movement m[] = { //251
		WalkUp, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	BGMChangeMap();
	BMHndAudioVisualAnmPlay(0x8026, 1);
	BMHndAnmWait(0x8026);
	BMReleaseHandle(0x8026);
	WorkSetConst(0x8026, 0);
	ActorDelete(251);
	MsgActorEx(1024, 51, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		WalkDown, 6,
	};

	VMSleep(8);

	Movement m[] = { //4
		TurnDown, 1,
	};

	ActorCmdWait();
	ActorDelete(3);
	MsgActorEx(1024, 52, 4, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //4
		WalkUp, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 53, 4, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //4
		MediumFastWalkRight, 6,
		MediumFastWalkUp, 11,
	};

	VMSleep(12);

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	ActorDelete(4);
	WorkSetConst(0x4080, 5);
	FlagSet(513);
	FlagSet(514);
	FlagReset(512);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	CMD_24f(100, 3, 29, 0, 101, 3);
	StackPushConst(108);
	VMSleep(592);
	WorkSetConst(0x407F, 2);
	FlagSet(514);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
{
	StackPush(0x407F);
	StackPushConst(1);
	StackCmp(1);
	// ERROR need to manually set 
	//     1F 00 FF 06 00 00 00
	// to
	//     1F 00 FF 02 00 00 00
	if (255) goto label16;
	CMD_24e(16, 368);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label17;
	FlagReset(368);

label17: ;
	VMHalt();
}
