#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	CMD_E6(3, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	WorkSetConst(0x8021, 0);
	CMD_E8(3, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label1;
	WorkSetConst(0x8021, 12);
	goto label2;

label1: ;
	WorkSetConst(0x8021, 10);

label2: ;
	MsgActor(1024, 0x8021, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label3;

label0: ;
	Routine0();

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PlayerGetDir(0x8020);
	StackPushFlag(308);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label4;
	MsgActor(1024, 6, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label5;

label4: ;
	WordSetPlayerName(0);
	Routine1();
	Routine2();
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	MsgActor(1024, 1, 0, 0);
	MsgActorClose();
	Routine3();
	MsgActor(1024, 2, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(308);
	MsgActor(1024, 3, 0, 0);
	MsgActorClose();
	Routine3();
	MsgActor(1024, 4, 0, 0);
	MsgActorClose();
	Routine1();
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label5;

label6: ;
	MsgActor(1024, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label5: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	MsgActor(1024, 7, 0, 0);
	MsgActorClose();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CMD_1ed(5, 0x8023, 0x8024, 0x8010);
	FieldOpen();
	CMD_1ad();
	CMD_1b1();
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(5);
	if (255) goto label7;
	WorkSetConst(0x8022, 0);
	goto label8;

label7: ;
	CMD_20c(1, 0x8023, 0x8024, 0x8022);

label8: ;
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(5);
	if (255) goto label9;
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgActorClose();
	VMReturn();

label9: ;
	MsgActor(1024, 8, 0, 0);
	MsgActorClose();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CMD_1ed(5, 0x8023, 0x8024, 0x8010);
	FieldOpen();
	CMD_1ad();
	CMD_1b1();
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(5);
	if (255) goto label10;
	WorkSetConst(0x8022, 0);
	goto label11;

label10: ;
	CMD_20c(2, 0x8023, 0x8024, 0x8022);

label11: ;
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(5);
	if (255) goto label12;
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgActorClose();
	VMReturn();

label12: ;
	ActivateRelocator(3);
	MsgActor(1024, 9, 0, 0);
	InputWaitLast();
	MsgActorClose();
	VMReturn();
}

void Routine1()
{
	WorkCmpConst(0x8020, 0);
	if (1) goto label13;
	goto label14;

label13: ;

	Movement m[] = { //1
		Wait2, 1,
		LookLeft, 1,
		Wait1, 1,
		LookUp, 1,
		Wait1, 1,
		LookRight, 1,
		Wait1, 1,
		LookDown, 1,
		Wait1, 1,
	};

	goto label15;

label14: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label16;
	goto label17;

label16: ;

	Movement m[] = { //1
		Wait2, 1,
		LookUp, 1,
		Wait1, 1,
		LookRight, 1,
		Wait1, 1,
		LookDown, 1,
		Wait1, 1,
		LookLeft, 1,
		Wait1, 1,
	};

	goto label15;

label17: ;
	WorkCmpConst(0x8020, 1);
	if (1) goto label18;
	goto label19;

label18: ;

	Movement m[] = { //1
		Wait2, 1,
		LookRight, 1,
		Wait1, 1,
		LookDown, 1,
		Wait1, 1,
		LookLeft, 1,
		Wait1, 1,
		LookUp, 1,
		Wait1, 1,
	};

	goto label15;

label19: ;
	WorkCmpConst(0x8020, 2);
	if (1) goto label20;
	goto label15;

label20: ;

	Movement m[] = { //1
		Wait2, 1,
		LookDown, 1,
		Wait1, 1,
		LookLeft, 1,
		Wait1, 1,
		LookUp, 1,
		Wait1, 1,
		LookRight, 1,
		Wait1, 1,
	};

	goto label15;

label15: ;
	ActorCmdWait();
	VMReturn();
}

void Routine2()
{
	ItemCheckCount(533, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label21;
	CMD_229(0, 0x8010);
	goto label22;

label21: ;
	WorkSetConst(0x8010, 0);

label22: ;
	VMReturn();
}

void Routine3()
{
	WorkCmpConst(0x8020, 0);
	if (1) goto label23;
	goto label24;

label23: ;

	Movement m[] = { //1
		TurnDown, 2,
	};

	goto label25;

label24: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label26;
	goto label27;

label26: ;

	Movement m[] = { //1
		TurnLeft, 2,
	};

	goto label25;

label27: ;
	WorkCmpConst(0x8020, 1);
	if (1) goto label28;
	goto label29;

label28: ;

	Movement m[] = { //1
		TurnUp, 2,
	};

	goto label25;

label29: ;
	WorkCmpConst(0x8020, 2);
	if (1) goto label30;
	goto label25;

label30: ;

	Movement m[] = { //1
		TurnRight, 2,
	};

	goto label25;

label25: ;
	ActorCmdWait();
	VMReturn();
}
