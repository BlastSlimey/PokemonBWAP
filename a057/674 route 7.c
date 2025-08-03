#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	StackPush(0x8002);
	StackPush(0x8003);
	StackPush(0x8004);
	StackPush(0x8005);
	StackPush(0x8006);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	WorkSet(0x8002, 133);
	WorkSet(0x8003, 3);
	WorkSet(0x8004, 4);
	WorkSet(0x8005, 4);
	RTGetTextFile(0x8006);
	RTCallGlobal(2800);
	StackPop(0x8006);
	StackPop(0x8005);
	StackPop(0x8004);
	StackPop(0x8003);
	StackPop(0x8002);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(11, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(12, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(13, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
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

void Sequence5()
{
	ActorPauseAll();
	CMD_13d();
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	PlayerGetGPos(0x8021, 0x8022);
	WorkSetConst(0x8023, 0);
	PlayerGetDir(0x8023);
	StackPush(0x8023);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label0;

	Movement m[] = { //255
		WalkLeft, 1,
	};

	ActorCmdWait();
	goto label1;

label0: ;

	Movement m[] = { //255
		WalkRight, 1,
	};

	ActorCmdWait();

label1: ;
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x828000, 0, 0xF2B000, 30);
	EVCameraWait();
	WorkSetConst(0x8024, 0);
	BMCreateHandleByGPos(0x8024, 1, 130, 242);
	BMHndAudioVisualAnmPlay(0x8024, 0);
	BMHndAnmWait(0x8024);
	ActorNew(130, 242, 1, 251, 29, 0);

	Movement m[] = { //251
		SlowWalkDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 5, 251, 0, 0);
	MsgActorClose();
	WorkCmpConst(0x8022, 243);
	if (1) goto label2;
	goto label3;

label2: ;
	StackPush(0x8023);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label4;

	Movement m[] = { //255
		TurnRight, 0,
	};

	ActorCmdWait();
	goto label5;

label4: ;

	Movement m[] = { //255
		TurnLeft, 0,
	};

	ActorCmdWait();

label5: ;
	goto label6;

label3: ;
	WorkCmpConst(0x8022, 244);
	if (1) goto label7;
	goto label8;

label7: ;

	Movement m[] = { //255
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label6;

label8: ;
	WorkCmpConst(0x8022, 245);
	if (1) goto label9;
	goto label10;

label9: ;

	Movement m[] = { //255
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label6;

label10: ;
	WorkCmpConst(0x8022, 246);
	if (1) goto label11;
	goto label12;

label11: ;

	Movement m[] = { //255
		WalkUp, 2,
	};

	ActorCmdWait();
	goto label6;

label12: ;
	WorkCmpConst(0x8022, 247);
	if (1) goto label13;
	goto label14;

label13: ;

	Movement m[] = { //255
		WalkUp, 3,
	};

	ActorCmdWait();
	goto label6;

label14: ;

	Movement m[] = { //255
		TurnUp, 0,
	};

	ActorCmdWait();

label6: ;

	Movement m[] = { //251
		Exclaimation, 1,
	};

	ActorCmdWait();
	WorkCmpConst(0x8022, 243);
	if (1) goto label15;
	goto label16;

label15: ;
	StackPush(0x8023);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label17;

	Movement m[] = { //251
		SlowTurnLeft, 0,
	};

	ActorCmdWait();
	goto label18;

label17: ;

	Movement m[] = { //251
		SlowTurnRight, 0,
	};

	ActorCmdWait();

label18: ;
	goto label19;

label16: ;
	StackPush(0x8023);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label20;

	Movement m[] = { //251
		SlowWalkLeft, 1,
		SlowTurnDown, 0,
	};

	ActorCmdWait();
	goto label19;

label20: ;

	Movement m[] = { //251
		SlowWalkRight, 1,
		SlowTurnDown, 0,
	};

	ActorCmdWait();

label19: ;
	MsgActorEx(1024, 6, 251, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 7, 251, 0, 0);
	MsgActorClose();
	WorkCmpConst(0x8022, 243);
	if (1) goto label21;
	goto label22;

label21: ;

	Movement m[] = { //251
		SlowWalkUp, 1,
	};

	ActorCmdWait();
	goto label23;

label22: ;
	StackPush(0x8023);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label24;

	Movement m[] = { //251
		SlowWalkRight, 1,
		SlowWalkUp, 1,
	};

	ActorCmdWait();
	goto label23;

label24: ;

	Movement m[] = { //251
		SlowWalkLeft, 1,
		SlowWalkUp, 1,
	};

	ActorCmdWait();

label23: ;
	ActorDelete(251);
	WorkCmpConst(0x8022, 243);
	if (1) goto label25;
	goto label26;

label25: ;
	StackPush(0x8023);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label27;

	Movement m[] = { //255
		WalkRight, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label28;

label27: ;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkUp, 1,
	};

	ActorCmdWait();

label28: ;
	goto label29;

label26: ;
	StackPush(0x8023);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label30;

	Movement m[] = { //255
		WalkUp, 1,
		WalkRight, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label29;

label30: ;

	Movement m[] = { //255
		WalkUp, 1,
		WalkLeft, 1,
		WalkUp, 1,
	};

	ActorCmdWait();

label29: ;
	RTReserveScript(1);
	MapChangeWarp(344, 6, 9, 0);
	EVCameraEnd();
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	CMD_13d();
	WorkSetConst(0x8025, 0);
	GameGetVersion(0x8025);
	StackPush(0x8025);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label31;
	ActorNew(144, 244, 1, 251, 113, 0);
	goto label32;

label31: ;
	ActorNew(144, 244, 1, 251, 114, 0);

label32: ;

	Movement m[] = { //255
		WalkDown, 1,
	};

	ActorCmdWait();
	StackPush(0x8025);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label33;
	PVPlay(642, 0);
	goto label34;

label33: ;
	PVPlay(642, 0);

label34: ;
	BGMPlay(1001);

	Movement m[] = { //255
		Exclaimation, 1,
		SlowTurnRight, 0,
		Wait16, 1,
		WalkRight, 5,
	};

	PVWait();
	ActorCmdWait();
	CMD_15b(251);
	SEPlay(1992);
	NetConnectWiFiClub();
	VMNop();
	NetConnectGTS();
	SEWait();
	StackPush(0x8025);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label35;
	SaveDataWrite(7);
	VMNop2();
	goto label36;

label35: ;
	SaveDataWrite(6);
	VMNop2();

label36: ;
	StackPush(0x8025);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label37;
	PVPlay(642, 0);
	MsgScream(9, 2);
	PVWait();
	MsgWaitAdvance();
	goto label38;

label37: ;
	PVPlay(642, 0);
	MsgScream(8, 2);
	PVWait();
	MsgWaitAdvance();

label38: ;
	MsgWinCloseAll();
	VMSleep(160);
	MsgInfo(10, 2);
	MsgInfoClose();
	SEPlay(1992);
	NetConnectWiFiClub();
	VMNop2();
	NetConnectGTS();
	SEWait();
	CMD_15c();
	VMSleep(80);
	SaveDataWrite(0xFFFF);
	VMNop();
	BGMChangeMap();
	ActorDelete(251);
	WorkSetConst(0x40C0, 3);
	StackPush(0x8025);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label39;
	CMD_1bc(1);
	goto label40;

label39: ;
	CMD_1bc(0);

label40: ;
	WorkSetConst(0x8025, 0);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	FlagSet(832);
	FlagSet(833);
	WorkSetConst(0x8020, 0);
	GameGetVersion(0x8020);
	StackPush(0x8020);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label41;
	FlagReset(833);
	goto label42;

label41: ;
	FlagReset(832);

label42: ;
	WorkSetConst(0x8020, 0);
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	MEPlay(1327);
	MsgSystem(0, 2);
	MEWait();
	WordSetPlayerName(0);
	MsgSystem(1, 2);
	MsgSystemClose();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CallXTransceiver(6, 330);
	CMD_1ad();
	CMD_1b1();
	WorkSetConst(0x40E7, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
