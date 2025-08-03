#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(126);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	WorkSetConst(0x8020, 21);
	Routine0();
	goto label1;

label0: ;
	MsgActor(1024, 0, 0, 0);
	StackPush(0x4134);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label2;
	Routine1();
	goto label1;

label2: ;
	Routine2();
	StackPush(0x8021);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label3;
	MsgActor(1024, 1, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	Routine3();
	goto label5;

label4: ;
	WorkSetConst(0x8020, 4);
	Routine0();

label5: ;
	goto label1;

label3: ;
	WorkSetConst(0x8020, 10);
	Routine0();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	MsgActor(1024, 0x8020, 0, 0);
	InputWaitLast();
	MsgActorClose();
	VMReturn();
}

void Routine1()
{
	WorkGet(0x8022, 0x4134);
	Routine4();
	Routine5();
	VMReturn();
}

void Routine2()
{
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8028, 105);
	ItemCheckCount(0x8028, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	WorkGet(0x8022, 0x8028);
	WorkAdd(0x8021, 1);

label6: ;
	WorkSetConst(0x8028, 104);
	ItemCheckCount(0x8028, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	WorkGet(0x8022, 0x8028);
	WorkAdd(0x8021, 1);

label7: ;
	WorkSetConst(0x8028, 101);
	ItemCheckCount(0x8028, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label8;
	WorkGet(0x8022, 0x8028);
	WorkAdd(0x8021, 1);

label8: ;
	WorkSetConst(0x8028, 102);
	ItemCheckCount(0x8028, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label9;
	WorkGet(0x8022, 0x8028);
	WorkAdd(0x8021, 1);

label9: ;
	WorkSetConst(0x8028, 103);
	ItemCheckCount(0x8028, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	WorkGet(0x8022, 0x8028);
	WorkAdd(0x8021, 1);

label10: ;
	WorkSetConst(0x8028, 100);
	ItemCheckCount(0x8028, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label11;
	WorkGet(0x8022, 0x8028);
	WorkAdd(0x8021, 1);

label11: ;
	WorkSetConst(0x8028, 99);
	ItemCheckCount(0x8028, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	WorkGet(0x8022, 0x8028);
	WorkAdd(0x8021, 1);

label12: ;
	WorkSetConst(0x8028, 572);
	ItemCheckCount(0x8028, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label13;
	WorkGet(0x8022, 0x8028);
	WorkAdd(0x8021, 1);

label13: ;
	WorkSetConst(0x8028, 573);
	ItemCheckCount(0x8028, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label14;
	WorkGet(0x8022, 0x8028);
	WorkAdd(0x8021, 1);

label14: ;
	VMReturn();
}

void Routine3()
{
	StackPush(0x8021);
	StackPushConst(2);
	StackCmp(4);
	if (255) goto label15;
	Routine6();
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label16;
	Routine7();
	goto label17;

label16: ;
	WorkSetConst(0x8020, 4);
	Routine0();

label17: ;
	goto label18;

label15: ;
	Routine7();

label18: ;
	VMReturn();
}

void Routine4()
{
	StackPush(0x8022);
	StackPushConst(105);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8023, 408);
	VMJump(248);
	StackPush(0x8022);
	StackPushConst(104);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8023, 410);
	VMJump(217);
	StackPush(0x8022);
	StackPushConst(101);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8023, 138);
	VMJump(186);
	StackPush(0x8022);
	StackPushConst(102);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8023, 140);
	VMJump(155);
	StackPush(0x8022);
	StackPushConst(103);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8023, 142);
	VMJump(124);
	StackPush(0x8022);
	StackPushConst(100);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8023, 347);
	VMJump(93);
	StackPush(0x8022);
	StackPushConst(99);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8023, 345);
	VMJump(62);
	StackPush(0x8022);
	StackPushConst(572);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8023, 564);
	VMJump(31);
	StackPush(0x8022);
	StackPushConst(573);
	StackCmp(1);
	VMJumpIf(255, 12);
	WorkSetConst(0x8023, 566);
	VMJump(0);
	VMReturn();
}

