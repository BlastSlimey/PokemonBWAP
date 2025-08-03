#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	FlagReset(839);
	ActorAdd(6);
	ActorAdd(7);
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 0, 5, 2, 0);
	MsgWinCloseAll();
	BGMPlay(1091);
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label0;
	ActorSetGPos(6, 12, 0xFFFE, 38, 1);
	ActorSetGPos(7, 12, 0xFFFE, 39, 1);

	Movement m[] = { //5
		TurnUp, 1,
	};


	Movement m[] = { //6
		FastWalkDown, 8,
		FastWalkRight, 3,
		FastTurnDown, 1,
	};


	Movement m[] = { //7
		FastWalkDown, 7,
		FastWalkRight, 4,
		TurnDown, 1,
	};


	Movement m[] = { //255
		TurnUp, 1,
	};

	goto label1;

label0: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label2;
	ActorSetGPos(6, 12, 0xFFFE, 39, 1);
	ActorSetGPos(7, 12, 0xFFFE, 38, 1);

	Movement m[] = { //5
		TurnUp, 1,
	};


	Movement m[] = { //6
		FastWalkDown, 7,
		FastWalkRight, 4,
		FastTurnDown, 1,
	};


	Movement m[] = { //7
		FastWalkDown, 8,
		FastWalkRight, 3,
		TurnDown, 1,
	};


	Movement m[] = { //255
		TurnUp, 1,
	};

	goto label1;

label2: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label1;
	ActorSetGPos(6, 12, 0xFFFE, 39, 1);
	ActorSetGPos(7, 12, 0xFFFE, 38, 1);

	Movement m[] = { //5
		TurnUp, 1,
	};


	Movement m[] = { //6
		FastWalkDown, 7,
		FastWalkRight, 5,
		FastTurnDown, 1,
	};


	Movement m[] = { //7
		FastWalkDown, 8,
		FastWalkRight, 4,
		FastTurnDown, 1,
	};


	Movement m[] = { //255
		TurnUp, 1,
	};


label1: ;
	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label3;
	EVCameraMoveTo(9685, 0xFFB5, 0xED005, 0xF8000, -131103, 0x2F8000, 16);
	goto label4;

label3: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label5;
	EVCameraMoveTo(9694, 0, 0xED02B, 0x108000, -131103, 0x2F8000, 16);
	goto label4;

label5: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label4;
	EVCameraMoveTo(9694, 0, 0xED02B, 0x118000, -131103, 0x2F8000, 16);

label4: ;
	EVCameraWait();
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label6;
	MsgActorEx(1024, 1, 6, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		FastWalkDown, 2,
	};

	goto label7;

label6: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label8;
	MsgActorEx(1024, 1, 6, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		FastWalkDown, 1,
	};

	goto label7;

label8: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label7;
	MsgActorEx(1024, 1, 6, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		FastWalkDown, 2,
	};


label7: ;
	ActorCmdWait();
	Routine0();
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label9;

	Movement m[] = { //6
		LockDirection, 1,
		SlowWalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 6, 3, 0);
	goto label10;

label9: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label11;
	MsgActorEx(1024, 2, 6, 5, 0);
	goto label10;

label11: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label10;

	Movement m[] = { //6
		LockDirection, 1,
		SlowWalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 6, 5, 0);

label10: ;
	MsgWinCloseAll();
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label12;

	Movement m[] = { //7
		FastWalkDown, 2,
		FastWalkLeft, 1,
		FastTurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 7, 3, 0);
	goto label13;

label12: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label14;

	Movement m[] = { //7
		FastWalkDown, 2,
		TurnRight, 1,
	};


	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 7, 3, 0);
	goto label13;

label14: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label13;

	Movement m[] = { //7
		FastWalkDown, 2,
		FastWalkRight, 1,
		FastTurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 7, 5, 0);

label13: ;
	MsgWinCloseAll();
	Routine1();
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label15;
	MsgActorEx(1024, 4, 7, 3, 0);
	goto label16;

label15: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label17;
	MsgActorEx(1024, 4, 7, 3, 0);
	goto label16;

label17: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label16;
	MsgActorEx(1024, 4, 7, 5, 0);

