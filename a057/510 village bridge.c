#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	ISSSwitchQuery(0x8010, 1);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	StackPush(0x400A);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	ISSSwitchEnable(1);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 17, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label2;

label1: ;
	ISSSwitchEnable(1);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 19, 0, 0);
	InputWaitLast();
	MsgActorClose();

label2: ;
	goto label3;

label0: ;
	StackPush(0x400A);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	ISSSwitchDisable(1);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 18, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x400A, 1);
	goto label3;

label4: ;
	ISSSwitchDisable(1);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 20, 0, 0);
	InputWaitLast();
	MsgActorClose();

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	ISSSwitchQuery(0x8010, 3);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label5;
	StackPush(0x400B);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	ISSSwitchEnable(3);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 21, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label7;

label6: ;
	ISSSwitchEnable(3);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 23, 0, 0);
	InputWaitLast();
	MsgActorClose();

label7: ;
	goto label8;

label5: ;
	StackPush(0x400B);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	ISSSwitchDisable(3);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 22, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x400B, 1);
	goto label8;

label9: ;
	ISSSwitchDisable(3);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 24, 0, 0);
	InputWaitLast();
	MsgActorClose();

label8: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	ISSSwitchQuery(0x8010, 2);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	StackPush(0x400C);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label11;
	ISSSwitchEnable(2);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 25, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label12;

label11: ;
	ISSSwitchEnable(2);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 27, 0, 0);
	InputWaitLast();
	MsgActorClose();

label12: ;
	goto label13;

label10: ;
	StackPush(0x400C);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label14;
	ISSSwitchDisable(2);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 26, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x400C, 1);
	goto label13;

label14: ;
	ISSSwitchDisable(2);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 28, 0, 0);
	InputWaitLast();
	MsgActorClose();

label13: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	ISSSwitchQuery(0x8010, 4);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label15;
	StackPush(0x400D);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label16;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 29, 0, 0);
	InputWaitLast();
	MsgActorClose();
	ISSSwitchEnable(4);
	goto label17;

label16: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 31, 0, 0);
	InputWaitLast();
	MsgActorClose();
	ISSSwitchEnable(4);

label17: ;
	goto label18;

label15: ;
	StackPush(0x400D);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label19;
	ISSSwitchDisable(4);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 30, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x400D, 1);
	goto label18;

label19: ;
	ISSSwitchDisable(4);
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 32, 0, 0);
	InputWaitLast();
	MsgActorClose();

