#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	FlagGet(0x176, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0; // jump if defeated
	MsgActorEx(1024, 0, 0, 0, 0);
	MsgActorClose();
	CallTrainerBattle(24, 0, 0);
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
	MsgActorEx(1024, 1, 0, 0, 0);
	MsgActorClose();
	TrainerCardSaveGymVictoryParty(4);
	FlagSet(0x176);
	MEPlay(1306);
	WorkSetConst(0x8020, 0);
	TrainerCardGetSex(0x8020);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	PlayFieldEffect(7);
	goto label4;

label3: ;
	PlayFieldEffect(46);

label4: ;
	MEWait();
	WorkSetConst(0x8020, 0);
	WordSetPlayerName(0);
	MsgSystem(2, 0);
	MsgSystemClose();
	MsgActorEx(1024, 3, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	ActorDelete(16);
	WorkSetConst(0x409A, 1);
	WorkSetConst(0x408F, 4);
	FlagSet(598);
	FlagSet(568);
	FlagSet(2421);
	goto label5;

label0: ;
	StackPushFlag(2400);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	MsgActorEx(1024, 6, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label5;

label6: ;
	StackPush(0x409A);
	StackPushConst(2);
	StackCmp(0);
	if (255) goto label7;
	MsgActorEx(1024, 4, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label5;

label7: ;
	MsgActorEx(1024, 5, 0, 0, 0);
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
	StackPushFlag(10);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	SEPlay(1740);
	CMD_190(0);
	SEWait();
	FlagReset(10);
	goto label9;

label8: ;
	StackPushFlag(10);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	SEPlay(1351);
	MsgSystem(7, 2);
	InputWaitLast();
	MsgWinCloseAll();

label9: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	StackPushFlag(10);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	SEPlay(1740);
	CMD_190(0);
	SEWait();
	FlagSet(10);
	goto label11;

label10: ;
	StackPushFlag(10);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	SEPlay(1351);
	MsgSystem(8, 2);
	InputWaitLast();
	MsgWinCloseAll();

label11: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	StackPushFlag(11);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	SEPlay(1740);
	CMD_190(1);
	SEWait();
	FlagReset(11);
	goto label13;

label12: ;
	StackPushFlag(11);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label13;
	SEPlay(1351);
	MsgSystem(7, 2);
	InputWaitLast();
	MsgWinCloseAll();

label13: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	StackPushFlag(11);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label14;
	SEPlay(1740);
	CMD_190(1);
	SEWait();
	FlagSet(11);
	goto label15;

label14: ;
	StackPushFlag(11);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label15;
	SEPlay(1351);
	MsgSystem(8, 2);
	InputWaitLast();
	MsgWinCloseAll();

label15: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	StackPushFlag(12);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label16;
	SEPlay(1740);
	CMD_190(2);
	SEWait();
	FlagReset(12);
	goto label17;

label16: ;
	StackPushFlag(12);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label17;
	SEPlay(1351);
	MsgSystem(7, 2);
	InputWaitLast();
	MsgWinCloseAll();

label17: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	StackPushFlag(12);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label18;
	SEPlay(1740);
	CMD_190(2);
	SEWait();
	FlagSet(12);
	goto label19;

label18: ;
	StackPushFlag(12);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label19;
	SEPlay(1351);
	MsgSystem(8, 2);
	InputWaitLast();
	MsgWinCloseAll();

label19: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	StackPushFlag(13);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label20;
	SEPlay(1740);
	CMD_190(3);
	SEWait();
	FlagReset(13);
	goto label21;

label20: ;
	StackPushFlag(13);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label21;
	SEPlay(1351);
	MsgSystem(7, 2);
	InputWaitLast();
	MsgWinCloseAll();

label21: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	StackPushFlag(13);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label22;
	SEPlay(1740);
	CMD_190(3);
	SEWait();
	FlagSet(13);
	goto label23;

label22: ;
	StackPushFlag(13);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label23;
	SEPlay(1351);
	MsgSystem(8, 2);
	InputWaitLast();
	MsgWinCloseAll();

label23: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	StackPushFlag(14);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label24;
	SEPlay(1740);
	CMD_190(4);
	SEWait();
	FlagReset(14);
	goto label25;

label24: ;
	StackPushFlag(14);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label25;
	SEPlay(1351);
	MsgSystem(7, 2);
	InputWaitLast();
	MsgWinCloseAll();

label25: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	StackPushFlag(14);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label26;
	SEPlay(1740);
	CMD_190(4);
	SEWait();
	FlagSet(14);
	goto label27;

label26: ;
	StackPushFlag(14);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label27;
	SEPlay(1351);
	MsgSystem(8, 2);
	InputWaitLast();
	MsgWinCloseAll();

label27: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	StackPushFlag(15);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label28;
	SEPlay(1740);
	CMD_190(5);
	SEWait();
	FlagReset(15);
	goto label29;

label28: ;
	StackPushFlag(15);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label29;
	SEPlay(1351);
	MsgSystem(7, 2);
	InputWaitLast();
	MsgWinCloseAll();

label29: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	StackPushFlag(15);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label30;
	SEPlay(1740);
	CMD_190(5);
	SEWait();
	FlagSet(15);
	goto label31;

label30: ;
	StackPushFlag(15);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label31;
	SEPlay(1351);
	MsgSystem(8, 2);
	InputWaitLast();
	MsgWinCloseAll();

label31: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	ActorPauseAll();
	CMD_18a();
	CMD_1b5();
	CMD_191(0);
	CMD_1b1();
	FlagReset(10);
	FlagSet(11);
	FlagReset(12);
	FlagSet(13);
	FlagSet(14);
	FlagReset(15);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence15()
{
	ActorPauseAll();
	SEPlay(1740);
	SEWait();
	CMD_1b6();
	CMD_191(1);
	CMD_1b1();
	RTReserveScript(2);
	MapChangeCore(98, 5, 0, 4, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence16()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgSystem(8, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
