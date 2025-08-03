#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(0x8002);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label0;
	MsgActor(0x8006, 0x8005, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label1;

label0: ;
	MsgActor(0x8006, 0x8003, 0, 0);
	MsgActorClose();
	ItemCheckSpace(0x8000, 0x8001, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	WorkGet(0x8008, 0x8000);
	WorkGet(0x8009, 0x8001);
	Routine0();
	goto label3;

label2: ;
	WorkGet(0x8008, 0x8000);
	WorkGet(0x8009, 0x8001);
	Routine1();

label3: ;
	MsgActor(0x8006, 0x8004, 0, 0);
	InputWaitLast();
	MsgActorClose();
	FlagSet(0x8002);

label1: ;
	RTEndGlobal();
	WorkGet(0x8008, 0x8000);
	WorkGet(0x8009, 0x8001);
	Routine1();
	RTEndGlobal();
	VMHalt();
}

void Sequence1()
{
	WorkGet(0x8008, 0x8000);
	WorkGet(0x8009, 0x8001);
	Routine1();
	RTEndGlobal();
	VMHalt();
}

void Sequence2()
{
	WorkGet(0x8008, 0x8000);
	WorkGet(0x8009, 0x8001);
	Routine2();
	RTEndGlobal();
	VMHalt();
}

void Sequence3()
{
	Routine0();
	RTEndGlobal();
	VMHalt();
}

void Sequence4()
{
	Routine3();
	RTEndGlobal();
	VMHalt();
}

void Sequence5()
{
	ItemCheckSpace(0x8000, 0x8001, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	WorkGet(0x8008, 0x8000);
	WorkGet(0x8009, 0x8001);
	Routine0();
	goto label5;

label4: ;
	WorkGet(0x8008, 0x8000);
	WorkGet(0x8009, 0x8001);
	Routine1();

label5: ;
	RTEndGlobal();
	VMHalt();
}

void Sequence6()
{
	Routine4();
	RTEndGlobal();
	VMHalt();
}

void Sequence7()
{
	Routine5();
	RTEndGlobal();
	VMHalt();
}

void Sequence8()
{
	Routine6();
	RTEndGlobal();
	VMHalt();
}

void Sequence9()
{
	Routine7();
	RTEndGlobal();
	VMHalt();
}

void Sequence10()
{
	Routine8();
	RTEndGlobal();
	VMHalt();
}

void Sequence11()
{
	Routine5();
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label6;
	FlagSet(0x8002);

label6: ;
	RTEndGlobal();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	WorkSetConst(0x8023, 0);
	WorkGet(0x8008, 0x8000);
	WorkSetConst(0x8009, 1);
	ItemCheckSpace(0x8000, 1, 0x8023);
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label7;
	Routine6();
	Routine9();
	MEWait();
	MsgWaitAdvance();
	MsgSystem(14, 0);
	InputWaitLast();
	MsgSystemClose();
	goto label8;

label7: ;
	Routine10();
	StackPush(0x8007);
	WorkSetConst(0x8007, 2);
	Routine15();
	StackPop(0x8007);
	CMD_1f0(0, 0x8000);
	WordSetPlayerName(0);
	WordSetItemName(1, 0x8000);
	ItemGetPocket(0x8008, 0x8010);
	WordSetItemPocketName(2, 0x8010);
	MsgSystem(10, 0);
	MsgSystem(13, 0);
	InputWaitLast();

label8: ;
	MsgSystemClose();
	WorkGet(0x8010, 0x8023);
	WorkSetConst(0x8023, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	Routine4();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence14()
{
	Routine11();
	RTEndGlobal();
	VMHalt();
}

void Sequence15()
{
	Routine15();
	RTEndGlobal();
	VMHalt();
}

void Routine0()
{
	WordSetItemNameEx(0, 0x8008, 2, 0);
	MsgSystem(7, 0);
	MsgSystemClose();
	VMReturn();
}

void Routine1()
{
	StackPush(0x8007);
	WorkSetConst(0x8007, 3);
	Routine15();
	StackPop(0x8007);
	Routine6();
	Routine12();
	MEWait();
	MsgWaitAdvance();
	Routine13();
	VMReturn();
}

void Routine2()
{
	StackPush(0x8007);
	WorkSetConst(0x8007, 3);
	Routine15();
	StackPop(0x8007);
	Routine6();
	Routine12();
	MEWait();
	MsgWaitAdvance();
	Routine14();
	VMReturn();
}

void Routine3()
{
	WordSetItemNameEx(0, 0x8008, 2, 0);
	MsgSystem(8, 0);
	InputWaitLast();
	MsgSystemClose();
	VMReturn();
}

void Routine4()
{
	ItemCheckSpace(0x8000, 0x8001, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	WorkGet(0x8008, 0x8000);
	WorkGet(0x8009, 0x8001);
	Routine3();
	goto label10;

label9: ;
	WorkGet(0x8008, 0x8000);
	WorkGet(0x8009, 0x8001);
	Routine2();

label10: ;
	VMReturn();
}

void Routine5()
{
	WorkSetConst(0x8020, 0);
	WorkGet(0x8008, 0x8000);
	WorkGet(0x8009, 0x8001);
	ItemCheckSpace(0x8000, 0x8001, 0x8020);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label11;
	Routine6();
	Routine9();
	MEWait();
	MsgWaitAdvance();
	Routine3();
	goto label12;

label11: ;
	Routine10();
	StackPush(0x8007);
	WorkSetConst(0x8007, 1);
	Routine15();
	StackPop(0x8007);
	CMD_1f0(0, 0x8000);
	Routine14();

label12: ;
	WorkGet(0x8010, 0x8020);
	VMReturn();
}

void Routine6()
{
	StackPush(0x8008);
	StackPushConst(616);
	StackCmp(1);
	StackPush(0x8008);
	StackPushConst(617);
	StackCmp(1);
	StackPush(0x8008);
	StackPushConst(622);
	StackCmp(1);
	StackPush(0x8008);
	StackPushConst(466);
	StackCmp(1);
	StackCmp(6);
	StackCmp(6);
	StackCmp(6);
	if (255) goto label13;
	MEPlay(1326);
	VMReturn();

label13: ;
	ItemGetPocket(0x8008, 0x8010);
	WorkCmpConst(0x8010, 4);
	if (1) goto label14;
	goto label15;

label14: ;
	MEPlay(1303);
	goto label16;

label15: ;
	WorkCmpConst(0x8010, 0);
	if (1) goto label17;
	WorkCmpConst(0x8010, 3);
	if (1) goto label17;
	WorkCmpConst(0x8010, 1);
	if (1) goto label17;
	goto label18;

label17: ;
	MEPlay(1302);
	goto label16;

label18: ;
	WorkCmpConst(0x8010, 2);
	if (1) goto label19;
	goto label16;

label19: ;
	MEPlay(1307);
	goto label16;

label16: ;
	VMReturn();
}

void Routine7()
{
	PlayerSetSpecialSequence(16);

	Movement m[] = { //255
		0x9A, 1,
	};

	VMReturn();
}

void Routine8()
{
	PlayerSetSpecialSequence(8);
	VMReturn();
}

void Routine9()
{
	ItemGetPocket(0x8008, 0x8010);
	WorkCmpConst(0x8010, 2);
	if (1) goto label20;
	goto label21;

label20: ;
	WordSetPlayerName(0);
	WordSetItemNameWithArticle(1, 0x8008);
	WordSetTMMoveName(2, 0x8008);
	MsgSystem(6, 0);
	goto label22;

label21: ;
	WorkCmpConst(0x8010, 4);
	if (1) goto label23;
	goto label24;

label23: ;
	CMD_240(0x8008);
	WordSetPlayerName(0);
	WordSetItemName(1, 0x8008);
	MsgSystem(4, 0);
	goto label22;

label24: ;
	WordSetPlayerName(0);
	WordSetItemNameEx(1, 0x8008, 0x8009, 1);
	MsgSystem(5, 0);

label22: ;
	VMReturn();
}

void Routine10()
{
	WorkSetConst(0x8022, 0);
	Routine6();
	VMSleep(4);
	CMD_24c(0x8022);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label25;
	Routine7();

label25: ;
	Routine9();
	MEWait();
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label26;
	ActorCmdWait();
	Routine8();

label26: ;
	MsgWaitAdvance();
	WorkSetConst(0x8022, 0);
	VMReturn();
}

void Routine11()
{
	WorkSetConst(0x8021, 0);
	WorkGet(0x8008, 0x8000);
	WorkGet(0x8009, 0x8001);
	ItemCheckSpace(0x8000, 0x8001, 0x8021);
	StackPush(0x8021);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label27;
	Routine6();
	Routine9();
	MEWait();
	MsgWaitAdvance();
	Routine0();
	goto label28;

label27: ;
	Routine10();
	StackPush(0x8007);
	WorkSetConst(0x8007, 1);
	Routine15();
	StackPop(0x8007);
	CMD_1f0(0, 0x8000);
	Routine13();

label28: ;
	WorkGet(0x8010, 0x8021);
	VMReturn();
}

void Routine12()
{
	ItemGetPocket(0x8008, 0x8010);
	WorkCmpConst(0x8010, 2);
	VMJumpIf(1, 6);
	VMJump(25);
	WordSetPlayerName(0);
	WordSetItemNameWithArticle(1, 0x8008);
	WordSetTMMoveName(2, 0x8008);
	MsgSystem(3, 0);
	VMJump(60);
	WorkCmpConst(0x8010, 4);
	VMJumpIf(1, 6);
	VMJump(24);
	CMD_240(0x8008);
	WordSetPlayerName(0);
	WordSetItemName(1, 0x8008);
	MsgSystem(1, 0);
	VMJump(17);
	WordSetPlayerName(0);
	WordSetItemNameEx(1, 0x8008, 0x8009, 1);
	MsgSystem(0, 0);
	VMReturn();
}

void Routine13()
{
	WordSetPlayerName(0);
	WordSetItemNameEx(1, 0x8008, 0x8009, 0);
	ItemGetPocket(0x8008, 0x8010);
	WordSetItemPocketName(2, 0x8010);
	MsgSystem(10, 0);
	MsgSystemClose();
	VMReturn();
}

void Routine14()
{
	WordSetPlayerName(0);
	WordSetItemNameEx(1, 0x8008, 0x8009, 0);
	ItemGetPocket(0x8008, 0x8010);
	WordSetItemPocketName(2, 0x8010);
	MsgSystem(11, 0);
	InputWaitLast();
	MsgSystemClose();
	VMReturn();
}

void Routine15()
{
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	if (0x8007 == 1)
	{
		WorkSet(0x8020, 0x8000);
		WorkSet(0x8021, 0x8001);
	}
	else
	{
		if (0x8007 == 2)
		{
			WorkSet(0x8020, 0x8000);
			WorkSetConst(0x8021, 1);
		}
		else
		{
			if (0x8007 == 3)
			{
				WorkSet(0x8020, 0x8008);
				WorkSet(0x8021, 0x8009);
			}
			else
			{
				FlagSet(0x190);
				VMReturn();
			}
		}
	}

	if (0x8020 == 0x78)
	{
		TrainerCardAddBadge(0);
		VMReturn();
	}
	if (0x8020 == 0x79)
	{
		TrainerCardAddBadge(1);
		VMReturn();
	}
	if (0x8020 == 0x7A)
	{
		TrainerCardAddBadge(2);
		VMReturn();
	}
	if (0x8020 == 0x7B)
	{
		TrainerCardAddBadge(3);
		VMReturn();
	}
	if (0x8020 == 0x7C)
	{
		TrainerCardAddBadge(4);
		VMReturn();
	}
	if (0x8020 == 0x7D)
	{
		TrainerCardAddBadge(5);
		VMReturn();
	}
	if (0x8020 == 0x7E)
	{
		TrainerCardAddBadge(6);
		VMReturn();
	}
	if (0x8020 == 0x7F)
	{
		TrainerCardAddBadge(7);
		VMReturn();
	}
	if (0x8020 == 0x80)
	{
		VMReturn();
	}
	if (0x8020 == 0x81)
	{
		FlagSet(0x181);
		VMReturn();
	}
	if (0x8020 == 0x82)
	{
		FlagSet(0x182);
		VMReturn();
	}
	if (0x8020 == 0x83)
	{
		FlagSet(0x183);
		VMReturn();
	}
	if (0x8020 == 0x84)
	{
		FlagSet(0x184);
		VMReturn();
	}

	ItemAdd(0x8020, 0x8021, 0x8010);
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	VMReturn();
}

