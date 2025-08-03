#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	WorkCmpConst(0x8020, 6);
	if (1) goto label0;
	goto label1;

label0: ;

	Movement m[] = { //255
		WalkRight, 1,
		WalkUp, 1,
	};

	goto label2;

label1: ;
	WorkCmpConst(0x8020, 7);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //255
		WalkUp, 1,
	};

	goto label2;

label4: ;
	WorkCmpConst(0x8020, 8);
	if (1) goto label5;
	goto label2;

label5: ;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkUp, 1,
	};

	goto label2;

label2: ;
	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x78000, 0, 0x73000, 25);
	CMD_248(1093, 60);
	EVCameraWait();
	MsgActorEx(1024, 0, 0, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 1, 6, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 1, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 3, 0, 5, 0);
	MsgWinCloseAll();
	MsgActorVersioned(1024, 4, 5, 7, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		TurnDown, 1,
	};


	Movement m[] = { //0
		Wait8, 1,
		SlowWalkDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		Wait8, 1,
		SlowWalkLeft, 1,
		Wait8, 1,
		SlowTurnDown, 1,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 6, 7, 0, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		SlowWalkRight, 2,
		Wait8, 1,
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		Wait8, 1,
		0x64, 1,
	};

	MsgActorEx(1024, 8, 0, 5, 0);
	MsgWinCloseAll();
	ActorCmdWait();

	Movement m[] = { //0
		SlowWalkLeft, 1,
		Wait8, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 9, 6, 4, 0);

	Movement m[] = { //1
		TurnRight, 1,
	};


	Movement m[] = { //2
		TurnLeft, 1,
	};

	ActorCmdWait();
	VMSleep(5);
	MsgMulti(10, 10, 3, 1);
	VMSleep(5);
	MsgMulti(11, 20, 5, 2);
	MsgWaitAdvance();
	MsgWinCloseAll();
	VMSleep(5);
	MsgWinCloseNo(1);
	VMSleep(5);
	MsgWinCloseNo(2);

	Movement m[] = { //1
		TurnDown, 1,
	};


	Movement m[] = { //2
		TurnDown, 1,
	};

	MsgActorEx(1024, 12, 6, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		WalkUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 13, 6, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 14, 0, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		TurnRight, 1,
	};

	MsgActorEx(1024, 15, 0, 5, 0);
	MsgWinCloseAll();
	ActorCmdWait();

	Movement m[] = { //5
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		TurnDown, 1,
	};


	Movement m[] = { //5
		TurnDown, 1,
	};

	ActorCmdWait();
	ActorNew(9, 5, 1, 251, 126, 0);
	PVPlay(517, 0);
	PVWait();

	Movement m[] = { //251
		LookRight, 1,
		Wait8, 1,
		LookLeft, 1,
		Wait8, 1,
		LookRight, 1,
		Wait8, 1,
		LookDown, 1,
		WalkDown, 1,
		Wait8, 1,
		Exclaimation, 1,
		WalkDown, 2,
		Wait8, 1,
	};

	ActorCmdWait();
	PVPlay(517, 0);
	PVWait();

	Movement m[] = { //8
		TurnUp, 1,
	};

	ActorCmdWait();
	ActorDelete(251);
	MsgActorEx(1024, 16, 8, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //7
		HopUp, 1,
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 17, 7, 0, 0);
	MsgWinCloseAll();
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	WordSetPokeSpecies(0, 501);
	goto label7;

label6: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	WordSetPokeSpecies(0, 495);
	goto label7;

label8: ;
	WordSetPokeSpecies(0, 498);

label7: ;

	Movement m[] = { //8
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 8, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //8
		TurnUp, 1,
	};


	Movement m[] = { //7
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 19, 0, 5, 0);
	MsgWinCloseAll();
	BGMChangeMap();
	FadeEx(3, 0, 16, 4);
	FadeExWait();
	VMSleep(30);
	EVCameraReturn(1);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	ActorDelete(0);
	ActorDelete(1);
	ActorDelete(2);
	ActorDelete(3);
	ActorDelete(5);
	ActorDelete(4);
	FlagReset(843);
	ActorAdd(9);
	FadeEx(3, 16, 0, 4);
	FadeExWait();

	Movement m[] = { //7
		FastWalkUp, 1,
		FastWalkLeft, 1,
		HopLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 20, 7, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 21, 6, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //8
		WalkUp, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 22, 8, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //7
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 23, 7, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 24, 6, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //7
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //8
		WalkLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 25, 8, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //7
		Exclaimation, 1,
		HopRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 26, 7, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 27, 8, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 28, 6, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //7
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorGendered(1024, 29, 30, 7, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x199);
	MsgActorEx(1024, 31, 7, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //7
		FastWalkUp, 1,
		FastWalkRight, 1,
		WalkDown, 1,
		FastWalkDown, 4,
		Vanish, 1,
	};


	Movement m[] = { //8
		Wait8, 1,
		WalkDown, 1,
		FastWalkDown, 3,
		Vanish, 1,
	};

	VMSleep(5);
	MsgMulti(32, 20, 5, 3);
	VMSleep(15);
	MsgWinCloseNo(3);
	VMSleep(5);
	MsgMulti(33, 22, 9, 4);
	VMSleep(20);
	MsgWinCloseNo(4);
	ActorDelete(7);
	ActorDelete(8);
	SEPlay(1369);
	SEWait();

	Movement m[] = { //6
		WalkDown, 1,
		TurnRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorGendered(1024, 34, 35, 6, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		WalkDown, 2,
		WalkRight, 1,
		WalkDown, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	ActorDelete(6);
	SEPlay(1369);
	SEWait();
	WorkSetConst(0x40D9, 2);
	FlagSet(799);
	WorkSetConst(0x40D7, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorDelete(9);
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2807);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(843);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
