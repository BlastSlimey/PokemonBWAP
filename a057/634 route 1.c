#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9694, 0, 0xED030, 0x3148000, 0, 0x2D48000, 20);
	EVCameraWait();
	MsgActorEx(1024, 2, 250, 2, 0);
	MsgActorClose();
	MsgActorEx(1024, 3, 2, 5, 0);
	MsgActorClose();
	EVCameraMoveTo(9688, 0, 0xED000, 0x3148000, 0, 0x2D18000, 24);

	Movement m[] = { //2
		WalkUp, 3,
	};


	Movement m[] = { //250
		WalkUp, 1,
	};


	Movement m[] = { //240
		WalkUp, 1,
	};


	Movement m[] = { //255
		WalkUp, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	CMD_17d(319);
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x3148000, 0, 0x2D18000, 1);
	EVCameraWait();
	CallWildBattleEnd();
	EVCameraMoveTo(9688, 0, 0xED000, 0x3148000, 0, 0x2D38000, 16);

	Movement m[] = { //2
		WalkDown, 2,
		Wait8, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 4, 2, 5, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 5);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x18B);
	WorkSetConst(0x407C, 1);
	WordSetPlayerName(0);
	MsgActorEx(1024, 6, 2, 5, 0);
	MsgActorClose();

	Movement m[] = { //2
		WalkUp, 12,
	};

	ActorCmdWait();
	ActorDelete(2);
	MsgActorEx(1024, 7, 250, 3, 0);
	MsgActorClose();

	Movement m[] = { //250
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 8, 250, 3, 0);
	MsgActorClose();

	Movement m[] = { //240
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 9, 240, 5, 0);
	MsgActorClose();

	Movement m[] = { //240
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 10, 240, 5, 0);
	MsgActorClose();

	Movement m[] = { //250
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 250, 3, 0);
	MsgActorClose();

	Movement m[] = { //240
		TurnLeft, 1,
	};

	MsgActorEx(1024, 12, 240, 5, 0);
	ActorCmdWait();
	MsgActorClose();

	Movement m[] = { //250
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 13, 250, 3, 0);
	MsgActorClose();
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	WordSetPokeSpecies(0, 501);
	goto label1;

label0: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	WordSetPokeSpecies(0, 495);
	goto label1;

label2: ;
	WordSetPokeSpecies(0, 498);

label1: ;
	MsgActorEx(1024, 14, 240, 5, 0);
	MsgActorClose();
	EVCameraMoveToDefault(64);

	Movement m[] = { //250
		WalkUp, 9,
	};


	Movement m[] = { //240
		WalkUp, 9,
	};

	ActorCmdWait();
	ActorDelete(250);
	ActorDelete(240);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	FlagSet(508);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	StackPush(0x8002);
	StackPush(0x8003);
	StackPush(0x8004);
	StackPush(0x8005);
	StackPush(0x8006);
	WorkSet(0x8000, 17);
	WorkSet(0x8001, 1);
	WorkSet(0x8002, 132);
	WorkSet(0x8003, 26);
	WorkSet(0x8004, 27);
	WorkSet(0x8005, 27);
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

void Sequence2()
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

void Sequence3()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	StackPush(0x407C);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 15, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label4;

label3: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 21, 0, 0);
	InputWaitLast();
	MsgActorClose();

label4: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	WorkCmpConst(0x8020, 788);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //255
		WalkRight, 2,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label7;

label6: ;
	WorkCmpConst(0x8020, 789);
	if (1) goto label8;
	goto label9;

label8: ;

	Movement m[] = { //255
		WalkRight, 1,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label7;

label9: ;
	WorkCmpConst(0x8020, 790);
	if (1) goto label10;
	goto label11;

label10: ;

	Movement m[] = { //255
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label7;

label11: ;
	WorkCmpConst(0x8020, 791);
	if (1) goto label12;
	goto label13;

label12: ;

	Movement m[] = { //255
		WalkLeft, 1,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label7;

label13: ;
	WorkCmpConst(0x8020, 792);
	if (1) goto label14;
	goto label15;

label14: ;

	Movement m[] = { //255
		WalkLeft, 2,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label7;

label15: ;
	WorkCmpConst(0x8020, 793);
	if (1) goto label16;
	goto label17;

label16: ;

	Movement m[] = { //255
		WalkLeft, 3,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label7;

label17: ;

	Movement m[] = { //255
		TurnUp, 0,
	};

	ActorCmdWait();

label7: ;
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	MsgActorEx(1024, 16, 4, 3, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label18;
	MsgActorClose();

	Movement m[] = { //3
		WalkUp, 4,
		TurnLeft, 0,
	};

	ActorCmdWait();
	WorkSetConst(0x8022, 0);
	PokePartyGetCount(0x8022, 0);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(3);
	if (255) goto label19;
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label20;
	WordSetPokeSpecies(0, 495);
	goto label21;

label20: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label22;
	WordSetPokeSpecies(0, 498);
	goto label21;

label22: ;
	WordSetPokeSpecies(0, 501);

label21: ;
	MsgActorEx(1024, 20, 4, 3, 0);
	MsgActorClose();
	goto label23;

label19: ;
	StackPush(0x8022);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label24;
	WordSetPlayerName(0);
	MsgActorEx(1024, 19, 4, 3, 0);
	MsgActorClose();
	goto label23;

label24: ;
	WordSetNumber(0, 0x8022, 1);
	MsgActorEx(1024, 18, 4, 3, 0);
	MsgActorClose();

label23: ;
	MsgActorEx(1024, 21, 3, 5, 0);
	MsgActorClose();
	MEPlay(1327);
	MsgSystem(23, 2);
	MEWait();
	WordSetPlayerName(0);
	MsgSystem(24, 2);
	MsgSystemClose();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CallXTransceiver(1, 330);
	CMD_1ad();
	CMD_1b1();
	MsgActorEx(1024, 25, 3, 5, 0);
	MsgActorClose();

	Movement m[] = { //3
		WalkUp, 8,
	};


	Movement m[] = { //4
		WalkUp, 8,
	};

	ActorCmdWait();
	ActorDelete(3);
	ActorDelete(4);
	FlagSet(515);
	WorkSetConst(0x407C, 2);
	goto label25;

label18: ;
	MsgActorEx(1024, 17, 4, 3, 0);
	MsgActorClose();

	Movement m[] = { //255
		WalkDown, 1,
	};

	ActorCmdWait();

label25: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 19, 0, 0);
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
	MsgPlaceSign(29, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(30, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(31, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
