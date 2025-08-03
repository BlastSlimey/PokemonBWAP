#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();

	Movement m[] = { //255
		WalkDown, 5,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		LookUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 0, 0, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 0, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x18D);
	MsgActorEx(1024, 5, 0, 0, 0);
	MsgActorEx(1024, 6, 0, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x4086, 1);
	WorkSetConst(0x4094, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x4094);
	StackPushConst(3);
	StackCmp(3);
	if (255) goto label0;
	MsgActor(1024, 7, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label1;

label0: ;
	StackPush(0x4094);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label2;
	WorkSetConst(0x8020, 0);
	PlayerGetDir(0x8020);
	WorkCmpConst(0x8020, 0);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //0
		HopDown, 2,
	};

	ActorCmdWait();
	goto label5;

label4: ;
	WorkCmpConst(0x8020, 1);
	if (1) goto label6;
	goto label7;

label6: ;

	Movement m[] = { //0
		HopUp, 2,
	};

	ActorCmdWait();
	goto label5;

label7: ;
	WorkCmpConst(0x8020, 2);
	if (1) goto label8;
	goto label9;

label8: ;

	Movement m[] = { //0
		HopRight, 2,
	};

	ActorCmdWait();
	goto label5;

label9: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label10;
	goto label5;

label10: ;

	Movement m[] = { //0
		HopLeft, 2,
	};

	ActorCmdWait();
	goto label5;

label5: ;
	MsgActor(1024, 8, 0, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 0);
	if (1) goto label11;
	goto label12;

