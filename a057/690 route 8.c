#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
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
	WorkSet(0x8002, 258);
	WorkSet(0x8003, 9);
	WorkSet(0x8004, 10);
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

void Sequence1()
{
	ActorPauseAll();
	RTCGetDayPart(0x8010);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(2764);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActor(1024, 11, 0, 0);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActor(1024, 12, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label2;

label1: ;
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	MsgActor(1024, 13, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label2;

label3: ;
	StackPush(0x8010);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label4;
	MsgActor(1024, 14, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label2;

label4: ;
	MsgActor(1024, 15, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);

label2: ;
	FlagSet(2764);
	MsgActor(1024, 16, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label5;

label0: ;
	MsgActor(1024, 16, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label5: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(17, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(20, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(19, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8020, 0);
	ItemGetCount(0x0268, 0x8020);
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(4);
	if (255) goto label_checkdark; // jump if not collected
	goto label_stonecollected;
label_checkdark: ;
	ItemGetCount(0x0269, 0x8020);
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(4);
	if (255) goto label_nostone; // jump if not collected
	goto label_stonecollected;
label_nostone: ;
	StackPushFlag(300);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	MsgActorEx(1024, 6, 9, 0, 0);
	goto label7;
label6: ;
	MsgActorEx(1024, 5, 9, 0, 0);
label7: ;
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
label_stonecollected: ;
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PlayerGetGPos(0x8020, 0x8021);
	StackPush(0x8020);
	StackPushConst(241);
	StackCmp(1);
	if (255) goto label_notleft;
	goto label_left;
label_notleft: ;
	StackPush(0x8021);
	StackPushConst(178);
	StackCmp(1);
	if (255) goto label_notup;
	goto label_up;
label_notup: ;
	StackPush(0x8021);
	StackPushConst(179);
	StackCmp(1);
	if (255) goto label_notupleft;
	goto label_upleft;
label_notupleft: ;
	StackPush(0x8021);
	StackPushConst(180);
	StackCmp(1);
	if (255) goto label_notmiddle;
	goto label_middle;
label_notmiddle: ;
	StackPush(0x8021);
	StackPushConst(181);
	StackCmp(1);
	if (255) goto label_down;
	goto label_leftdown;
label_down: ;
	Movement m[] = { //9
		TurnDown, 1,
	};
	Movement m[] = { //10
		TurnDown, 1,
	};
	ActorCmdWait();
	goto label_speak;
label_leftdown: ;
	Movement m[] = { //9
		TurnDown, 1,
	};
	Movement m[] = { //10
		TurnLeft, 1,
	};
	ActorCmdWait();
	goto label_speak;
label_middle: ;
	goto label_speak;
label_upleft: ;
	Movement m[] = { //9
		TurnUp, 1,
	};
	Movement m[] = { //13
		TurnLeft, 1,
	};
	ActorCmdWait();
	goto label_speak;
label_up: ;
	Movement m[] = { //9
		TurnUp, 1,
	};
	Movement m[] = { //13
		TurnUp, 1,
	};
	ActorCmdWait();
	goto label_speak;
label_left: ;
	Movement m[] = { //9
		TurnLeft, 1,
	};
	Movement m[] = { //10
		TurnLeft, 1,
	};
	Movement m[] = { //13
		TurnLeft, 1,
	};
	ActorCmdWait();
label_speak: ;
	MsgActorEx(1024, 21, 9, 0, 0);
	MsgWinCloseAll();
	FadeEx(3, 0, 16, 3);
	FadeExWait();
	FlagSet(0x17E);
	ActorDelete(9);
	ActorDelete(10);
	ActorDelete(13);
	FadeEx(3, 16, 0, 3);
	FadeExWait();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	StackPushFlag(300);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	MsgActorEx(1024, 8, 10, 0, 0);
	goto label9;

label8: ;
	MsgActorEx(1024, 7, 10, 0, 0);

label9: ;
	InputWaitLast();
	MsgWinCloseAll();
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
	ActorNew(234, 180, 3, 251, 134, 0);
	WordSetPlayerName(0);
	MsgInfo(0, 2);
	MsgWinCloseAll();

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	BGMPlayPush(1088);

	Movement m[] = { //251
		WalkRight, 7,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 251, 4, 0);
	MsgWinCloseAll();
	Routine0();
	WordSetPlayerName(0);
	MsgActorEx(1024, 2, 251, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkRight, 1,
	};

	ActorCmdWait();
	VMSleep(8);
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1A8);

	Movement m[] = { //251
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //251
		0x64, 1,
	};

	ActorCmdWait();
	VMSleep(8);

	Movement m[] = { //251
		TurnRight, 1,
	};

	ActorCmdWait();
	WordSetPlayerName(0);
	MsgActorEx(1024, 3, 251, 4, 0);
	MsgWinCloseAll();
	VMSleep(20);
	WordSetPlayerName(0);
	MsgActorEx(1024, 4, 251, 4, 0);
	MsgWinCloseAll();

	Movement m[] = { //251
		WalkLeft, 8,
	};

	ActorCmdWait();
	ActorDelete(251);
	WorkSetConst(0x40CB, 1);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	StackPush(0x4030);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	CallTrainerBattle(494, 0, 0);
	goto label11;

label10: ;
	StackPush(0x4030);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	CallTrainerBattle(495, 0, 0);
	goto label11;

label12: ;
	CallTrainerBattle(496, 0, 0);

label11: ;
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label13;
	CallTrainerBattleEnd();
	goto label14;

label13: ;
	CallTrainerLose();

label14: ;
	VMReturn();
}
