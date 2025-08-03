#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x38000, 0, 0x48000, 30);

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 0, 2, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		SlowWalkRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 1, 3, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 2, 0, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 3, 2, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		WalkLeft, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 2, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //1
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 5, 1, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 1, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		WalkRight, 1,
		WalkDown, 3,
		WalkRight, 2,
		WalkDown, 2,
		Vanish, 1,
	};

	VMSleep(12);

	Movement m[] = { //1
		WalkDown, 4,
		WalkRight, 2,
		WalkDown, 2,
	};

	ActorCmdWait();
	ActorDelete(2);
	ActorDelete(1);
	SEPlay(1369);
	SEWait();
	EVCameraReturn(30);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	BGMPlay(1085);

	Movement m[] = { //0
		WalkLeft, 2,
		WalkUp, 3,
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 7, 0, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 8, 0, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 9, 0, 6, 0);
	MsgActorClose();
	FadeEx(3, 0, 16, 2);
	FadeExWait();
	PokePartyRecoverAll();
	MEPlay(1300);
	MEWait();
	FadeEx(3, 16, 0, 2);
	FadeExWait();
	WorkSetConst(0x400F, 999);
	MsgActorEx(1024, 10, 0, 6, 0);
	MsgActorClose();
	TrainerCardGetSex(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label1;

label0: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);

label1: ;
	FlagSet(0x189);
	WorkSetConst(0x4085, 1);
	MsgActorEx(1024, 11, 0, 6, 0);
	InputWaitLast();
	MsgActorClose();
	BGMChangeMap();
	FlagSet(535);
	WorkSetConst(0x407F, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	StackPushFlag(2402);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	Routine0();
	goto label3;

label2: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgActorClose();

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	ActorSetGPos(0, 6, 0, 7, 1);
	CMD_1b2(433);
	WordSetPlayerName(0);
	MsgActorEx(1024, 21, 0, 0, 0);
	FadeEx(3, 0, 16, 2);
	FadeExWait();
	MsgActorClose();
	MEPlay(1300);
	MEWait();
	PokePartyRecoverAll();
	FadeEx(3, 16, 0, 2);
	FadeExWait();
	MsgActorEx(1024, 22, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();

	Movement m[] = { //0
		LookLeft, 1,
		Exclaimation, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgInfo(23, 2);
	MsgWinCloseAll();

	Movement m[] = { //255
		WalkDown, 3,
		WalkRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //3
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 24, 3, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 25, 0, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 26, 3, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		LookUp, 1,
		Wait1, 1,
		LookRight, 1,
		Wait1, 1,
		LookDown, 1,
		Wait1, 1,
		LookLeft, 1,
		Wait1, 1,
		LookUp, 1,
		Wait1, 1,
		LookRight, 1,
		Wait1, 1,
		LookDown, 1,
		Wait1, 1,
		LookLeft, 1,
		Wait1, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		LookLeft, 1,
		LookUp, 1,
		LookRight, 1,
		LookDown, 1,
		Vanish, 1,
	};

	VMSleep(24);
	ActorNew(6, 6, 2, 251, 106, 0);

	Movement m[] = { //251
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
	ActorDelete(3);
	BGMPlay(1100);
	VMSleep(16);
	MsgActorEx(1024, 27, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkDown, 1,
	};

	VMSleep(4);

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 28, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 29, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		SlowWalkLeft, 2,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 30, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 31, 251, 0, 0);
	YesNoWin(0x8010);

label5: ;
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label4;
	MsgActorEx(1024, 32, 251, 0, 0);
	YesNoWin(0x8010);
	goto label5;

label4: ;
	MsgActorEx(1024, 33, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkUp, 1,
	};

	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x18A);
	WorkSetConst(0x4085, 3);

	Movement m[] = { //0
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 34, 0, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 35, 251, 0, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 36, 0, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkRight, 2,
		TurnUp, 1,
	};

	VMSleep(4);

	Movement m[] = { //255
		TurnRight, 1,
	};

	VMSleep(12);

	Movement m[] = { //0
		TurnDown, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 37, 251, 0, 0);
	MsgWinCloseAll();
	VMSleep(16);
	MsgMulti(38, 16, 6, 1);
	VMSleep(16);
	MsgMulti(39, 24, 10, 2);
	VMSleep(32);
	MsgWinCloseNo(1);
	MsgWinCloseNo(2);
	MsgActorEx(1024, 40, 0, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		TurnLeft, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 41, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkDown, 4,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	SEPlay(1369);
	ActorDelete(251);
	SEWait();
	BGMChangeMap();
	WorkSetConst(0x400F, 333);
	WorkSetConst(0x4080, 4);
	FlagSet(736);
	FlagReset(513);
	FlagReset(514);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	StackPush(0x4085);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	ActorSetGPos(0, 6, 0, 5, 2);
	goto label7;

label6: ;
	StackPush(0x4085);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label7;
	ActorSetGPos(0, 6, 0, 5, 1);

label7: ;
	VMHalt();
}

void Routine0()
{
	StackPush(0x400F);
	StackPushConst(999);
	StackCmp(1);
	if (255) goto label8;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 14, 0, 0);
	InputWaitLast();
	MsgActorClose();
	VMReturn();
	goto label9;

label8: ;
	StackPush(0x400F);
	StackPushConst(333);
	StackCmp(1);
	if (255) goto label9;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 42, 0, 0);
	InputWaitLast();
	MsgActorClose();
	VMReturn();

label9: ;
	StackPushFlag(368);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 14, 0, 0);
	InputWaitLast();
	MsgActorClose();
	VMReturn();

label10: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x407D);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label11;
	MsgActor(1024, 12, 0, 0);
	MsgWinCloseAll();
	Routine1();
	MsgActor(1024, 13, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label12;

label11: ;
	WordSetPlayerName(0);
	MsgActor(1024, 15, 0, 0);
	MsgWinCloseAll();
	Routine1();
	WorkSetConst(0x8008, 16);
	Random(0x8009, 5);
	WorkAdd(0x8008, 0x8009);
	MsgActor(1024, 0x8008, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label12: ;
	VMReturn();
}

void Routine1()
{
	FadeEx(3, 0, 16, 2);
	FadeExWait();
	PokePartyRecoverAll();
	MEPlay(1300);
	MEWait();
	FadeEx(3, 16, 0, 2);
	FadeExWait();
	WorkSetConst(0x400F, 999);
	CMD_23a(72, 1);
	VMReturn();
}
