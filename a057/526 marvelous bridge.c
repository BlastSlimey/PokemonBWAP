#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	FlagReset(829);
	PlayerGetGPos(0x8022, 0x8023);
	PlayerGetDir(0x8024);

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	WorkGet(0x8008, 0x8022);
	StackPush(0x8024);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label0;
	WorkAdd(0x8008, 2);
	WorkSetConst(0x8009, 2);
	goto label1;

label0: ;
	StackPush(0x8024);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label1;
	WorkSub(0x8008, 2);
	WorkSetConst(0x8009, 3);

label1: ;
	ActorAdd(0);
	ActorSetGPos(0, 0x8008, 0, 0x8023, 0x8009);

	Movement m[] = { //0
		0xB8, 1,
	};

	ActorCmdWait();
	WorkGet(0x8008, 0x8022);
	StackPush(0x8024);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label2;
	WorkSub(0x8008, 2);
	WorkSetConst(0x8009, 3);
	goto label3;

label2: ;
	StackPush(0x8024);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label3;
	WorkAdd(0x8008, 2);
	WorkSetConst(0x8009, 2);

label3: ;
	ActorAdd(1);
	ActorSetGPos(1, 0x8008, 0, 0x8023, 0x8009);

	Movement m[] = { //1
		0xB8, 1,
	};

	ActorCmdWait();
	WorkGet(0x8008, 0x8023);
	StackPush(0x8023);
	StackPushConst(32);
	StackCmp(3);
	if (255) goto label4;
	WorkAdd(0x8008, 2);
	WorkSetConst(0x8009, 0);
	goto label5;

label4: ;
	WorkSub(0x8008, 2);
	WorkSetConst(0x8009, 1);

label5: ;
	ActorAdd(2);
	ActorSetGPos(2, 0x8022, 0, 0x8008, 0x8009);

	Movement m[] = { //2
		0xB8, 1,
	};

	ActorCmdWait();
	VMSleep(16);
	MsgActorEx(1024, 0, 0, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 1, 1, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 2, 2, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 3, 0, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8024);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label6;

	Movement m[] = { //0
		WalkLeft, 1,
	};

	goto label7;

label6: ;

	Movement m[] = { //0
		WalkRight, 1,
	};


label7: ;
	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1AA);
	MsgActorEx(1024, 4, 1, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8024);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label8;

	Movement m[] = { //1
		WalkRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};

	goto label9;

label8: ;

	Movement m[] = { //1
		WalkLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};


label9: ;
	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1AB);
	MsgActorEx(1024, 5, 2, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8023);
	StackPushConst(32);
	StackCmp(3);
	if (255) goto label10;

	Movement m[] = { //2
		WalkUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnDown, 1,
	};

	goto label11;

label10: ;

	Movement m[] = { //2
		WalkDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnUp, 1,
	};


label11: ;
	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1AC);
	MsgActorEx(1024, 6, 0, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 7, 1, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 8, 2, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8024);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label12;

	Movement m[] = { //0
		LookLeft, 1,
		LockDirection, 1,
		0xAA, 1,
		UnlockDirection, 1,
	};


	Movement m[] = { //1
		LookRight, 1,
		LockDirection, 1,
		0xA9, 1,
		UnlockDirection, 1,
	};

	goto label13;

label12: ;

	Movement m[] = { //0
		LookRight, 1,
		LockDirection, 1,
		0xA9, 1,
		UnlockDirection, 1,
	};


	Movement m[] = { //1
		LookLeft, 1,
		LockDirection, 1,
		0xAA, 1,
		UnlockDirection, 1,
	};


label13: ;
	StackPush(0x8023);
	StackPushConst(32);
	StackCmp(3);
	if (255) goto label14;

	Movement m[] = { //2
		LookUp, 1,
		LockDirection, 1,
		0xA8, 1,
		UnlockDirection, 1,
	};

	goto label15;

label14: ;

	Movement m[] = { //2
		LookDown, 1,
		LockDirection, 1,
		0xA7, 1,
		UnlockDirection, 1,
	};


