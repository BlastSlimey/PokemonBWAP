#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	Routine0();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0x3002F, 0xC8000, 70);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8021, 0x8022);
	TrainerCardGetSex(0x8023);
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	ActorNew(0x8021, 47, 0, 251, 1, 0);
	goto label1;

label0: ;
	ActorNew(0x8021, 47, 0, 251, 4, 0);

label1: ;

	Movement m[] = { //255
		Vanish, 1,
		FastestWalkUp, 35,
	};

	ActorCmdWait();
	EVCameraWait();
	VMSleep(20);
	MsgActorVersioned(1024, 0, 2, 0, 0, 0);
	MsgWinCloseAll();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0x2001F, 0x128000, 50);

	Movement m[] = { //0
		WalkDown, 6,
		TurnDown, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorVersioned(1024, 1, 3, 0, 0, 0);
	MsgWinCloseAll();
	EVCameraReturn(70);

	Movement m[] = { //255
		FastestWalkDown, 35,
		LookUp, 1,
		Reappear, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	ActorDelete(251);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x40B6, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	Routine1();
	Routine2();
	WorkSetConst(0x40B6, 2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	PlayerGetGPos(0x8026, 0x8027);
	StackPush(0x8026);
	StackPushConst(14);
	StackCmp(1);
	if (255) goto label2;

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 2,
		WalkUp, 1,
	};

	goto label3;

label2: ;
	StackPush(0x8026);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label4;

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 1,
		WalkUp, 1,
	};

	goto label3;

label4: ;
	StackPush(0x8026);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label5;

	Movement m[] = { //255
		WalkUp, 2,
	};

	goto label3;

label5: ;
	StackPush(0x8026);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label6;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 1,
		WalkUp, 1,
	};

	goto label3;

label6: ;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 2,
		WalkUp, 1,
	};


label3: ;
	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x258000, 30);
	EVCameraWait();
	Routine3();
	EVCameraEnd();
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8026, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkCmpConst(0x40B6, 0);
	if (1) goto label7;
	WorkCmpConst(0x40B6, 1);
	if (1) goto label7;
	WorkCmpConst(0x40B6, 2);
	if (1) goto label7;
	goto label8;