label18: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(79, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(79, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(80, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	StackPush(0x8020);
	StackPushConst(73);
	StackCmp(1);
	if (255) goto label20;

	Movement m[] = { //14
		WalkLeft, 2,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnRight, 1,
	};

	goto label21;

label20: ;
	StackPush(0x8020);
	StackPushConst(86);
	StackCmp(1);
	StackPush(0x8020);
	StackPushConst(84);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label22;

	Movement m[] = { //14
		WalkRight, 4,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnLeft, 1,
	};

	goto label21;

label22: ;
	StackPush(0x8021);
	StackPushConst(45);
	StackCmp(1);
	if (255) goto label21;

	Movement m[] = { //14
		TurnRight, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnLeft, 1,
	};


label21: ;
	ActorCmdWait();
	TrainerCardGetSex(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label23;
	MsgInfo(53, 2);
	goto label24;

label23: ;
	MsgInfo(52, 2);

label24: ;
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label25;
	MsgInfo(51, 2);
	InputWaitLast();
	MsgWinCloseAll();
	FlagReset(1);
	FlagReset(2);
	FlagReset(3);
	FlagReset(4);
	FlagReset(5);
	FlagReset(6);
	FlagReset(7);
	FlagReset(8);
	FlagReset(9);
	FlagReset(10);
	FlagReset(11);
	FlagReset(12);
	FlagReset(13);
	FlagReset(14);
	WorkSetConst(0x4000, 0);
	WorkSetConst(0x4001, 0);
	WorkSetConst(0x4002, 0);
	WorkSetConst(0x4003, 0);
	WorkSetConst(0x4004, 0);
	WorkSetConst(0x4005, 0);
	WorkSetConst(0x4006, 0);
	WorkSetConst(0x4007, 0);
	WorkSetConst(0x4008, 0);
	WorkSetConst(0x4009, 0);
	StackPush(0x8020);
	StackPushConst(73);
	StackCmp(1);
	if (255) goto label26;

	Movement m[] = { //255
		WalkRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //14
		WalkRight, 2,
		TurnDown, 1,
	};

	goto label27;

label26: ;
	StackPush(0x8020);
	StackPushConst(86);
	StackCmp(1);
	if (255) goto label28;

	Movement m[] = { //255
		WalkLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //14
		WalkLeft, 4,
		TurnDown, 1,
	};

	goto label27;

label28: ;
	StackPush(0x8020);
	StackPushConst(84);
	StackCmp(1);
	if (255) goto label29;

	Movement m[] = { //255
		WalkDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //14
		WalkLeft, 4,
		TurnDown, 1,
	};

	goto label27;

label29: ;
	StackPush(0x8021);
	StackPushConst(45);
	StackCmp(1);
	if (255) goto label27;

	Movement m[] = { //255
		WalkDown, 1,
	};


label27: ;
	ActorCmdWait();
	goto label30;

label25: ;
	MsgWinCloseAll();
	StackPush(0x8020);
	StackPushConst(73);
	StackCmp(1);
	if (255) goto label31;

	Movement m[] = { //255
		WalkRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //14
		WalkRight, 2,
		TurnDown, 1,
	};

	goto label32;

label31: ;
	StackPush(0x8020);
	StackPushConst(86);
	StackCmp(1);
	if (255) goto label33;

	Movement m[] = { //255
		WalkLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //14
		WalkLeft, 4,
		TurnDown, 1,
	};

	goto label32;

label33: ;
	StackPush(0x8020);
	StackPushConst(84);
	StackCmp(1);
	if (255) goto label34;

	Movement m[] = { //255
		WalkDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //14
		WalkLeft, 4,
		TurnDown, 1,
	};

	goto label32;

label34: ;
	StackPush(0x8021);
	StackPushConst(45);
	StackCmp(1);
	if (255) goto label32;

	Movement m[] = { //255
		WalkDown, 1,
	};


label32: ;
	ActorCmdWait();

label30: ;
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	PlayerGetGPos(0x8023, 0x8024);
	StackPushFlag(1);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label35;
	FlagSet(2755);

label35: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(2755);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label36;
	TrainerFlagGet(551, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label37;
	MsgActor(1024, 33, 0, 0);
	MsgWinCloseAll();
	CallTrainerBattle(551, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label38;
	CallTrainerBattleEnd();
	TrainerFlagSet(551);
	goto label39;

label38: ;
	CallTrainerLose();

label39: ;
	StackPush(0x8023);
	StackPushConst(76);
	StackCmp(1);
	if (255) goto label40;

	Movement m[] = { //14
		TurnLeft, 1,
	};

	goto label41;

label40: ;
	StackPush(0x8023);
	StackPushConst(77);
	StackCmp(1);
	if (255) goto label42;

	Movement m[] = { //14
		TurnDown, 1,
	};

	goto label41;

label42: ;
	StackPush(0x8023);
	StackPushConst(78);
	StackCmp(1);
	if (255) goto label41;

	Movement m[] = { //14
		TurnRight, 1,
	};


label41: ;
	ActorCmdWait();
	VMSleep(16);
	MsgActorGendered(1024, 35, 34, 14, 0, 0);
	YesNoWin(0x8010);
	goto label43;

label37: ;
	MsgActor(1024, 36, 0, 0);
	YesNoWin(0x8010);

label43: ;
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label44;
	MsgActor(1024, 38, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label45;
	MsgWinCloseAll();

	Movement m[] = { //14
		TurnDown, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnDown, 1,
	};

	EVCameraInit();
	EVCameraUnbind();
	ActorCmdWait();
	EVCameraMoveTo(9694, 0, 0xED02B, 0x4F8000, 0, 0x318000, 24);
	EVCameraWait();
	MsgInfo(39, 1);
	StackPush(0x8023);
	StackPushConst(76);
	StackCmp(1);
	if (255) goto label46;

	Movement m[] = { //14
		TurnLeft, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnRight, 1,
	};

	goto label47;

label46: ;
	StackPush(0x8023);
	StackPushConst(77);
	StackCmp(1);
	if (255) goto label48;

	Movement m[] = { //255
		TurnUp, 1,
	};

	goto label47;

label48: ;
	StackPush(0x8023);
	StackPushConst(78);
	StackCmp(1);
	if (255) goto label47;

	Movement m[] = { //14
		TurnRight, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnLeft, 1,
	};


label47: ;
	ActorCmdWait();
	MsgInfo(40, 1);
	MsgInfo(41, 1);
	MsgWinCloseAll();
	EVCameraReturn(16);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	goto label49;

label45: ;
	MsgActor(1024, 42, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label49: ;
	FlagSet(2755);
	FlagSet(1);
	WorkSetConst(0x4000, 1);
	WorkSetConst(0x4009, 1);
	goto label50;

label44: ;
	MsgActor(1024, 37, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label50: ;
	goto label51;

label36: ;
	StackPushFlag(1);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label52;
	StackPushFlag(2);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(3);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(4);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(5);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(7);
	StackCmp(7);
	StackCmp(7);
	if (255) goto label53;
	StackPushFlag(6);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label54;
	ListMenuInitTR(31, 1, 0, 0, 0x4005);
	Routine0();
	ListMenuInitTR(31, 1, 0, 0, 0x4006);
	Routine0();
	ListMenuInitTR(31, 1, 0, 0, 0x4007);
	Routine0();
	ListMenuInitTR(31, 1, 0, 0, 0x4008);
	Routine0();
	MsgActor(1024, 44, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //14
		WalkUp, 1,
	};

	ActorCmdWait();
	ActorDelete(14);
	SEPlay(1369);
	SEWait();
	VMSleep(90);
	SEPlay(1369);
	ActorAdd(14);

	Movement m[] = { //14
		LookDown, 1,
	};

	ActorCmdWait();
	SEWait();
	PlayerGetGPos(0x8023, 0x8024);
	StackPush(0x8023);
	StackPushConst(76);
	StackCmp(1);
	if (255) goto label55;

	Movement m[] = { //14
		TurnLeft, 1,
	};

	goto label56;

label55: ;
	StackPush(0x8023);
	StackPushConst(78);
	StackCmp(1);
	if (255) goto label56;

	Movement m[] = { //14
		TurnRight, 1,
	};


label56: ;
	ActorCmdWait();
	MsgActor(1024, 45, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(6);
	goto label57;

label54: ;
	StackPushFlag(7);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(8);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(9);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(10);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(7);
	StackCmp(7);
	StackCmp(7);
	if (255) goto label58;
	StackPushFlag(11);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(12);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(13);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(14);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(7);
	StackCmp(7);
	StackCmp(7);
	if (255) goto label59;
	MsgActor(1024, 47, 0, 0);
	MsgActor(1024, 49, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1AF);
	MsgActor(1024, 50, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label60;

label59: ;
	MsgActor(1024, 48, 0, 0);
	MsgActor(1024, 50, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label60: ;
	FlagReset(1);
	FlagReset(2);
	FlagReset(3);
	FlagReset(4);
	FlagReset(5);
	FlagReset(6);
	FlagReset(7);
	FlagReset(8);
	FlagReset(9);
	FlagReset(10);
	FlagReset(11);
	FlagReset(12);
	FlagReset(13);
	FlagReset(14);
	WorkSetConst(0x4000, 0);
	WorkSetConst(0x4001, 0);
	WorkSetConst(0x4002, 0);
	WorkSetConst(0x4003, 0);
	WorkSetConst(0x4004, 0);
	WorkSetConst(0x4005, 0);
	WorkSetConst(0x4006, 0);
	WorkSetConst(0x4007, 0);
	WorkSetConst(0x4008, 0);
	WorkSetConst(0x4009, 0);
	goto label57;

label58: ;
	MsgActor(1024, 45, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label57: ;
	goto label61;

label53: ;
	MsgActor(1024, 46, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label61: ;
	goto label51;

label52: ;
	MsgActor(1024, 50, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label51: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8029, 0);
	PlayerGetGPos(0x8028, 0x8029);
	WorkSetConst(0x802A, 0);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(1);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label62;
	StackPushFlag(3);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label63;
	Random(0x4002, 4);
	StackPush(0x4002);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label64;
	WordSetItemName(0, 149);
	goto label65;

label64: ;
	StackPush(0x4002);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label66;
	WordSetItemName(0, 156);
	goto label65;

label66: ;
	StackPush(0x4002);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label67;
	WordSetItemName(0, 151);
	goto label65;

label67: ;
	StackPush(0x4002);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label65;
	WordSetItemName(0, 150);

label65: ;
	MsgActor(1024, 54, 0, 0);
	MsgWaitAdvance();
	MsgWinCloseAll();
	StackPush(0x8029);
	StackPushConst(49);
	StackCmp(1);
	if (255) goto label68;

	Movement m[] = { //4
		TurnUp, 1,
	};

	goto label69;

label68: ;
	StackPush(0x8029);
	StackPushConst(50);
	StackCmp(1);
	if (255) goto label69;

	Movement m[] = { //4
		TurnLeft, 1,
	};


label69: ;
	ActorCmdWait();
	PVPlay(25, 0);
	MsgActorEx(1024, 72, 4, 0, 0);
	PVWait();
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(3);
	goto label70;

label63: ;
	StackPushFlag(6);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(8);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label71;
	StackPush(0x4009);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label72;
	WorkGet(0x802A, 0x4005);
	goto label73;

label72: ;
	StackPush(0x4009);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label74;
	WorkGet(0x802A, 0x4006);
	goto label73;

label74: ;
	StackPush(0x4009);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label75;
	WorkGet(0x802A, 0x4007);
	goto label73;

label75: ;
	StackPush(0x4009);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label73;
	WorkGet(0x802A, 0x4008);

label73: ;
	StackPush(0x802A);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label76;
	WordSetItemName(0, 149);
	goto label77;

label76: ;
	StackPush(0x802A);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label78;
	WordSetItemName(0, 156);
	goto label77;

label78: ;
	StackPush(0x802A);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label79;
	WordSetItemName(0, 151);
	goto label77;

label79: ;
	StackPush(0x802A);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label77;
	WordSetItemName(0, 150);

label77: ;
	MsgSystem(78, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label80;
	MsgWinCloseAll();
	StackPush(0x4009);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label81;
	WorkGet(0x802A, 0x4005);
	goto label82;

label81: ;
	StackPush(0x4009);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label83;
	WorkGet(0x802A, 0x4006);
	goto label82;

label83: ;
	StackPush(0x4009);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label84;
	WorkGet(0x802A, 0x4007);
	goto label82;

label84: ;
	StackPush(0x4009);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label82;
	WorkGet(0x802A, 0x4008);

label82: ;
	StackPush(0x4002);
	StackPush(0x802A);
	StackCmp(1);
	if (255) goto label85;
	StackPush(0x8029);
	StackPushConst(49);
	StackCmp(1);
	if (255) goto label86;

	Movement m[] = { //4
		TurnUp, 1,
	};

	goto label87;

label86: ;
	StackPush(0x8029);
	StackPushConst(50);
	StackCmp(1);
	if (255) goto label87;

	Movement m[] = { //4
		TurnLeft, 1,
	};


label87: ;
	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //0
		MusicNote, 1,
	};


	Movement m[] = { //4
		MusicNote, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 56, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(12);
	goto label88;

label85: ;
	StackPush(0x8029);
	StackPushConst(49);
	StackCmp(1);
	if (255) goto label89;

	Movement m[] = { //4
		TurnUp, 1,
	};

	goto label90;

label89: ;
	StackPush(0x8029);
	StackPushConst(50);
	StackCmp(1);
	if (255) goto label90;

	Movement m[] = { //4
		TurnLeft, 1,
	};


label90: ;
	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //0
		QuestionMark, 1,
	};


	Movement m[] = { //4
		QuestionMark, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 57, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label88: ;
	FlagSet(8);
	WorkAdd(0x4009, 1);
	goto label91;

label80: ;
	MsgWinCloseAll();

label91: ;
	goto label70;

label71: ;
	StackPushFlag(8);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label92;
	StackPushFlag(12);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label93;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 56, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label94;

label93: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 57, 0, 0);
	InputWaitLast();
	MsgActorClose();

label94: ;
	goto label70;

label92: ;
	StackPush(0x4002);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label95;
	WordSetItemName(0, 149);
	goto label96;

label95: ;
	StackPush(0x4002);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label97;
	WordSetItemName(0, 156);
	goto label96;

label97: ;
	StackPush(0x4002);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label98;
	WordSetItemName(0, 151);
	goto label96;

label98: ;
	StackPush(0x4002);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label96;
	WordSetItemName(0, 150);

label96: ;
	MsgActor(1024, 54, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label70: ;
	goto label99;

label62: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 55, 0, 0);
	InputWaitLast();
	MsgActorClose();

label99: ;
	WorkSetConst(0x802A, 0);
	WorkSetConst(0x8029, 0);
	WorkSetConst(0x8028, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	WorkSetConst(0x802E, 0);
	WorkSetConst(0x802F, 0);
	PlayerGetGPos(0x802E, 0x802F);
	WorkSetConst(0x8030, 0);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(1);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label100;
	StackPushFlag(5);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label101;
	Random(0x4004, 4);
	StackPush(0x4004);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label102;
	WordSetItemName(0, 149);
	goto label103;

label102: ;
	StackPush(0x4004);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label104;
	WordSetItemName(0, 156);
	goto label103;

label104: ;
	StackPush(0x4004);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label105;
	WordSetItemName(0, 151);
	goto label103;

label105: ;
	StackPush(0x4004);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label103;
	WordSetItemName(0, 150);

label103: ;
	MsgActor(1024, 62, 0, 0);
	MsgWaitAdvance();
	MsgWinCloseAll();
	StackPush(0x802F);
	StackPushConst(49);
	StackCmp(1);
	if (255) goto label106;

	Movement m[] = { //1
		TurnUp, 1,
	};

	goto label107;

label106: ;
	StackPush(0x802F);
	StackPushConst(50);
	StackCmp(1);
	if (255) goto label107;

	Movement m[] = { //1
		TurnLeft, 1,
	};


label107: ;
	ActorCmdWait();
	PVPlay(504, 0);
	MsgActorEx(1024, 71, 1, 0, 0);
	PVWait();
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(5);
	goto label108;

label101: ;
	StackPushFlag(6);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(10);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label109;
	StackPush(0x4009);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label110;
	WorkGet(0x8030, 0x4005);
	goto label111;

label110: ;
	StackPush(0x4009);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label112;
	WorkGet(0x8030, 0x4006);
	goto label111;

label112: ;
	StackPush(0x4009);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label113;
	WorkGet(0x8030, 0x4007);
	goto label111;

label113: ;
	StackPush(0x4009);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label111;
	WorkGet(0x8030, 0x4008);

label111: ;
	StackPush(0x8030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label114;
	WordSetItemName(0, 149);
	goto label115;

label114: ;
	StackPush(0x8030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label116;
	WordSetItemName(0, 156);
	goto label115;

label116: ;
	StackPush(0x8030);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label117;
	WordSetItemName(0, 151);
	goto label115;

label117: ;
	StackPush(0x8030);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label115;
	WordSetItemName(0, 150);

label115: ;
	MsgSystem(78, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label118;
	MsgWinCloseAll();
	StackPush(0x4009);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label119;
	WorkGet(0x8030, 0x4005);
	goto label120;

label119: ;
	StackPush(0x4009);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label121;
	WorkGet(0x8030, 0x4006);
	goto label120;

label121: ;
	StackPush(0x4009);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label122;
	WorkGet(0x8030, 0x4007);
	goto label120;

label122: ;
	StackPush(0x4009);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label120;
	WorkGet(0x8030, 0x4008);

label120: ;
	StackPush(0x4004);
	StackPush(0x8030);
	StackCmp(1);
	if (255) goto label123;
	StackPush(0x802F);
	StackPushConst(49);
	StackCmp(1);
	if (255) goto label124;

	Movement m[] = { //1
		TurnUp, 1,
	};

	goto label125;

label124: ;
	StackPush(0x802F);
	StackPushConst(50);
	StackCmp(1);
	if (255) goto label125;

	Movement m[] = { //1
		TurnLeft, 1,
	};


label125: ;
	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //6
		MusicNote, 1,
	};


	Movement m[] = { //1
		MusicNote, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 64, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(14);
	goto label126;

label123: ;
	StackPush(0x802F);
	StackPushConst(49);
	StackCmp(1);
	if (255) goto label127;

	Movement m[] = { //1
		TurnUp, 1,
	};

	goto label128;

label127: ;
	StackPush(0x802F);
	StackPushConst(50);
	StackCmp(1);
	if (255) goto label128;

	Movement m[] = { //1
		TurnLeft, 1,
	};


label128: ;
	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //6
		QuestionMark, 1,
	};


	Movement m[] = { //1
		QuestionMark, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 65, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label126: ;
	FlagSet(10);
	WorkAdd(0x4009, 1);
	goto label129;

label118: ;
	MsgWinCloseAll();

label129: ;
	goto label108;

label109: ;
	StackPushFlag(10);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label130;
	StackPushFlag(14);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label131;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 64, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label132;

label131: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 65, 0, 0);
	InputWaitLast();
	MsgActorClose();

label132: ;
	goto label108;

label130: ;
	StackPush(0x4004);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label133;
	WordSetItemName(0, 149);
	goto label134;

label133: ;
	StackPush(0x4004);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label135;
	WordSetItemName(0, 156);
	goto label134;

label135: ;
	StackPush(0x4004);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label136;
	WordSetItemName(0, 151);
	goto label134;

label136: ;
	StackPush(0x4004);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label134;
	WordSetItemName(0, 150);

label134: ;
	MsgActor(1024, 62, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label108: ;
	goto label137;

label100: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 63, 0, 0);
	InputWaitLast();
	MsgActorClose();

label137: ;
	WorkSetConst(0x8030, 0);
	WorkSetConst(0x802F, 0);
	WorkSetConst(0x802E, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	PlayerGetGPos(0x8025, 0x8026);
	WorkSetConst(0x8027, 0);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(1);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label138;
	StackPushFlag(2);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label139;
	Random(0x4001, 4);
	StackPush(0x4001);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label140;
	WordSetItemName(0, 149);
	goto label141;

label140: ;
	StackPush(0x4001);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label142;
	WordSetItemName(0, 156);
	goto label141;

label142: ;
	StackPush(0x4001);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label143;
	WordSetItemName(0, 151);
	goto label141;

label143: ;
	StackPush(0x4001);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label141;
	WordSetItemName(0, 150);

label141: ;
	MsgActor(1024, 66, 0, 0);
	MsgWaitAdvance();
	MsgWinCloseAll();
	StackPush(0x8026);
	StackPushConst(52);
	StackCmp(1);
	if (255) goto label144;

	Movement m[] = { //3
		TurnUp, 1,
	};

	goto label145;

label144: ;
	StackPush(0x8026);
	StackPushConst(53);
	StackCmp(1);
	if (255) goto label145;

	Movement m[] = { //3
		TurnLeft, 1,
	};


label145: ;
	ActorCmdWait();
	PVPlay(572, 0);
	MsgActorEx(1024, 70, 3, 0, 0);
	PVWait();
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(2);
	goto label146;

label139: ;
	StackPushFlag(6);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(7);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label147;
	StackPush(0x4009);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label148;
	WorkGet(0x8027, 0x4005);
	goto label149;

label148: ;
	StackPush(0x4009);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label150;
	WorkGet(0x8027, 0x4006);
	goto label149;

label150: ;
	StackPush(0x4009);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label151;
	WorkGet(0x8027, 0x4007);
	goto label149;

label151: ;
	StackPush(0x4009);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label149;
	WorkGet(0x8027, 0x4008);

label149: ;
	StackPush(0x8027);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label152;
	WordSetItemName(0, 149);
	goto label153;

label152: ;
	StackPush(0x8027);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label154;
	WordSetItemName(0, 156);
	goto label153;

label154: ;
	StackPush(0x8027);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label155;
	WordSetItemName(0, 151);
	goto label153;

label155: ;
	StackPush(0x8027);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label153;
	WordSetItemName(0, 150);

label153: ;
	MsgSystem(78, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label156;
	MsgWinCloseAll();
	StackPush(0x4009);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label157;
	WorkGet(0x8027, 0x4005);
	goto label158;

label157: ;
	StackPush(0x4009);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label159;
	WorkGet(0x8027, 0x4006);
	goto label158;

label159: ;
	StackPush(0x4009);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label160;
	WorkGet(0x8027, 0x4007);
	goto label158;

label160: ;
	StackPush(0x4009);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label158;
	WorkGet(0x8027, 0x4008);

label158: ;
	StackPush(0x4001);
	StackPush(0x8027);
	StackCmp(1);
	if (255) goto label161;
	StackPush(0x8026);
	StackPushConst(52);
	StackCmp(1);
	if (255) goto label162;

	Movement m[] = { //3
		TurnUp, 1,
	};

	goto label163;

label162: ;
	StackPush(0x8026);
	StackPushConst(53);
	StackCmp(1);
	if (255) goto label163;

	Movement m[] = { //3
		TurnLeft, 1,
	};


label163: ;
	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //5
		MusicNote, 1,
	};


	Movement m[] = { //3
		MusicNote, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 68, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(11);
	goto label164;

label161: ;
	StackPush(0x8026);
	StackPushConst(52);
	StackCmp(1);
	if (255) goto label165;

	Movement m[] = { //3
		TurnUp, 1,
	};

	goto label166;

label165: ;
	StackPush(0x8026);
	StackPushConst(53);
	StackCmp(1);
	if (255) goto label166;

	Movement m[] = { //3
		TurnLeft, 1,
	};


label166: ;
	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //5
		QuestionMark, 1,
	};


	Movement m[] = { //3
		QuestionMark, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 69, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label164: ;
	FlagSet(7);
	WorkAdd(0x4009, 1);
	goto label167;

label156: ;
	MsgWinCloseAll();

label167: ;
	goto label146;

label147: ;
	StackPushFlag(7);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label168;
	StackPushFlag(11);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label169;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 68, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label170;

label169: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 69, 0, 0);
	InputWaitLast();
	MsgActorClose();

label170: ;
	goto label146;

label168: ;
	StackPush(0x4001);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label171;
	WordSetItemName(0, 149);
	goto label172;

label171: ;
	StackPush(0x4001);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label173;
	WordSetItemName(0, 156);
	goto label172;

label173: ;
	StackPush(0x4001);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label174;
	WordSetItemName(0, 151);
	goto label172;

label174: ;
	StackPush(0x4001);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label172;
	WordSetItemName(0, 150);

label172: ;
	MsgActor(1024, 66, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label146: ;
	goto label175;

label138: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 67, 0, 0);
	InputWaitLast();
	MsgActorClose();

label175: ;
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8025, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	WorkSetConst(0x802B, 0);
	WorkSetConst(0x802C, 0);
	PlayerGetGPos(0x802B, 0x802C);
	WorkSetConst(0x802D, 0);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(1);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label176;
	StackPushFlag(4);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label177;
	Random(0x4003, 4);
	StackPush(0x4003);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label178;
	WordSetItemName(0, 149);
	goto label179;

label178: ;
	StackPush(0x4003);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label180;
	WordSetItemName(0, 156);
	goto label179;

label180: ;
	StackPush(0x4003);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label181;
	WordSetItemName(0, 151);
	goto label179;

label181: ;
	StackPush(0x4003);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label179;
	WordSetItemName(0, 150);

label179: ;
	MsgActor(1024, 58, 0, 0);
	MsgWaitAdvance();
	MsgWinCloseAll();
	StackPush(0x802C);
	StackPushConst(52);
	StackCmp(1);
	if (255) goto label182;

	Movement m[] = { //2
		TurnUp, 1,
	};

	goto label183;

label182: ;
	StackPush(0x802C);
	StackPushConst(53);
	StackCmp(1);
	if (255) goto label183;

	Movement m[] = { //2
		TurnLeft, 1,
	};


label183: ;
	ActorCmdWait();
	PVPlay(552, 0);
	MsgActorEx(1024, 73, 2, 0, 0);
	PVWait();
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(4);
	goto label184;

label177: ;
	StackPushFlag(6);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(9);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label185;
	StackPush(0x4009);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label186;
	WorkGet(0x802D, 0x4005);
	goto label187;

label186: ;
	StackPush(0x4009);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label188;
	WorkGet(0x802D, 0x4006);
	goto label187;

label188: ;
	StackPush(0x4009);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label189;
	WorkGet(0x802D, 0x4007);
	goto label187;

label189: ;
	StackPush(0x4009);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label187;
	WorkGet(0x802D, 0x4008);

label187: ;
	StackPush(0x802D);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label190;
	WordSetItemName(0, 149);
	goto label191;

label190: ;
	StackPush(0x802D);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label192;
	WordSetItemName(0, 156);
	goto label191;

label192: ;
	StackPush(0x802D);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label193;
	WordSetItemName(0, 151);
	goto label191;

label193: ;
	StackPush(0x802D);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label191;
	WordSetItemName(0, 150);

label191: ;
	MsgSystem(78, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label194;
	MsgWinCloseAll();
	StackPush(0x4009);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label195;
	WorkGet(0x802D, 0x4005);
	goto label196;

label195: ;
	StackPush(0x4009);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label197;
	WorkGet(0x802D, 0x4006);
	goto label196;

label197: ;
	StackPush(0x4009);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label198;
	WorkGet(0x802D, 0x4007);
	goto label196;

label198: ;
	StackPush(0x4009);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label196;
	WorkGet(0x802D, 0x4008);

label196: ;
	StackPush(0x4003);
	StackPush(0x802D);
	StackCmp(1);
	if (255) goto label199;
	StackPush(0x802C);
	StackPushConst(52);
	StackCmp(1);
	if (255) goto label200;

	Movement m[] = { //2
		TurnUp, 1,
	};

	goto label201;

label200: ;
	StackPush(0x802C);
	StackPushConst(53);
	StackCmp(1);
	if (255) goto label201;

	Movement m[] = { //2
		TurnLeft, 1,
	};


label201: ;
	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //7
		MusicNote, 1,
	};


	Movement m[] = { //2
		MusicNote, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 60, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(13);
	goto label202;

label199: ;
	StackPush(0x802C);
	StackPushConst(52);
	StackCmp(1);
	if (255) goto label203;

	Movement m[] = { //2
		TurnUp, 1,
	};

	goto label204;

label203: ;
	StackPush(0x802C);
	StackPushConst(53);
	StackCmp(1);
	if (255) goto label204;

	Movement m[] = { //2
		TurnLeft, 1,
	};


label204: ;
	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //7
		QuestionMark, 1,
	};


	Movement m[] = { //2
		QuestionMark, 1,
	};

	ActorCmdWait();
	MsgActor(1024, 61, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label202: ;
	FlagSet(9);
	WorkAdd(0x4009, 1);
	goto label205;

label194: ;
	MsgWinCloseAll();

label205: ;
	goto label184;

label185: ;
	StackPushFlag(9);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label206;
	StackPushFlag(13);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label207;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 60, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label208;

label207: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 61, 0, 0);
	InputWaitLast();
	MsgActorClose();

label208: ;
	goto label184;

label206: ;
	StackPush(0x4003);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label209;
	WordSetItemName(0, 149);
	goto label210;

label209: ;
	StackPush(0x4003);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label211;
	WordSetItemName(0, 156);
	goto label210;

label211: ;
	StackPush(0x4003);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label212;
	WordSetItemName(0, 151);
	goto label210;

label212: ;
	StackPush(0x4003);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label210;
	WordSetItemName(0, 150);

label210: ;
	MsgActor(1024, 58, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label184: ;
	goto label213;

label176: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 59, 0, 0);
	InputWaitLast();
	MsgActorClose();

label213: ;
	WorkSetConst(0x802D, 0);
	WorkSetConst(0x802C, 0);
	WorkSetConst(0x802B, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(25, 0);
	MsgActor(1024, 72, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(504, 0);
	MsgActor(1024, 71, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(572, 0);
	MsgActor(1024, 70, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(552, 0);
	MsgActor(1024, 73, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence17()
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

void Sequence18()
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

void Sequence19()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 15, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	WorkAdd(0x8022, 1);
	WordSetNumber(0, 0x8022, 1);
	MsgActorEx(1024, 43, 14, 2, 0);
	ListMenuAdd(74, 0xFFFF, 0);
	ListMenuAdd(75, 0xFFFF, 1);
	ListMenuAdd(76, 0xFFFF, 2);
	ListMenuAdd(77, 0xFFFF, 3);
	ListMenuShow();
	VMReturn();
}
