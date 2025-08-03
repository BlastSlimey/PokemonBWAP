#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	CMD_13d();
	WordSetPlayerName(0);
	WorkSetConst(0x8021, 0);
	GameGetVersion(0x8021);

	Movement m[] = { //8
		LookLeft, 1,
		Exclaimation, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8022, 0x8023);
	WorkCmpConst(0x8023, 173);
	if (1) goto label0;
	goto label1;

label0: ;

	Movement m[] = { //8
		WalkUp, 2,
		WalkLeft, 1,
	};

	ActorCmdWait();
	goto label2;

label1: ;
	WorkCmpConst(0x8023, 174);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //8
		WalkUp, 1,
		WalkLeft, 1,
	};

	ActorCmdWait();
	goto label2;

label4: ;
	WorkCmpConst(0x8023, 175);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //8
		WalkLeft, 1,
	};

	ActorCmdWait();
	goto label2;

label6: ;
	WorkCmpConst(0x8023, 176);
	if (1) goto label7;
	goto label8;

label7: ;

	Movement m[] = { //8
		WalkDown, 1,
		WalkLeft, 1,
	};

	ActorCmdWait();
	goto label2;

label8: ;
	WorkCmpConst(0x8023, 177);
	if (1) goto label9;
	goto label10;

label9: ;

	Movement m[] = { //8
		WalkDown, 2,
		WalkLeft, 1,
	};

	ActorCmdWait();
	goto label2;

label10: ;

	Movement m[] = { //8
		WalkLeft, 1,
	};

	ActorCmdWait();

