#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgActorEx(1024, 5, 0, 1, 0);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgActorEx(1024, 6, 1, 1, 0);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(12, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x40BE);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActorEx(1024, 2, 2, 3, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x197);
	MsgActorEx(1024, 4, 2, 3, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x40BE, 1);
	goto label1;

label0: ;
	MsgActorEx(1024, 4, 2, 3, 0);
	InputWaitLast();
	MsgWinCloseAll();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	MsgActorEx(1024, 0, 2, 3, 1);
	MsgActorClose();
	WorkCmpConst(0x8020, 14);
	if (1) goto label2;
	goto label3;

label2: ;

	Movement m[] = { //255
		Exclaimation, 1,
		TurnLeft, 1,
	};


	Movement m[] = { //2
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label4;

label3: ;
	WorkCmpConst(0x8020, 15);
	if (1) goto label5;
	goto label6;

label5: ;

	Movement m[] = { //255
		Exclaimation, 1,
		TurnLeft, 1,
	};


	Movement m[] = { //2
		WalkRight, 1,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label4;

label6: ;
	WorkCmpConst(0x8020, 16);
	if (1) goto label7;
	goto label8;

label7: ;

	Movement m[] = { //255
		Exclaimation, 1,
		TurnLeft, 1,
	};


	Movement m[] = { //2
		WalkRight, 2,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label4;

label8: ;
	WorkCmpConst(0x8020, 17);
	if (1) goto label9;
	goto label10;

label9: ;

	Movement m[] = { //255
		Exclaimation, 1,
		TurnLeft, 1,
	};


	Movement m[] = { //2
		WalkRight, 3,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label4;

label10: ;
	WorkCmpConst(0x8020, 18);
	if (1) goto label11;
	goto label4;

label11: ;

	Movement m[] = { //255
		Exclaimation, 1,
		TurnLeft, 1,
	};


	Movement m[] = { //2
		WalkRight, 4,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label4;

label4: ;
	MsgActorEx(1024, 1, 2, 3, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 397);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	MsgActorEx(1024, 3, 2, 3, 0);
	MsgWinCloseAll();
	WorkCmpConst(0x8020, 15);
	if (1) goto label12;
	goto label13;

label12: ;

	Movement m[] = { //2
		WalkLeft, 1,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label14;

label13: ;
	WorkCmpConst(0x8020, 16);
	if (1) goto label15;
	goto label16;

label15: ;

	Movement m[] = { //2
		WalkLeft, 2,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label14;

label16: ;
	WorkCmpConst(0x8020, 17);
	if (1) goto label17;
	goto label18;

label17: ;

	Movement m[] = { //2
		WalkLeft, 3,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label14;

label18: ;
	WorkCmpConst(0x8020, 18);
	if (1) goto label19;
	goto label14;

label19: ;

	Movement m[] = { //2
		WalkLeft, 4,
		TurnRight, 1,
	};

	ActorCmdWait();
	goto label14;

label14: ;
	WorkSetConst(0x40BE, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x40C4);
	StackPushConst(1);
	StackCmp(3);
	if (255) goto label20;
	MsgActorEx(1024, 7, 3, 3, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label21;

label20: ;
	MsgActorEx(1024, 8, 3, 3, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label22;
	MsgActorEx(1024, 9, 3, 3, 0);
	MsgWinCloseAll();
	Routine0();
	MsgActorEx(1024, 11, 3, 3, 0);
	MsgWinCloseAll();
	FadeEx(3, 0, 16, 2);
	FadeExWait();
	ActorDelete(3);
	FadeEx(3, 16, 0, 2);
	FadeExWait();
	FlagSet(700);
	FlagReset(702);
	StackPush(0x40C4);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label23;
	WorkSetConst(0x40C4, 3);
	goto label24;

label23: ;
	StackPush(0x40C4);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label24;
	WorkSetConst(0x40C4, 4);

label24: ;
	goto label21;

label22: ;
	MsgActorEx(1024, 10, 3, 3, 0);
	InputWaitLast();
	MsgWinCloseAll();

label21: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	CallTrainerBattle(602, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label25;
	CallTrainerBattleEnd();
	goto label26;

label25: ;
	CallTrainerLose();

label26: ;
	VMReturn();
}
