#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	PokeDexGetCount(0, 0x8020);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x8020);
	StackPushConst(50);
	StackCmp(4);
	if (255) goto label0;
	StackPushFlag(264);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActorEx(1024, 1, 0, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(264);
	MsgActorEx(1024, 2, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label2;

label1: ;
	MsgActorEx(1024, 2, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();

label2: ;
	goto label3;

label0: ;
	MsgActorEx(1024, 0, 0, 0, 0);
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
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(280);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label4;
	StackPush(0x400F);
	StackPushConst(99);
	StackCmp(1);
	StackPushFlag(2400);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label5;
	MsgActorEx(1024, 8, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label6;

label5: ;
	StackPushFlag(2400);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(352);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label7;
	CMD_242(1, 0);
	MsgActorEx(1024, 9, 1, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label8;
	MsgActorEx(1024, 10, 1, 0, 0);
	MsgActorClose();
	CallTradedPokemonBattle(515, 0, 0, 1);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	CallTrainerBattleEnd();
	goto label10;

label9: ;
	CallTrainerLose();

label10: ;
	CMD_242(1, 0);
	MsgActorEx(1024, 12, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(352);
	goto label11;

label8: ;
	MsgActorEx(1024, 11, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label11: ;
	goto label6;

label7: ;
	StackPushFlag(2400);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(352);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label12;
	CMD_242(1, 0);
	MsgActorEx(1024, 12, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label6;

label12: ;
	MsgActorEx(1024, 8, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label6: ;
	goto label13;

label4: ;
	WordSetPokeSpecies(1, 550);
	WordSetPokeSpecies(0, 572);
	MsgActorEx(1024, 3, 1, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label14;
	MsgActorClose();
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	CallPokeSelect(0x8022, 0x8021, 0);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label15;
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	GameGetVersion(0x8024);
	StackPush(0x8024);
	StackPushConst(21);
	StackCmp(1);
	if (255) goto label16;
	FieldTradeCheck(0x8023, 2, 0x8021);
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label17;
	MsgActorEx(1024, 4, 1, 0, 0);
	MsgWinCloseAll();
	FieldTradeSavePokemon(0x8021, 1);
	FieldTradeStart(2, 0x8021);
	MsgActorEx(1024, 5, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(280);
	WorkSetConst(0x400F, 99);
	goto label18;

label17: ;
	WordSetPokeSpecies(0, 572);
	MsgActorEx(1024, 6, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label18: ;
	goto label19;

label16: ;
	FieldTradeCheck(0x8023, 3, 0x8021);
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label20;
	MsgActorEx(1024, 4, 1, 0, 0);
	MsgWinCloseAll();
	FieldTradeSavePokemon(0x8021, 1);
	FieldTradeStart(3, 0x8021);
	MsgActorEx(1024, 5, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(280);
	WorkSetConst(0x400F, 99);
	goto label19;

label20: ;
	WordSetPokeSpecies(0, 572);
	MsgActorEx(1024, 6, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label19: ;
	goto label21;

label15: ;
	MsgActorEx(1024, 7, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label21: ;
	goto label13;

label14: ;
	MsgActorEx(1024, 7, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label13: ;
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8021, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
