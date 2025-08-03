#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8020, 0);
	PlayerGetDir(0x8020);
	TrainerFlagGet(600, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	StackPush(0x400A);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActor(1024, 1, 0, 0);
	WorkSetConst(0x400A, 1);
	goto label2;

label1: ;
	MsgActor(1024, 4, 0, 0);

label2: ;
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	MsgActor(1024, 2, 0, 0);
	MsgWinCloseAll();
	Routine0();
	MsgActor(1024, 5, 0, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 2);
	if (1) goto label4;
	goto label5;

label4: ;

	Movement m[] = { //0
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
	};

	ActorCmdWait();
	goto label6;

label5: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label7;
	goto label8;

label7: ;

	Movement m[] = { //0
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
	};

	ActorCmdWait();
	goto label6;

label8: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label9;
	goto label6;

label9: ;

	Movement m[] = { //0
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label6;

label6: ;
	MsgActor(1024, 6, 0, 0);
	MsgActor(1024, 7, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	MsgActor(1024, 8, 0, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 2);
	if (1) goto label11;
	goto label12;

label11: ;

	Movement m[] = { //0
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
	};

	ActorCmdWait();
	goto label13;

label12: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label14;
	goto label15;

label14: ;

	Movement m[] = { //0
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
	};

	ActorCmdWait();
	goto label13;

label15: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label16;
	goto label13;

label16: ;

	Movement m[] = { //0
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label13;

label13: ;
	WorkSetConst(0x40C4, 2);
	goto label17;

label10: ;
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x40C4, 1);

label17: ;
	goto label18;

label3: ;
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label18: ;
	goto label19;

label0: ;
	StackPush(0x40C4);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label20;
	MsgActor(1024, 7, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label21;
	MsgActor(1024, 8, 0, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 2);
	if (1) goto label22;
	goto label23;

label22: ;

	Movement m[] = { //0
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
	};

	ActorCmdWait();
	goto label24;

label23: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label25;
	goto label26;

label25: ;

	Movement m[] = { //0
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
	};

	ActorCmdWait();
	goto label24;

label26: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label27;
	goto label24;

label27: ;

	Movement m[] = { //0
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label24;

label24: ;
	WorkSetConst(0x40C4, 2);
	goto label28;

label21: ;
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label28: ;
	goto label19;

label20: ;
	StackPush(0x40C4);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label29;
	MsgActor(1024, 9, 0, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 2);
	if (1) goto label30;
	goto label31;

label30: ;

	Movement m[] = { //0
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		LookRight, 1,
	};

	ActorCmdWait();
	goto label32;

label31: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label33;
	goto label34;

label33: ;

	Movement m[] = { //0
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
	};

	ActorCmdWait();
	goto label32;

label34: ;
	WorkCmpConst(0x8020, 0);
	if (1) goto label35;
	goto label32;

label35: ;

	Movement m[] = { //0
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label32;

label32: ;
	goto label19;

label29: ;
	StackPush(0x40C4);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label36;
	MsgActor(1024, 10, 0, 0);
	MsgWinCloseAll();
	StackPushFlag(702);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label37;

	Movement m[] = { //0
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};


	Movement m[] = { //1
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label38;

label37: ;

	Movement m[] = { //0
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};


	Movement m[] = { //2
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();

label38: ;
	goto label19;

label36: ;
	StackPush(0x40C4);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label39;
	MsgActor(1024, 14, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x196);
	MsgActor(1024, 15, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};


	Movement m[] = { //1
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};


	Movement m[] = { //2
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x40C4, 5);
	goto label19;

label39: ;
	MsgActor(1024, 16, 0, 0);
	MsgWinCloseAll();
	WorkSetConst(0x8021, 0);
	Random(0x8021, 3);
	WorkCmpConst(0x8021, 0);
	if (1) goto label40;
	goto label41;

label40: ;

	Movement m[] = { //0
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};


	Movement m[] = { //1
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		JumpRight2, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		JumpLeft2, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
	};


	Movement m[] = { //2
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		JumpLeft2, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		JumpRight2, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label19;

label41: ;
	WorkCmpConst(0x8021, 1);
	if (1) goto label42;
	goto label43;

label42: ;

	Movement m[] = { //0
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		JumpLeft1, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		TurnDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		JumpRight1, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		SlowTurnDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
	};


	Movement m[] = { //1
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		JumpRight1, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		JumpRight1, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		TurnDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		JumpLeft2, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
	};


	Movement m[] = { //2
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		TurnDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		JumpLeft1, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		JumpLeft1, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		JumpRight2, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label19;

label43: ;
	WorkCmpConst(0x8021, 2);
	if (1) goto label44;
	goto label19;

label44: ;

	Movement m[] = { //0
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		SlowTurnDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		SlowTurnRight, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		SlowTurnLeft, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		SlowTurnDown, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
	};


	Movement m[] = { //1
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		JumpDown2, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		JumpRight2, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		JumpLeft2, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		JumpUp2, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
	};


	Movement m[] = { //2
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		JumpDown2, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		JumpLeft2, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		JumpRight2, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
		JumpUp2, 1,
		LookRight, 1,
		LookUp, 1,
		LookLeft, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	goto label19;

label19: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
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

void Sequence2()
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

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(18, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(19, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
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

void Sequence6()
{
	ActorPauseAll();

	Movement m[] = { //4
		TurnDown, 1,
		Wait16, 1,
		TurnUp, 1,
		Wait16, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 0, 4, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //4
		FastWalkDown, 10,
		Vanish, 1,
	};

	ActorCmdWait();
	ActorDelete(4);
	WorkSetConst(0x40AD, 2);
	FlagSet(641);
	WorkSetConst(0x40AF, 2);
	FlagReset(796);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	MsgActor(1024, 20, 0, 0);
	MsgActor(1024, 25, 0, 0);
	Movement m[] = { //5
		Wait16, 1,
	};
	WorkSetConst(0x8020, 0x148);
	WorkSetConst(0x8022, 1);
label_loop_92: ;
	if (0x8020 <= 0x1A3)
	{
		ItemGetCount(0x8020, 0x8021);
		if (0x8021 == 0)
		{
			goto label_tm_missing;
		}
		WorkAdd(0x8020, 0x8022);
		goto label_loop_92;
	}
	ItemGetCount(0x26A, 0x8021);
	if (0x8021 == 0)
	{
		goto label_tm_missing;
	}
	ItemGetCount(0x26B, 0x8021);
	if (0x8021 == 0)
	{
		goto label_tm_missing;
	}
	ItemGetCount(0x26C, 0x8021);
	if (0x8021 == 0)
	{
		goto label_tm_missing;
	}
	ActorCmdWait();
	MsgActorClose();
	MsgActor(1024, 22, 0, 0);
	MsgActor(1024, 25, 0, 0);
	Movement m[] = { //5
		Wait16, 1,
	};
	WorkSetConst(0x8020, 0x1A4);
	WorkSetConst(0x8022, 1);
label_loop_hm: ;
	if (0x8020 <= 0x1A9)
	{
		ItemGetCount(0x8020, 0x8021);
		if (0x8021 == 0)
		{
			goto label_hm_missing;
		}
		WorkAdd(0x8020, 0x8022);
		goto label_loop_hm;
	}
	ActorCmdWait();
	MsgActorClose();
	FlagSet(0x191);
	MsgActor(1024, 24, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label_end;
label_tm_missing: ;
	ActorCmdWait();
	MsgActorClose();
	WordSetItemName(0, 0x8020);
	MsgActor(1024, 21, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label_end;
label_hm_missing: ;
	ActorCmdWait();
	MsgActorClose();
	WordSetItemName(0, 0x8020);
	MsgActor(1024, 23, 0, 0);
	InputWaitLast();
	MsgActorClose();
label_end: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	CallTrainerBattle(600, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label45;
	CallTrainerBattleEnd();
	TrainerFlagSet(600);
	goto label46;

label45: ;
	CallTrainerLose();

label46: ;
	VMReturn();
}
