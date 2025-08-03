#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8023, 0);
	GameGetVersion(0x8023);
	FlagGet(0x179, 0x8008);
	StackPush(0x8023);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label0;
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActorEx(1024, 8, 4, 0, 0);
	MsgActorClose();
	CallTrainerBattle(133, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label2;
	CallTrainerBattleEnd();
	goto label3;

label2: ;
	CallTrainerLose();

label3: ;
	MsgActorEx(1024, 9, 4, 0, 0);
	MsgActorClose();
	TrainerCardSaveGymVictoryParty(7);
	FlagSet(0x179);
	MEPlay(1306);
	WorkSetConst(0x8024, 0);
	TrainerCardGetSex(0x8024);
	StackPush(0x8024);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	PlayFieldEffect(10);
	goto label5;

label4: ;
	PlayFieldEffect(49);

label5: ;
	MEWait();
	WorkSetConst(0x8024, 0);
	WordSetPlayerName(0);
	MsgSystem(10, 0);
	MsgSystemClose();
	MsgActorEx(1024, 11, 4, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	WordSetItemName(0, 328);
	WordSetTMMoveName(1, 328);
	MsgActorEx(1024, 12, 4, 0, 0);
	MsgActorEx(1024, 13, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x40A9, 1);
	WorkSetConst(0x40B8, 1);
	FlagSet(2425);
	goto label6;

label1: ;
	StackPushFlag(2400);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	MsgActorEx(1024, 14, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label6;

label7: ;
	MsgActorEx(1024, 13, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();

label6: ;
	goto label8;

label0: ;
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	MsgActorEx(1024, 0, 4, 0, 0);
	MsgActorClose();
	CallTrainerBattle(132, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	CallTrainerBattleEnd();
	goto label11;

label10: ;
	CallTrainerLose();

label11: ;
	MsgActorEx(1024, 1, 4, 0, 0);
	MsgActorClose();
	TrainerCardSaveGymVictoryParty(7);
	FlagSet(0x179);
	MEPlay(1306);
	WorkSetConst(0x8025, 0);
	TrainerCardGetSex(0x8025);
	StackPush(0x8025);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label12;
	PlayFieldEffect(10);
	goto label13;

label12: ;
	PlayFieldEffect(49);

label13: ;
	MEWait();
	WorkSetConst(0x8025, 0);
	WordSetPlayerName(0);
	MsgSystem(2, 0);
	MsgSystemClose();
	MsgActorEx(1024, 3, 4, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	WordSetItemName(0, 328);
	WordSetTMMoveName(1, 328);
	MsgActorEx(1024, 4, 4, 0, 0);
	MsgActorEx(1024, 5, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x40A9, 1);
	WorkSetConst(0x40B8, 1);
	FlagSet(2424);
	goto label8;

label9: ;
	StackPushFlag(2400);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label14;
	WorkSetConst(0x8026, 0);
	TrainerCardGetSex(0x8026);
	StackPush(0x8026);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label15;
	MsgActorEx(1024, 6, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label16;

label15: ;
	MsgActorEx(1024, 7, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();

label16: ;
	goto label8;

label14: ;
	MsgActorEx(1024, 5, 4, 0, 0);
	InputWaitLast();
	MsgActorClose();

label8: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	CMD_196();
	GameGetVersion(0x8010);
	StackPush(0x8010);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label17;
	WorkSetConst(0x4020, 180);
	goto label18;

label17: ;
	WorkSetConst(0x4020, 92);

label18: ;
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	CMD_198(3);
	CMD_197(0);
	VMNop2();
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8022, 1);
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	CMD_198(2);
	CMD_197(0);
	VMNop();
	WorkSetConst(0x8021, 1);
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8022, 0);
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	CMD_198(3);
	CMD_197(1);
	VMNop();
	WorkSetConst(0x8021, 2);
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8022, 0);
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	CMD_198(2);
	CMD_197(1);
	VMNop2();
	WorkSetConst(0x8021, 3);
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8022, 1);
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	CMD_198(3);
	CMD_197(2);
	VMNop();
	WorkSetConst(0x8021, 4);
	WorkSetConst(0x8020, 2);
	WorkSetConst(0x8022, 0);
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	CMD_198(2);
	CMD_197(2);
	VMNop2();
	WorkSetConst(0x8021, 5);
	WorkSetConst(0x8020, 2);
	WorkSetConst(0x8022, 1);
	Routine0();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(125);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label20;
	MsgActor(1024, 17, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(125);
	MsgActor(1024, 18, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label21;

label20: ;
	FlagGet(0x179, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label19;
	MsgActor(1024, 18, 0, 0);
	InputWaitLast();
	MsgActorClose();

label21: ;
	goto label22;

label19: ;
	MsgActor(1024, 19, 0, 0);
	InputWaitLast();
	MsgActorClose();

label22: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8027, 0);
	GameGetVersion(0x8027);
	WordSetPlayerName(0);
	FlagGet(0x179, 0x8008);
	StackPush(0x8027);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label23;
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label24;
	MsgInfo(23, 2);
	goto label25;

label24: ;
	StackPush(0x40B8);
	StackPushConst(4);
	StackCmp(4);
	if (255) goto label26;
	MsgInfo(25, 2);
	goto label25;

label26: ;
	MsgInfo(24, 2);

label25: ;
	goto label27;

label23: ;
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label28;
	MsgInfo(20, 2);
	goto label27;

label28: ;
	StackPush(0x40B8);
	StackPushConst(4);
	StackCmp(4);
	if (255) goto label29;
	MsgInfo(22, 2);
	goto label27;

label29: ;
	MsgInfo(21, 2);

label27: ;
	InputWaitLast();
	MsgInfoClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();

	Movement m[] = { //9
		Exclaimation, 1,
	};

	ActorCmdWait();
	TrainerBGMPlayPush(274);

	Movement m[] = { //9
		WalkUp, 2,
		LookUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 15, 9, 0, 0);
	MsgActorClose();
	CallTrainerBattle(274, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label30;
	CallTrainerBattleEnd();
	WorkSetConst(0x40A9, 1);
	TrainerFlagSet(274);
	goto label31;

label30: ;
	CallTrainerLose();

label31: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	TrainerFlagGet(274, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label32;
	SEPlay(1351);
	ActorSetEyeToEye();
	TrainerBGMPlayPush(274);

	Movement m[] = { //9
		Exclaimation, 1,
	};

	ActorCmdWait();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 15, 9, 0, 0);
	MsgActorClose();
	CallTrainerBattle(274, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label33;
	CallTrainerBattleEnd();
	WorkSetConst(0x40A9, 1);
	TrainerFlagSet(274);
	goto label34;

label33: ;
	CallTrainerLose();

label34: ;
	goto label35;

label32: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 16, 0, 0);
	InputWaitLast();
	MsgActorClose();

label35: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	EVCameraInit();
	EVCameraUnbind();
	Routine1();
	Routine2();
	EVCameraMoveToDefault(30);
	EVCameraWait();
	EVCameraRebind();
	EVCameraEnd();
	VMReturn();
}

void Routine1()
{
	WorkCmpConst(0x8021, 0);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(8664, 0, 0xED000, 0xCD000, 0x900F, 0x205000, 30);
	VMJump(245);
	WorkCmpConst(0x8021, 1);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(8664, 0, 0xED000, 0xCD000, 0x900F, 0x205000, 30);
	VMJump(196);
	WorkCmpConst(0x8021, 2);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(4696, 0xFF80, 0xED000, 0x2AB000, 15, 0x13B000, 30);
	VMJump(147);
	WorkCmpConst(0x8021, 3);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(4696, 0xFF80, 0xED000, 0x2AB000, 15, 0x13B000, 30);
	VMJump(98);
	WorkCmpConst(0x8021, 4);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(9688, 0, 0xED000, 0x1C2000, 0x6904F, 0x19E000, 30);
	VMJump(49);
	WorkCmpConst(0x8021, 5);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(9688, 0, 0xED000, 0x1C2000, 0x6904F, 0x19E000, 30);
	VMJump(0);
	EVCameraWait();
	CMD_19a(0x8020, 0x8022);
	VMReturn();
}

void Routine2()
{
	WorkCmpConst(0x8021, 0);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(7256, 7040, 0xED000, 0xE8000, 0x4AFF1, 0x2D4000, 30);
	VMJump(245);
	WorkCmpConst(0x8021, 1);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(9176, 0xEE80, 0xED000, 0x88000, 0x5CFF1, 0x2E0000, 30);
	VMJump(196);
	WorkCmpConst(0x8021, 2);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(6488, 0xE280, 0xED000, 0x249000, 0x82FF1, 0x130000, 30);
	VMJump(147);
	WorkCmpConst(0x8021, 3);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(2776, 8576, 0xED000, 0x2E2000, 0x6800F, 0xBB000, 30);
	VMJump(98);
	WorkCmpConst(0x8021, 4);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(4952, 0xDD00, 0xED000, 0x130000, 0xCA04F, 0x182000, 30);
	VMJump(49);
	WorkCmpConst(0x8021, 5);
	VMJumpIf(1, 6);
	VMJump(30);
	EVCameraMoveTo(5464, 6528, 0xED000, 0x22F000, 0xCA04F, 0x15C000, 30);
	VMJump(0);
	EVCameraWait();
	CMD_199(0x8020);
	VMReturn();
}
