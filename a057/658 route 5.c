#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	CMD_13d();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	FlagReset(566);
	ActorAdd(10);
	BGMPlayPush(1087);
	StackPush(0x8021);
	StackPushConst(437);
	StackCmp(1);
	if (255) goto label0;

	Movement m[] = { //10
		WalkLeft, 2,
		WalkUp, 1,
		WalkLeft, 3,
	};

	goto label1;

label0: ;
	StackPush(0x8021);
	StackPushConst(438);
	StackCmp(1);
	if (255) goto label2;

	Movement m[] = { //10
		WalkLeft, 5,
	};

	goto label1;

label2: ;

	Movement m[] = { //10
		WalkLeft, 2,
		WalkDown, 1,
		WalkLeft, 3,
	};


label1: ;
	VMSleep(16);
	StackPush(0x8021);
	StackPushConst(440);
	StackCmp(1);
	if (255) goto label3;

	Movement m[] = { //255
		WalkUp, 1,
		TurnRight, 1,
	};

	goto label4;

label3: ;
	StackPush(0x8021);
	StackPushConst(441);
	StackCmp(1);
	if (255) goto label5;

	Movement m[] = { //255
		WalkUp, 2,
		TurnRight, 1,
	};

	goto label4;

label5: ;

	Movement m[] = { //255
		TurnRight, 1,
	};


label4: ;
	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 0, 10, 0, 0);
	MsgWinCloseAll();
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	CallTrainerBattle(90, 0, 0);
	goto label7;

label6: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	CallTrainerBattle(91, 0, 0);
	goto label7;

label8: ;
	CallTrainerBattle(92, 0, 0);

label7: ;
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	CallTrainerBattleEnd();
	goto label10;

label9: ;
	FlagSet(566);
	CallTrainerLose();

