#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
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

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 32, 0, 0);
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
	MsgActor(1024, 33, 0, 0);
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
	MsgActor(1024, 34, 0, 0);
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
	MsgActor(1024, 1, 0, 0);
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
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();

	Movement m[] = { //5
		Exclaimation, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	StackPush(0x8021);
	StackPushConst(646);
	StackCmp(1);
	if (255) goto label0;

	Movement m[] = { //5
		WalkLeft, 1,
		FastWalkUp, 3,
		LookRight, 1,
	};

	ActorCmdWait();
	Routine0();

	Movement m[] = { //5
		WalkLeft, 1,
		FastWalkDown, 3,
		FastWalkRight, 1,
		LookRight, 1,
	};

	ActorCmdWait();
	goto label1;

label0: ;
	StackPush(0x8021);
	StackPushConst(648);
	StackCmp(1);
	if (255) goto label2;

	Movement m[] = { //5
		WalkLeft, 1,
		FastWalkUp, 1,
		LookRight, 1,
	};

	ActorCmdWait();
	Routine0();

	Movement m[] = { //5
		FastWalkDown, 1,
		LookRight, 1,
	};

	ActorCmdWait();
	goto label1;

label2: ;

	Movement m[] = { //5
		WalkLeft, 1,
		FastWalkDown, 1,
		LookRight, 1,
	};

	ActorCmdWait();
	Routine0();

	Movement m[] = { //5
		FastWalkUp, 1,
		LookRight, 1,
	};

	ActorCmdWait();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	BGMPlay(1086);
	WorkSetConst(0x8022, 0);
	WordSetPlayerName(0);
	MsgActor(1024, 0, 0, 0);
	MsgActorClose();

	Movement m[] = { //6
		TurnUp, 1,
	};

	ActorCmdWait();
	BMCreateHandleByGPos(0x8022, 1, 796, 657);
	BMHndAudioVisualAnmPlay(0x8022, 0);
	BMHndAnmWait(0x8022);

	Movement m[] = { //6
		WalkUp, 1,
		Vanish, 1,
	};

	ActorCmdWait();
	PlayerGetDir(0x8010);
	WorkCmpConst(0x8010, 0);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //255
		WalkUp, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label5;

label4: ;
	WorkCmpConst(0x8010, 2);
	if (1) goto label6;
	goto label7;

label6: ;

	Movement m[] = { //255
		WalkLeft, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label5;

label7: ;
	WorkCmpConst(0x8010, 3);
	if (1) goto label8;
	goto label5;

label8: ;

	Movement m[] = { //255
		WalkRight, 1,
		WalkUp, 1,
	};

	ActorCmdWait();
	goto label5;

label5: ;
	MapChangeFake(398, 7, 19, 0);
	FlagSet(520);
	WorkSetConst(0x407A, 1);
	CMD_25f();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	PlayerGetGPos(0x8023, 0x8024);
	StackPush(0x8023);
	StackPushConst(792);
	StackCmp(1);
	if (255) goto label9;

	Movement m[] = { //10
		WalkRight, 1,
	};

	ActorCmdWait();
	goto label10;

label9: ;

	Movement m[] = { //10
		TurnRight, 1,
	};

	ActorCmdWait();

label10: ;
	WordSetPlayerName(0);
	MsgActorEx(1024, 8, 10, 0, 0);
	MsgActorClose();
	StackPush(0x8023);
	StackPushConst(787);
	StackCmp(1);
	if (255) goto label11;

	Movement m[] = { //255
		Exclaimation, 1,
		WalkLeft, 1,
		WalkDown, 1,
		LookLeft, 1,
	};

	ActorCmdWait();
	goto label12;

label11: ;
	StackPush(0x8023);
	StackPushConst(788);
	StackCmp(1);
	if (255) goto label13;

	Movement m[] = { //255
		Exclaimation, 1,
		WalkLeft, 2,
		WalkDown, 1,
		LookLeft, 1,
	};

	ActorCmdWait();
	goto label12;

label13: ;
	StackPush(0x8023);
	StackPushConst(789);
	StackCmp(1);
	if (255) goto label14;

	Movement m[] = { //255
		Exclaimation, 1,
		WalkLeft, 3,
		WalkDown, 1,
		LookLeft, 1,
	};

	ActorCmdWait();
	goto label12;

label14: ;
	StackPush(0x8023);
	StackPushConst(790);
	StackCmp(1);
	if (255) goto label15;

	Movement m[] = { //255
		Exclaimation, 1,
		WalkLeft, 4,
		WalkDown, 1,
		LookLeft, 1,
	};

	ActorCmdWait();
	goto label12;

label15: ;
	StackPush(0x8023);
	StackPushConst(791);
	StackCmp(1);
	if (255) goto label16;

	Movement m[] = { //255
		Exclaimation, 1,
		WalkLeft, 5,
		WalkDown, 1,
		LookLeft, 1,
	};

	ActorCmdWait();
	goto label12;

label16: ;

	Movement m[] = { //10
		WalkLeft, 1,
		LookRight, 1,
	};


	Movement m[] = { //255
		Exclaimation, 1,
		WalkLeft, 6,
		WalkDown, 1,
		LookLeft, 1,
	};

	ActorCmdWait();

label12: ;
	Routine1();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(36, 1);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();

	Movement m[] = { //12
		LookDown, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 12, 1, 0);
	MsgActorClose();

	Movement m[] = { //255
		LookLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //9
		LookUp, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 7, 9, 0, 0);
	MsgActorClose();

	Movement m[] = { //9
		WalkLeft, 6,
	};


	Movement m[] = { //12
		WalkLeft, 6,
	};

	ActorCmdWait();
	ActorDelete(9);
	ActorDelete(12);
	FlagSet(637);
	WorkSetConst(0x407A, 2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	PlayerGetGPos(0x8025, 0x8026);
	StackPush(0x8026);
	StackPushConst(658);
	StackCmp(1);
	if (255) goto label17;

	Movement m[] = { //10
		TurnRight, 1,
	};

	goto label18;

label17: ;

	Movement m[] = { //10
		TurnDown, 1,
	};


label18: ;
	ActorCmdWait();
	WordSetPlayerName(0);
	StackPush(0x8026);
	StackPushConst(661);
	StackCmp(1);
	if (255) goto label19;
	MsgInfo(8, 1);
	goto label20;

label19: ;
	MsgActorEx(1024, 8, 10, 0, 0);

label20: ;
	MsgWinCloseAll();
	StackPush(0x8026);
	StackPushConst(658);
	StackCmp(1);
	if (255) goto label21;

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();
	goto label22;

label21: ;
	StackPush(0x8026);
	StackPushConst(659);
	StackCmp(1);
	if (255) goto label23;

	Movement m[] = { //255
		Exclaimation, 1,
		WalkUp, 1,
		LookLeft, 1,
	};

	ActorCmdWait();
	goto label22;

label23: ;
	StackPush(0x8026);
	StackPushConst(660);
	StackCmp(1);
	if (255) goto label24;

	Movement m[] = { //255
		Exclaimation, 1,
		WalkUp, 2,
		LookLeft, 1,
	};

	ActorCmdWait();
	goto label22;

label24: ;

	Movement m[] = { //255
		Exclaimation, 1,
		WalkUp, 3,
		LookLeft, 1,
	};

	ActorCmdWait();

label22: ;
	Routine1();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 35, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

// Static encounter reset npc
void Sequence15()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8020, 0);
	MsgActor(1024, 38, 0, 0);
	InputWaitLast();
	MsgActorClose();
	Movement m[] = { //33
		Wait8, 1,
	};
	ActorCmdWait();
	ActorSetEyeToEye();
	Movement m[] = { //33
		Wait8, 1,
	};
	ActorCmdWait();
	MsgActor(1024, 39, 0, 0);
	InputWaitLast();
	MsgActorClose();
	Movement m[] = { //33
		Wait8, 1,
		TurnRight, 1,
		Wait8, 1,
	};
	ActorCmdWait();
	MsgScream(40, 0);

	// Cobalion
	FlagReset(649);
	//Terrakion
	FlagReset(650);
	// Virizion
	FlagReset(651);
	// Landorous
	WorkSetConst(0x40CE, 0);
	// Kyurem
	FlagReset(801);
	// Victini
	FlagReset(779);
	// Darmanitan x5
	FlagReset(663);
	FlagReset(664);
	FlagReset(665);
	FlagReset(666);
	FlagReset(667);
	// Musharna
	FlagReset(748);
	// Magikarp
	FlagReset(339);
	// Larvesta egg
	FlagReset(315);
	// Volcarona
	FlagReset(810);
	// Foongus x2 route 6
	FlagReset(767);
	FlagReset(768);
	// Foongus x2 route 10
	FlagReset(771);
	FlagReset(772);
	// Amoongus x2 route 10
	FlagReset(769);
	FlagReset(770);
	// Pansage/Pansear/Panpour
	WorkSetConst(0x4083, 0);
	// Zorua
	if (0x40C7 > 1)
	{
		WorkSetConst(0x40C7, 1);
		FlagReset(730);
		FlagReset(731);
	}
	// Zoroark
	FlagReset(733);
	FlagReset(291);
	WorkSetConst(0x40C9, 0);

	// Cottonee-Petilil trade
	FlagReset(148);
	// Minchino-Basculin trade
	FlagReset(280);
	// Boldore-Emolga trade
	FlagReset(347);
	// Ditto-Rotom trade
	FlagReset(360);
	// Cinchino-Munchlax trade
	WorkSetConst(0x40DA, 0);

	// Only after Ghetsis
	FlagGet(2400, 0x8020);
	if (0x8020 == 1) 
	{
		// Reshiram/Zekrom (Dragonspiral Tower)
		FlagReset(766);
		// Tornadus/Thundurus
		if (0x40C0 > 0) 
		{
			WorkSetConst(0x40C0, 1);
		}
	}

	Movement m[] = { //33
		Wait16, 1,
	};
	ActorCmdWait();
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	MsgActorEx(1024, 3, 5, 0, 0);
	MsgActorClose();

	Movement m[] = { //5
		SlowWalkRight, 1,
	};


	Movement m[] = { //255
		LockDirection, 1,
		SlowWalkRight, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	VMReturn();
}

void Routine1()
{

	Movement m[] = { //10
		TurnLeft, 1,
	};

	ActorCmdWait();
	CMD_248(1093, 60);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x30E8000, 0x1000F, 0x2908000, 60);

	Movement m[] = { //13
		WalkRight, 1,
		LookDown, 1,
		LockDirection, 1,
		WalkUp, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();

	Movement m[] = { //8
		SlowWalkRight, 4,
	};

	ActorCmdWait();

	Movement m[] = { //13
		WalkDown, 1,
		LookRight, 1,
		LockDirection, 1,
		WalkLeft, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 9, 8, 5, 0);

	Movement m[] = { //26
		TurnDown, 1,
	};


	Movement m[] = { //20
		TurnUp, 1,
	};


	Movement m[] = { //24
		TurnDown, 1,
	};


	Movement m[] = { //22
		TurnUp, 1,
	};


	Movement m[] = { //21
		TurnRight, 1,
	};


	Movement m[] = { //23
		TurnLeft, 1,
	};


	Movement m[] = { //27
		TurnLeft, 1,
	};


	Movement m[] = { //25
		TurnLeft, 1,
	};

	ActorCmdWait();
	VMSleep(10);
	MsgMulti(10, 20, 10, 1);
	VMSleep(10);
	MsgMulti(11, 22, 15, 2);
	MsgWaitAdvance();
	MsgWinCloseAll();
	VMSleep(5);
	MsgWinCloseNo(1);
	VMSleep(5);
	MsgWinCloseNo(2);

	Movement m[] = { //27
		TurnLeft, 1,
	};


	Movement m[] = { //26
		TurnLeft, 1,
	};


	Movement m[] = { //20
		TurnLeft, 1,
	};


	Movement m[] = { //21
		TurnLeft, 1,
	};


	Movement m[] = { //23
		TurnLeft, 1,
	};


	Movement m[] = { //22
		TurnLeft, 1,
	};


	Movement m[] = { //25
		TurnLeft, 1,
	};


	Movement m[] = { //24
		TurnLeft, 1,
	};

	ActorCmdWait();
	EVCameraMoveTo(9688, 0, 0xED000, 0x30E8000, 0x1000F, 0x28E8000, 30);

	Movement m[] = { //8
		SlowWalkUp, 2,
		TurnRight, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 12, 8, 5, 0);
	MsgWinCloseAll();
	EVCameraMoveTo(9688, 0, 0xED000, 0x30E8000, 0x1000F, 0x2908000, 30);

	Movement m[] = { //8
		SlowWalkDown, 2,
		TurnRight, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 13, 8, 5, 0);

	Movement m[] = { //26
		TurnDown, 1,
	};


	Movement m[] = { //20
		TurnUp, 1,
	};


	Movement m[] = { //24
		TurnDown, 1,
	};


	Movement m[] = { //22
		TurnUp, 1,
	};


	Movement m[] = { //21
		TurnRight, 1,
	};


	Movement m[] = { //23
		TurnLeft, 1,
	};


	Movement m[] = { //27
		TurnLeft, 1,
	};


	Movement m[] = { //25
		TurnLeft, 1,
	};

	ActorCmdWait();
	VMSleep(10);
	MsgMulti(14, 18, 11, 3);
	VMSleep(10);
	MsgMulti(16, 22, 16, 4);
	VMSleep(10);
	MsgMulti(15, 24, 7, 5);
	MsgWaitAdvance();
	MsgWinCloseAll();
	VMSleep(5);
	MsgWinCloseNo(3);
	VMSleep(5);
	MsgWinCloseNo(4);
	VMSleep(5);
	MsgWinCloseNo(5);

	Movement m[] = { //27
		TurnLeft, 1,
	};


	Movement m[] = { //26
		TurnLeft, 1,
	};


	Movement m[] = { //20
		TurnLeft, 1,
	};


	Movement m[] = { //21
		TurnLeft, 1,
	};


	Movement m[] = { //23
		TurnLeft, 1,
	};


	Movement m[] = { //22
		TurnLeft, 1,
	};


	Movement m[] = { //25
		TurnLeft, 1,
	};


	Movement m[] = { //24
		TurnLeft, 1,
	};

	ActorCmdWait();
	EVCameraMoveTo(9688, 0, 0xED000, 0x30E8000, 0x1000F, 0x2928000, 30);

	Movement m[] = { //8
		SlowWalkDown, 2,
		TurnRight, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 17, 8, 5, 0);

	Movement m[] = { //26
		TurnDown, 1,
	};


	Movement m[] = { //20
		TurnUp, 1,
	};


	Movement m[] = { //24
		TurnDown, 1,
	};


	Movement m[] = { //22
		TurnUp, 1,
	};


	Movement m[] = { //21
		TurnRight, 1,
	};


	Movement m[] = { //23
		TurnLeft, 1,
	};


	Movement m[] = { //27
		TurnLeft, 1,
	};


	Movement m[] = { //25
		TurnLeft, 1,
	};

	ActorCmdWait();
	VMSleep(10);
	MsgMulti(18, 20, 10, 6);
	VMSleep(10);
	MsgMulti(19, 23, 15, 7);
	MsgWaitAdvance();
	MsgActorClose();
	VMSleep(5);
	MsgWinCloseNo(6);
	VMSleep(5);
	MsgWinCloseNo(7);

	Movement m[] = { //27
		TurnLeft, 1,
	};


	Movement m[] = { //26
		TurnLeft, 1,
	};


	Movement m[] = { //20
		TurnLeft, 1,
	};


	Movement m[] = { //21
		TurnLeft, 1,
	};


	Movement m[] = { //23
		TurnLeft, 1,
	};


	Movement m[] = { //22
		TurnLeft, 1,
	};


	Movement m[] = { //25
		TurnLeft, 1,
	};


	Movement m[] = { //24
		TurnLeft, 1,
	};

	ActorCmdWait();
	EVCameraMoveTo(9688, 0, 0xED000, 0x30E8000, 0x1000F, 0x2908000, 30);

	Movement m[] = { //8
		SlowWalkUp, 2,
		TurnRight, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 20, 8, 5, 0);
	MsgActorClose();
	VMSleep(16);

	Movement m[] = { //14
		WalkRight, 1,
		TurnUp, 1,
	};


	Movement m[] = { //15
		WalkRight, 1,
		TurnDown, 1,
	};

	ActorCmdWait();
	ActorDelete(31);
	ActorDelete(32);

	Movement m[] = { //14
		WalkLeft, 1,
		Wait8, 1,
		TurnUp, 1,
		LockDirection, 1,
		WalkLeft, 1,
		UnlockDirection, 1,
	};


	Movement m[] = { //15
		WalkLeft, 1,
		Wait8, 1,
		TurnUp, 1,
		LockDirection, 1,
		WalkRight, 1,
		UnlockDirection, 1,
	};

	VMSleep(16);

	Movement m[] = { //17
		TurnUp, 1,
		LockDirection, 1,
		WalkLeft, 1,
		UnlockDirection, 1,
	};


	Movement m[] = { //16
		TurnUp, 1,
		LockDirection, 1,
		WalkLeft, 1,
		UnlockDirection, 1,
	};


	Movement m[] = { //13
		TurnUp, 1,
		Wait8, 1,
		WalkUp, 2,
	};


	Movement m[] = { //18
		TurnUp, 1,
		LockDirection, 1,
		WalkRight, 1,
		UnlockDirection, 1,
	};


	Movement m[] = { //19
		TurnUp, 1,
		LockDirection, 1,
		WalkRight, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();

	Movement m[] = { //8
		WalkLeft, 2,
		TurnUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //14
		WalkDown, 2,
		TurnUp, 1,
	};


	Movement m[] = { //17
		WalkDown, 2,
		TurnUp, 1,
	};


	Movement m[] = { //16
		WalkDown, 2,
		TurnUp, 1,
	};


	Movement m[] = { //13
		TurnUp, 1,
	};


	Movement m[] = { //18
		WalkUp, 2,
		TurnUp, 1,
	};


	Movement m[] = { //19
		WalkUp, 2,
		TurnUp, 1,
	};


	Movement m[] = { //15
		WalkUp, 2,
		TurnUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //8
		WalkUp, 8,
		TurnLeft, 1,
		Wait8, 1,
		WalkLeft, 12,
	};


	Movement m[] = { //14
		WalkUp, 8,
		TurnLeft, 1,
		WalkLeft, 12,
	};


	Movement m[] = { //17
		WalkUp, 8,
		TurnLeft, 1,
		WalkLeft, 12,
	};


	Movement m[] = { //16
		WalkUp, 8,
		TurnLeft, 1,
		WalkLeft, 12,
	};


	Movement m[] = { //13
		WalkUp, 7,
		TurnLeft, 1,
		Wait8, 1,
		WalkLeft, 12,
	};


	Movement m[] = { //18
		WalkUp, 8,
		TurnLeft, 1,
		Wait8, 2,
		WalkLeft, 12,
	};


	Movement m[] = { //19
		WalkUp, 8,
		TurnLeft, 1,
		Wait8, 2,
		WalkLeft, 12,
	};


	Movement m[] = { //15
		WalkUp, 8,
		TurnLeft, 1,
		Wait8, 2,
		WalkLeft, 12,
	};

	ActorCmdWait();
	ActorDelete(8);
	ActorDelete(5);
	ActorDelete(14);
	ActorDelete(15);
	ActorDelete(4);
	ActorDelete(17);
	ActorDelete(16);
	ActorDelete(13);
	ActorDelete(18);
	ActorDelete(19);

	Movement m[] = { //26
		TurnDown, 1,
	};


	Movement m[] = { //20
		TurnUp, 1,
	};


	Movement m[] = { //24
		TurnDown, 1,
	};


	Movement m[] = { //22
		TurnUp, 1,
	};


	Movement m[] = { //21
		TurnRight, 1,
	};


	Movement m[] = { //23
		TurnLeft, 1,
	};


	Movement m[] = { //27
		TurnLeft, 1,
	};


	Movement m[] = { //25
		TurnLeft, 1,
	};

	ActorCmdWait();
	EVCameraMoveTo(9688, 0, 0xED000, 0x3128000, 0, 0x28F8000, 15);
	EVCameraWait();

	Movement m[] = { //24
		LookRight, 1,
		Wait4, 1,
		LookLeft, 1,
		Wait4, 1,
		LookDown, 1,
		Wait4, 1,
	};


	Movement m[] = { //11
		TurnRight, 1,
	};


	Movement m[] = { //255
		TurnUp, 1,
	};


	Movement m[] = { //10
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 21, 24, 0, 0);
	ActorCmdWait();
	MsgActorClose();

	Movement m[] = { //26
		LookRight, 1,
		Wait4, 1,
		LookLeft, 1,
		Wait4, 1,
		LookUp, 1,
		Wait4, 1,
	};

	MsgActorEx(1024, 22, 26, 2, 0);
	ActorCmdWait();
	MsgActorClose();

	Movement m[] = { //27
		WalkRight, 6,
		WalkUp, 8,
	};


	Movement m[] = { //26
		WalkRight, 4,
		WalkUp, 8,
	};


	Movement m[] = { //20
		WalkLeft, 8,
	};


	Movement m[] = { //21
		WalkLeft, 8,
	};


	Movement m[] = { //23
		WalkRight, 6,
		WalkUp, 8,
	};


	Movement m[] = { //22
		WalkRight, 4,
		WalkUp, 8,
	};


	Movement m[] = { //25
		WalkUp, 8,
	};


	Movement m[] = { //24
		WalkLeft, 8,
	};

	VMSleep(10);
	FadeEx(3, 0, 16, 2);
	FadeExWait();
	BGMChangeMap();
	EVCameraReturn(1);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	ActorCmdWait();
	ActorDelete(27);
	ActorDelete(26);
	ActorDelete(20);
	ActorDelete(21);
	ActorDelete(23);
	ActorDelete(22);
	ActorDelete(25);
	ActorDelete(24);

	Movement m[] = { //11
		LookDown, 1,
	};


	Movement m[] = { //255
		LookLeft, 1,
	};


	Movement m[] = { //10
		LookRight, 1,
	};

	ActorCmdWait();
	VMSleep(30);
	FadeEx(3, 16, 0, 2);
	FadeExWait();

	Movement m[] = { //11
		WalkRight, 1,
		WalkDown, 2,
		TurnDown, 1,
	};

	ActorCmdWait();
	BGMPlay(1092);
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x3128000, 0, 0x2908000, 20);
	EVCameraWait();
	MsgActorEx(1024, 23, 11, 0, 0);
	MsgActorClose();

	Movement m[] = { //255
		TurnUp, 1,
	};


	Movement m[] = { //10
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 24, 10, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 25, 11, 0, 0);
	MsgActorClose();
	WordSetPlayerName(0);
	MsgActorEx(1024, 26, 10, 0, 0);
	MsgActorClose();
	WordSetPlayerName(0);
	MsgActorEx(1024, 27, 11, 0, 0);
	MsgActorClose();

	Movement m[] = { //11
		WalkDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 28, 11, 0, 0);
	MsgActorClose();
	CallTrainerBattle(64, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label25;
	EVCameraEnd();
	CallTrainerBattleEnd();
	goto label26;

label25: ;
	CallTrainerLose();

label26: ;
	MsgActorEx(1024, 29, 11, 0, 0);
	MsgActorClose();

	Movement m[] = { //11
		WalkUp, 10,
	};

	ActorCmdWait();

	Movement m[] = { //10
		TurnRight, 1,
	};


	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 30, 10, 0, 0);
	MsgActorClose();

	Movement m[] = { //10
		WalkUp, 10,
	};


	Movement m[] = { //255
		TurnUp, 1,
	};

	ActorCmdWait();
	ActorDelete(10);
	ActorDelete(11);
	BGMChangeMap();
	WorkSetConst(0x407A, 3);
	FlagSet(524);
	FlagSet(528);
	FlagSet(518);
	FlagSet(525);
	FlagSet(522);
	FlagSet(523);
	FlagReset(638);
	VMReturn();
}
