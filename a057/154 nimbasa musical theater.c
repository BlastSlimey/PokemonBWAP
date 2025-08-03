#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8023, 0);
	SEPlay(1351);
	ActorSetEyeToEye();
	CMD_169(15, 24, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	TrainerCardGetBirthDate(0x8025, 0x8024);
	RTCGetDate(0x8027, 0x8026);
	StackPush(0x8025);
	StackPush(0x8027);
	StackCmp(1);
	StackPush(0x8024);
	StackPush(0x8026);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label1;
	WorkSetConst(0x8023, 1);
	MsgActor(1024, 18, 0, 0);
	MsgWinCloseAll();
	WorkSetConst(0x8008, 24);
	WorkSetConst(0x8009, 0);
	RTCallGlobal(10456);

label1: ;
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);

label0: ;
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	CMD_169(15, 67, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	FlagGet(327, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	WorkSetConst(0x8023, 1);
	MsgActor(1024, 12, 0, 0);
	MsgWinCloseAll();
	WorkSetConst(0x8008, 67);
	WorkSetConst(0x8009, 1);
	RTCallGlobal(10456);
	MsgActor(1024, 13, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label2: ;
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	CMD_169(15, 55, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	CMD_169(1, 0, 0x8010);
	StackPush(0x8010);
	StackPushConst(5);
	StackCmp(4);
	if (255) goto label3;
	WorkSetConst(0x8023, 1);
	MsgActor(1024, 14, 0, 0);
	MsgWinCloseAll();
	WorkSetConst(0x8008, 55);
	WorkSetConst(0x8009, 1);
	RTCallGlobal(10456);
	MsgActor(1024, 15, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label3: ;
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	CMD_169(15, 82, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	CMD_169(1, 0, 0x8010);
	StackPush(0x8010);
	StackPushConst(10);
	StackCmp(4);
	if (255) goto label4;
	WorkSetConst(0x8023, 1);
	MsgActor(1024, 16, 0, 0);
	MsgWinCloseAll();
	WorkSetConst(0x8008, 82);
	WorkSetConst(0x8009, 1);
	RTCallGlobal(10456);
	MsgActor(1024, 17, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label4: ;
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label5;
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label5: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 22, 0, 0);
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
	MsgActor(1024, 23, 0, 0);
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
	MsgActor(1024, 24, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 30, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 31, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(552, 0);
	MsgActor(1024, 21, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	CMD_169(1, 0, 0x8010);
	StackPush(0x8010);
	StackPushConst(2);
	StackCmp(0);
	if (255) goto label6;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 25, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label7;

label6: ;
	StackPush(0x8010);
	StackPushConst(5);
	StackCmp(0);
	if (255) goto label8;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 26, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label7;

label8: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 27, 0, 0);
	InputWaitLast();
	MsgActorClose();

label7: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	FlagGet(326, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	CMD_169(6, 0, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	WordSetMusicalInfo(7, 0, 0);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 20, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(326);
	goto label11;

label10: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 19, 0, 0);
	InputWaitLast();
	MsgActorClose();

label11: ;
	goto label12;

label9: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 19, 0, 0);
	InputWaitLast();
	MsgActorClose();

label12: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	StackPush(0x40B3);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label13;
	ActorSetGPos(11, 14, 0, 13, 0);
	ActorNew(13, 19, 0, 251, 134, 0);

label13: ;
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();

	Movement m[] = { //251
		WalkUp, 3,
		Wait8, 1,
		TurnRight, 1,
	};


	Movement m[] = { //255
		WalkUp, 4,
	};

	ActorCmdWait();
	MsgActorEx(1024, 0, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		LookDown, 1,
		Exclaimation, 1,
		WalkDown, 1,
	};

	VMSleep(8);

	Movement m[] = { //251
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 11, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		WalkLeft, 1,
		TurnDown, 1,
		Wait8, 1,
		WalkRight, 1,
		TurnDown, 1,
		Wait8, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 11, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		WalkLeft, 1,
		WalkDown, 1,
		Wait8, 2,
		WalkRight, 1,
		TurnDown, 1,
		Wait8, 1,
	};

	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x19F);

	Movement m[] = { //11
		LockDirection, 1,
		WalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 11, 0, 0);
	MsgWinCloseAll();
	CMD_16b(0, 0, 0, 0);
	WorkSetConst(0x8020, 0);
	CMD_169(11, 0, 0x8020);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label14;
	VMSleep(16);

	Movement m[] = { //11
		Exclaimation, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 11, 0, 0);
	goto label15;

label14: ;
	Routine0();

label15: ;
	WorkSetConst(0x8020, 0);
	CMD_16b(1, 0, 0, 0);
	MsgActorEx(1024, 9, 11, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		WalkLeft, 9,
	};

	ActorCmdWait();
	ActorSetGPos(11, 17, 6, 3, 1);

	Movement m[] = { //251
		TurnRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 10, 251, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkDown, 2,
		WalkRight, 1,
		WalkDown, 2,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	ActorDelete(251);
	SEPlay(1369);
	SEWait();
	WorkSetConst(0x40B3, 1);
	WorkSetConst(0x4089, 2);
	FlagReset(639);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	CMD_169(7, 0, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label16;
	MsgInfo(28, 2);
	MsgWinCloseAll();
	CMD_167(0, 2);
	goto label17;

label16: ;
	MsgInfo(29, 2);
	InputWaitLast();
	MsgWinCloseAll();

label17: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
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
	WorkSet(0x8002, 267);
	WorkSet(0x8003, 32);
	WorkSet(0x8004, 33);
	WorkSet(0x8005, 34);
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

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgInfo(35, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 36, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);

label20: ;
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label18;
	CMD_16e(0x8022, 0x8021);
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label19;
	MsgActorEx(1024, 6, 11, 0, 0);
	MsgWinCloseAll();

label19: ;
	goto label20;

label18: ;
	MsgActorEx(1024, 7, 11, 0, 0);
	MsgWinCloseAll();
	CMD_1ae();
	BGMPush(6);
	CMD_1b1();
	FieldClose();
	CMD_168(0x8021);
	FieldOpen();
	CMD_1af();
	BGMPop(0, 60);
	CMD_1b1();
	CMD_169(13, 0, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label21;
	MsgActorEx(1024, 5, 11, 0, 0);
	goto label22;

label21: ;
	MsgActorEx(1024, 8, 11, 0, 0);

label22: ;
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	VMReturn();
}