label10: ;
	MsgActorEx(1024, 1, 10, 0, 0);
	MsgWinCloseAll();
	FlagReset(567);
	ActorAdd(14);
	PlayerGetGPos(0x8020, 0x8021);
	ActorSetGPos(14, 363, 0, 0x8021, 3);

	Movement m[] = { //14
		WalkRight, 7,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 14, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //14
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 3, 14, 0, 0);
	MsgWinCloseAll();
	PlayerGetExState(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	PlayerSetSpecialSequence(1);

label11: ;
	StackPush(0x8021);
	StackPushConst(437);
	StackCmp(1);
	if (255) goto label12;

	Movement m[] = { //255
		WalkLeft, 14,
	};


	Movement m[] = { //10
		Wait2, 1,
		WalkLeft, 14,
	};


	Movement m[] = { //14
		WalkLeft, 13,
	};

	VMSleep(100);
	goto label13;

label12: ;
	StackPush(0x8021);
	StackPushConst(438);
	StackCmp(1);
	if (255) goto label14;

	Movement m[] = { //255
		WalkLeft, 9,
		WalkUp, 1,
		WalkLeft, 5,
	};


	Movement m[] = { //10
		Wait2, 1,
		WalkLeft, 10,
		WalkUp, 1,
		WalkLeft, 4,
	};


	Movement m[] = { //14
		WalkLeft, 7,
		WalkUp, 1,
		WalkLeft, 6,
	};

	VMSleep(108);
	goto label13;

label14: ;

	Movement m[] = { //255
		WalkLeft, 9,
		WalkUp, 2,
		WalkLeft, 5,
	};


	Movement m[] = { //10
		Wait2, 1,
		WalkLeft, 10,
		WalkUp, 2,
		WalkLeft, 4,
	};


	Movement m[] = { //14
		WalkLeft, 7,
		WalkUp, 2,
		WalkLeft, 6,
	};

	VMSleep(116);

label13: ;

	Movement m[] = { //11
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //11
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgInfo(4, 1);
	MsgWinCloseAll();
	BGMPlay(1101);

	Movement m[] = { //14
		TurnUp, 1,
	};


	Movement m[] = { //10
		TurnUp, 1,
	};


	Movement m[] = { //255
		TurnUp, 1,
	};

	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x1668000, 0, 0x1B38000, 30);

	Movement m[] = { //11
		WalkDown, 1,
		WalkLeft, 2,
		TurnDown, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	MsgActorEx(1024, 5, 11, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //10
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 10, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //14
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 7, 14, 4, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 8, 10, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		WalkRight, 2,
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //10
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 9, 11, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 10, 10, 6, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 11, 11, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //10
		QuestionMark, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 12, 10, 6, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 13, 11, 5, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 14, 11, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 15, 11, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		WalkLeft, 2,
		TurnRight, 1,
	};


	Movement m[] = { //12
		WalkDown, 2,
		WalkLeft, 1,
		TurnDown, 1,
	};


	Movement m[] = { //13
		Wait2, 1,
		WalkDown, 3,
	};

	VMSleep(16);

	Movement m[] = { //14
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 16, 10, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //10
		TurnLeft, 1,
	};

	ActorCmdWait();
	SEPlay(1391);
	WordSetPlayerName(0);
	MsgSystem(17, 0);
	SEWait();
	MsgWaitAdvance();
	MsgWinCloseAll();
	PokePartyRecoverAll();

	Movement m[] = { //10
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 10, 6, 0);
	MsgWinCloseAll();
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label15;
	CallTrainerMultiBattle(90, 401, 402, 0);
	goto label16;

label15: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label17;
	CallTrainerMultiBattle(91, 401, 402, 0);
	goto label16;

label17: ;
	CallTrainerMultiBattle(92, 401, 402, 0);

label16: ;
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label18;
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x1668000, 0, 0x1B38000, 1);
	EVCameraWait();
	PokePartyGetCount(0x8008, 2);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label19;
	PokePartyRecoverAll();

label19: ;
	CallTrainerBattleEnd();
	goto label20;

label18: ;
	FlagSet(566);
	FlagSet(567);
	CallTrainerLose();

label20: ;
	MsgActorEx(1024, 19, 11, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //11
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 20, 11, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //14
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 24, 14, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //14
		WalkLeft, 8,
	};

	ActorCmdWait();
	EVCameraMoveToDefault(30);
	VMSleep(15);

	Movement m[] = { //10
		TurnDown, 1,
	};

	ActorCmdWait();
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	MsgActorEx(1024, 25, 10, 6, 0);
	MsgWinCloseAll();

	Movement m[] = { //10
		MediumFastWalkDown, 1,
		MediumFastWalkLeft, 10,
	};

	ActorCmdWait();
	BGMChangeMap();
	ActorSetGPos(10, 336, 0, 431, 2);
	ActorSetGPos(14, 335, 0, 432, 2);
	WorkSetConst(0x4093, 2);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
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
	MsgActor(1024, 21, 0, 0);
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
	MsgActor(1024, 22, 0, 0);
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
	MsgActor(1024, 23, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetExState(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label21;
	PlayerSetSpecialSequence(1);

label21: ;
	PlayerGetGPos(0x8022, 0x8023);
	StackPush(0x8023);
	StackPushConst(435);
	StackCmp(1);
	if (255) goto label22;

	Movement m[] = { //10
		LookDown, 1,
		Exclaimation, 1,
	};

	goto label23;

label22: ;

	Movement m[] = { //10
		LookRight, 1,
		Exclaimation, 1,
	};


label23: ;
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x1508000, 0, 0x1B08000, 20);
	EVCameraWait();
	ActorCmdWait();
	MsgActorEx(1024, 26, 10, 3, 0);
	MsgWinCloseAll();
	StackPush(0x8023);
	StackPushConst(431);
	StackCmp(1);
	if (255) goto label24;

	Movement m[] = { //255
		WalkLeft, 2,
		WalkDown, 2,
		WalkLeft, 1,
	};

	goto label25;

label24: ;
	StackPush(0x8023);
	StackPushConst(432);
	StackCmp(1);
	if (255) goto label26;

	Movement m[] = { //255
		WalkLeft, 2,
		WalkDown, 1,
		WalkLeft, 1,
	};

	goto label25;

label26: ;
	StackPush(0x8023);
	StackPushConst(433);
	StackCmp(1);
	if (255) goto label27;

	Movement m[] = { //255
		WalkLeft, 3,
	};

	goto label25;

label27: ;
	StackPush(0x8023);
	StackPushConst(434);
	StackCmp(1);
	if (255) goto label28;

	Movement m[] = { //255
		WalkLeft, 2,
		WalkUp, 1,
		WalkLeft, 1,
	};

	goto label25;

label28: ;

	Movement m[] = { //255
		WalkLeft, 2,
		WalkUp, 2,
		WalkLeft, 1,
	};


label25: ;
	VMSleep(16);

	Movement m[] = { //10
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 27, 14, 3, 0);
	MsgWinCloseAll();
	EVCameraMoveTo(9688, 0, 0xED000, 0x14E8000, 0, 0x1B08000, 20);

	Movement m[] = { //14
		WalkLeft, 2,
	};

	ActorCmdWait();
	EVCameraWait();

	Movement m[] = { //14
		TurnUp, 1,
	};

	ActorCmdWait();
	SEPlay(1853);
	SEWait();
	VMSleep(30);
	SEPlay(1853);
	VMSleep(15);
	SEPlay(1854);
	SEWait();
	MsgActorEx(1024, 28, 14, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //14
		WalkRight, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 29, 14, 3, 0);
	MsgWinCloseAll();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	Call3DDemo(15, 0);
	FieldOpen();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0xED000, 0x14E8000, 0, 0x1B08000, 1);
	CMD_1ad();
	CMD_1b1();
	VMSleep(16);

	Movement m[] = { //14
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 30, 14, 3, 0);
	MsgWinCloseAll();
	EVCameraMoveToDefault(30);

	Movement m[] = { //14
		WalkRight, 10,
	};

	VMSleep(16);

	Movement m[] = { //10
		TurnRight, 1,
	};


	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	ActorDelete(14);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();

	Movement m[] = { //10
		WalkDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 31, 10, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //10
		WalkLeft, 8,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	ActorDelete(10);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x4093, 3);
	FlagSet(566);
	FlagSet(567);
	FlagReset(565);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();

	Movement m[] = { //15
		LookDown, 1,
	};

	MsgInfo(32, 1);
	MsgWinCloseAll();
	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	PlayerGetGPos(0x8008, 0x8009);
	StackPush(0x8009);
	StackPushConst(433);
	StackCmp(1);
	if (255) goto label29;
	EVCameraMoveTo(9688, 0, 0xED000, 0x14C8000, 0, 0x1AE9000, 30);

	Movement m[] = { //255
		WalkRight, 1,
		WalkUp, 1,
	};

	goto label30;

label29: ;
	StackPush(0x8009);
	StackPushConst(434);
	StackCmp(1);
	if (255) goto label31;
	EVCameraMoveTo(9688, 0, 0xED000, 0x14C8000, 0, 0x1AE9000, 35);

	Movement m[] = { //255
		WalkRight, 1,
		WalkUp, 2,
	};

	goto label30;

label31: ;
	StackPush(0x8009);
	StackPushConst(435);
	StackCmp(1);
	if (255) goto label32;
	EVCameraMoveTo(9688, 0, 0xED000, 0x14C8000, 0, 0x1AE9000, 35);

	Movement m[] = { //255
		WalkRight, 1,
		WalkUp, 3,
	};

	goto label30;

label32: ;
	EVCameraMoveTo(9688, 0, 0xED000, 0x14C8000, 0, 0x1AE9000, 20);

	Movement m[] = { //255
		WalkRight, 1,
		TurnUp, 1,
	};


label30: ;
	ActorCmdWait();
	EVCameraWait();
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x01F7, 0x8020);
	if (0x8020 > 0)
	{
		WorkSetConst(0x40E9, 1);
		MsgActorEx(1024, 54, 15, 0, 0);
	}
	else
	{
		MsgActorEx(1024, 53, 15, 0, 0);
	}
	MsgWinCloseAll();
	EVCameraMoveToDefault(20);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