label16: ;
	MsgWinCloseAll();
	BGMChangeMap();
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label18;

	Movement m[] = { //5
		TurnLeft, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnRight, 1,
	};

	goto label19;

label18: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label20;
	VMSleep(8);

	Movement m[] = { //255
		TurnDown, 1,
	};

	goto label19;

label20: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label19;

	Movement m[] = { //5
		TurnRight, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnLeft, 1,
	};


label19: ;
	ActorCmdWait();
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label21;
	MsgActorEx(1024, 5, 5, 6, 0);
	goto label22;

label21: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label23;
	MsgActorEx(1024, 5, 5, 6, 0);
	goto label22;

label23: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label22;
	MsgActorEx(1024, 5, 5, 4, 0);

label22: ;
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1A4);
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label24;
	MsgActorEx(1024, 6, 5, 6, 0);
	goto label25;

label24: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label26;
	MsgActorEx(1024, 6, 5, 6, 0);
	goto label25;

label26: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label25;
	MsgActorEx(1024, 6, 5, 4, 0);

label25: ;
	MsgWinCloseAll();
	VMSleep(16);
	ActorNew(12, 37, 1, 251, 106, 0);
	BGMPlay(1100);
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label27;

	Movement m[] = { //251
		FastWalkDown, 9,
		FastWalkRight, 4,
		FastTurnDown, 1,
	};


	Movement m[] = { //6
		LookLeft, 1,
		Exclaimation, 1,
		FastWalkDown, 1,
		FastWalkRight, 2,
		FastTurnUp, 1,
	};


	Movement m[] = { //7
		LookLeft, 1,
		Exclaimation, 1,
		FastWalkRight, 2,
		FastWalkDown, 1,
		FastTurnUp, 1,
	};

	goto label28;

label27: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label29;

	Movement m[] = { //251
		FastWalkDown, 9,
		FastWalkRight, 4,
		FastTurnDown, 1,
	};


	Movement m[] = { //6
		LookLeft, 1,
		Exclaimation, 1,
		FastWalkRight, 1,
		FastWalkDown, 2,
		FastTurnUp, 1,
	};


	Movement m[] = { //7
		LookLeft, 1,
		Exclaimation, 1,
		FastWalkDown, 1,
		FastTurnUp, 1,
	};

	goto label28;

label29: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label28;

	Movement m[] = { //251
		FastWalkDown, 9,
		FastWalkRight, 4,
		FastTurnDown, 1,
	};


	Movement m[] = { //6
		LookLeft, 1,
		Exclaimation, 1,
		FastWalkDown, 1,
		FastWalkLeft, 2,
		FastTurnUp, 1,
	};


	Movement m[] = { //7
		LookLeft, 1,
		Exclaimation, 1,
		FastWalkLeft, 2,
		FastWalkDown, 1,
		FastTurnUp, 1,
	};


label28: ;
	ActorCmdWait();
	EVCameraMoveTo(9688, 0, 0xED000, 0x108000, -131103, 0x2F8000, 16);
	EVCameraWait();
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label30;

	Movement m[] = { //5
		TurnUp, 1,
	};


	Movement m[] = { //255
		TurnUp, 1,
	};

	goto label31;

label30: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label32;

	Movement m[] = { //255
		WalkLeft, 1,
		TurnUp, 1,
	};

	goto label31;

label32: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label31;

	Movement m[] = { //5
		TurnUp, 1,
	};


	Movement m[] = { //255
		TurnUp, 1,
	};


label31: ;
	ActorCmdWait();
	VMSleep(8);
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label33;
	MsgActorEx(1024, 7, 251, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 8, 5, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //7
		TurnLeft, 1,
	};


	Movement m[] = { //6
		TurnLeft, 1,
	};

	goto label34;

label33: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label35;
	MsgActorEx(1024, 7, 251, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 8, 5, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		TurnLeft, 1,
	};


	Movement m[] = { //7
		TurnRight, 1,
	};

	goto label34;

label35: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label34;
	MsgActorEx(1024, 7, 251, 3, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 8, 5, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //7
		TurnRight, 1,
	};


	Movement m[] = { //6
		TurnRight, 1,
	};