label15: ;
	ActorCmdWait();

	Movement m[] = { //0
		0xB9, 1,
		Vanish, 1,
	};


	Movement m[] = { //1
		0xB9, 1,
		Vanish, 1,
	};


	Movement m[] = { //2
		0xB9, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	ActorDelete(0);
	ActorDelete(1);
	ActorDelete(2);
	WorkSetConst(0x40E5, 1);
	FlagSet(829);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();

	Movement m[] = { //3
		Vanish, 1,
		Wait1, 1,
		Reappear, 1,
		Vanish, 1,
		Wait1, 1,
		Reappear, 1,
		Vanish, 1,
		Wait1, 1,
		Reappear, 1,
		Vanish, 1,
		Wait1, 1,
		Reappear, 1,
		Vanish, 1,
		Wait1, 1,
		Reappear, 1,
		Vanish, 1,
		Wait1, 1,
		Reappear, 1,
		Vanish, 1,
		Wait1, 1,
		Reappear, 1,
		Vanish, 1,
		Wait1, 1,
		Reappear, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	ActorDelete(3);

	Movement m[] = { //4
		LookRight, 1,
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 34, 4, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x40E6, 2);
	FlagSet(834);
	FlagSet(358);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(358);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label16;
	MsgActor(1024, 34, 0, 0);
	goto label17;

label16: ;
	MsgActor(1024, 33, 0, 0);

label17: ;
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	StackPushFlag(339);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label18;
	Routine0();
	goto label19;

label18: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 32, 0, 0);
	InputWaitLast();
	MsgActorClose();

label19: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	FlagSet(834);
	WorkSetConst(0x40E6, 0);
	Random(0x8010, 100);
	DebugPrint(0x8010);
	StackPush(0x8010);
	StackPushConst(20);
	StackCmp(0);
	if (255) goto label20;
	FlagReset(358);
	FlagReset(834);
	WorkSetConst(0x40E6, 1);

label20: ;
	DebugPrint(0x40E6);
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	StackPushFlag(2761);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label21;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 23, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label22;

label21: ;
	StackPush(0x400A);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label23;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 9, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label24;
	Routine1();
	goto label25;

label24: ;
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label25: ;
	goto label22;

label23: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 18, 0, 0);
	InputWaitLast();
	MsgActorClose();