label_b: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x4093);
	StackPushConst(3);
	StackCmp(4);
	if (255) goto label33;
	MsgActor(1024, 35, 0, 0);
	goto label34;

label33: ;
	MsgActor(1024, 33, 0, 0);

label34: ;
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(49, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(50, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(52, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	StackPush(0x4093);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label35;
	ActorSetGPos(10, 336, 0, 431, 2);
	ActorSetGPos(14, 335, 0, 432, 2);

label35: ;
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(165);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label36;
	TrainerBGMPlayPush(46);
	MsgActor(1024, 36, 0, 0);
	MsgWinCloseAll();
	CallTrainerBattle(46, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label37;
	CallTrainerBattleEnd();
	goto label38;

label37: ;
	CallTrainerLose();

label38: ;
	MsgActor(1024, 37, 0, 0);
	MsgWinCloseAll();
	WorkSetConst(0x8008, 84);
	WorkSetConst(0x8009, 1);
	RTCallGlobal(10456);
	MsgActor(1024, 40, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(165);
	goto label39;

label36: ;
	MsgActor(1024, 40, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label39: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	CMD_13d();
	SEPlay(1351);
	WordSetPlayerName(0);
	WorkSetConst(0x8024, 0);
	PlayerGetDir(0x8024);
	BGMPlay(1097);

	Movement m[] = { //17
		0xB5, 0,
	};

	ActorCmdWait();
	MsgActorEx(1024, 41, 17, 0, 0);
	MsgWinCloseAll();
	ActorSetEyeToEye();
	MsgActorEx(1024, 42, 17, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //17
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 43, 17, 0, 0);
	MsgWinCloseAll();
	ActorSetEyeToEye();
	MsgActorEx(1024, 44, 17, 0, 0);
	MsgWinCloseAll();
	VMSleep(16);
	MsgActorEx(1024, 45, 17, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8024);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label40;

	Movement m[] = { //17
		WalkUp, 1,
		WalkLeft, 9,
	};

	goto label41;

label40: ;

	Movement m[] = { //17
		WalkLeft, 9,
	};


label41: ;
	StackPush(0x8024);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label42;
	VMSleep(24);

	Movement m[] = { //255
		TurnLeft, 1,
	};

	goto label43;

label42: ;
	StackPush(0x8024);
	StackPushConst(2);
	StackCmp(5);
	if (255) goto label43;
	VMSleep(8);

	Movement m[] = { //255
		TurnLeft, 1,
	};


label43: ;
	ActorCmdWait();
	CMD_24b(120);
	ActorDelete(17);
	FlagSet(815);
	FlagReset(816);
	WorkSetConst(0x8024, 0);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 46, 0, 0);
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
	MsgActor(1024, 48, 0, 0);
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
	MsgActor(1024, 47, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