label34: ;
	VMSleep(28);
	ActorCmdWait();
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label36;

	Movement m[] = { //251
		WalkDown, 1,
		WalkLeft, 1,
		WalkDown, 1,
	};

	ActorCmdWait();
	goto label37;

label36: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label38;

	Movement m[] = { //251
		WalkDown, 2,
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label37;

label38: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label37;

	Movement m[] = { //251
		WalkDown, 1,
		WalkRight, 1,
		WalkDown, 1,
	};

	ActorCmdWait();

label37: ;
	StackPush(0x40CC);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label39;
	WordSetPlayerName(0);
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label40;
	MsgActorEx(1024, 10, 251, 3, 0);
	goto label41;

label40: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label42;
	MsgActorEx(1024, 10, 251, 5, 0);
	goto label41;

label42: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label41;
	MsgActorEx(1024, 10, 251, 5, 0);

label41: ;
	goto label43;

label39: ;
	WorkSetConst(0x8008, 5);
	WorkSub(0x8008, 0x40CC);
	WordSetNumber(0, 0x8008, 1);
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label44;
	MsgActorEx(1024, 9, 251, 3, 0);
	goto label43;

label44: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label45;
	MsgActorEx(1024, 9, 251, 5, 0);
	goto label43;

label45: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label43;
	MsgActorEx(1024, 9, 251, 5, 0);

label43: ;
	MsgWinCloseAll();
	BGMChangeMap();
	VMSleep(8);
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label46;

	Movement m[] = { //251
		SlowWalkRight, 1,
		SlowTurnDown, 1,
	};


	Movement m[] = { //255
		TurnRight, 1,
	};

	goto label47;

label46: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label48;

	Movement m[] = { //251
		SlowTurnDown, 1,
	};

	goto label47;

label48: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label47;

	Movement m[] = { //251
		SlowWalkLeft, 1,
		SlowTurnDown, 1,
	};


	Movement m[] = { //255
		TurnLeft, 1,
	};


label47: ;
	ActorCmdWait();
	FadeEx(3, 0, 16, 4);
	FadeExWait();
	ActorCmdWait();
	ActorDelete(251);
	ActorDelete(5);
	ActorDelete(6);
	ActorDelete(7);
	EVCameraMoveToDefault(1);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	FadeEx(3, 16, 0, 4);
	FadeExWait();
	WorkAdd(0x40CC, 1);
	FlagSet(706);
	FlagSet(839);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	CallTrainerBattle(599, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label49;
	EVCameraInit();
	EVCameraUnbind();
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label50;
	EVCameraMoveTo(9685, 0xFFB5, 0xED005, 0xF8000, -131103, 0x2F8000, 1);
	goto label51;

label50: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label52;
	EVCameraMoveTo(9694, 0, 0xED02B, 0x108000, -131103, 0x2F8000, 1);
	goto label51;

label52: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label51;
	EVCameraMoveTo(9694, 0, 0xED02B, 0x118000, -131103, 0x2F8000, 1);

label51: ;
	EVCameraWait();
	CallTrainerBattleEnd();
	goto label53;

label49: ;
	CallTrainerLose();

label53: ;
	VMReturn();
}

void Routine1()
{
	CallTrainerBattle(597, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label54;
	EVCameraInit();
	EVCameraUnbind();
	StackPush(0x8020);
	StackPushConst(15);
	StackCmp(1);
	if (255) goto label55;
	EVCameraMoveTo(9685, 0xFFB5, 0xED005, 0xF8000, -131103, 0x2F8000, 1);
	goto label56;

label55: ;
	StackPush(0x8020);
	StackPushConst(16);
	StackCmp(1);
	if (255) goto label57;
	EVCameraMoveTo(9694, 0, 0xED02B, 0x108000, -131103, 0x2F8000, 1);
	goto label56;

label57: ;
	StackPush(0x8020);
	StackPushConst(17);
	StackCmp(1);
	if (255) goto label56;
	EVCameraMoveTo(9694, 0, 0xED02B, 0x118000, -131103, 0x2F8000, 1);

label56: ;
	EVCameraWait();
	CallTrainerBattleEnd();
	goto label58;

label54: ;
	CallTrainerLose();

label58: ;
	VMReturn();
}
