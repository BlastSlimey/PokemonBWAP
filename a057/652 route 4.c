#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	if (0x40EF == 0)
	{
		MsgActor(1024, 16, 0, 0);
		MsgActorClose();
	}
	else
	{
		MsgActor(1024, 2, 0, 0);
		InputWaitLast();
		MsgActorClose();
	}
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8020, 0x8021);
	ActorGetGPos(8, 0x8022, 0x8023);
	if (0x8020 < 0x8022)
	{
		Movement m[] = { //8
			LookLeft, 1,
			Exclaimation, 1,
			TurnLeft, 1,
		};
		ActorCmdWait();
		Movement m[] = { //255
			TurnRight, 1,
		};
		ActorCmdWait();
	}
	else
	{
		Movement m[] = { //8
			LookRight, 1,
			Exclaimation, 1,
			TurnRight, 1,
		};
		ActorCmdWait();
		Movement m[] = { //255
			TurnLeft, 1,
		};
		ActorCmdWait();
	}
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x1E1, 0x8020);
	if (0x8020 == 0)
	{
		MsgActorEx(1024, 16, 8, 0, 0);
		MsgActorClose();
		Movement m[] = { //255
			WalkDown, 1,
		};
		ActorCmdWait();
		if (0x8021 == 0x8023)
		{
			Movement m[] = { //8
				LookDown, 1,
			};
			ActorCmdWait();
		}
	}
	else
	{
		MsgActorEx(1024, 17, 8, 0, 0);
		MsgActorClose();
		WorkSetConst(0x40EF, 0);
	}
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 9, 0, 0);
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
	MsgActor(1024, 10, 0, 0);
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
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	PlayerGetGPos(0x8022, 0x8023);

	Movement m[] = { //11
		Exclaimation, 1,
	};

	ActorCmdWait();
	BGMPlay(1087);
	WorkCmpConst(0x8022, 427);
	if (1) goto label4;
	goto label5;

label4: ;

	Movement m[] = { //11
		LookLeft, 1,
		WalkLeft, 3,
		TurnDown, 1,
	};

	goto label6;

label5: ;
	WorkCmpConst(0x8022, 428);
	if (1) goto label7;
	goto label8;

label7: ;

	Movement m[] = { //11
		LookDown, 1,
		WalkLeft, 2,
		TurnDown, 1,
	};

	goto label6;

label8: ;
	WorkCmpConst(0x8022, 429);
	if (1) goto label9;
	goto label10;

label9: ;

	Movement m[] = { //11
		LookDown, 1,
		WalkLeft, 1,
		TurnDown, 1,
	};

	goto label6;

label10: ;
	WorkCmpConst(0x8022, 430);
	if (1) goto label11;
	goto label12;

label11: ;

	Movement m[] = { //11
		LookDown, 1,
		TurnDown, 1,
	};

	goto label6;

label12: ;
	WorkCmpConst(0x8022, 431);
	if (1) goto label13;
	goto label14;

label13: ;

	Movement m[] = { //11
		LookDown, 1,
		WalkRight, 1,
		TurnDown, 1,
	};

	goto label6;

label14: ;
	WorkCmpConst(0x8022, 432);
	if (1) goto label15;
	goto label16;

label15: ;

	Movement m[] = { //11
		LookDown, 1,
		WalkRight, 2,
		TurnDown, 1,
	};

	goto label6;

label16: ;
	WorkCmpConst(0x8022, 433);
	if (1) goto label17;
	goto label6;

label17: ;

	Movement m[] = { //11
		LookDown, 1,
		WalkRight, 3,
		TurnDown, 1,
	};

	goto label6;

label6: ;
	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 4, 11, 0, 0);
	MsgWinCloseAll();
	StackPush(0x4030);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label18;
	CallTrainerBattle(405, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label19;
	CallTrainerBattleEnd();
	goto label20;

label19: ;
	CallTrainerLose();

label20: ;
	goto label21;

label18: ;
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label22;
	CallTrainerBattle(403, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label23;
	CallTrainerBattleEnd();
	goto label24;

label23: ;
	CallTrainerLose();

label24: ;
	goto label21;

label22: ;
	CallTrainerBattle(404, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label25;
	CallTrainerBattleEnd();
	goto label21;

label25: ;
	CallTrainerLose();

label21: ;
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label26;
	WordSetPokeSpecies(0, 499);
	goto label27;

label26: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label28;
	WordSetPokeSpecies(0, 502);
	goto label27;

label28: ;
	WordSetPokeSpecies(0, 496);

label27: ;
	MsgActorEx(1024, 5, 11, 0, 0);
	MsgWinCloseAll();
	MEPlay(1327);
	MsgSystem(6, 2);
	MEWait();
	WordSetPlayerName(0);
	MsgSystem(7, 2);
	MsgWinCloseAll();
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CallXTransceiver(4, 330);
	CMD_1ad();
	CMD_1b1();
	MsgActorEx(1024, 8, 11, 0, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8022, 427);
	if (1) goto label29;
	goto label30;

label29: ;

	Movement m[] = { //11
		WalkRight, 3,
		WalkUp, 10,
	};

	ActorCmdWait();
	goto label31;

label30: ;
	WorkCmpConst(0x8022, 428);
	if (1) goto label32;
	goto label33;

label32: ;

	Movement m[] = { //11
		WalkRight, 2,
		WalkUp, 10,
	};

	ActorCmdWait();
	goto label31;

label33: ;
	WorkCmpConst(0x8022, 429);
	if (1) goto label34;
	goto label35;

label34: ;

	Movement m[] = { //11
		WalkRight, 1,
		WalkUp, 10,
	};

	ActorCmdWait();
	goto label31;

label35: ;
	WorkCmpConst(0x8022, 430);
	if (1) goto label36;
	goto label37;

label36: ;

	Movement m[] = { //11
		WalkUp, 10,
	};

	ActorCmdWait();
	goto label31;

label37: ;
	WorkCmpConst(0x8022, 431);
	if (1) goto label38;
	goto label39;

label38: ;

	Movement m[] = { //11
		WalkLeft, 1,
		WalkUp, 10,
	};

	ActorCmdWait();
	goto label31;

label39: ;
	WorkCmpConst(0x8022, 432);
	if (1) goto label40;
	goto label41;

label40: ;

	Movement m[] = { //11
		WalkLeft, 2,
		WalkUp, 10,
	};

	ActorCmdWait();
	goto label31;

label41: ;
	WorkCmpConst(0x8022, 433);
	if (1) goto label42;
	goto label31;

label42: ;

	Movement m[] = { //11
		WalkLeft, 3,
		WalkUp, 10,
	};

	ActorCmdWait();
	goto label31;

label31: ;
	ActorDelete(11);
	BGMChangeMap();
	FlagSet(640);
	WorkSetConst(0x409C, 2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(14, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(15, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(12, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
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

void Sequence10()
{
	VMHalt();
}

void Sequence11()
{
	VMHalt();
}

void Sequence12()
{
	Routine1();
	VMHalt();
}

void Routine0()
{
	VMReturn();
}

void Routine1()
{
	if (0x40EF == 0)
	{
		CMD_1ec(8, 1, 429, 0, 565);
	}
	VMReturn();
}
