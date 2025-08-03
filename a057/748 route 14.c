#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8020, 0);
	MsgActorEx(1024, 0, 5, 3, 0);
	GameGetVersion(0x8010);
	StackPushFlag(307);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	MsgActorVersioned(1024, 2, 4, 5, 3, 0);
	goto label1;

label0: ;
	MsgActorVersioned(1024, 1, 3, 5, 3, 0);

label1: ;
	MsgActorEx(1024, 5, 5, 3, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1AD);
	MsgActorEx(1024, 6, 5, 3, 0);
	MsgWinCloseAll();
	ActorNew(697, 353, 3, 251, 106, 0);
	BGMPlay(1100);
	PlayerGetDir(0x8020);
	WorkCmpConst(0x8020, 2);
	if (1) goto label2;
	goto label3;

label2: ;

	Movement m[] = { //251
		FastWalkRight, 9,
		FastWalkUp, 1,
	};


	Movement m[] = { //5
		Wait4, 4,
		TurnDown, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		Wait4, 4,
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label4;

label3: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label5;
	goto label4;

label5: ;

	Movement m[] = { //251
		FastWalkRight, 11,
		FastWalkUp, 3,
		FastTurnLeft, 1,
	};


	Movement m[] = { //5
		Wait4, 8,
		TurnRight, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		Wait4, 8,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label4;

label4: ;
	WorkCmpConst(0x8020, 2);
	if (1) goto label6;
	goto label7;

label6: ;
	MsgActorEx(1024, 7, 251, 4, 0);
	goto label8;

label7: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label9;
	goto label8;

label9: ;
	MsgActorEx(1024, 7, 251, 6, 0);
	goto label8;

label8: ;
	MsgWinCloseAll();
	MsgActorEx(1024, 8, 5, 3, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 2);
	if (1) goto label10;
	goto label11;

label10: ;

	Movement m[] = { //251
		WalkRight, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label12;

label11: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label13;
	goto label12;

label13: ;

	Movement m[] = { //251
		WalkDown, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();
	goto label12;

label12: ;
	StackPush(0x40CC);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label14;
	WordSetPlayerName(0);
	MsgActorEx(1024, 10, 251, 6, 0);
	MsgWinCloseAll();
	goto label15;

label14: ;
	WorkSetConst(0x8008, 5);
	WorkSub(0x8008, 0x40CC);
	WordSetNumber(0, 0x8008, 1);
	MsgActorEx(1024, 9, 251, 6, 0);
	MsgWinCloseAll();

label15: ;
	BGMChangeMap();
	VMSleep(8);
	WorkCmpConst(0x8020, 2);
	if (1) goto label16;
	goto label17;

label16: ;

	Movement m[] = { //251
		SlowWalkLeft, 1,
		SlowWalkUp, 1,
	};

	goto label18;

label17: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label19;
	goto label18;

label19: ;

	Movement m[] = { //251
		SlowWalkUp, 1,
		SlowWalkLeft, 1,
	};

	goto label18;

label18: ;
	VMSleep(16);
	FadeEx(3, 0, 16, 4);
	ActorCmdWait();
	FadeExWait();
	ActorDelete(251);
	ActorDelete(5);
	FadeEx(3, 16, 0, 4);
	FadeExWait();
	FlagSet(705);
	WorkAdd(0x40CC, 1);
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
	MsgPlaceSign(12, 0);
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
