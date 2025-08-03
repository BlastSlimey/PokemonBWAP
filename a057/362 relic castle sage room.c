#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	PlayerGetDir(0x8020);
	SEPlay(1351);
	MsgActor(1024, 0, 0, 0);
	MsgWinCloseAll();
	VMSleep(8);
	WorkCmpConst(0x8020, 2);
	if (1) goto label0;
	goto label1;

label0: ;

	Movement m[] = { //0
		SlowWalkLeft, 2,
	};

	goto label2;

label1: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //0
		SlowWalkLeft, 2,
	};

	VMSleep(8);

	Movement m[] = { //255
		SlowTurnLeft, 1,
	};

	goto label2;

label4: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label5;
	goto label2;

label5: ;

	Movement m[] = { //0
		SlowWalkRight, 2,
	};

	goto label2;

label2: ;
	ActorCmdWait();
	MsgActor(1024, 1, 0, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 2);
	if (1) goto label6;
	goto label7;

label6: ;

	Movement m[] = { //0
		Wait8, 1,
		SlowTurnRight, 1,
		Wait8, 1,
		SlowWalkRight, 2,
	};

	goto label8;

label7: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label9;
	goto label10;

label9: ;

	Movement m[] = { //0
		Wait8, 1,
		SlowTurnRight, 1,
		Wait8, 1,
		SlowWalkDown, 1,
		SlowWalkRight, 1,
	};

	goto label8;

label10: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label11;
	goto label8;

label11: ;

	Movement m[] = { //0
		Wait8, 1,
		SlowTurnLeft, 1,
		Wait8, 1,
		SlowWalkLeft, 2,
	};

	goto label8;

label8: ;
	ActorCmdWait();
	MsgActor(1024, 2, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x19D);
	WorkCmpConst(0x8020, 2);
	if (1) goto label12;
	goto label13;

label12: ;

	Movement m[] = { //0
		LockDirection, 1,
		SlowWalkLeft, 1,
		UnlockDirection, 1,
		Wait8, 2,
		SlowTurnLeft, 1,
	};

	goto label14;

label13: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label15;
	goto label16;

label15: ;

	Movement m[] = { //0
		LockDirection, 1,
		SlowWalkLeft, 1,
		UnlockDirection, 1,
		Wait8, 2,
		SlowTurnLeft, 1,
	};

	goto label14;

label16: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label17;
	goto label14;

label17: ;

	Movement m[] = { //0
		LockDirection, 1,
		SlowWalkRight, 1,
		UnlockDirection, 1,
		Wait8, 2,
		SlowTurnRight, 1,
	};

	goto label14;

label14: ;
	ActorCmdWait();
	MsgActor(1024, 3, 0, 0);
	MsgWinCloseAll();
	BGMPlay(1100);
	VMSleep(16);
	SEPlay(1369);
	ActorNew(0, 7, 3, 251, 106, 0);
	WorkCmpConst(0x8020, 2);
	if (1) goto label18;
	goto label19;

label18: ;

	Movement m[] = { //251
		FastWalkRight, 5,
		FastWalkUp, 4,
	};

	VMSleep(8);

	Movement m[] = { //0
		SlowTurnDown, 1,
	};

	goto label20;

label19: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label21;
	goto label22;

label21: ;

	Movement m[] = { //251
		FastWalkRight, 4,
		FastWalkUp, 3,
	};

	VMSleep(8);

	Movement m[] = { //0
		SlowTurnDown, 1,
	};


	Movement m[] = { //255
		TurnDown, 1,
	};

	goto label20;

label22: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label23;
	goto label20;

label23: ;

	Movement m[] = { //251
		FastWalkRight, 7,
		FastWalkUp, 4,
	};

	VMSleep(8);

	Movement m[] = { //0
		SlowTurnDown, 1,
	};

	goto label20;

label20: ;
	ActorCmdWait();
	SEWait();
	WorkCmpConst(0x8020, 0);
	if (1) goto label24;
	goto label25;

