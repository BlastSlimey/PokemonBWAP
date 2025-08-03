#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(11, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	CMD_13d();
	FlagReset(658);
	ActorAdd(2);
	BGMPlayPush(1087);
	WordSetPlayerName(0);

	Movement m[] = { //2
		WalkUp, 5,
	};

	ActorCmdWait();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	WorkCmpConst(0x8021, 206);
	if (1) goto label0;
	goto label1;

label0: ;

	Movement m[] = { //255
		LookDown, 1,
		Exclaimation, 1,
		WalkDown, 2,
	};

	ActorCmdWait();
	goto label2;

label1: ;
	WorkCmpConst(0x8021, 207);
	if (1) goto label3;
	goto label4;

label3: ;

	Movement m[] = { //255
		LookDown, 1,
		Exclaimation, 1,
		WalkDown, 1,
	};

	ActorCmdWait();
	goto label2;

label4: ;
	WorkCmpConst(0x8021, 208);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //255
		LookDown, 1,
		Exclaimation, 1,
	};

	ActorCmdWait();
	goto label2;

label6: ;

	Movement m[] = { //255
		LookDown, 1,
		Exclaimation, 1,
	};

	ActorCmdWait();

label2: ;
	MsgActorEx(1024, 0, 2, 0, 0);
	MsgActorClose();

	Movement m[] = { //2
		WalkUp, 1,
	};

	ActorCmdWait();
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label7;
	CallTrainerBattle(539, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	ActorAdd(1);
	CallTrainerBattleEnd();
	goto label9;

label8: ;
	FlagSet(658);
	CallTrainerLose();

label9: ;
	goto label10;

label7: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	CallTrainerBattle(540, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	ActorAdd(1);
	CallTrainerBattleEnd();
	goto label13;

label12: ;
	FlagSet(658);
	CallTrainerLose();

label13: ;
	goto label10;

label11: ;
	CallTrainerBattle(541, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label14;
	ActorAdd(1);
	CallTrainerBattleEnd();
	goto label10;

label14: ;
	FlagSet(658);
	CallTrainerLose();

label10: ;
	MsgInfo(1, 1);
	MsgWinCloseAll();

	Movement m[] = { //255
		Exclaimation, 1,
		TurnUp, 1,
	};

	CMD_248(1001, 30);
	ActorCmdWait();
	EVCameraInit();
	EVCameraUnbind();
	EVCameraMoveTo(9688, 0, 0x115000, 0x8E7000, 0, 0xCAE000, 30);
	EVCameraWait();
	BGMPlay(1101);

	Movement m[] = { //1
		0x64, 1,
	};

	ActorCmdWait();
	VMSleep(22);
	ActorJumpToGPos(1, 142, 0, 206);
	VMSleep(14);

	Movement m[] = { //1
		WalkDown, 3,
		TurnRight, 1,
	};

	EVCameraMoveToDefault(50);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //2
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 2, 6, 0);
	MsgActorClose();
	MsgActorEx(1024, 3, 1, 0, 0);
	MsgActorClose();
	MsgActorEx(1024, 4, 2, 6, 0);
	MsgActorClose();
	MsgActorEx(1024, 5, 1, 0, 0);
	MsgActorClose();

	Movement m[] = { //1
		WalkRight, 1,
		Wait8, 3,
	};

	ActorCmdWait();

	Movement m[] = { //1
		WalkUp, 1,
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 6, 1, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1A5);
	WordSetPlayerName(0);
	MsgActorEx(1024, 7, 1, 0, 0);
	MsgActorClose();

	Movement m[] = { //1
		WalkDown, 9,
	};


	Movement m[] = { //255
		TurnDown, 1,
	};


	Movement m[] = { //2
		TurnDown, 1,
	};

	ActorCmdWait();
	BGMChangeMap();
	MsgActorEx(1024, 8, 2, 6, 0);
	MsgActorClose();

	Movement m[] = { //2
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 9, 2, 6, 0);
	MsgActorClose();

	Movement m[] = { //2
		WalkLeft, 1,
		WalkUp, 2,
		WalkRight, 7,
	};

	VMSleep(32);

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	ActorDelete(1);
	ActorDelete(2);
	FlagSet(658);
	WorkSetConst(0x40B4, 2);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	WordSetPlayerName(0);
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8020, 0);
	TrainerCardHasBadge(0x8020, 5);
	if (0x8020 == 0)
	{
		MsgActor(1024, 12, 0, 0);
		InputWaitLast();
		FadeEx(3, 0, 16, 3);
		FadeExWait();
		ActorDelete(3);
		FlagSet(0x17D);
		FadeEx(3, 16, 0, 3);
		FadeExWait();
		MsgActorClose();
	}
	else
	{
		MsgActor(1024, 10, 0, 0);
		InputWaitLast();
		MsgActorClose();
	}
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
