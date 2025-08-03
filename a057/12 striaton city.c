#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 9, 0, 0);
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
	MsgActor(1024, 10, 0, 0);
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
	MsgActor(1024, 11, 0, 0);
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
	MsgActor(1024, 12, 0, 0);
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
	MsgActor(1024, 13, 0, 0);
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
	Random(0x8010, 3);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActor(1024, 14, 0, 0);
	goto label1;

label0: ;
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	MsgActor(1024, 15, 0, 0);
	goto label1;

label2: ;
	MsgActor(1024, 16, 0, 0);

label1: ;
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
	MsgPlaceSign(22, 1);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(23, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(24, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();	
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x1AD, 0x8020);
	if (0x8020 == 0)
	{
		MsgActor(1024, 26, 0, 0);
	}
	else
	{
		WorkSetConst(0x40E8, 1);
		MsgActor(1024, 28, 0, 0);
	}
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	Movement m[] = { //6
		Exclaimation, 1,
		SlowTurnLeft, 1,
	};
	ActorCmdWait();
	Movement m[] = { //255
		LookRight, 1,
	};
	ActorCmdWait();
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x1AD, 0x8020);
	if (0x8020 == 0)
	{
		MsgActorEx(1024, 27, 6, 0, 0);
		MsgWinCloseAll();
		Movement m[] = { //6
			LookDown, 1,
		};
		ActorCmdWait();
		Movement m[] = { //255
			WalkDown, 1,
		};
		ActorCmdWait();
	}
	else
	{
		WorkSetConst(0x40E8, 1);
		MsgActorEx(1024, 29, 6, 0, 0);
		MsgWinCloseAll();
	}





	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 1, 0, 0);
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
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	WordSetPokeSpecies(0, 495);
	WordSetPokeTypeName(1, 9);
	goto label5;

label4: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	WordSetPokeSpecies(0, 498);
	WordSetPokeTypeName(1, 10);
	goto label5;

label6: ;
	WordSetPokeSpecies(0, 501);
	WordSetPokeTypeName(1, 11);

label5: ;
	StackPush(0x4083);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label7;
	MsgActor(1024, 2, 0, 0);
	MsgWinCloseAll();
	goto label8;

label7: ;
	MsgActor(1024, 3, 0, 0);
	MsgWinCloseAll();

label8: ;
	WorkSetConst(0x8024, 0);

	Movement m[] = { //8
		TurnUp, 1,
	};

	ActorCmdWait();
	BMCreateHandleByGPos(0x8024, 1, 788, 585);
	BMHndAudioVisualAnmPlay(0x8024, 0);
	BMHndAnmWait(0x8024);

	Movement m[] = { //8
		WalkUp, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	BMHndAudioVisualAnmPlay(0x8024, 1);
	BMHndAnmWait(0x8024);
	BMReleaseHandle(0x8024);
	FlagSet(539);
	ActorDelete(8);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();

	Movement m[] = { //9
		TurnUp, 1,
		Exclaimation, 1,
		WalkRight, 1,
		WalkUp, 2,
	};

	ActorCmdWait();
	MsgActorEx(1024, 0, 9, 0, 0);
	MsgActorClose();

	Movement m[] = { //9
		WalkDown, 6,
		WalkRight, 2,
		LookRight, 1,
	};


	Movement m[] = { //255
		Wait8, 1,
		WalkDown, 7,
		WalkRight, 1,
		LookRight, 1,
	};

	ActorCmdWait();
	FlagSet(540);
	FlagReset(541);
	WorkSetConst(0x4088, 2);
	WorkSetConst(0x4087, 1);
	MapChangeWarp(9, 7, 10, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 17, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
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
	WorkSet(0x8002, 187);
	WorkSet(0x8003, 18);
	WorkSet(0x8004, 19);
	WorkSet(0x8005, 19);
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

void Sequence17()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(25, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence18()
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
	WorkSet(0x8002, 189);
	WorkSet(0x8003, 20);
	WorkSet(0x8004, 21);
	WorkSet(0x8005, 21);
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

void Sequence19()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8022, 0x8023);
	StackPush(0x8022);
	StackPushConst(750);
	StackCmp(1);
	if (255) goto label9;

	Movement m[] = { //6
		Exclaimation, 1,
		SlowWalkLeft, 1,
		SlowTurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		LookRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 7, 6, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		SlowWalkRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		WalkDown, 1,
	};

	ActorCmdWait();
	goto label10;

label9: ;

	Movement m[] = { //6
		Exclaimation, 1,
		SlowTurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		LookRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 7, 6, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		WalkDown, 1,
	};

	ActorCmdWait();

label10: ;
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
