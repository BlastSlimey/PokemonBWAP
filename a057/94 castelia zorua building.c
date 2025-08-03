#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x40C7);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	goto label1;

label0: ;
	PokePartyFind(251, 0x8010, 0x8020);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	PVPlay(570, 0);
	MsgActor(1024, 9, 0, 0);
	PVWait();
	MsgWaitAdvance();
	MsgActorClose();
	Routine0();

	Movement m[] = { //0
		LookDown, 1,
	};

	ActorCmdWait();
	Routine1();
	PVPlay(251, 0);
	MsgActorEx(1024, 10, 251, 0, 0);
	PVWait();
	MsgWaitAdvance();
	MsgActorClose();
	Routine2();
	CMD_228(251, 0x8020);
	PVPlay(570, 0);
	MsgActorEx(1024, 9, 2, 6, 0);
	PVWait();
	MsgWaitAdvance();
	MsgActorClose();

	Movement m[] = { //1
		LookLeft, 1,
		Wait4, 1,
		HopLeft, 2,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 1, 6, 0);
	MsgActorClose();

	Movement m[] = { //251
		WalkRight, 1,
		WalkDown, 1,
		TurnUp, 1,
	};


	Movement m[] = { //255
		WalkUp, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x40C7, 1);
	WorkSetConst(0x8021, 1);
	Routine3();
	Routine4();
	goto label1;