void Routine5()
{
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	WordSetPokeSpecies(0, 0x8023);
	MsgActor(1024, 6, 0, 0);
	PokePartyGetCount(0x8027, 0);
	StackPush(0x8027);
	StackPushConst(6);
	StackCmp(1);
	VMJumpIf(255, 24);
	WorkGet(0x4134, 0x8022);
	WorkSetConst(0x8020, 9);
	Routine0();
	VMJump(92);
	MsgActorClose();
	WordSetPlayerName(0);
	WordSetPokeSpecies(1, 0x8023);
	MEPlay(1304);
	MsgSystem(7, 2);
	MEWait();
	MsgWaitAdvance();
	MsgSystemClose();
	PokePartyAdd(0x8010, 0x8023, 0, 25);
	WordSetPokeSpecies(0, 0x8023);
	MsgSystem(8, 2);
	YesNoWin(0x8010);
	MsgSystemClose();
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	VMJumpIf(255, 14);
	WorkGet(0x8026, 0x8027);
	CallPokeNameInput(0x8010, 0x8026, 1);
	WorkSetConst(0x4134, 0);
	VMReturn();
}

void Routine6()
{
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	MsgActorEx(1024, 2, 10, 2, 0);
	WorkSetConst(0x8022, 0);
	ListMenuInitTR(31, 1, 0, 1, 0x8024);
	WorkSetConst(0x8025, 99);
	ItemCheckCount(0x8025, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 8);
	ListMenuAdd(13, 0xFFFF, 99);
	WorkSetConst(0x8025, 100);
	ItemCheckCount(0x8025, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 8);
	ListMenuAdd(14, 0xFFFF, 100);
	WorkSetConst(0x8025, 101);
	ItemCheckCount(0x8025, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 8);
	ListMenuAdd(15, 0xFFFF, 101);
	WorkSetConst(0x8025, 102);
	ItemCheckCount(0x8025, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 8);
	ListMenuAdd(16, 0xFFFF, 102);
	WorkSetConst(0x8025, 103);
	ItemCheckCount(0x8025, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 8);
	ListMenuAdd(17, 0xFFFF, 103);
	WorkSetConst(0x8025, 104);
	ItemCheckCount(0x8025, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 8);
	ListMenuAdd(18, 0xFFFF, 104);
	WorkSetConst(0x8025, 105);
	ItemCheckCount(0x8025, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 8);
	ListMenuAdd(19, 0xFFFF, 105);
	WorkSetConst(0x8025, 572);
	ItemCheckCount(0x8025, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 13);
	WordSetItemName(0, 572);
	ListMenuAdd(11, 0xFFFF, 572);
	WorkSetConst(0x8025, 573);
	ItemCheckCount(0x8025, 1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	VMJumpIf(255, 13);
	WordSetItemName(1, 573);
	ListMenuAdd(12, 0xFFFF, 573);
	ListMenuAdd(20, 0xFFFF, 0);
	ListMenuShow();
	StackPush(0x8024);
	StackPushConst(0xFFFE);
	StackCmp(5);
	VMJumpIf(255, 55);
	StackPush(0x8024);
	StackPushConst(0);
	StackCmp(5);
	VMJumpIf(255, 18);
	WorkGet(0x8022, 0x8024);
	WorkSetConst(0x8010, 1);
	VMJump(12);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8010, 0);
	VMJump(12);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8010, 0);
	VMReturn();
}

void Routine7()
{
	WordSetItemName(0, 0x8022);
	MsgActor(1024, 3, 0, 0);
	MsgActorClose();
	CMD_23a(89, 1);

	Movement m[] = { //10
		WalkRight, 2,
		Vanish, 1,
	};

	ActorCmdWait();
	VMSleep(90);

	Movement m[] = { //10
		LookLeft, 1,
		Reappear, 1,
		WalkLeft, 2,
	};

	ActorCmdWait();
	Routine4();
	Routine5();
	VMReturn();
}