label24: ;

	Movement m[] = { //255
		TurnLeft, 1,
	};

	goto label25;

label25: ;
	ActorCmdWait();
	WorkCmpConst(0x8020, 2);
	if (1) goto label26;
	goto label27;

label26: ;
	MsgActorEx(1024, 4, 251, 4, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 5, 0, 3, 0);
	goto label28;

label27: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label29;
	goto label30;

label29: ;
	MsgActorEx(1024, 4, 251, 4, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 5, 0, 3, 0);
	goto label28;

label30: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label31;
	goto label28;

label31: ;
	MsgActorEx(1024, 4, 251, 6, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 5, 0, 5, 0);
	goto label28;

label28: ;
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 2);
	if (1) goto label32;
	goto label33;

label32: ;

	Movement m[] = { //251
		WalkRight, 2,
		TurnUp, 1,
	};

	goto label34;

label33: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label35;
	goto label36;

label35: ;

	Movement m[] = { //251
		WalkRight, 2,
		TurnUp, 1,
	};

	goto label34;

label36: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label37;
	goto label34;

label37: ;

	Movement m[] = { //251
		WalkLeft, 2,
		TurnUp, 1,
	};

	goto label34;

label34: ;
	VMSleep(16);

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	StackPush(0x40CC);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label38;
	WordSetPlayerName(0);
	WorkCmpConst(0x8020, 2);
	if (1) goto label39;
	goto label40;

label39: ;
	MsgActorEx(1024, 7, 251, 6, 0);
	goto label41;

label40: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label42;
	goto label43;

label42: ;
	MsgActorEx(1024, 7, 251, 4, 0);
	goto label41;

label43: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label44;
	goto label41;

label44: ;
	MsgActorEx(1024, 7, 251, 4, 0);
	goto label41;

label41: ;
	MsgWinCloseAll();
	goto label45;

label38: ;
	WorkSetConst(0x8008, 5);
	WorkSub(0x8008, 0x40CC);
	WordSetNumber(0, 0x8008, 1);
	WorkCmpConst(0x8020, 2);
	if (1) goto label46;
	goto label47;

label46: ;
	MsgActorEx(1024, 6, 251, 6, 0);
	goto label48;

label47: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label49;
	goto label50;

label49: ;
	MsgActorEx(1024, 6, 251, 4, 0);
	goto label48;

label50: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label51;
	goto label48;

label51: ;
	MsgActorEx(1024, 6, 251, 4, 0);
	goto label48;

label48: ;
	MsgWinCloseAll();

label45: ;
	BGMChangeMap();
	VMSleep(8);
	WorkCmpConst(0x8020, 2);
	if (1) goto label52;
	goto label53;

label52: ;

	Movement m[] = { //251
		SlowWalkLeft, 2,
		SlowTurnUp, 1,
	};

	goto label54;

label53: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label55;
	goto label56;

label55: ;

	Movement m[] = { //251
		SlowWalkLeft, 2,
		SlowTurnUp, 1,
	};

	goto label54;

label56: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label57;
	goto label54;

label57: ;

	Movement m[] = { //251
		SlowWalkRight, 2,
		SlowTurnUp, 1,
	};

	goto label54;

label54: ;
	VMSleep(16);
	WorkCmpConst(0x8020, 2);
	if (1) goto label58;
	goto label59;

label58: ;

	Movement m[] = { //255
		TurnLeft, 1,
	};

	goto label60;

label59: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label61;
	goto label62;

label61: ;

	Movement m[] = { //255
		TurnLeft, 1,
	};

	goto label60;

label62: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label63;
	goto label60;

label63: ;

	Movement m[] = { //255
		TurnRight, 1,
	};

	goto label60;

label60: ;
	VMSleep(32);
	FadeEx(3, 0, 16, 4);
	ActorCmdWait();
	FadeExWait();
	ActorDelete(251);
	ActorDelete(0);
	FadeEx(3, 16, 0, 4);
	FadeExWait();
	FlagSet(809);
	WorkAdd(0x40CC, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
