#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(279);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	StackPushFlag(2742);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActor(1024, 0, 0, 0);
	MsgWinCloseAll();
	Routine0();
	FlagSet(279);
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(2742);
	goto label2;

label1: ;
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label2: ;
	goto label3;

label0: ;
	StackPushFlag(2742);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	MsgActor(1024, 1, 0, 0);
	MsgWinCloseAll();
	Routine0();
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(2742);
	goto label3;

label4: ;
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label3: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(3, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(4, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(5, 0);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	WorkSetConst(0x8021, 0);
	PlayerGetDir(0x8021);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(321);
	StackPushConst(0);
	StackCmp(1);
	StackPush(0x40D1);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label5;
	FlagSet(321);
	FlagReset(763);
	ActorAdd(25);
	WorkSetConst(0x40D1, 0);
	MsgActorEx(1024, 10, 23, 3, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label6;

label5: ;
	StackPushFlag(320);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	ItemCheckCount(623, 1, 0x8022);
	ItemCheckCount(624, 1, 0x8023);
	ItemCheckCount(625, 1, 0x8024);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	WorkSetConst(0x8025, 1);

label8: ;
	StackPush(0x8023);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	WorkSetConst(0x8026, 1);

label9: ;
	StackPush(0x8024);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	WorkSetConst(0x8027, 1);

label10: ;
	MsgActorEx(1024, 12, 23, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //23
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //24
		TurnUp, 1,
	};

	ActorCmdWait();

	Movement m[] = { //24
		Exclaimation, 1,
	};

	ActorCmdWait();
	PVPlay(278, 0);
	MsgActorEx(1024, 7, 24, 4, 0);
	PVWait();
	MsgWaitAdvance();
	MsgWinCloseAll();
	ActorSetEyeToEye();
	StackPush(0x40D1);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	MsgActorEx(1024, 13, 23, 3, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label12;

label11: ;
	StackPush(0x40D1);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label13;
	MsgActorEx(1024, 14, 23, 3, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label12;

label13: ;
	StackPush(0x40D1);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label12;
	MsgActorEx(1024, 15, 23, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //23
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //24
		MusicNote, 1,
	};

	ActorCmdWait();
	PVPlay(278, 0);
	MsgActorEx(1024, 8, 24, 4, 0);
	PVWait();
	MsgWaitAdvance();
	MsgWinCloseAll();

	Movement m[] = { //24
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //24
		TurnDown, 3,
	};

	VMSleep(16);
	FadeEx(3, 0, 16, 4);
	FadeExWait();
	ActorCmdWait();
	SEPlay(1438);
	VMSleep(32);
	SEPlay(1438);
	VMSleep(32);
	ActorDelete(24);
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label14;
	ActorNew(684, 211, 1, 251, 110, 0);

	Movement m[] = { //255
		TurnRight, 1,
	};


	Movement m[] = { //23
		TurnRight, 1,
	};

	goto label15;

label14: ;
	ActorNew(684, 213, 1, 251, 110, 0);

	Movement m[] = { //255
		TurnDown, 1,
	};


	Movement m[] = { //23
		TurnDown, 1,
	};


label15: ;
	ActorCmdWait();
	FadeEx(3, 16, 0, 4);
	FadeExWait();
	MsgSystem(9, 0);
	MsgWinCloseAll();
	ActorDelete(251);
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2807);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1AE);
	FlagSet(762);

label12: ;
	FlagReset(320);
	goto label6;

label7: ;
	StackPush(0x40D1);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label16;
	MsgActorEx(1024, 10, 23, 3, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label6;

label16: ;
	StackPush(0x40D1);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label17;
	MsgActorEx(1024, 13, 23, 3, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label6;

label17: ;
	StackPush(0x40D1);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label18;
	MsgActorEx(1024, 14, 23, 3, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label6;

label18: ;
	StackPush(0x40D1);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label6;
	MsgActorEx(1024, 16, 23, 3, 0);
	InputWaitLast();
	MsgWinCloseAll();

label6: ;
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(278, 0);
	MsgActorEx(1024, 6, 24, 4, 0);
	PVWait();
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	StackPushFlag(321);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label19;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 20, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label20;

label19: ;
	StackPushFlag(319);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label21;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 22, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label20;

label21: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 21, 26, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	WorkAdd(0x40D1, 1);
	FlagSet(320);
	FlagSet(319);

label20: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	StackPushFlag(321);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label22;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 17, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label23;

label22: ;
	StackPushFlag(318);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label24;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 19, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label23;

label24: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 18, 27, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	WorkAdd(0x40D1, 1);
	FlagSet(320);
	FlagSet(318);

label23: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorDelete(25);
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2807);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1B3);
	FlagSet(763);
	WorkAdd(0x40D1, 1);
	FlagSet(320);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8020, 0);
	Random(0x8020, 27);
	WorkCmpConst(0x8020, 0);
	if (1) goto label25;
	goto label26;

label25: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 65);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label26: ;
	WorkCmpConst(0x8020, 1);
	if (1) goto label28;
	goto label29;

label28: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 66);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label29: ;
	WorkCmpConst(0x8020, 2);
	if (1) goto label30;
	goto label31;

label30: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 67);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label31: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label32;
	goto label33;