label22: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x400A);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label26;
	WordSetItemName(0, 87);
	MsgActorEx(1024, 19, 6, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label27;
	StackPush(0x400B);
	StackPushConst(10);
	StackCmp(1);
	if (255) goto label28;
	Routine2();
	goto label29;

label28: ;
	Routine3();

label29: ;
	goto label30;

label27: ;
	MsgWinCloseAll();

label30: ;
	goto label31;

label26: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(504, 0);
	MsgActor(1024, 24, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();

label31: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x400A);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label32;
	WordSetItemName(0, 87);
	MsgActorEx(1024, 19, 6, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label33;
	StackPush(0x400B);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label34;
	Routine2();
	goto label35;

label34: ;
	Routine3();

label35: ;
	goto label36;

label33: ;
	MsgWinCloseAll();

label36: ;
	goto label37;

label32: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(504, 0);
	MsgActor(1024, 24, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();

label37: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x400A);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label38;
	WordSetItemName(0, 87);
	MsgActorEx(1024, 19, 6, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label39;
	StackPush(0x400B);
	StackPushConst(30);
	StackCmp(1);
	if (255) goto label40;
	Routine2();
	goto label41;

label40: ;
	Routine3();

label41: ;
	goto label42;

label39: ;
	MsgWinCloseAll();

label42: ;
	goto label43;

label38: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(504, 0);
	MsgActor(1024, 24, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();

label43: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x400A);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label44;
	WordSetItemName(0, 87);
	MsgActorEx(1024, 19, 6, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label45;
	StackPush(0x400B);
	StackPushConst(40);
	StackCmp(1);
	if (255) goto label46;
	Routine2();
	goto label47;

label46: ;
	Routine3();

label47: ;
	goto label48;

label45: ;
	MsgWinCloseAll();

label48: ;
	goto label49;

label44: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(504, 0);
	MsgActor(1024, 24, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();

label49: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	StackPushFlag(834);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label50;
	Routine4();

label50: ;
	VMHalt();
}

void Routine0()
{
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorGendered(1024, 25, 26, 5, 2, 0);
	MoneyWinDisp(31, 1);
	WorkSetConst(0x8025, 0);
	YesNoWin(0x8025);
	StackPush(0x8025);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label51;
	WorkSetConst(0x8026, 0);
	PokePartyGetCount(0x8026, 0);
	WorkSetConst(0x8027, 0);
	MoneyCheck(0x8027, 500);
	StackPush(0x8027);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label52;
	MoneyWinClose();
	MsgActorEx(1024, 29, 5, 2, 0);
	InputWaitLast();
	MsgActorClose();
	goto label53;

label52: ;
	StackPush(0x8026);
	StackPushConst(6);
	StackCmp(1);
	if (255) goto label54;
	MoneyWinClose();
	MsgActorEx(1024, 30, 5, 2, 0);
	InputWaitLast();
	MsgActorClose();
	goto label53;

label54: ;
	MsgActorClose();
	WordSetPlayerName(0);
	MEPlay(1304);
	MoneySub(500);
	MoneyWinUpdate();
	MsgSystem(27, 2);
	MEWait();
	MsgWaitAdvance();
	MsgWinCloseAll();
	MoneyWinClose();
	PokePartyAdd(0x8010, 129, 0, 5);
	PokePartySetIV(0x8026, 73, 31);
	MsgSystem(28, 2);
	WorkSetConst(0x8028, 0);
	YesNoWin(0x8028);
	MsgSystemClose();
	StackPush(0x8028);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label55;
	WorkSetConst(0x8029, 0);
	CallPokeNameInput(0x8029, 0x8026, 1);
	goto label55;

label55: ;
	MsgActorEx(1024, 32, 5, 2, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(339);

label53: ;
	WorkSetConst(0x8029, 0);
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8026, 0);
	goto label56;

label51: ;
	MoneyWinClose();
	MsgActorEx(1024, 31, 5, 2, 0);
	InputWaitLast();
	MsgActorClose();

label56: ;
	VMReturn();
}

void Routine1()
{
	MsgActor(1024, 10, 0, 0);
	MsgActor(1024, 12, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
	};

	ActorCmdWait();
	PVPlay(504, 0);

	Movement m[] = { //7
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //8
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //9
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //10
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);
	PVWait();
	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9467, 0, 0xE0000, 0x6A8000, 0, 0x208000, 30);
	EVCameraWait();
	MsgActor(1024, 13, 0, 0);
	MsgWinCloseAll();
	WorkSetConst(0x802A, 0);
	Random(0x802A, 4);
	WordSetItemName(0, 87);
	WorkCmpConst(0x802A, 0);
	if (1) goto label57;
	goto label58;

label57: ;

	Movement m[] = { //7
		HopDown, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 14, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //7
		HopDown, 2,
	};

	ActorCmdWait();
	PVPlay(504, 0);
	MsgScream(24, 1);
	PVWait();
	MsgWaitAdvance();
	MsgInfoClose();
	WorkSetConst(0x400B, 10);
	goto label59;

label58: ;
	WorkCmpConst(0x802A, 1);
	if (1) goto label60;
	goto label61;

label60: ;

	Movement m[] = { //8
		HopDown, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 15, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //8
		HopDown, 2,
	};

	ActorCmdWait();
	PVPlay(504, 0);
	MsgScream(24, 1);
	PVWait();
	MsgWaitAdvance();
	MsgInfoClose();
	WorkSetConst(0x400B, 20);
	goto label59;

label61: ;
	WorkCmpConst(0x802A, 2);
	if (1) goto label62;
	goto label63;

label62: ;

	Movement m[] = { //9
		HopDown, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 16, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //9
		HopDown, 2,
	};

	ActorCmdWait();
	PVPlay(504, 0);
	MsgScream(24, 1);
	PVWait();
	MsgWaitAdvance();
	MsgInfoClose();
	WorkSetConst(0x400B, 30);
	goto label59;

label63: ;
	WorkCmpConst(0x802A, 3);
	if (1) goto label64;
	goto label59;

label64: ;

	Movement m[] = { //10
		HopDown, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 17, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //10
		HopDown, 2,
	};

	ActorCmdWait();
	PVPlay(504, 0);
	MsgScream(24, 1);
	PVWait();
	MsgWaitAdvance();
	MsgInfoClose();
	WorkSetConst(0x400B, 40);
	goto label59;

label59: ;
	Routine5();
	VMReturn();
}

void Routine2()
{
	WordSetItemName(0, 87);
	MsgActorEx(1024, 20, 6, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(2761);
	MsgActorEx(1024, 22, 6, 0, 0);
	MsgWinCloseAll();
	ActorSetGPos(7, 105, 0, 31, 1);
	ActorSetGPos(8, 106, 0, 31, 1);
	ActorSetGPos(9, 107, 0, 31, 1);
	ActorSetGPos(10, 108, 0, 31, 1);

	Movement m[] = { //7
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};


	Movement m[] = { //8
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};


	Movement m[] = { //9
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};


	Movement m[] = { //10
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x400A, 0);
	WorkSetConst(0x400B, 0);
	VMReturn();
}

void Routine3()
{
	MsgActorEx(1024, 21, 6, 0, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x400B, 10);
	if (1) goto label65;
	goto label66;

label65: ;

	Movement m[] = { //7
		HopDown, 1,
	};

	goto label67;

label66: ;
	WorkCmpConst(0x400B, 20);
	if (1) goto label68;
	goto label69;

label68: ;

	Movement m[] = { //8
		HopDown, 1,
	};

	goto label67;

label69: ;
	WorkCmpConst(0x400B, 30);
	if (1) goto label70;
	goto label71;

label70: ;

	Movement m[] = { //9
		HopDown, 1,
	};

	goto label67;

label71: ;
	WorkCmpConst(0x400B, 40);
	if (1) goto label72;
	goto label67;

label72: ;

	Movement m[] = { //10
		HopDown, 1,
	};

	goto label67;

label67: ;
	ActorCmdWait();
	MsgActorEx(1024, 22, 6, 0, 0);
	MsgWinCloseAll();
	ActorSetGPos(7, 105, 0, 31, 1);
	ActorSetGPos(8, 106, 0, 31, 1);
	ActorSetGPos(9, 107, 0, 31, 1);
	ActorSetGPos(10, 108, 0, 31, 1);

	Movement m[] = { //7
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};


	Movement m[] = { //8
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};


	Movement m[] = { //9
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};


	Movement m[] = { //10
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x400A, 0);
	WorkSetConst(0x400B, 0);
	VMReturn();
}

void Routine4()
{
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	StackPush(0x8020);
	StackPushConst(147);
	StackCmp(1);
	StackPush(0x8021);
	StackPushConst(36);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label73;
	Routine6();
	goto label74;

label73: ;
	StackPush(0x8020);
	StackPushConst(148);
	StackCmp(1);
	StackPush(0x8021);
	StackPushConst(35);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label75;
	Routine6();
	goto label74;

label75: ;
	StackPush(0x8020);
	StackPushConst(149);
	StackCmp(1);
	StackPush(0x8021);
	StackPushConst(36);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label74;
	Routine6();

label74: ;
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	VMReturn();
}

void Routine5()
{
	WorkSetConst(0x802B, 0);
	Random(0x802B, 3);
	WorkCmpConst(0x802B, 0);
	if (1) goto label76;
	goto label77;

label76: ;

	Movement m[] = { //7
		WalkUp, 1,
		FastWalkRight, 2,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkUp, 1,
		FastWalkRight, 2,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkDown, 1,
		FastWalkLeft, 2,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkDown, 1,
		FastWalkLeft, 2,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkDown, 1,
		WalkLeft, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkUp, 1,
		FastestWalkLeft, 2,
		FastWalkLeft, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkDown, 1,
		FastestWalkRight, 2,
		FastWalkRight, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkUp, 1,
		WalkRight, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkUp, 1,
		WalkLeft, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkDown, 1,
		WalkRight, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkDown, 1,
		WalkLeft, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkUp, 1,
		WalkRight, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkUp, 1,
		FastestWalkRight, 2,
		FastWalkRight, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkUp, 1,
		WalkRight, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkDown, 1,
		WalkLeft, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkDown, 1,
		FastestWalkLeft, 2,
		FastWalkLeft, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		HopDown, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		JumpLeft2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		HopDown, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		JumpRight2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		HopDown, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		HopDown, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		JumpRight1, 1,
		HopDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		JumpLeft1, 1,
		HopDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		JumpLeft1, 1,
		HopDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		JumpRight1, 1,
		HopDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		JumpLeft2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		JumpRight2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkRight, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkLeft, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		FastWalkRight, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		FastWalkLeft, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		FastestWalkLeft, 2,
		FastWalkLeft, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkRight, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkRight, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkRight, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //8
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //9
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //10
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	ActorCmdWait();
	goto label78;

label77: ;
	WorkCmpConst(0x802B, 1);
	if (1) goto label79;
	goto label80;

label79: ;

	Movement m[] = { //7
		WalkDown, 1,
		WalkRight, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkUp, 1,
		WalkLeft, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkUp, 1,
		WalkRight, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkDown, 1,
		WalkLeft, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkUp, 1,
		FastWalkRight, 2,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkUp, 1,
		FastWalkRight, 2,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkDown, 1,
		FastWalkLeft, 2,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkDown, 1,
		FastWalkLeft, 2,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkUp, 1,
		WalkLeft, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkDown, 1,
		WalkRight, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkDown, 1,
		WalkLeft, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkUp, 1,
		WalkRight, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkUp, 1,
		WalkLeft, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkUp, 1,
		FastestWalkLeft, 2,
		FastWalkLeft, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkDown, 1,
		FastestWalkRight, 2,
		FastWalkRight, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkDown, 1,
		WalkRight, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		JumpRight1, 1,
		HopDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		HopDown, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		HopDown, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		JumpLeft1, 1,
		HopDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		JumpLeft2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		JumpRight2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		HopDown, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		HopDown, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		JumpRight2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		JumpLeft2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		JumpLeft2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		JumpRight2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkRight, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkRight, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkRight, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		FastestWalkLeft, 2,
		FastWalkLeft, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		FastWalkLeft, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkRight, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		FastWalkLeft, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		FastestWalkRight, 2,
		FastWalkRight, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //8
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //9
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //10
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	ActorCmdWait();
	goto label78;

label80: ;
	WorkCmpConst(0x802B, 2);
	if (1) goto label81;
	goto label78;

label81: ;

	Movement m[] = { //7
		WalkUp, 1,
		FastestWalkRight, 2,
		FastWalkRight, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkUp, 1,
		WalkRight, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkDown, 1,
		WalkLeft, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkDown, 1,
		FastestWalkLeft, 2,
		FastWalkLeft, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkDown, 1,
		WalkLeft, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkUp, 1,
		WalkRight, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkUp, 1,
		WalkLeft, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkDown, 1,
		WalkRight, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkUp, 1,
		FastWalkLeft, 2,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkUp, 1,
		FastWalkLeft, 2,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkDown, 1,
		FastWalkRight, 2,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkDown, 1,
		FastWalkRight, 2,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkUp, 1,
		WalkRight, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkDown, 1,
		WalkLeft, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkUp, 1,
		WalkRight, 1,
		WalkDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkDown, 1,
		WalkLeft, 1,
		WalkUp, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		JumpRight2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		JumpRight2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		JumpLeft2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		JumpLeft2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		HopDown, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		HopDown, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		JumpLeft1, 1,
		HopDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		JumpRight1, 1,
		HopDown, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		JumpLeft2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		JumpLeft2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		JumpRight2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		JumpRight2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		WalkLeft, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		WalkRight, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		WalkRight, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkLeft, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		FastWalkRight, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //8
		FastWalkRight, 2,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //9
		FastestWalkLeft, 2,
		FastWalkLeft, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};


	Movement m[] = { //10
		WalkLeft, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //7
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //8
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //9
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	VMSleep(5);

	Movement m[] = { //10
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		LookRight, 1,
		Wait2, 1,
		LookUp, 1,
		Wait2, 1,
		LookLeft, 1,
		Wait2, 1,
		LookDown, 1,
		Wait2, 1,
		HopDown, 1,
	};

	ActorCmdWait();
	goto label78;

label78: ;
	MsgActor(1024, 18, 0, 0);
	MsgWaitAdvance();
	MsgWinCloseAll();
	EVCameraReturn(30);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	WorkSetConst(0x400A, 1);
	VMReturn();
}

void Routine6()
{
	ActorDelete(3);
	FlagSet(834);
	WorkSetConst(0x40E6, 0);
	VMReturn();
}