label2: ;
	PlayerGetExState(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	PlayerSetSpecialSequence(1);

label11: ;
	MsgActorEx(1024, 0, 8, 0, 0);
	MsgActorClose();
	StackPush(0x8021);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label12;
	WorkCmpConst(0x8023, 173);
	if (1) goto label13;
	goto label14;

label13: ;

	Movement m[] = { //8
		WalkRight, 4,
		WalkDown, 4,
		WalkRight, 3,
		WalkDown, 1,
		WalkRight, 3,
		WalkDown, 1,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 4,
		WalkDown, 4,
		WalkRight, 3,
		WalkDown, 1,
		WalkRight, 3,
		WalkDown, 1,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label15;

label14: ;
	WorkCmpConst(0x8023, 174);
	if (1) goto label16;
	goto label17;

label16: ;

	Movement m[] = { //8
		WalkRight, 3,
		WalkDown, 3,
		WalkRight, 4,
		WalkDown, 1,
		WalkRight, 3,
		WalkDown, 1,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 3,
		WalkDown, 3,
		WalkRight, 4,
		WalkDown, 1,
		WalkRight, 3,
		WalkDown, 1,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label15;

label17: ;
	WorkCmpConst(0x8023, 175);
	if (1) goto label18;
	goto label19;

label18: ;

	Movement m[] = { //8
		WalkRight, 6,
		WalkDown, 3,
		WalkRight, 4,
		WalkDown, 1,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 6,
		WalkDown, 3,
		WalkRight, 4,
		WalkDown, 1,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label15;

label19: ;
	WorkCmpConst(0x8023, 176);
	if (1) goto label20;
	goto label21;

label20: ;

	Movement m[] = { //8
		WalkRight, 3,
		WalkDown, 1,
		WalkRight, 4,
		WalkDown, 1,
		WalkRight, 3,
		WalkDown, 1,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 3,
		WalkDown, 1,
		WalkRight, 4,
		WalkDown, 1,
		WalkRight, 3,
		WalkDown, 1,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label15;

label21: ;
	WorkCmpConst(0x8023, 177);
	if (1) goto label22;
	goto label23;

label22: ;

	Movement m[] = { //8
		WalkRight, 7,
		WalkDown, 1,
		WalkRight, 3,
		WalkDown, 1,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 7,
		WalkDown, 1,
		WalkRight, 3,
		WalkDown, 1,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label15;

label23: ;

	Movement m[] = { //8
		WalkRight, 6,
		WalkDown, 3,
		WalkRight, 4,
		WalkDown, 1,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 6,
		WalkDown, 3,
		WalkRight, 4,
		WalkDown, 1,
		TurnUp, 0,
	};

	ActorCmdWait();

label15: ;
	goto label24;

label12: ;
	WorkCmpConst(0x8023, 173);
	if (1) goto label25;
	goto label26;

label25: ;

	Movement m[] = { //8
		WalkRight, 4,
		WalkDown, 4,
		WalkRight, 3,
		WalkDown, 2,
		WalkRight, 3,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 4,
		WalkDown, 4,
		WalkRight, 3,
		WalkDown, 2,
		WalkRight, 3,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label24;

label26: ;
	WorkCmpConst(0x8023, 174);
	if (1) goto label27;
	goto label28;

label27: ;

	Movement m[] = { //8
		WalkRight, 3,
		WalkDown, 3,
		WalkRight, 4,
		WalkDown, 2,
		WalkRight, 3,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 3,
		WalkDown, 3,
		WalkRight, 4,
		WalkDown, 2,
		WalkRight, 3,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label24;

label28: ;
	WorkCmpConst(0x8023, 175);
	if (1) goto label29;
	goto label30;

label29: ;

	Movement m[] = { //8
		WalkRight, 6,
		WalkDown, 4,
		WalkRight, 4,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 6,
		WalkDown, 4,
		WalkRight, 4,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label24;

label30: ;
	WorkCmpConst(0x8023, 176);
	if (1) goto label31;
	goto label32;

label31: ;

	Movement m[] = { //8
		WalkRight, 3,
		WalkDown, 1,
		WalkRight, 4,
		WalkDown, 2,
		WalkRight, 3,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 3,
		WalkDown, 1,
		WalkRight, 4,
		WalkDown, 2,
		WalkRight, 3,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label24;

label32: ;
	WorkCmpConst(0x8023, 177);
	if (1) goto label33;
	goto label34;

label33: ;

	Movement m[] = { //8
		WalkRight, 7,
		WalkDown, 2,
		WalkRight, 3,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 7,
		WalkDown, 2,
		WalkRight, 3,
		TurnUp, 0,
	};

	ActorCmdWait();
	goto label24;

label34: ;

	Movement m[] = { //8
		WalkRight, 6,
		WalkDown, 4,
		WalkRight, 4,
		TurnUp, 0,
	};


	Movement m[] = { //255
		WalkRight, 6,
		WalkDown, 4,
		WalkRight, 4,
		TurnUp, 0,
	};

	ActorCmdWait();

label24: ;
	MsgActorEx(1024, 1, 8, 0, 0);
	MsgActorClose();
	CMD_248(1093, 60);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x1958000, 0, 0xAE8000, 30);
	EVCameraWait();
	MsgActorEx(1024, 2, 9, 0, 0);

	Movement m[] = { //10
		LookDown, 1,
	};


	Movement m[] = { //15
		LookUp, 1,
	};


	Movement m[] = { //12
		LookRight, 1,
	};


	Movement m[] = { //14
		LookLeft, 1,
	};


	Movement m[] = { //16
		LookRight, 1,
	};


	Movement m[] = { //17
		LookLeft, 1,
	};

	ActorCmdWait();
	VMSleep(10);
	MsgMulti(3, 3, 9, 1);
	VMSleep(10);
	MsgMulti(4, 10, 14, 2);
	VMSleep(10);
	MsgMulti(5, 20, 10, 3);
	MsgWaitAdvance();
	MsgActorClose();
	VMSleep(5);
	MsgWinCloseNo(1);
	VMSleep(5);
	MsgWinCloseNo(2);
	VMSleep(5);
	MsgWinCloseNo(3);

	Movement m[] = { //10
		LookUp, 1,
	};


	Movement m[] = { //15
		LookUp, 1,
	};


	Movement m[] = { //12
		LookUp, 1,
	};


	Movement m[] = { //14
		LookUp, 1,
	};


	Movement m[] = { //16
		LookUp, 1,
	};


	Movement m[] = { //17
		LookUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //9
		SlowWalkLeft, 2,
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 9, 0, 0);
	MsgActorClose();

	Movement m[] = { //9
		SlowWalkRight, 4,
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 7, 9, 0, 0);
	MsgActorClose();

	Movement m[] = { //9
		SlowWalkLeft, 2,
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 8, 9, 0, 0);

	Movement m[] = { //9
		0x64, 1,
	};

	ActorCmdWait();

	Movement m[] = { //10
		LookDown, 1,
	};


	Movement m[] = { //15
		LookUp, 1,
	};


	Movement m[] = { //12
		LookRight, 1,
	};


	Movement m[] = { //14
		LookLeft, 1,
	};


	Movement m[] = { //16
		LookRight, 1,
	};


	Movement m[] = { //17
		LookLeft, 1,
	};

	ActorCmdWait();
	VMSleep(10);
	MsgMulti(9, 3, 8, 4);
	VMSleep(10);
	MsgMulti(10, 17, 15, 5);
	MsgWaitAdvance();
	MsgActorClose();
	VMSleep(5);
	MsgWinCloseNo(4);
	VMSleep(5);
	MsgWinCloseNo(5);

	Movement m[] = { //10
		LookUp, 1,
	};


	Movement m[] = { //15
		LookUp, 1,
	};


	Movement m[] = { //12
		LookUp, 1,
	};


	Movement m[] = { //14
		LookUp, 1,
	};


	Movement m[] = { //16
		LookUp, 1,
	};


	Movement m[] = { //17
		LookUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 9, 0, 0);
	MsgActorClose();
	VMSleep(16);

	Movement m[] = { //18
		TurnDown, 0,
	};


	Movement m[] = { //24
		TurnDown, 0,
	};

	ActorDelete(27);
	ActorDelete(28);
	ActorCmdWait();
	VMSleep(16);

	Movement m[] = { //18
		WalkDown, 2,
		WalkRight, 1,
		TurnLeft, 0,
	};


	Movement m[] = { //19
		WalkDown, 1,
		TurnLeft, 0,
	};


	Movement m[] = { //20
		WalkLeft, 1,
		TurnLeft, 0,
	};


	Movement m[] = { //21
		WalkRight, 2,
		TurnLeft, 0,
	};


	Movement m[] = { //22
		WalkRight, 1,
		WalkDown, 1,
		TurnLeft, 0,
	};


	Movement m[] = { //23
		WalkDown, 2,
		TurnLeft, 0,
	};


	Movement m[] = { //24
		WalkDown, 1,
		TurnLeft, 0,
	};

	ActorCmdWait();

	Movement m[] = { //18
		WalkLeft, 5,
		WalkUp, 1,
	};


	Movement m[] = { //19
		WalkLeft, 5,
		WalkUp, 1,
	};


	Movement m[] = { //20
		WalkLeft, 5,
		WalkUp, 1,
	};


	Movement m[] = { //21
		WalkLeft, 5,
		WalkUp, 1,
	};


	Movement m[] = { //22
		WalkLeft, 5,
		WalkUp, 1,
	};


	Movement m[] = { //23
		WalkLeft, 5,
		WalkUp, 1,
	};


	Movement m[] = { //24
		WalkLeft, 5,
		WalkUp, 1,
	};


	Movement m[] = { //9
		WalkLeft, 5,
		WalkUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //24
		WalkDown, 2,
		WalkLeft, 3,
	};

	ActorCmdWait();

	Movement m[] = { //18
		WalkUp, 8,
		WalkRight, 5,
		WalkUp, 3,
	};


	Movement m[] = { //19
		WalkUp, 8,
		WalkRight, 5,
		WalkUp, 3,
	};


	Movement m[] = { //20
		WalkUp, 8,
		WalkRight, 5,
		WalkUp, 3,
	};


	Movement m[] = { //21
		WalkUp, 8,
		WalkRight, 5,
		WalkUp, 3,
	};


	Movement m[] = { //22
		WalkUp, 8,
		WalkRight, 5,
		WalkUp, 3,
	};


	Movement m[] = { //23
		WalkUp, 8,
		WalkRight, 5,
		WalkUp, 3,
	};


	Movement m[] = { //24
		WalkUp, 8,
		WalkRight, 5,
		WalkUp, 3,
	};


	Movement m[] = { //9
		WalkUp, 8,
		WalkRight, 5,
		WalkUp, 3,
	};

	ActorCmdWait();

	Movement m[] = { //10
		LookDown, 1,
	};


	Movement m[] = { //15
		LookUp, 1,
	};


	Movement m[] = { //12
		LookRight, 1,
	};


	Movement m[] = { //14
		LookLeft, 1,
	};


	Movement m[] = { //16
		LookRight, 1,
	};


	Movement m[] = { //17
		LookLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 12, 10, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 13, 11, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 14, 12, 0, 0);
	MsgActorClose();
	BGMChangeMap();
	FadeEx(3, 0, 16, 4);

	Movement m[] = { //13
		WalkRight, 3,
		WalkUp, 2,
		WalkRight, 4,
	};


	Movement m[] = { //10
		WalkRight, 3,
		WalkUp, 2,
		WalkRight, 4,
	};


	Movement m[] = { //11
		WalkRight, 3,
		WalkUp, 2,
		WalkRight, 4,
	};


	Movement m[] = { //12
		WalkUp, 1,
		WalkLeft, 5,
		WalkUp, 6,
	};


	Movement m[] = { //14
		WalkUp, 1,
		WalkLeft, 5,
		WalkUp, 6,
	};


	Movement m[] = { //15
		WalkLeft, 8,
	};


	Movement m[] = { //16
		WalkRight, 8,
	};


	Movement m[] = { //17
		WalkRight, 8,
	};

	ActorCmdWait();
	FadeExWait();
	VMSleep(8);
	ActorDelete(10);
	ActorDelete(11);
	ActorDelete(12);
	ActorDelete(13);
	ActorDelete(14);
	ActorDelete(15);
	ActorDelete(16);
	ActorDelete(17);
	ActorDelete(9);
	ActorDelete(18);
	ActorDelete(19);
	ActorDelete(20);
	ActorDelete(21);
	ActorDelete(22);
	ActorDelete(23);
	ActorDelete(24);
	FadeEx(3, 16, 0, 4);
	FadeExWait();

	Movement m[] = { //7
		TurnUp, 0,
	};


	Movement m[] = { //6
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 15, 7, 2, 0);
	MsgActorClose();
	MsgActorEx(1024, 16, 6, 1, 0);
	MsgActorClose();
	EVCameraReturn(30);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();

	Movement m[] = { //8
		TurnLeft, 0,
	};


	Movement m[] = { //255
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 17, 8, 5, 0);
	MsgActorClose();

	Movement m[] = { //8
		WalkUp, 3,
		WalkRight, 1,
	};


	Movement m[] = { //255
		WalkUp, 4,
		WalkRight, 2,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 8, 4, 0);
	MsgActorClose();

	Movement m[] = { //7
		TurnLeft, 0,
	};


	Movement m[] = { //6
		TurnLeft, 0,
	};

	ActorCmdWait();
	WorkSetConst(0x8024, 0);
	TrainerCardGetSex(0x8024);
	StackPush(0x8024);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label35;
	MsgActorEx(1024, 19, 7, 2, 0);
	MsgActorClose();
	goto label36;

label35: ;
	MsgActorEx(1024, 20, 7, 2, 0);
	MsgActorClose();

label36: ;
	MsgActorEx(1024, 21, 6, 1, 0);
	MsgActorClose();
	MsgActorEx(1024, 22, 8, 4, 0);
	MsgActorClose();
	StackPush(0x8021);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label37;
	MsgActorEx(1024, 23, 7, 2, 0);
	MsgActorClose();
	MsgActorEx(1024, 25, 6, 1, 0);
	MsgActorClose();
	goto label38;

label37: ;
	MsgActorEx(1024, 24, 7, 2, 0);
	MsgActorClose();
	MsgActorEx(1024, 26, 6, 1, 0);
	MsgActorClose();

label38: ;
	MsgActorEx(1024, 27, 8, 4, 0);
	MsgActorClose();
	MsgActorEx(1024, 28, 6, 1, 0);
	MsgActorClose();

	Movement m[] = { //7
		HopLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 29, 7, 2, 0);
	MsgActorClose();
	MsgActorEx(1024, 30, 8, 4, 0);
	MsgActorClose();

	Movement m[] = { //8
		TurnUp, 0,
	};


	Movement m[] = { //255
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 31, 8, 4, 0);
	MsgActorClose();

	Movement m[] = { //8
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 32, 8, 4, 0);
	MsgActorClose();

	Movement m[] = { //8
		WalkDown, 1,
		WalkRight, 8,
	};


	Movement m[] = { //255
		Wait16, 1,
		TurnRight, 0,
	};


	Movement m[] = { //6
		Wait16, 1,
		TurnRight, 0,
	};


	Movement m[] = { //7
		Wait16, 1,
		TurnRight, 0,
	};

	ActorCmdWait();

	Movement m[] = { //7
		TurnUp, 0,
	};


	Movement m[] = { //6
		TurnDown, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 33, 7, 2, 0);
	MsgActorClose();
	MsgActorEx(1024, 34, 6, 1, 0);
	MsgActorClose();

	Movement m[] = { //7
		TurnLeft, 0,
	};


	Movement m[] = { //6
		TurnLeft, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 35, 6, 1, 0);
	MsgActorClose();

	Movement m[] = { //6
		WalkRight, 7,
	};


	Movement m[] = { //7
		MediumFastWalkLeft, 1,
		MediumFastWalkUp, 1,
		TurnLeft, 0,
	};

	VMSleep(20);
	MsgActorVersioned(1024, 36, 37, 7, 2, 0);
	MsgActorClose();
	ActorCmdWait();
	ActorDelete(6);
	ActorDelete(8);

	Movement m[] = { //7
		WalkRight, 10,
	};


	Movement m[] = { //255
		WalkRight, 10,
	};

	ActorCmdWait();

	Movement m[] = { //7
		TurnUp, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 38, 7, 2, 0);
	MsgActorClose();

	Movement m[] = { //7
		WalkUp, 9,
		TurnDown, 0,
	};


	Movement m[] = { //255
		TurnUp, 0,
	};

	ActorCmdWait();
	FlagSet(2489);
	FlagSet(619);
	WorkSetConst(0x40A8, 1);
	FlagSet(751);
	FlagReset(564);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 41, 0, 0);
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
	if (255) goto label39;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 42, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label40;

label39: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 43, 44, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label40: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label41;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 45, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label42;

label41: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 46, 47, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();

label42: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label43;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 48, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label44;

label43: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 49, 50, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();

label44: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label45;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 51, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label46;

label45: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 52, 53, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();

label46: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 60, 61, 5, 0, 0);
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
	MsgPlaceSign(73, 1);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	GameGetVersion(0x8010);
	StackPush(0x8010);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label47;
	WorkSetConst(0x4020, 205);
	goto label48;

label47: ;
	WorkSetConst(0x4020, 151);

label48: ;
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(74, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	GameGetVersion(0x8010);
	StackPush(0x8010);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label49;
	SEPlay(1351);
	MsgPlaceSign(76, 2);
	MsgPlaceSignClose();
	goto label50;

label49: ;
	SEPlay(1351);
	MsgPlaceSign(75, 2);
	MsgPlaceSignClose();

label50: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(77, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	GameGetVersion(0x8010);
	StackPush(0x8010);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label51;
	SEPlay(1351);
	MsgPlaceSign(79, 2);
	MsgPlaceSignClose();
	goto label52;

label51: ;
	SEPlay(1351);
	MsgPlaceSign(78, 2);
	MsgPlaceSignClose();

label52: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	CMD_13d();

	Movement m[] = { //7
		HopDown, 2,
	};

	ActorCmdWait();
	MsgActorEx(1024, 39, 7, 0, 0);
	MsgActorClose();

	Movement m[] = { //7
		WalkUp, 5,
		TurnDown, 0,
	};

	ActorCmdWait();
	WorkSetConst(0x40A8, 2);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	CMD_13d();
	MsgActorEx(1024, 40, 7, 0, 0);
	MsgActorClose();

	Movement m[] = { //7
		WalkUp, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x8025, 0);
	BMCreateHandleByGPos(0x8025, 1, 418, 159);
	BMHndAudioVisualAnmPlay(0x8025, 0);
	BMHndAnmWait(0x8025);

	Movement m[] = { //7
		WalkUp, 1,
	};

	ActorCmdWait();
	ActorDelete(7);
	BMHndAudioVisualAnmPlay(0x8025, 1);
	BMHndAnmWait(0x8025);
	BMReleaseHandle(0x8025);
	WorkSetConst(0x40A8, 3);
	FlagSet(737);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	WorkSetConst(0x8020, 0);
	GameGetVersion(0x8020);
	StackPush(0x40A8);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label53;
	ActorSetGPos(7, 409, 0, 176, 2);
	goto label54;

label53: ;
	StackPush(0x40A8);
	StackPushConst(1);
	StackCmp(1);
	StackPush(0x8020);
	StackPushConst(20);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label55;
	ActorSetGPos(7, 418, 0xFFFF, 166, 1);
	goto label54;

label55: ;
	StackPush(0x40A8);
	StackPushConst(1);
	StackCmp(1);
	StackPush(0x8020);
	StackPushConst(21);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label56;
	ActorSetGPos(7, 418, 0, 166, 1);
	goto label54;

label56: ;
	StackPush(0x40A8);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label54;
	ActorSetGPos(7, 418, 0, 161, 1);
	goto label54;

label54: ;
	StackPush(0x40B8);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label57;
	ActorNew(405, 150, 0, 251, 105, 0);

label57: ;
	WorkSetConst(0x8020, 0);
	VMHalt();
}

void Sequence16()
{
	ActorPauseAll();
	CMD_13d();
	WordSetPlayerName(0);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9672, 0, 0xEB6EF, 0x1958000, 0, 0x938000, 30);
	EVCameraWait();

	Movement m[] = { //251
		Exclaimation, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	MsgActorVersioned(1024, 62, 63, 251, 0, 0);
	MsgActorClose();

	Movement m[] = { //251
		WalkUp, 2,
	};

	ActorCmdWait();
	EVCameraMoveToDefault(16);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	MsgActorVersioned(1024, 64, 65, 251, 0, 0);
	MsgActorEx(1024, 66, 251, 0, 0);
	MsgActorClose();

	Movement m[] = { //251
		WalkRight, 1,
		WalkUp, 2,
		TurnLeft, 0,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 0,
	};

	ActorCmdWait();
	WorkSetConst(0x8026, 0);
	GameGetVersion(0x8026);
	StackPush(0x8026);
	StackPushConst(20);
	StackCmp(1);
	if (255) goto label58;

	Movement m[] = { //251
		WalkDown, 3,
		WalkRight, 25,
		WalkUp, 8,
	};


	Movement m[] = { //255
		WalkDown, 3,
		WalkRight, 25,
		WalkUp, 8,
	};

	ActorCmdWait();
	goto label59;

label58: ;

	Movement m[] = { //251
		WalkRight, 25,
		WalkUp, 6,
	};


	Movement m[] = { //255
		WalkRight, 25,
		WalkUp, 6,
	};

	ActorCmdWait();

label59: ;
	WorkSetConst(0x8026, 0);
	MsgActorEx(1024, 67, 251, 0, 0);
	MsgActorClose();

	Movement m[] = { //251
		TurnLeft, 0,
	};


	Movement m[] = { //255
		TurnRight, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 68, 251, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label60;
	MsgActorEx(1024, 69, 251, 0, 0);
	goto label61;

label60: ;
	MsgActorEx(1024, 70, 251, 0, 0);

label61: ;
	MsgActorEx(1024, 71, 251, 0, 0);
	MsgActorClose();

	Movement m[] = { //251
		TurnLeft, 0,
	};

	ActorCmdWait();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1B1);
	WordSetPlayerName(0);
	MsgActorEx(1024, 72, 251, 0, 0);
	MsgActorClose();

	Movement m[] = { //251
		WalkDown, 10,
	};


	Movement m[] = { //255
		Wait8, 1,
		TurnDown, 0,
	};

	ActorCmdWait();
	ActorDelete(251);
	WorkSetConst(0x40B8, 2);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence17()
{
	ActorPauseAll();
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label62;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 54, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label63;

label62: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 55, 56, 25, 0, 0);
	InputWaitLast();
	MsgActorClose();

label63: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence18()
{
	ActorPauseAll();
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label64;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 57, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label65;

label64: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 58, 59, 26, 0, 0);
	InputWaitLast();
	MsgActorClose();

label65: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