label7: ;
	MsgActorVersioned(1024, 89, 90, 0, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label9;

label8: ;
	WorkCmpConst(0x40B6, 3);
	if (1) goto label10;
	goto label11;

label10: ;
	Routine3();
	goto label9;

label11: ;
	WorkCmpConst(0x40B6, 4);
	if (1) goto label12;
	WorkCmpConst(0x40B6, 5);
	if (1) goto label12;
	goto label9;

label12: ;
	MsgActor(1024, 54, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label9;

label9: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	StackPush(0x40B6);
	StackPushConst(4);
	StackCmp(4);
	if (255) goto label13;
	Routine4();
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label14;
	MsgActor(1024, 56, 0, 0);
	goto label15;

label14: ;
	MsgActor(1024, 55, 0, 0);

label15: ;
	PVWait();
	InputWaitLast();
	MsgWinCloseAll();
	goto label16;

label13: ;
	Routine4();
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label17;
	MsgScream(25, 1);
	goto label18;

label17: ;
	MsgScream(24, 1);

label18: ;
	PVWait();
	InputWaitLast();
	MsgInfoClose();

label16: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	Routine5();
	Routine6();
	StackPushFlag(307);
	StackPushConst(0);
	StackCmp(1);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label19;

	Movement m[] = { //4
		LookDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label20;
	MsgSystem(26, 2);
	goto label21;

label20: ;
	MsgSystem(27, 2);

label21: ;
	InputWaitLast();
	MsgSystemClose();
	goto label22;

label19: ;

	Movement m[] = { //0
		LookDown, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x40B6, 3);
	StackPushFlag(307);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label23;
	Routine7();

label23: ;
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x258000, 20);
	EVCameraWait();
	CMD_245(0, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label24;
	MsgActorVersioned(1024, 28, 29, 0, 0, 0);
	MsgWinCloseAll();

label24: ;
	EVCameraReturn(40);

	Movement m[] = { //0
		WalkRight, 1,
		WalkDown, 4,
		TurnLeft, 1,
	};

	ActorCmdWait();
	EVCameraWait();

	Movement m[] = { //255
		LookRight, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 30, 0, 0, 0);
	MsgWinCloseAll();
	WordSetPlayerName(0);
	SEPlay(1391);
	MsgSystem(31, 2);
	SEWait();
	MsgWaitAdvance();
	MsgSystemClose();
	PokePartyRecoverAll();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x258000, 20);

	Movement m[] = { //255
		LookUp, 1,
	};


	Movement m[] = { //0
		WalkUp, 4,
		WalkLeft, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	Routine3();
	EVCameraEnd();

label22: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	Routine8();
	VMHalt();
}

void Sequence9()
{
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	Routine9();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 53, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 52, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	Routine3();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	Routine10();
	WorkSetConst(0x40B6, 5);
	WorkSetConst(0x40A2, 2);
	FlagSet(600);
	FlagSet(596);
	FlagSet(803);
	Routine9();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	WorkSetConst(0x802B, 0);
	WorkSetConst(0x802C, 0);
	PlayerGetGPos(0x802B, 0x802C);
	StackPush(0x802B);
	StackPushConst(14);
	StackCmp(1);
	if (255) goto label25;

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 2,
		WalkUp, 2,
	};

	goto label26;

label25: ;
	StackPush(0x802B);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label27;

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 1,
		WalkUp, 2,
	};

	goto label26;

label27: ;
	StackPush(0x802B);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label28;

	Movement m[] = { //255
		WalkUp, 3,
	};

	goto label26;

label28: ;
	StackPush(0x802B);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label29;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 1,
		WalkUp, 2,
	};

	goto label26;

label29: ;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 2,
		WalkUp, 2,
	};


label26: ;
	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x258000, 60);
	EVCameraWait();

	Movement m[] = { //1
		0x64, 1,
	};

	ActorCmdWait();
	Routine9();
	WorkSetConst(0x802C, 0);
	WorkSetConst(0x802B, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	GameGetVersion(0x8010);
	StackPush(0x8010);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label30;
	StackPush(0x40B6);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label31;
	WorkSetConst(0x4020, 211);
	goto label32;

label31: ;
	StackPush(0x40B6);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label33;
	WorkSetConst(0x4020, 221);
	goto label32;

label33: ;
	WorkSetConst(0x4020, 212);

label32: ;
	WorkSetConst(0x4021, 214);
	goto label34;

label30: ;
	StackPush(0x40B6);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label35;
	WorkSetConst(0x4020, 213);
	goto label36;

label35: ;
	StackPush(0x40B6);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label37;
	WorkSetConst(0x4020, 222);
	goto label36;

label37: ;
	WorkSetConst(0x4020, 214);

label36: ;
	WorkSetConst(0x4021, 212);

label34: ;
	VMReturn();
}

