#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	PlayerGetDir(0x8020);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(169);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	StackPush(0x8020);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label1;
	MsgActorEx(1024, 0, 1, 3, 0);
	goto label2;

label1: ;
	MsgActorEx(1024, 0, 1, 5, 0);

label2: ;
	MsgWinCloseAll();
	StackPush(0x8020);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label3;

	Movement m[] = { //0
		TurnRight, 1,
	};

	ActorCmdWait();

label3: ;
	MsgActorEx(1024, 1, 0, 3, 0);
	MsgWinCloseAll();
	StackPush(0x8020);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label4;
	MsgActorEx(1024, 2, 1, 3, 0);
	goto label5;

label4: ;
	MsgActorEx(1024, 2, 1, 5, 0);

label5: ;
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(169);
	MsgActorEx(1024, 3, 0, 3, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label6;

label0: ;
	StackPush(0x8020);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label7;
	MsgActorEx(1024, 4, 1, 3, 0);
	goto label8;

label7: ;
	MsgActorEx(1024, 4, 1, 5, 0);

label8: ;
	InputWaitLast();
	MsgWinCloseAll();

label6: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	WorkSetConst(0x8021, 0);
	PlayerGetDir(0x8021);
	StackPushFlag(169);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	SEPlay(1351);
	StackPush(0x8021);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label10;

	Movement m[] = { //1
		TurnLeft, 1,
	};

	ActorCmdWait();

label10: ;
	MsgActorEx(1024, 0, 1, 5, 0);
	MsgWinCloseAll();
	StackPush(0x8021);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label11;

	Movement m[] = { //0
		TurnLeft, 1,
	};

	ActorCmdWait();

label11: ;
	StackPush(0x8021);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label12;
	MsgActorEx(1024, 1, 0, 5, 0);
	goto label13;

label12: ;
	MsgActorEx(1024, 1, 0, 3, 0);

label13: ;
	MsgWinCloseAll();
	MsgActorEx(1024, 2, 1, 5, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(169);
	StackPush(0x8021);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label14;
	MsgActorEx(1024, 3, 0, 5, 0);
	goto label15;

label14: ;
	MsgActorEx(1024, 3, 0, 3, 0);

label15: ;
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label16;

label9: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x8021);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label17;
	MsgActorEx(1024, 5, 0, 5, 0);
	goto label18;

label17: ;
	MsgActorEx(1024, 5, 0, 3, 0);

label18: ;
	InputWaitLast();
	MsgWinCloseAll();

label16: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
