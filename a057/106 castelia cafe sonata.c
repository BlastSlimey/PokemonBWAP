#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PokePartyFindEx(648, 1, 0x8020, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	MsgActor(1024, 1, 0, 0);
	MsgActorClose();
	BGMPlay(1001);
	Routine0();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x58000, 0, 0x68000, 30);
	EVCameraWait();
	BGMPlay(1096);

	Movement m[] = { //32785
		TurnDown, 140,
	};

	VMSleep(290);
	Routine1();
	VMSleep(30);

	Movement m[] = { //251
		0xB3, 4,
		0xB1, 13,
		0xB2, 1,
	};

	VMSleep(175);
	EVCameraMoveTo(9688, 0, 0xED000, 0x58000, 0x25000, 0x51000, 120);
	CMD_225(251, 8, 120);
	VMSleep(170);
	CMD_226(251);
	ActorCmdWait();
	BGMWait();
	BGMChangeMap();
	PlayFieldEffect(20);

	Movement m[] = { //251
		LookDown, 1,
	};

	ActorCmdWait();
	WordSetPartyPokeName(0, 0x8020);
	MsgSystem(5, 2);
	MsgSystemClose();
	EVCameraWait();
	EVCameraMoveToDefault(30);
	CMD_225(251, 0, 24);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	Routine2();
	goto label1;

label0: ;
	Routine3();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
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
	WorkSet(0x8002, 164);
	WorkSet(0x8003, 8);
	WorkSet(0x8004, 9);
	WorkSet(0x8005, 10);
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

void Sequence2()
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

void Sequence3()
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

void Routine0()
{
	WorkSetConst(0x8022, 0);
	PlayerGetDir(0x8022);
	WorkCmpConst(0x8022, 0);
	if (1) goto label2;
	goto label3;

label2: ;

	Movement m[] = { //255
		WalkDown, 4,
		TurnUp, 1,
	};

	goto label4;

label3: ;
	WorkCmpConst(0x8022, 1);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkDown, 5,
		WalkRight, 1,
		WalkDown, 1,
		TurnUp, 1,
	};

	goto label4;

label6: ;
	WorkCmpConst(0x8022, 2);
	if (1) goto label7;
	goto label8;

label7: ;

	Movement m[] = { //255
		WalkDown, 4,
		WalkLeft, 1,
		WalkDown, 1,
		TurnUp, 1,
	};

	goto label4;

label8: ;
	WorkCmpConst(0x8022, 3);
	if (1) goto label9;
	goto label4;

label9: ;

	Movement m[] = { //255
		WalkDown, 4,
		WalkRight, 1,
		WalkDown, 1,
		TurnUp, 1,
	};

	goto label4;

label4: ;
	ActorCmdWait();
	WorkSetConst(0x8022, 0);
	VMReturn();
}

void Routine1()
{
	CMD_221(0, 5, 0, 7, 3, 8);
	CMD_222(0, 5, 0, 7);
	CMD_224(0);
	FadeEx(12, 0, 16, 2);
	FadeExWait();
	ActorNew(5, 7, 1, 251, 123, 0);
	FadeEx(12, 16, 0, 2);
	FadeExWait();
	CMD_223(0);
	VMReturn();
}

void Routine2()
{
	WorkGet(0x8000, 0x8020);
	WorkSetConst(0x8001, 547);
	RTCallGlobal(2284);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	FlagSet(281);

label10: ;
	Routine4();
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;

	Movement m[] = { //255
		WalkUp, 3,
	};

	ActorCmdWait();
	MsgActor(1024, 2, 0, 0);
	MsgActorClose();
	VMSleep(8);
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();

label11: ;
	VMReturn();
}

void Routine3()
{
	WorkSetConst(0x8021, 0);
	StackPushFlag(281);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	WorkSetConst(0x8021, 4);
	goto label13;

label12: ;
	WorkSetConst(0x8021, 0);

label13: ;
	MsgActor(1024, 0x8021, 0, 0);
	InputWaitLast();
	MsgActorClose();
	VMReturn();
}

void Routine4()
{
	CMD_222(1, 5, 3, 7);
	CMD_224(1);
	FadeEx(12, 0, 16, 2);
	FadeExWait();
	ActorDelete(251);
	FadeEx(12, 16, 0, 2);
	FadeExWait();
	CMD_223(1);
	CMD_221(1, 5, 3, 7, 3, 8);
	VMReturn();
}