void Routine1()
{
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	PlayerGetGPos(0x8024, 0x8025);
	StackPush(0x8024);
	StackPushConst(14);
	StackCmp(1);
	if (255) goto label38;

	Movement m[] = { //255
		WalkUp, 2,
		WalkRight, 2,
		WalkUp, 1,
	};

	goto label39;

label38: ;
	StackPush(0x8024);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label40;

	Movement m[] = { //255
		WalkUp, 2,
		WalkRight, 1,
		WalkUp, 1,
	};

	goto label39;

label40: ;
	StackPush(0x8024);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label41;

	Movement m[] = { //255
		WalkUp, 3,
	};

	goto label39;

label41: ;
	StackPush(0x8024);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label42;

	Movement m[] = { //255
		WalkUp, 2,
		WalkLeft, 1,
		WalkUp, 1,
	};

	goto label39;

label42: ;

	Movement m[] = { //255
		WalkUp, 2,
		WalkLeft, 2,
		WalkUp, 1,
	};


label39: ;
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);

	Movement m[] = { //0
		FastestWalkDown, 14,
		WalkDown, 5,
	};

	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x258000, 30);
	EVCameraWait();

	Movement m[] = { //0
		SlowWalkRight, 1,
	};

	ActorCmdWait();
	VMSleep(30);
	MsgActorVersioned(1024, 6, 7, 0, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		WalkLeft, 1,
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		0xB6, 1,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 8, 10, 0, 0, 0);
	MsgActorVersioned(1024, 9, 11, 0, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		0xBB, 1,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 12, 13, 0, 0, 0);
	MsgWinCloseAll();
	Routine4();
	PVWait();
	CMD_1ae();
	BGMPush(6);
	CMD_1b1();
	FlagReset(660);
	ActorSetGPos(0, 16, 0, 37, 1);
	ActorAdd(5);
	MapReplaceSetEvent(3, 1, 1);
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label43;
	FieldClose();
	Call3DDemo(12, 0);
	FieldOpen();
	goto label44;

label43: ;
	FieldClose();
	Call3DDemo(11, 0);
	FieldOpen();

label44: ;
	CMD_1ad();
	BGMPop(0, 60);
	CMD_1b1();
	VMReturn();
}

void Routine2()
{
	VMSleep(30);
	SEPlay(2032);
	EVCameraShake(4, 0, 4, 5, 1, 0, 1, 3);
	SEWait();
	VMSleep(30);
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label45;
	MsgSystem(14, 2);
	goto label46;

label45: ;
	MsgSystem(15, 2);

label46: ;
	MsgWaitAdvance();
	MsgSystemClose();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x258000, 20);

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		Wait8, 1,
		LockDirection, 1,
		SlowWalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 16, 17, 0, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //255
		LockDirection, 1,
		SlowWalkDown, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	CMD_23f();
	CMD_248(1002, 6);
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label47;
	MsgSystem(18, 2);
	goto label48;

label47: ;
	MsgSystem(19, 2);

label48: ;
	VMSleep(50);
	MsgSystemClose();
	CMD_1ae();
	CMD_1b1();
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label49;
	FieldClose();
	Call3DDemo(10, 0);
	FieldOpen();
	goto label50;

label49: ;
	FieldClose();
	Call3DDemo(9, 0);
	FieldOpen();

label50: ;
	FlagReset(661);
	ActorAdd(4);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x248000, 1);
	ActorSetGPos(0, 16, 0, 36, 1);
	CMD_1ad();
	CMD_1b1();
	CMD_24b(6);
	MsgActorVersioned(1024, 20, 21, 0, 0, 0);
	MsgWinCloseAll();
	MsgActorVersioned(1024, 22, 23, 0, 0, 0);
	MsgWinCloseAll();
	EVCameraReturn(40);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	VMReturn();
}

void Routine3()
{
	MsgActorEx(1024, 32, 0, 0, 1);
	MsgActorClose();

	Movement m[] = { //255
		Wait8, 1,
		FastTurnUp, 1,
		FastWalkUp, 1,
	};


	Movement m[] = { //0
		Wait8, 1,
		FastTurnDown, 1,
		FastWalkDown, 1,
	};

	ActorCmdWait();
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label51;
	CallTrainerBattle(586, 0, 0);
	goto label52;

label51: ;
	CallTrainerBattle(587, 0, 0);

label52: ;
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label53;
	ActorSetGPos(255, 16, 0, 39, 0);
	ActorSetGPos(0, 16, 0, 36, 1);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label54;
	WorkSetConst(0x4020, 211);
	goto label55;

label54: ;
	WorkSetConst(0x4020, 213);

label55: ;
	ActorDelete(5);
	FlagSet(660);
	CallTrainerBattleEnd();
	goto label56;

label53: ;
	CallTrainerLose();

label56: ;
	WorkSetConst(0x40B6, 4);
	RTReserveScript(15);
	VMReturn();
}

