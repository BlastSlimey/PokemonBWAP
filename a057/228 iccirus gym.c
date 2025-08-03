#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	FlagGet(0x178, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgActorEx(1024, 0, 11, 0, 0);
	MsgActorClose();
	CallTrainerBattle(131, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label1;
	CallTrainerBattleEnd();
	goto label2;

label1: ;
	CallTrainerLose();

label2: ;
	MsgActorEx(1024, 1, 11, 0, 0);
	MsgActorClose();
	TrainerCardSaveGymVictoryParty(6);
	FlagSet(0x178);
	MEPlay(1306);
	WorkSetConst(0x8020, 0);
	TrainerCardGetSex(0x8020);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	PlayFieldEffect(9);
	goto label4;

label3: ;
	PlayFieldEffect(48);

label4: ;
	MEWait();
	WorkSetConst(0x8020, 0);
	WordSetPlayerName(0);
	MsgSystem(2, 0);
	MsgSystemClose();
	MsgActorEx(1024, 3, 11, 0, 0);
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
	MsgActorEx(1024, 4, 11, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x40A7, 1);
	WorkSetConst(0x4097, 3);
	FlagSet(678);
	FlagReset(576);
	FlagReset(577);
	MapReplaceSetEvent(4, 1, 1);
	FlagSet(2423);
	goto label5;

label0: ;
	StackPushFlag(2400);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	MsgActorEx(1024, 7, 11, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label5;

label6: ;
	StackPushFlag(300);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	MsgActorEx(1024, 6, 11, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label5;

label7: ;
	MsgActorEx(1024, 5, 11, 0, 0);
	InputWaitLast();
	MsgActorClose();

label5: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(124);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	MsgActor(1024, 8, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(124);
	MsgActor(1024, 9, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label10;

label9: ;
	FlagGet(0x178, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label8;
	MsgActor(1024, 9, 0, 0);
	InputWaitLast();
	MsgActorClose();

label10: ;
	goto label11;

label8: ;
	MsgActor(1024, 10, 0, 0);
	InputWaitLast();
	MsgActorClose();

label11: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	WordSetPlayerName(0);
	FlagGet(0x178, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label12;
	MsgInfo(11, 2);
	goto label13;

label12: ;
	StackPush(0x4092);
	StackPushConst(7);
	StackCmp(4);
	if (255) goto label14;
	MsgInfo(13, 2);
	goto label13;

label14: ;
	MsgInfo(12, 2);

label13: ;
	InputWaitLast();
	MsgInfoClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1743);
	CMD_193(0);
	CMD_194(0);
	StackPush(0x4001);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label15;
	ActorSetGPos(3, 19, 0, 54, 1);
	ActorSetGPos(4, 18, 0, 53, 1);
	WorkSetConst(0x4001, 1);
	goto label16;

label15: ;
	ActorSetGPos(3, 18, 0, 55, 1);
	ActorSetGPos(4, 17, 0, 54, 1);
	WorkSetConst(0x4001, 0);

label16: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1743);
	CMD_193(1);
	CMD_194(1);
	StackPush(0x4002);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label17;
	ActorSetGPos(6, 55, 3, 42, 1);
	ActorSetGPos(7, 54, 3, 43, 1);
	WorkSetConst(0x4002, 1);
	goto label18;

label17: ;
	ActorSetGPos(6, 55, 3, 44, 1);
	ActorSetGPos(7, 56, 3, 43, 1);
	WorkSetConst(0x4002, 0);

label18: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1743);
	CMD_193(2);
	CMD_194(2);
	StackPush(0x4003);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label19;
	ActorSetGPos(9, 17, 6, 32, 1);
	ActorSetGPos(10, 18, 6, 33, 1);
	WorkSetConst(0x4003, 1);
	goto label20;

label19: ;
	ActorSetGPos(9, 16, 6, 33, 1);
	ActorSetGPos(10, 17, 6, 34, 1);
	WorkSetConst(0x4003, 0);

label20: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	PlayerTurnByTrigger();
	CMD_195(0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	PlayerTurnByTrigger();
	CMD_195(1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	PlayerTurnByTrigger();
	CMD_195(2);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	PlayerTurnByTrigger();
	CMD_195(3);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	PlayerTurnByTrigger();
	CMD_195(5);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	PlayerTurnByTrigger();
	CMD_195(4);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	PlayerTurnByTrigger();
	CMD_195(7);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	PlayerTurnByTrigger();
	CMD_195(6);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
