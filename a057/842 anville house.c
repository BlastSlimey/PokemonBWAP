#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPush(0x4116);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label0;
	StackPushFlag(323);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActor(1024, 0, 0, 0);
	FlagSet(323);
	WorkSetConst(0x4115, 0x80);
	Sequence1();
	goto label2;

label1: ;
	StackPush(0x4116);
	StackPushConst(5);
	StackCmp(0);
	if (255) goto label3;
	MsgActor(1024, 1, 0, 0);
	goto label4;

label3: ;
	MsgActor(1024, 2, 0, 0);

label4: ;
	Sequence1();

label2: ;
	goto label5;

label0: ;
	MsgActor(1024, 4, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label5: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ItemCheckSpace(0x4115, 0x4116, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label6;
	WordSetItemName(0, 0x4115);
	MsgActor(1024, 5, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	VMReturn();

label6: ;
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x4115);
	WorkSet(0x8001, 0x4116);
	RTCallGlobal(2801);
	StackPop(0x8001);
	StackPop(0x8000);
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x4116, 0);
	Random(0x8010, 10);
	WorkCmpConst(0x8010, 0);
	if (1) goto label7;
	goto label8;

label7: ;
	WorkSetConst(0x4115, 50);
	goto label9;

label8: ;
	WorkCmpConst(0x8010, 1);
	if (1) goto label10;
	goto label11;

label10: ;
	WorkSetConst(0x4115, 23);
	goto label9;

label11: ;
	WorkCmpConst(0x8010, 2);
	if (1) goto label12;
	goto label13;

label12: ;
	WorkSetConst(0x4115, 29);
	goto label9;

label13: ;
	WorkCmpConst(0x8010, 3);
	if (1) goto label14;
	goto label15;

label14: ;
	WorkSetConst(0x4115, 40);
	goto label9;

label15: ;
	WorkCmpConst(0x8010, 4);
	if (1) goto label16;
	goto label17;

label16: ;
	WorkSetConst(0x4115, 46);
	goto label9;

label17: ;
	WorkCmpConst(0x8010, 5);
	if (1) goto label18;
	goto label19;

label18: ;
	WorkSetConst(0x4115, 47);
	goto label9;

label19: ;
	WorkCmpConst(0x8010, 6);
	if (1) goto label20;
	goto label21;

label20: ;
	WorkSetConst(0x4115, 49);
	goto label9;

label21: ;
	WorkCmpConst(0x8010, 7);
	if (1) goto label22;
	goto label23;

label22: ;
	WorkSetConst(0x4115, 52);
	goto label9;

label23: ;
	WorkCmpConst(0x8010, 8);
	if (1) goto label24;
	goto label25;

label24: ;
	WorkSetConst(0x4115, 48);
	goto label9;

label25: ;
	WorkSetConst(0x4115, 45);

label9: ;
	VMReturn();
}