void Routine4()
{
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label57;
	PVPlay(643, 0);
	goto label58;

label57: ;
	PVPlay(644, 0);

label58: ;
	VMReturn();
}

void Routine5()
{
	WorkSetConst(0x8028, 0);
	PlayerGetDir(0x8028);
	WorkCmpConst(0x8028, 0);
	if (1) goto label59;
	goto label60;

label59: ;
	goto label61;

label60: ;
	WorkCmpConst(0x8028, 1);
	if (1) goto label62;
	goto label63;

label62: ;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkDown, 2,
		WalkRight, 1,
		TurnUp, 1,
	};

	goto label61;

label63: ;
	WorkCmpConst(0x8028, 3);
	if (1) goto label64;
	goto label65;

label64: ;

	Movement m[] = { //255
		WalkDown, 1,
		WalkRight, 1,
		TurnUp, 1,
	};

	goto label61;

label65: ;
	WorkCmpConst(0x8028, 2);
	if (1) goto label66;
	goto label61;

label66: ;

	Movement m[] = { //255
		WalkDown, 1,
		WalkLeft, 1,
		TurnUp, 1,
	};

	goto label61;

label61: ;
	ActorCmdWait();
	WorkSetConst(0x8028, 0);

	Movement m[] = { //4
		0xAC, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x8029, 0);
	Routine6();
	WorkGet(0x8029, 0x8010);
	WorkSetConst(0x802A, 0);
	WorkSetConst(0x802A, 256);
	WorkOr(0x802A, 1);
	WorkOr(0x802A, 16);
	Routine11();
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label67;
	MsgScream(25, 0);
	PVWait();
	MsgWaitAdvance();
	MsgInfoClose();
	CallWildBattle(643, 50, 0x802A);
	goto label68;

label67: ;
	MsgScream(24, 0);
	PVWait();
	MsgWaitAdvance();
	MsgInfoClose();
	CallWildBattle(644, 50, 0x802A);

label68: ;
	WildBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label69;
	ActorSetGPos(0, 16, 0, 36, 1);
	WildBattleGetResult(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label70;
	FlagSet(307);

label70: ;
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	StackPush(0x8029);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label71;
	ActorDelete(4);
	FlagSet(661);

label71: ;
	CallWildBattleEnd();
	goto label72;

label69: ;
	CallWildLose();

label72: ;
	VMReturn();
}

void Routine6()
{
	WorkSetConst(0x8031, 0);
	WorkSetConst(0x8032, 0);
	BoxGetCount(0x8031, 5);
	DebugPrint(0x8031);
	PokePartyGetCount(0x8032, 5);
	DebugPrint(0x8032);
	StackPush(0x8032);
	StackPushConst(0);
	StackCmp(1);
	StackPush(0x8031);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label73;
	WorkSetConst(0x8010, 1);
	goto label74;

label73: ;
	WorkSetConst(0x8010, 0);

label74: ;
	DebugPrint(0x8010);
	WorkSetConst(0x8032, 0);
	WorkSetConst(0x8031, 0);
	VMReturn();
}

