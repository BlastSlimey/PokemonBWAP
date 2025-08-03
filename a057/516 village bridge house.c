#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8029, 0);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(2749);
	StackPushConst(0);
	StackCmp(1);
	StackPushFlag(322);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label0;
	Routine0();
	goto label1;

label0: ;
	StackPushFlag(2749);
	StackPushConst(1);
	StackCmp(1);
	StackPush(0x4113);
	StackPushConst(0);
	StackCmp(5);
	StackCmp(7);
	if (255) goto label2;
	WordSetPokeSpecies(0, 0x4113);
	MsgActor(1024, 5, 0, 0);
	YesNoWin(0x8010);
	Routine1();
	goto label1;

label2: ;
	StackPushFlag(2749);
	StackPushConst(0);
	StackCmp(1);
	StackPushFlag(322);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label3;
	MsgActor(1024, 12, 0, 0);
	CMD_231(0x4113);
	WordSetPokeSpecies(0, 0x4113);
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(2749);
	FlagSet(322);
	goto label1;

label3: ;
	StackPushFlag(2749);
	StackPushConst(1);
	StackCmp(1);
	StackPush(0x4113);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label1;
	MsgActor(1024, 11, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label1;

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label4;
	MsgActor(1024, 1, 0, 0);
	YesNoWin(0x8010);
	goto label5;

label4: ;
	MsgActor(1024, 0, 0, 0);
	YesNoWin(0x8010);

label5: ;
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	CMD_231(0x4113);
	WordSetPokeSpecies(0, 0x4113);
	MsgActor(1024, 3, 0, 0);
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	FlagSet(2749);
	FlagSet(322);
	goto label7;

label6: ;
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x8020, 1);

label7: ;
	VMReturn();
}

void Routine1()
{
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label8;
	MsgActor(1024, 6, 0, 0);
	MsgWinCloseAll();
	RTCGetDate(0x8026, 0x8024);
	CallPokeSelect(0x8022, 0x8021, 0);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	PokePartyGetSpecies(0x8023, 0x8021);
	WordSetPokeSpecies(0, 0x8023);
	PokePartyGetMetDate(0x8029, 0x8027, 0x8025, 0x8021);
	StackPush(0x4113);
	StackPush(0x8023);
	StackCmp(1);
	StackPush(0x8026);
	StackPush(0x8027);
	StackCmp(1);
	StackPush(0x8024);
	StackPush(0x8025);
	StackCmp(1);
	StackCmp(7);
	StackCmp(7);
	if (255) goto label10;
	MsgActor(1024, 7, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 5);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(0x1B0);
	WorkSetConst(0x4113, 0);
	goto label11;

label10: ;
	StackPush(0x4113);
	StackPush(0x8023);
	StackCmp(5);
	if (255) goto label12;
	MsgActor(1024, 9, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	goto label11;

label12: ;
	StackPush(0x8026);
	StackPush(0x8027);
	StackCmp(5);
	StackPush(0x8024);
	StackPush(0x8025);
	StackCmp(5);
	StackCmp(6);
	if (255) goto label11;
	MsgActor(1024, 8, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label11: ;
	goto label13;

label9: ;
	MsgActor(1024, 10, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label13: ;
	goto label14;

label8: ;
	MsgActor(1024, 10, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label14: ;
	VMReturn();
}
