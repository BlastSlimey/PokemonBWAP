#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x374000, 0, 0xE8000, 30);
	EVCameraWait();

	Movement m[] = { //3
		LookLeft, 1,
		LockDirection, 1,
		SlowWalkRight, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 0, 3, 5, 0);
	MsgActorClose();
	MsgActorEx(1024, 1, 2, 3, 0);
	MsgActorClose();
	SEPlay(1369);
	ActorNew(61, 14, 2, 251, 98, 0);
	SEWait();

	Movement m[] = { //251
		WalkLeft, 3,
		WalkDown, 1,
		WalkLeft, 1,
		TurnUp, 0,
	};

	ActorCmdWait();

	Movement m[] = { //3
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 251, 6, 0);
	MsgActorClose();

	Movement m[] = { //251
		TurnLeft, 0,
	};


	Movement m[] = { //3
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 251, 6, 0);
	MsgActorClose();

	Movement m[] = { //3
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 3, 5, 0);
	MsgActorClose();
	FadeEx(3, 0, 16, 4);
	FadeExWait();
	VMSleep(16);
	ActorDelete(3);
	ActorDelete(251);
	FadeEx(3, 16, 0, 4);
	FadeExWait();
	MsgActorEx(1024, 5, 2, 5, 0);
	MsgActorClose();

	Movement m[] = { //2
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 2, 5, 0);
	MsgActorClose();
	EVCameraReturn(30);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	WorkSetConst(0x40BB, 1);
	FlagSet(677);
	WorkSetConst(0x4097, 1);
	FlagSet(2429);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 7, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 8, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label1;

label0: ;
	StackPushFlag(2400);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(2762);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label2;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 9, 9, 0, 0);
	MsgActorClose();
	Random(0x400F, 7);
	StackPush(0x400F);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label4;

label3: ;
	StackPush(0x400F);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label5;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label4;

label5: ;
	StackPush(0x400F);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label6;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label4;

label6: ;
	StackPush(0x400F);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label7;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label4;

label7: ;
	StackPush(0x400F);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label8;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label4;

label8: ;
	StackPush(0x400F);
	StackPushConst(5);
	StackCmp(1);
	if (255) goto label9;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label4;

label9: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);

label4: ;
	FlagSet(2762);
	MsgActorEx(1024, 10, 9, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label1;

label2: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 10, 0, 0);
	InputWaitLast();
	MsgActorClose();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	FlagSet(840);
	WorkSetConst(0x8020, 0);
	RTCGetSeason(0x8020);
	StackPush(0x8020);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label10;
	FlagReset(840);

label10: ;
	WorkSetConst(0x8020, 0);
	VMHalt();
}