void Routine7()
{
	CMD_245(0, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label75;
	CMD_245(1, 0x8010);
	goto label76;

label75: ;
	Routine12();

label76: ;
	VMReturn();
}

void Routine8()
{
	WorkCmpConst(0x40B6, 1);
	if (1) goto label77;
	goto label78;

label77: ;
	ActorSetGPos(0, 16, 2, 18, 1);
	goto label79;

label78: ;
	WorkCmpConst(0x40B6, 2);
	if (1) goto label80;
	goto label81;

label80: ;
	ActorSetGPos(5, 16, 0, 35, 1);
	ActorSetGPos(4, 16, 0, 39, 1);
	ActorSetGPos(0, 16, 0, 36, 1);
	goto label79;

label81: ;
	WorkCmpConst(0x40B6, 3);
	if (1) goto label82;
	goto label83;

label82: ;
	ActorSetGPos(5, 16, 0, 35, 1);
	ActorSetGPos(0, 16, 0, 36, 1);
	goto label79;

label83: ;
	WorkCmpConst(0x40B6, 4);
	if (1) goto label84;
	goto label85;

label84: ;
	ActorSetGPos(0, 17, 0, 39, 2);
	goto label79;

label85: ;
	WorkCmpConst(0x40B6, 5);
	if (1) goto label86;
	goto label79;

label86: ;
	ActorSetGPos(2, 15, 0, 40, 0);
	ActorSetGPos(3, 17, 0, 40, 0);
	ActorSetGPos(1, 16, 0, 38, 1);
	ActorSetGPos(0, 16, 0, 36, 1);
	goto label79;

label79: ;
	VMReturn();
}

void Routine9()
{
	CMD_25f();
	CallTrainerBattle(232, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label87;
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x258000, 1);
	EVCameraWait();
	ActorSetGPos(1, 16, 0, 39, 1);
	ActorSetGPos(255, 16, 0, 40, 0);
	CMD_24b(6);
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label88;
	WorkSetConst(0x4020, 221);
	goto label89;

label88: ;
	WorkSetConst(0x4020, 222);

label89: ;
	CallTrainerBattleEnd();
	goto label90;

label87: ;
	CallTrainerLose();

label90: ;
	VMSleep(30);

	Movement m[] = { //1
		LockDirection, 1,
		SlowWalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 57, 1, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		WalkUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 58, 2, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		TurnLeft, 1,
	};


	Movement m[] = { //1
		SlowTurnUp, 1,
		Wait16, 2,
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 59, 1, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		WalkUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 60, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 61, 2, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 62, 63, 2, 0, 0);
	MsgWinCloseAll();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x248000, 30);
	EVCameraWait();
	VMSleep(20);

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 64, 0, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 65, 2, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		0xB6, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 66, 0, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 67, 2, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		WalkUp, 1,
		TurnLeft, 1,
	};


	Movement m[] = { //2
		WalkUp, 1,
		TurnRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //1
		TurnLeft, 1,
		TurnRight, 1,
	};

	ActorCmdWait();
	CMD_248(1002, 60);

	Movement m[] = { //3
		Wait8, 1,
		WalkDown, 10,
	};


	Movement m[] = { //2
		Wait8, 1,
		WalkDown, 10,
	};


	Movement m[] = { //1
		Wait8, 1,
		PauseAnim, 1,
		WalkDown, 10,
	};


	Movement m[] = { //255
		WalkLeft, 2,
		LookRight, 1,
		Wait8, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		SlowTurnLeft, 1,
		Wait16, 2,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		0xB6, 1,
	};

	ActorCmdWait();
	VMSleep(16);
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x288000, 30);

	Movement m[] = { //0
		WalkDown, 4,
		TurnLeft, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	VMSleep(30);

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	BGMPlay(1099);
	MsgActorEx(1024, 68, 0, 0, 0);
	MsgWinCloseAll();
	VMSleep(20);

	Movement m[] = { //255
		SlowWalkRight, 1,
	};

	ActorCmdWait();
	VMSleep(45);
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0x1000F, 0x1A8000, 220);

	Movement m[] = { //255
		Wait8, 1,
		SlowWalkRight, 1,
		SlowWalkUp, 14,
	};


	Movement m[] = { //0
		SlowWalkRight, 1,
		SlowWalkUp, 14,
	};

	ActorCmdWait();
	EVCameraWait();
	VMSleep(30);

	Movement m[] = { //255
		LookRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 69, 0, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 70, 0, 0, 0);
	MsgWinCloseAll();
	VMSleep(30);
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0x2001F, 0x128000, 130);

	Movement m[] = { //255
		Wait8, 1,
		SlowWalkUp, 8,
	};


	Movement m[] = { //0
		SlowWalkUp, 8,
	};

	ActorCmdWait();
	VMSleep(30);

	Movement m[] = { //255
		TurnRight, 1,
	};


	Movement m[] = { //0
		TurnLeft, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	VMSleep(30);

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		0xB6, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 71, 0, 0, 0);
	MsgWinCloseAll();
	VMSleep(30);

	Movement m[] = { //0
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 72, 0, 0, 0);
	MsgWinCloseAll();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0x3002F, 0xC8000, 60);

	Movement m[] = { //0
		SlowWalkUp, 2,
		WalkUp, 3,
		WalkLeft, 1,
		TurnDown, 1,
	};


	Movement m[] = { //255
		Wait16, 1,
		SlowWalkUp, 3,
	};

	ActorCmdWait();
	EVCameraWait();
	VMSleep(30);
	MsgActorEx(1024, 73, 0, 0, 0);
	MsgWinCloseAll();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0x3002F, 0x8C000, 30);

	Movement m[] = { //0
		SlowWalkUp, 2,
		WalkUp, 2,
	};


	Movement m[] = { //255
		Wait8, 1,
		SlowWalkUp, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	VMSleep(20);
	MsgActorEx(1024, 74, 0, 0, 0);
	MsgWinCloseAll();
	Routine13();

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 75, 0, 0, 0);
	MsgWinCloseAll();
	VMSleep(5);
	CMD_1d3(2, 0, 1);
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label91;
	StackPushFlag(340);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label92;
	CMD_1d5();
	MsgInfo(76, 2);
	MsgInfoClose();
	goto label93;

