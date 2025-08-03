#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	PlayerGetDir(0x8020);
	SEPlay(1351);
	MsgActorEx(1024, 0, 9, 0, 0);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label0;
	MsgWinCloseAll();
	ActorSetEyeToEye();

label0: ;
	MsgActorEx(1024, 1, 9, 0, 0);
	MsgActorEx(1024, 2, 9, 0, 0);
	MsgActorEx(1024, 3, 9, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x186);
	MsgActorEx(1024, 4, 9, 0, 0);
	MsgWinCloseAll();
	BGMPlay(1100);
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label1;
	ActorNew(617, 747, 1, 251, 106, 0);
	goto label2;

label1: ;
	ActorNew(616, 747, 1, 251, 106, 0);

label2: ;
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label3;

	Movement m[] = { //251
		FastWalkDown, 11,
		TurnLeft, 1,
	};

	goto label4;

label3: ;

	Movement m[] = { //251
		FastWalkDown, 10,
	};


label4: ;
	ActorCmdWait();
	MsgActorEx(1024, 5, 251, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label5;

	Movement m[] = { //9
		TurnRight, 1,
	};

	goto label6;

label5: ;

	Movement m[] = { //9
		TurnUp, 1,
	};


label6: ;
	ActorCmdWait();
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label7;
	MsgActorEx(1024, 6, 9, 3, 0);
	goto label8;

label7: ;
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	MsgActorEx(1024, 6, 9, 4, 0);
	goto label8;

label9: ;
	MsgActorEx(1024, 6, 9, 0, 0);

label8: ;
	MsgWinCloseAll();
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;

	Movement m[] = { //251
		WalkUp, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};

	goto label11;

label10: ;
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label12;

	Movement m[] = { //251
		WalkDown, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};

	goto label11;

label12: ;
	StackPush(0x8020);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label13;

	Movement m[] = { //251
		WalkRight, 1,
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnUp, 1,
	};

	goto label11;

label13: ;

	Movement m[] = { //251
		WalkLeft, 1,
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnUp, 1,
	};


label11: ;
	ActorCmdWait();
	StackPush(0x40CC);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label14;
	WordSetPlayerName(0);
	MsgActorEx(1024, 8, 251, 0, 0);
	goto label15;

label14: ;
	WorkSetConst(0x8008, 5);
	WorkSub(0x8008, 0x40CC);
	WordSetNumber(0, 0x8008, 1);
	MsgActorEx(1024, 7, 251, 0, 0);

label15: ;
	MsgWinCloseAll();
	BGMChangeMap();
	FadeEx(3, 0, 16, 4);
	FadeExWait();
	VMSleep(16);
	ActorDelete(251);
	ActorDelete(9);
	FadeEx(3, 16, 0, 4);
	FadeExWait();
	FlagSet(708);
	WorkAdd(0x40CC, 1);
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