label2: ;
	MsgActor(1024, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x40C7);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	MsgActor(1024, 23, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label4;

label3: ;
	PokePartyFindEx(251, 0, 0x8020, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label5;
	WorkSetConst(0x8033, 0);
	TrainerCardGetSex(0x8033);
	StackPush(0x8033);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	MsgActor(1024, 7, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label7;

label6: ;
	MsgActor(1024, 8, 0, 0);
	InputWaitLast();
	MsgActorClose();

label7: ;
	WorkSetConst(0x8033, 0);
	goto label4;

label5: ;
	StackPushFlag(289);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label8;
	FlagSet(289);
	WorkSetConst(0x8034, 0);
	WorkSetConst(0x8035, 0);
	TrainerCardGetSex(0x8034);
	StackPush(0x8034);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	WorkSetConst(0x8035, 1);
	goto label10;

label9: ;
	WorkSetConst(0x8035, 2);

label10: ;
	MsgActor(1024, 0x8035, 0, 0);
	MsgActorClose();
	WorkSetConst(0x8035, 0);
	WorkSetConst(0x8034, 0);
	WorkSetConst(0x8036, 0);

	Movement m[] = { //1
		LookLeft, 1,
	};


	Movement m[] = { //0
		LookRight, 1,
	};

	ActorCmdWait();
	PlayerGetDir(0x8036);
	WorkCmpConst(0x8036, 2);
	if (1) goto label11;
	goto label12;

label11: ;

	Movement m[] = { //255
		WalkDown, 1,
		WalkLeft, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label13;

label12: ;
	WorkCmpConst(0x8036, 1);
	if (1) goto label14;
	goto label13;

label14: ;

	Movement m[] = { //255
		WalkRight, 1,
		WalkDown, 2,
		WalkLeft, 1,
		TurnUp, 1,
	};

	ActorCmdWait();
	goto label13;

label13: ;
	WorkSetConst(0x8036, 0);
	MsgActor(1024, 3, 0, 0);
	PokeDexIsRegist(0, 570, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label15;
	MsgActor(1024, 4, 0, 0);
	MsgActorClose();
	CMD_227(570, 0, 0, 0);
	PokeDexRegist(0, 570);

label15: ;
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label4;

label8: ;
	MsgActor(1024, 6, 0, 0);
	InputWaitLast();
	MsgActorClose();

label4: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(570, 0);
	MsgActor(1024, 9, 0, 0);
	PVWait();
	MsgWaitAdvance();
	MsgActorClose();
	Routine5();

	Movement m[] = { //2
		LookDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //1
		LookDown, 1,
	};

	ActorCmdWait();
	WorkSetConst(0x8021, 0);
	Routine3();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	FlagReset(2435);
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8022, 0);
	PlayerGetDir(0x8022);
	WorkCmpConst(0x8022, 0);
	if (1) goto label16;
	goto label17;

label16: ;

	Movement m[] = { //255
		WalkDown, 2,
		TurnUp, 1,
	};

	goto label18;

label17: ;
	WorkCmpConst(0x8022, 3);
	if (1) goto label19;
	goto label18;

label19: ;

	Movement m[] = { //255
		WalkDown, 1,
		WalkRight, 1,
		WalkDown, 2,
		TurnUp, 1,
	};

	goto label18;

label18: ;
	ActorCmdWait();
	WorkSetConst(0x8022, 0);
	VMReturn();
}

void Routine1()
{
	CMD_221(0, 4, 0, 7, 3, 8);
	CMD_222(0, 4, 0, 7);
	CMD_224(0);
	FadeEx(12, 0, 16, 2);
	FadeExWait();
	ActorNew(4, 7, 0, 251, 4380, 0);
	FadeEx(12, 16, 0, 2);
	FadeExWait();
	CMD_223(0);
	VMReturn();
}

void Routine2()
{
	FlagReset(731);
	SEPlay(1991);
	CMD_23e(0, 2);
	FlagSet(729);
	SEWait();
	VMReturn();
}

void Routine3()
{
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	PokePartyGetCount(0x8024, 5);
	WorkSetConst(0x8025, 0);
	StackPush(0x8024);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label20;
	WorkSetConst(0x8025, 1);

label20: ;
	StackPush(0x8025);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label21;
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label22;

	Movement m[] = { //1
		TurnDown, 1,
	};

	ActorCmdWait();

label22: ;
	Routine6();
	VMReturn();

label21: ;
	WorkSetConst(0x8026, 1);
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label23;

	Movement m[] = { //1
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 12, 1, 6, 0);
	MsgActorClose();

label23: ;
	StackPush(0x8026);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label24;
	MsgSystem(13, 2);
	YesNoWin(0x8010);
	MsgSystemClose();
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label25;
	Routine7();
	WorkSetConst(0x8028, 0);
	CMD_1ae();
	CMD_1b1();
	FieldClose();
	CallBag(1, 0x8028, 0x8027);
	FieldOpen();
	CMD_1ad();
	CMD_1b1();
	WorkSetConst(0x8010, 0);
	StackPush(0x8027);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label26;
	WorkSetConst(0x8029, 0);
	ItemGetClass(0x8027, 0x8029);
	StackPush(0x8029);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label27;
	WorkSetConst(0x802A, 0);
	WorkSetConst(0x8010, 1);
	ItemSub(0x8027, 1, 0x802A);
	WorkSetConst(0x802A, 0);

label27: ;
	WorkSetConst(0x8029, 0);

label26: ;
	WorkSetConst(0x8028, 0);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label28;
	WorkSetConst(0x802B, 0);
	WorkSetConst(0x802C, 0);
	Routine8();
	MEPlay(1304);
	PokePartyGetCount(0x802C, 0);
	PokePartyAddEx(0x8010, 570, 0, 10, 2, 0, 0, 0, 0x8027);
	WorkSetConst(0x802B, 14);
	MsgSystem(0x802B, 2);
	MEWait();
	MsgWaitAdvance();
	WorkSetConst(0x802D, 0);
	WorkSetConst(0x802E, 0);
	MsgSystem(30, 0);
	YesNoWin(0x802D);
	MsgSystemClose();
	StackPush(0x802D);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label29;
	CallPokeNameInput(0x802E, 0x802C, 1);

label29: ;
	WorkSetConst(0x802E, 0);
	WorkSetConst(0x802D, 0);
	MsgActorEx(1024, 18, 1, 0, 0);
	MsgActorClose();

	Movement m[] = { //1
		WalkRight, 2,
		WalkDown, 6,
	};

	ActorCmdWait();
	FlagSet(730);
	ActorDelete(1);
	SEPlay(1369);
	SEWait();
	WorkSetConst(0x40C7, 3);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x802C, 0);
	WorkSetConst(0x802B, 0);
	goto label30;

label28: ;
	MsgActorEx(1024, 26, 1, 0, 0);
	MsgActorClose();

label30: ;
	goto label31;

label25: ;
	WorkSetConst(0x8026, 0);
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label32;
	MsgActorEx(1024, 21, 1, 0, 0);
	goto label33;

label32: ;
	MsgActorEx(1024, 22, 1, 0, 0);
	InputWaitLast();

label33: ;
	MsgActorClose();

label31: ;
	goto label23;

label24: ;
	VMReturn();
}

void Routine4()
{

	Movement m[] = { //255
		TurnRight, 1,
	};


	Movement m[] = { //251
		TurnLeft, 1,
	};

	ActorCmdWait();
	CMD_222(1, 5, 3, 8);
	CMD_224(1);
	FadeEx(12, 0, 16, 2);
	FadeExWait();
	ActorDelete(251);
	FadeEx(12, 16, 0, 2);
	FadeExWait();
	CMD_223(1);
	CMD_221(1, 5, 3, 8, 3, 8);
	VMReturn();
}

void Routine5()
{
	WorkSetConst(0x8023, 0);
	PlayerGetDir(0x8023);
	WorkCmpConst(0x8023, 0);
	if (1) goto label34;
	goto label35;

label34: ;

	Movement m[] = { //255
		WalkDown, 1,
		TurnUp, 1,
	};

	goto label36;

label35: ;
	WorkCmpConst(0x8023, 3);
	if (1) goto label37;
	goto label36;

label37: ;

	Movement m[] = { //255
		WalkDown, 1,
		WalkRight, 1,
		WalkDown, 1,
		TurnUp, 1,
	};

	goto label36;

label36: ;
	ActorCmdWait();
	WorkSetConst(0x8023, 0);
	VMReturn();
}

void Routine6()
{
	WorkSetConst(0x802F, 0);
	WorkSetConst(0x8030, 0);
	TrainerCardGetSex(0x802F);
	StackPush(0x8021);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 43);
	StackPush(0x802F);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8030, 19);
	VMJump(6);
	WorkSetConst(0x8030, 20);
	VMJump(37);
	StackPush(0x802F);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8030, 28);
	VMJump(6);
	WorkSetConst(0x8030, 29);
	MsgActorEx(1024, 0x8030, 1, 0, 0);
	StackPush(0x8021);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 2);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x8030, 0);
	WorkSetConst(0x802F, 0);
	VMReturn();
}

void Routine7()
{
	WorkSetConst(0x8031, 0);
	WorkSetConst(0x8032, 0);
	TrainerCardGetSex(0x8031);
	StackPush(0x8031);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8032, 24);
	VMJump(6);
	WorkSetConst(0x8032, 25);
	MsgActorEx(1024, 0x8032, 1, 0, 0);
	MsgActorClose();
	WorkSetConst(0x8032, 0);
	WorkSetConst(0x8031, 0);
	VMReturn();
}

void Routine8()
{
	CMD_222(1, 4, 3, 6);
	CMD_224(1);
	FadeEx(12, 0, 16, 2);
	FadeExWait();
	FlagSet(731);
	ActorDelete(2);
	FadeEx(12, 16, 0, 2);
	FadeExWait();
	CMD_223(1);
	CMD_221(1, 4, 3, 6, 3, 8);
	VMReturn();
}