label92: ;
	CMD_1d5();
	MsgInfo(77, 2);
	MsgInfoClose();

label93: ;
	goto label94;

label91: ;
	StackPushFlag(340);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label95;
	CMD_1d5();
	MsgInfo(78, 2);
	MsgInfoClose();
	goto label94;

label95: ;
	CMD_1d5();
	MsgInfo(79, 2);
	MsgInfoClose();

label94: ;
	CMD_259(160);
	VMSleep(30);
	CMD_1d5();
	MsgInfo(80, 2);
	MsgInfoClose();
	VMSleep(30);
	CMD_1d5();
	MsgInfo(81, 2);
	SEPlay(2030);
	VMSleep(8);
	EVCameraEnd();
	CMD_1d4();
	MsgInfoClose();
	CMD_25f();
	CallGameClear(0);
	WorkSetConst(0x40B6, 6);
	VMReturn();
}

void Routine10()
{
	VMSleep(30);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x248000, 15);
	EVCameraWait();
	MsgActorVersioned(1024, 33, 34, 0, 0, 0);
	MsgWinCloseAll();
	CMD_1d3(1, 0, 0);
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label96;
	CMD_1d5();
	MsgInfo(35, 2);
	CMD_1d5();
	MsgInfo(36, 2);
	MsgInfoClose();
	goto label97;

label96: ;
	CMD_1d5();
	MsgInfo(37, 2);
	CMD_1d5();
	MsgInfo(38, 2);
	MsgInfoClose();

