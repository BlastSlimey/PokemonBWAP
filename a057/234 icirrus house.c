#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 20, 0, 0);
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
	MsgActor(1024, 19, 0, 0);
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
	MsgActor(1024, 21, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	StackPushFlag(2741);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	WorkSetConst(0x4000, 1);
	goto label1;

label0: ;
	WorkSetConst(0x4000, 0);

label1: ;
	FlagSet(2741);
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x4000, 0);
	WorkSetConst(0x8028, 0);
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	WorkSetConst(0x8028, 0);
	goto label3;

label2: ;
	WorkSetConst(0x8028, 1);

label3: ;
	CMD_20d(0x8028, 0x8025, 0x8026, 0x8027);
	WorkSetConst(0x8028, 0);
	WordSetPlayerName(0);

	Movement m[] = { //0
		Exclaimation, 1,
	};

	ActorCmdWait();
	BGMPlay(1086);

	Movement m[] = { //0
		FastTurnDown, 3,
		FastWalkDown, 3,
	};

	ActorCmdWait();
	MsgActorEx(1024, 0, 0, 0, 0);
	MsgActorClose();

	Movement m[] = { //0
		WalkUp, 4,
		LookDown, 1,
	};


	Movement m[] = { //255
		WalkUp, 4,
		LookLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //1
		TurnRight, 1,
	};


	Movement m[] = { //2
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //0
		WalkUp, 1,
		LookDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 0, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 2, 1, 0, 0);
	MsgActorClose();

	Movement m[] = { //2
		FastTurnLeft, 4,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 2, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 4, 1, 0, 0);
	MEPlay(1328);
	MEWait();
	MsgActorEx(1024, 0x8025, 1, 0, 0);
	MsgActorClose();

	Movement m[] = { //0
		LookLeft, 1,
		Wait4, 1,
		LookRight, 1,
		Wait4, 1,
		LookLeft, 1,
		Wait4, 1,
		LookRight, 1,
		Wait4, 1,
		FastWalkLeft, 1,
		FastWalkRight, 2,
		FastWalkLeft, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 5, 0, 0, 0);
	MsgActorClose();

	Movement m[] = { //2
		HopLeft, 1,
		Wait2, 1,
		HopLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 2, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 7, 1, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 8, 0, 0, 0);
	MsgActorEx(1024, 0x8026, 0, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 9, 1, 0, 0);
	MsgActorEx(1024, 0x8025, 1, 0, 0);
	MsgActorClose();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CMD_1ed(4, 0x8022, 0x8023, 0x8010);
	FieldOpen();
	CMD_1ad();
	CMD_1b1();
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label4;
	StackPush(0x8022);
	StackPush(0x8027);
	StackCmp(1);
	if (255) goto label5;
	WorkSetConst(0x8010, 1);
	goto label4;

label5: ;
	WorkSetConst(0x8010, 0);

label4: ;
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	SEPlay(1690);
	SEWait();
	MsgActorEx(1024, 10, 1, 0, 0);
	MsgActorClose();

	Movement m[] = { //0
		HopDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 0, 0, 0);
	MsgActorClose();

	Movement m[] = { //2
		HopLeft, 1,
		Wait2, 1,
		HopLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 12, 2, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 13, 1, 0, 0);
	MsgActorClose();
	WorkSetConst(0x8024, 0x80);
	goto label7;

label6: ;
	SEPlay(1691);
	SEWait();
	MsgActorEx(1024, 14, 1, 0, 0);
	MsgActorClose();

	Movement m[] = { //0
		LookLeft, 1,
		Wait4, 1,
		LookRight, 1,
		Wait4, 1,
		LookLeft, 1,
		Wait4, 1,
		LookRight, 1,
		Wait4, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 15, 0, 0, 0);
	MsgActorClose();

	Movement m[] = { //2
		HopLeft, 1,
		Wait2, 1,
		HopLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 16, 2, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 17, 1, 0, 0);
	MsgActorClose();
	WorkSetConst(0x8024, 0x80);

label7: ;
	SEPlay(1659);
	ActorNew(4, 5, 1, 251, 110, 0);
	SEWait();

	Movement m[] = { //255
		Wait8, 1,
		WalkLeft, 1,
	};

	ActorCmdWait();
	ActorDelete(251);
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x8024);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	if (0x8010 == 1)
	{
		FlagSet(0x1A6);
	}
	else
	{
		FlagSet(0x1A7);
	}
	MsgActorEx(1024, 18, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	BGMChangeMap();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	StackPush(0x4000);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	ActorGetGPos(0, 0x8020, 0x8021);
	ActorSetGPos(0, 0x8020, 0, 0x8021, 1);
	ActorGetGPos(2, 0x8020, 0x8021);
	ActorSetGPos(2, 0x8020, 0, 0x8021, 1);
	ActorGetGPos(1, 0x8020, 0x8021);
	ActorSetGPos(1, 0x8020, 0, 0x8021, 1);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);

label8: ;
	VMHalt();
}
