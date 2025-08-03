#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	WordSetPlayerName(0);
	MsgActor(1024, 0, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	CMD_1cf(2, 0x8020, 0x8021);
	StackPushFlag(188);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label1;
	Routine0();
	MsgActor(1024, 2, 0, 0);
	Routine1();
	MEWait();
	MsgWaitAdvance();
	MsgActor(1024, 0x8020, 0, 0);
	goto label2;

label1: ;
	Routine2();
	MsgActor(1024, 1, 0, 0);
	Routine3();
	MEWait();
	MsgWaitAdvance();
	MsgActor(1024, 0x8020, 0, 0);

label2: ;
	Routine4();
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label3;
	MsgActor(1024, 15, 0, 0);
	MsgActorClose();
	Routine5();

label3: ;
	MsgActor(1024, 20, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label4;

label0: ;
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();

label4: ;
	RTEndGlobal();
	CMD_1ce(0x8010, 2);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label5;
	FlagSet(188);

label5: ;
	CMD_1cf(2, 0x8020, 0x8021);
	WordSetNumber(0, 0x8021, 3);
	VMReturn();
}

void Sequence1()
{
	WordSetPlayerName(0);
	MsgActor(1024, 31, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label35;
	CMD_1cf(1, 0x8020, 0x8021);
	WordSetNumber(0, 0x8021, 3);
	MsgActor(1024, 32, 0, 0);
	Routine6();
	MEWait();
	MsgWaitAdvance();
	MsgActor(1024, 0x8020, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label36;

label35: ;
	MsgActor(1024, 33, 0, 0);
	InputWaitLast();
	MsgActorClose();

label36: ;
	RTEndGlobal();
	CMD_1d1(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label37;
	CMD_1cf(1, 0x8020, 0x8021);
	WordSetNumber(0, 0x8021, 3);
	MsgSystem(32, 2);
	Routine6();
	MEWait();
	MsgWaitAdvance();
	MsgSystem(0x8020, 2);
	MsgWaitAdvance();
	goto label38;

label37: ;
	StackPushFlag(188);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label39;
	Routine0();
	MsgSystem(2, 2);
	Routine1();
	MEWait();
	MsgWaitAdvance();
	MsgSystem(0x8020, 2);
	goto label40;

label39: ;
	Routine2();
	MsgSystem(1, 2);
	Routine3();
	MEWait();
	MsgWaitAdvance();
	MsgSystem(0x8020, 2);

label40: ;
	Routine4();
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label38;
	MsgSystem(14, 2);
	MsgWaitAdvance();

label38: ;
	RTEndGlobal();
	VMNop();
}

void Sequence2()
{
	CMD_1d1(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label37a;
	CMD_1cf(1, 0x8020, 0x8021);
	WordSetNumber(0, 0x8021, 3);
	MsgSystem(32, 2);
	Routine6();
	MEWait();
	MsgWaitAdvance();
	MsgSystem(0x8020, 2);
	MsgWaitAdvance();
	goto label38a;

label37a: ;
	StackPushFlag(188);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label39a;
	Routine0();
	MsgSystem(2, 2);
	Routine1();
	MEWait();
	MsgWaitAdvance();
	MsgSystem(0x8020, 2);
	goto label40a;

label39a: ;
	Routine2();
	MsgSystem(1, 2);
	Routine3();
	MEWait();
	MsgWaitAdvance();
	MsgSystem(0x8020, 2);

label40a: ;
	Routine4();
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label38a;
	MsgSystem(14, 2);
	MsgWaitAdvance();

label38a: ;
	RTEndGlobal();
	VMNop();
}

void Routine0()
{
	CMD_1cf(3, 0x8020, 0x8021);
	WordSetNumber(0, 0x8021, 3);
	VMReturn();
}

void Routine1()
{
	CMD_1ce(0x8010, 3);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	MEPlay(1316);
	goto label9;

label8: ;
	Routine7();

label9: ;
	VMReturn();
}

void Routine2()
{
	CMD_1ce(0x8010, 2);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label5a;
	FlagSet(188);

label5a: ;
	CMD_1cf(2, 0x8020, 0x8021);
	WordSetNumber(0, 0x8021, 3);
	VMReturn();
}

void Routine3()
{
	CMD_1ce(0x8010, 2);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	MEPlay(1316);
	goto label7;

label6: ;
	Routine7();

label7: ;
	VMReturn();
}

void Routine4()
{
	CMD_1cf(2, 0x8020, 0x8010);
	WorkSetConst(0x8022, 0);
	StackPushFlag(174);
	StackPushConst(0);
	StackCmp(1);
	StackPush(0x8010);
	StackPushConst(25);
	StackCmp(4);
	StackCmp(7);
	if (255) goto label23;
	WorkSetConst(0x8023, 1);
	WorkAdd(0x8022, 1);
	goto label24;

label23: ;
	WorkSetConst(0x8023, 0);

label24: ;
	StackPushFlag(175);
	StackPushConst(0);
	StackCmp(1);
	StackPush(0x8010);
	StackPushConst(60);
	StackCmp(4);
	StackCmp(7);
	if (255) goto label25;
	WorkSetConst(0x8024, 1);
	WorkAdd(0x8022, 1);
	goto label26;

label25: ;
	WorkSetConst(0x8024, 0);

label26: ;
	StackPushFlag(176);
	StackPushConst(0);
	StackCmp(1);
	StackPush(0x8010);
	StackPushConst(115);
	StackCmp(4);
	StackCmp(7);
	if (255) goto label27;
	WorkSetConst(0x8025, 1);
	WorkAdd(0x8022, 1);
	goto label28;

label27: ;
	WorkSetConst(0x8025, 0);

label28: ;
	VMReturn();
}

void Routine5()
{
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label29;
	ItemCheckSpace(0x80, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label30;
	WorkSetConst(0x8008, 0x80);
	RTCallGlobal(2803);
	VMReturn();

label30: ;
	WorkSetConst(0x8000, 0x80);
	WorkSetConst(0x8001, 1);
	RTCallGlobal(2805);
	MsgActor(1024, 16, 0, 0);
	FlagSet(174);
	WorkSub(0x8022, 1);
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label29;
	MsgActor(1024, 19, 0, 0);
	MsgActorClose();
	goto label29;

label29: ;
	StackPush(0x8024);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label31;
	ItemCheckSpace(0x80, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label32;
	WorkSetConst(0x8008, 0x80);
	RTCallGlobal(2803);
	VMReturn();

label32: ;
	WorkSetConst(0x8000, 0x80);
	WorkSetConst(0x8001, 1);
	RTCallGlobal(2805);
	MsgActor(1024, 17, 0, 0);
	FlagSet(175);
	WorkSub(0x8022, 1);
	StackPush(0x8022);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label31;
	MsgActor(1024, 19, 0, 0);
	MsgActorClose();

label31: ;
	StackPush(0x8025);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label33;
	ItemCheckSpace(0x80, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label34;
	WorkSetConst(0x8008, 0x80);
	RTCallGlobal(2803);
	VMReturn();

label34: ;
	WorkSetConst(0x8000, 0x80);
	WorkSetConst(0x8001, 1);
	RTCallGlobal(2805);
	MsgActor(1024, 18, 0, 0);
	FlagSet(176);

label33: ;
	VMReturn();
}

void Routine6()
{
	CMD_1ce(0x8010, 1);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label16;
	MEPlay(1316);
	goto label17;

label16: ;
	StackPush(0x8021);
	StackPushConst(159);
	StackCmp(3);
	if (255) goto label18;
	MEPlay(1311);
	goto label17;

label18: ;
	StackPush(0x8021);
	StackPushConst(349);
	StackCmp(3);
	if (255) goto label19;
	MEPlay(1312);
	goto label17;

label19: ;
	StackPush(0x8021);
	StackPushConst(449);
	StackCmp(3);
	if (255) goto label20;
	MEPlay(1313);
	goto label17;

label20: ;
	StackPush(0x8021);
	StackPushConst(549);
	StackCmp(3);
	if (255) goto label21;
	MEPlay(1314);
	goto label17;

label21: ;
	StackPush(0x8021);
	StackPushConst(633);
	StackCmp(3);
	if (255) goto label22;
	MEPlay(1315);
	goto label17;

label22: ;
	MEPlay(1315);

label17: ;
	VMReturn();
}

void Routine7()
{
	StackPush(0x8021);
	StackPushConst(24);
	StackCmp(3);
	if (255) goto label10;
	MEPlay(1311);
	goto label11;

label10: ;
	StackPush(0x8021);
	StackPushConst(59);
	StackCmp(3);
	if (255) goto label12;
	MEPlay(1312);
	goto label11;

label12: ;
	StackPush(0x8021);
	StackPushConst(114);
	StackCmp(3);
	if (255) goto label13;
	MEPlay(1313);
	goto label11;

label13: ;
	StackPush(0x8021);
	StackPushConst(134);
	StackCmp(3);
	if (255) goto label14;
	MEPlay(1314);
	goto label11;

label14: ;
	StackPush(0x8021);
	StackPushConst(149);
	StackCmp(3);
	if (255) goto label15;
	MEPlay(1315);
	goto label11;

label15: ;
	MEPlay(1315);

label11: ;
	VMReturn();
}