label97: ;
	CMD_1d4();

	Movement m[] = { //0
		TurnLeft, 1,
	};

	ActorCmdWait();
	CMD_248(1002, 60);
	VMSleep(15);
	FlagReset(617);
	ActorAdd(1);
	ActorAdd(2);
	ActorAdd(3);

	Movement m[] = { //1
		FastWalkUp, 5,
		SlowWalkUp, 3,
	};

	ActorCmdWait();
	BGMPlayPush(1094);
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x288000, 30);
	EVCameraWait();
	MsgActorEx(1024, 39, 1, 0, 0);
	MsgWinCloseAll();
	EVCameraMoveTo(9688, 0, 0xED000, 0x128000, 0, 0x278000, 30);

	Movement m[] = { //0
		LookDown, 1,
	};


	Movement m[] = { //255
		LookDown, 1,
		Exclaimation, 1,
		Wait8, 1,
		LookRight, 1,
	};


	Movement m[] = { //1
		SlowWalkRight, 2,
		SlowWalkUp, 2,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 40, 41, 1, 0, 0);
	MsgWinCloseAll();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, 0, 0x258000, 60);

	Movement m[] = { //1
		SlowWalkUp, 3,
		SlowWalkLeft, 1,
		TurnLeft, 1,
	};


	Movement m[] = { //255
		Wait16, 2,
		LookUp, 1,
	};


	Movement m[] = { //0
		Wait16, 3,
		LookRight, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 42, 1, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		SlowWalkDown, 1,
	};


	Movement m[] = { //0
		LookDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 43, 1, 0, 0);
	MsgActorEx(1024, 44, 1, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		WalkUp, 4,
		SlowWalkUp, 5,
		WalkRight, 1,
		TurnUp, 1,
	};


	Movement m[] = { //2
		WalkUp, 4,
		SlowWalkUp, 5,
	};

	ActorCmdWait();
	MsgActorEx(1024, 45, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		SlowWalkLeft, 2,
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 46, 1, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 47, 2, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		TurnDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 48, 1, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		SlowWalkRight, 1,
		SlowWalkDown, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label98;
	MsgInfo(49, 1);
	goto label99;

label98: ;
	MsgInfo(50, 1);

label99: ;
	MsgInfoClose();
	VMSleep(15);
	SEPlay(2060);
	PokePartyRecoverAll();
	SEWait();
	VMSleep(15);

	Movement m[] = { //1
		0x64, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 51, 1, 1, 1);
	MsgActorClose();
	VMReturn();
}

void Routine11()
{
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	VMJumpIf(255, 12);
	PVPlay(644, 0);
	VMJump(6);
	PVPlay(643, 0);
	VMReturn();
}

void Routine12()
{
	WorkSetConst(0x802D, 0);
	WorkSetConst(0x802E, 0);
	WorkSetConst(0x802F, 0);
	WorkSetConst(0x8030, 0);
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8030, 644);
	VMJump(6);
	WorkSetConst(0x8030, 643);
	WorkSetConst(0x802F, 0);
	WorkSetConst(0x802E, 0);
	StackPush(0x802F);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 338);
	WorkCmpConst(0x802E, 0);
	VMJumpIf(1, 6);
	VMJump(58);
	WordSetPokeSpecies(1, 0x8030);
	MsgSystem(101, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x802E, 1);
	VMJump(6);
	WorkSetConst(0x802E, 3);
	VMJump(255);
	WorkCmpConst(0x802E, 1);
	VMJumpIf(1, 6);
	VMJump(59);
	MsgSystem(103, 2);
	MsgSystemClose();
	CallPokeSelect(0x8010, 0x802D, 0);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x802E, 2);
	VMJump(6);
	WorkSetConst(0x802E, 3);
	VMJump(177);
	WorkCmpConst(0x802E, 2);
	VMJumpIf(1, 6);
	VMJump(79);
	WordSetPartyPokeName(2, 0x802D);
	MsgSystem(104, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 33);
	CMD_245(2, 0x802D);
	WordSetPokeSpecies(1, 0x8030);
	MsgSystem(105, 2);
	MsgWaitAdvance();
	MsgSystemClose();
	WorkSetConst(0x802F, 1);
	VMJump(6);
	WorkSetConst(0x802E, 0);
	VMJump(79);
	WorkCmpConst(0x802E, 3);
	VMJumpIf(1, 6);
	VMJump(60);
	WordSetPokeSpecies(1, 0x8030);
	MsgSystem(102, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 14);
	MsgSystemClose();
	WorkSetConst(0x802F, 1);
	VMJump(6);
	WorkSetConst(0x802E, 1);
	VMJump(0);
	VMJump(-357);
	VMReturn();
}

void Routine13()
{
	CMD_255(0, 16, 5, 6, 10, 20);
	CMD_256(16, 5, 6);
	CMD_258();
	FadeEx(12, 0, 16, 2);
	FadeExWait();
	FlagReset(660);
	ActorAdd(5);
	ActorSetGPos(5, 16, 2, 7, 1);

	Movement m[] = { //5
		0xBC, 1,
	};

	FadeEx(12, 16, 0, 2);
	FadeExWait();
	CMD_257();
	ActorCmdWait();
	VMReturn();
}