label32: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 68);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label33: ;
	WorkCmpConst(0x8020, 4);
	if (1) goto label34;
	goto label35;

label34: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 69);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label35: ;
	WorkCmpConst(0x8020, 5);
	if (1) goto label36;
	goto label37;

label36: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 70);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label37: ;
	WorkCmpConst(0x8020, 6);
	if (1) goto label38;
	goto label39;

label38: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 71);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label39: ;
	WorkCmpConst(0x8020, 7);
	if (1) goto label40;
	goto label41;

label40: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 89);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label41: ;
	WorkCmpConst(0x8020, 8);
	if (1) goto label42;
	goto label43;

label42: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 93);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label43: ;
	WorkCmpConst(0x8020, 9);
	if (1) goto label44;
	goto label45;

label44: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 226);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label45: ;
	WorkCmpConst(0x8020, 10);
	if (1) goto label46;
	goto label47;

label46: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 227);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label47: ;
	WorkCmpConst(0x8020, 11);
	if (1) goto label48;
	goto label49;

label48: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 231);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label49: ;
	WorkCmpConst(0x8020, 12);
	if (1) goto label50;
	goto label51;

label50: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 233);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label51: ;
	WorkCmpConst(0x8020, 13);
	if (1) goto label52;
	goto label53;

label52: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 235);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label53: ;
	WorkCmpConst(0x8020, 14);
	if (1) goto label54;
	goto label55;

label54: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 252);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label55: ;
	WorkCmpConst(0x8020, 15);
	if (1) goto label56;
	goto label57;

label56: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 256);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label57: ;
	WorkCmpConst(0x8020, 16);
	if (1) goto label58;
	goto label59;

label58: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 257);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label59: ;
	WorkCmpConst(0x8020, 17);
	if (1) goto label60;
	goto label61;

label60: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 258);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label61: ;
	WorkCmpConst(0x8020, 18);
	if (1) goto label62;
	goto label63;

label62: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 259);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label63: ;
	WorkCmpConst(0x8020, 19);
	if (1) goto label64;
	goto label65;

label64: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 321);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label65: ;
	WorkCmpConst(0x8020, 20);
	if (1) goto label66;
	goto label67;

label66: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 322);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label67: ;
	WorkCmpConst(0x8020, 21);
	if (1) goto label68;
	goto label69;

label68: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 325);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label69: ;
	WorkCmpConst(0x8020, 22);
	if (1) goto label70;
	goto label71;

label70: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 323);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label71: ;
	WorkCmpConst(0x8020, 23);
	if (1) goto label72;
	goto label73;

label72: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 327);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label73: ;
	WorkCmpConst(0x8020, 24);
	if (1) goto label74;
	goto label75;

label74: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 326);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label75: ;
	WorkCmpConst(0x8020, 25);
	if (1) goto label76;
	goto label77;

label76: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 221);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label77: ;
	WorkCmpConst(0x8020, 26);
	if (1) goto label78;
	goto label27;

label78: ;
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 324);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	goto label27;

label27: ;
	VMReturn();
}