label11: ;

	Movement m[] = { //0
		SlowTurnDown, 1,
		WalkLeft, 4,
		WalkUp, 1,
		SlowTurnUp, 1,
		Wait8, 1,
		TurnUp, 1,
		WalkDown, 1,
		WalkRight, 4,
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	goto label13;

label12: ;
	WorkCmpConst(0x8020, 1);
	if (1) goto label14;
	goto label15;

label14: ;

	Movement m[] = { //0
		SlowTurnUp, 1,
		WalkLeft, 4,
		WalkUp, 1,
		SlowTurnUp, 1,
		Wait8, 1,
		TurnUp, 1,
		WalkDown, 1,
		WalkRight, 4,
		SlowTurnUp, 1,
	};

	ActorCmdWait();
	goto label13;

label15: ;
	WorkCmpConst(0x8020, 2);
	if (1) goto label16;
	goto label17;

label16: ;

	Movement m[] = { //0
		SlowTurnUp, 1,
		WalkLeft, 4,
		WalkUp, 1,
		SlowTurnUp, 1,
		Wait8, 1,
		TurnUp, 1,
		WalkDown, 1,
		WalkRight, 4,
		SlowTurnUp, 1,
	};

	ActorCmdWait();
	goto label13;

label17: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label18;
	goto label13;

label18: ;

	Movement m[] = { //0
		SlowTurnLeft, 1,
		WalkUp, 1,
		WalkLeft, 4,
		SlowTurnUp, 1,
		Wait8, 1,
		TurnUp, 1,
		WalkRight, 4,
		WalkDown, 1,
		SlowTurnLeft, 1,
	};

	ActorCmdWait();
	goto label13;

label13: ;
	Routine0();
	MsgActor(1024, 17, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label19;
	MsgActor(1024, 18, 0, 0);

label19: ;
	MsgActor(1024, 19, 0, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 0);
	if (1) goto label20;
	goto label21;

label20: ;

	Movement m[] = { //0
		HopDown, 2,
	};

	ActorCmdWait();
	goto label22;

label21: ;
	WorkCmpConst(0x8020, 1);
	if (1) goto label23;
	goto label24;

label23: ;

	Movement m[] = { //0
		HopUp, 2,
	};

	ActorCmdWait();
	goto label22;

label24: ;
	WorkCmpConst(0x8020, 2);
	if (1) goto label25;
	goto label26;

label25: ;

	Movement m[] = { //0
		HopRight, 2,
	};

	ActorCmdWait();
	goto label22;

label26: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label27;
	goto label22;

label27: ;

	Movement m[] = { //0
		HopLeft, 2,
	};

	ActorCmdWait();
	goto label22;

label22: ;
	MsgActor(1024, 20, 0, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 0);
	if (1) goto label28;
	goto label29;

label28: ;

	Movement m[] = { //1
		Exclaimation, 1,
		WalkDown, 2,
		WalkRight, 6,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label30;

label29: ;
	WorkCmpConst(0x8020, 1);
	if (1) goto label31;
	goto label32;

label31: ;

	Movement m[] = { //1
		Exclaimation, 1,
		WalkDown, 1,
		WalkRight, 6,
		WalkUp, 1,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label30;

label32: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label33;
	goto label30;

label33: ;

	Movement m[] = { //1
		Exclaimation, 1,
		WalkDown, 1,
		WalkRight, 5,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label30;

label30: ;

	Movement m[] = { //255
		LookLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 29, 1, 2, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x18C);
	MsgActorEx(1024, 30, 1, 2, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 0);
	if (1) goto label34;
	goto label35;

label34: ;

	Movement m[] = { //1
		WalkLeft, 6,
		WalkUp, 2,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label36;

label35: ;
	WorkCmpConst(0x8020, 1);
	if (1) goto label37;
	goto label38;

label37: ;

	Movement m[] = { //1
		WalkDown, 1,
		WalkLeft, 6,
		WalkUp, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label36;

label38: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label39;
	goto label36;

label39: ;

	Movement m[] = { //1
		WalkLeft, 5,
		WalkUp, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label36;

label36: ;
	WorkSetConst(0x4094, 5);
	WorkSetConst(0x4086, 2);
	WorkSetConst(0x4088, 3);
	FlagSet(115);
	ActivateRelocator(1);
	ActivateRelocator(2);
	goto label1;

label2: ;
	WorkSetConst(0x8021, 0);
	CMD_23b(119, 0x8021);
	StackPush(0x8021);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label40;
	MsgActor(1024, 21, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label1;

label40: ;
	MsgActor(1024, 22, 0, 0);
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
	StackPush(0x4086);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label41;
	MsgActor(1024, 25, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label42;
	MsgActor(1024, 26, 0, 0);
	goto label43;

label42: ;
	MsgActor(1024, 27, 0, 0);

label43: ;
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(2413);
	WorkSetConst(0x4086, 2);
	goto label44;

label41: ;
	StackPush(0x4094);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label45;
	StackPushFlag(2413);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label46;
	MsgActor(1024, 38, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label47;
	MsgActor(1024, 26, 0, 0);
	goto label48;

label47: ;
	MsgActor(1024, 27, 0, 0);

label48: ;
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(2413);
	WorkSetConst(0x4086, 2);
	goto label49;

label46: ;
	WorkSetConst(0x8023, 0);
	MsgActorEx(1024, 31, 1, 2, 0);
	ListMenuInitTR(31, 1, 0, 1, 0x8023);
	ListMenuAdd(35, 0xFFFF, 0);
	ListMenuAdd(36, 0xFFFF, 1);
	ListMenuAdd(37, 0xFFFF, 2);
	ListMenuShow();
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label50;
	MsgActor(1024, 32, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label49;

label50: ;
	StackPush(0x8023);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label51;
	MsgActor(1024, 33, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label49;

label51: ;
	MsgActor(1024, 34, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label49: ;
	goto label44;

label45: ;
	MsgActor(1024, 28, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label44: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgSystem(39, 2);
	InputWaitLast();
	MsgSystemClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgSystem(40, 2);
	InputWaitLast();
	MsgSystemClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	StackPushFlag(115);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label52;
	MsgSystem(43, 2);

label59: ;
	StackPush(0x8025);
	StackPushConst(1);
	StackCmp(5);
	if (255) goto label53;
	MsgSystem(44, 2);
	ListMenuInitTR(31, 1, 0, 1, 0x8024);
	ListMenuAdd(45, 0xFFFF, 0);
	ListMenuAdd(46, 0xFFFF, 1);
	ListMenuAdd(47, 0xFFFF, 2);
	ListMenuShow();
	WorkCmpConst(0x8024, 0);
	if (1) goto label54;
	goto label55;

label54: ;
	MsgSystem(48, 2);
	goto label56;

label55: ;
	WorkCmpConst(0x8024, 1);
	if (1) goto label57;
	goto label58;

label57: ;
	MsgSystem(49, 2);
	goto label56;

label58: ;
	MsgSystemClose();
	WorkSetConst(0x8025, 1);

label56: ;
	goto label59;

label53: ;
	goto label60;

label52: ;
	MsgSystem(42, 2);
	InputWaitLast();
	MsgSystemClose();

label60: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	MEPlay(1303);
	WordSetPlayerName(0);
	MsgSystem(9, 2);
	MEWait();
	MsgWaitAdvance();
	CMD_19e(1);
	WorkSetConst(0x8022, 0);

label66: ;
	StackPush(0x8022);
	StackPushConst(555);
	StackCmp(5);
	if (255) goto label61;
	MsgSystem(10, 2);
	ListMenuInitTR(31, 13, 0, 1, 0x8010);
	ListMenuAdd(11, 0xFFFF, 0);
	ListMenuAdd(12, 0xFFFF, 1);
	ListMenuShow();
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label62;
	CMD_19e(0);
	CMD_13b(0x8008);
	StackPush(0x8008);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label63;
	MsgWinCloseAll();
	SEPlay(1358);
	CMD_19b(1);
	SEWait();
	MsgActor(1024, 15, 0, 0);
	goto label64;

label63: ;
	MsgSystem(14, 2);
	MsgWinCloseAll();
	CMD_19b(0);
	MsgActor(1024, 16, 0, 0);

label64: ;
	WorkSetConst(0x8022, 555);
	goto label65;

label62: ;
	MsgSystem(13, 2);
	ListMenuInitTR(31, 13, 0, 1, 0x8010);
	ListMenuAdd(11, 0xFFFF, 0);
	ListMenuAdd(12, 0xFFFF, 1);
	ListMenuShow();
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label65;
	MsgWinCloseAll();
	CMD_19e(0);
	CMD_19b(0);
	MsgActor(1024, 16, 0, 0);
	WorkSetConst(0x8022, 555);

label65: ;
	goto label66;

label61: ;
	WorkSetConst(0x8022, 0);
	VMReturn();
}
