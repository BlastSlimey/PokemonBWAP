#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	FlagGet(2413, 0x8025);
	FlagGet(2402, 0x8026);
	FlagGet(2400, 0x8022);
	HOFCheckIntegrity(0x8023);
	PokecenPCOpen();
	WordSetPlayerName(0);
	MsgSystem(0, 2);

label23: ;
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	MsgSystem(1, 2);
	ListMenuInitTR(31, 1, 0, 1, 0x8024);
	StackPush(0x8025);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	ListMenuAdd(2, 0xFFFF, 2);
	goto label2;

label1: ;
	ListMenuAdd(3, 0xFFFF, 3);

label2: ;
	WordSetPlayerName(0);
	ListMenuAdd(4, 0xFFFF, 4);
	StackPush(0x8026);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label3;
	ListMenuAdd(5, 0xFFFF, 5);

label3: ;
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label4;
	ListMenuAdd(6, 0xFFFF, 6);

label4: ;
	ListMenuAdd(7, 0xFFFF, 7);
	ListMenuAdd(8, 0xFFFF, 8);
	ListMenuShow2();
	MsgSystemClose();
	VMSleep(3);
	WorkCmpConst(0x8024, 2);
	if (1) goto label5;
	goto label6;

label5: ;
	Routine0();
	goto label7;

label6: ;
	WorkCmpConst(0x8024, 3);
	if (1) goto label8;
	goto label9;

label8: ;
	Routine0();
	goto label7;

label9: ;
	WorkCmpConst(0x8024, 4);
	if (1) goto label10;
	goto label11;

label10: ;
	Routine1();
	goto label7;

label11: ;
	WorkCmpConst(0x8024, 5);
	if (1) goto label12;
	goto label13;

label12: ;
	Routine2();
	goto label7;

label13: ;
	WorkCmpConst(0x8024, 6);
	if (1) goto label14;
	goto label15;

label14: ;
	Routine3();
	goto label7;

label15: ;
	WorkCmpConst(0x8024, 7);
	if (1) goto label16;
	goto label17;

label16: ;
	ListMenuInitTR(31, 1, 0, 0, 0x8010);
	ListMenuAdd(7, 0xFFFF, 0);
	WordSetPlayerName(0);
	ListMenuAdd(4, 0xFFFF, 1);
	ListMenuAdd(8, 0xFFFF, 2);
	ListMenuShow2();
	if (0x8010 == 0)
	{
		Routine4();
	}
	else
	{
		if (0x8010 == 1)
		{
			Routine5();
		}
	}
	goto label7;

label17: ;
	WorkCmpConst(0x8024, 8);
	if (1) goto label18;
	goto label19;

label18: ;
	WorkSetConst(0x8020, 1);
	goto label7;

label19: ;
	WorkCmpConst(0x8024, 0xFFFE);
	if (1) goto label20;
	goto label21;

label20: ;
	WorkSetConst(0x8020, 1);
	goto label7;

label21: ;
	WorkCmpConst(0x8024, 0xFFFD);
	if (1) goto label22;
	goto label7;

label22: ;
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8021, 1);
	goto label7;

label7: ;
	goto label23;

label0: ;
	PokecenPCClose(0x8021);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8024, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8029, 0);
	WorkSetConst(0x802A, 0);
	WorkSetConst(0x802B, 0);
	FlagGet(2400, 0x802A);
	FlagGet(2427, 0x802B);
	SEPlay(1372);
	MsgSystem(13, 2);
	StackPush(0x802A);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label24;
	FlagGet(331, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label24;
	MEPlay(1308);
	MEWait();
	MsgSystem(11, 2);
	FlagSet(331);

label24: ;
	StackPush(0x802B);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label25;
	FlagGet(332, 0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label25;
	MEPlay(1308);
	MEWait();
	MsgSystem(12, 2);
	FlagSet(332);

label25: ;
	WorkSetConst(0x8027, 0);

label45: ;
	StackPush(0x8027);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label26;
	MsgSystem(40, 2);
	ListMenuInitTR(31, 1, 0, 1, 0x8028);
	ListMenuAdd(14, 20, 14);
	ListMenuAdd(15, 21, 15);
	ListMenuAdd(16, 22, 16);
	ListMenuAdd(19, 25, 19);
	ListMenuAdd(17, 23, 17);
	ListMenuAdd(18, 24, 18);
	ListMenuShow2();
	MsgSystemClose();
	WorkCmpConst(0x8028, 18);
	if (1) goto label27;
	goto label28;

label27: ;
	VMReturn();
	goto label29;

label28: ;
	WorkCmpConst(0x8028, 0xFFFE);
	if (1) goto label30;
	goto label31;

label30: ;
	VMReturn();
	goto label29;

label31: ;
	WorkCmpConst(0x8028, 0xFFFD);
	if (1) goto label32;
	goto label29;

label32: ;
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8021, 1);
	VMReturn();
	goto label29;

label29: ;
	CMD_1ae();
	CMD_1b1();
	WorkCmpConst(0x8028, 14);
	if (1) goto label33;
	goto label34;

label33: ;
	CallPC(0x8029, 0);
	goto label35;

label34: ;
	WorkCmpConst(0x8028, 15);
	if (1) goto label36;
	goto label37;

label36: ;
	CallPC(0x8029, 1);
	goto label35;

label37: ;
	WorkCmpConst(0x8028, 16);
	if (1) goto label38;
	goto label39;

label38: ;
	CallPC(0x8029, 2);
	goto label35;

label39: ;
	WorkCmpConst(0x8028, 19);
	if (1) goto label40;
	goto label41;

label40: ;
	CallPC(0x8029, 4);
	goto label35;

label41: ;
	WorkCmpConst(0x8028, 17);
	if (1) goto label42;
	goto label35;

label42: ;
	CallPC(0x8029, 3);
	goto label35;

label35: ;
	PokecenPCIdle();
	CMD_1ad();
	CMD_1b1();
	StackPush(0x8029);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label43;
	SEPlay(1372);
	goto label44;

label43: ;
	WorkSetConst(0x8027, 1);
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8021, 1);

label44: ;
	goto label45;

label26: ;
	WorkSetConst(0x802B, 0);
	WorkSetConst(0x802A, 0);
	WorkSetConst(0x8029, 0);
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8027, 0);
	VMReturn();
}

void Routine1()
{
	WorkSetConst(0x802C, 0);
	WorkSetConst(0x802D, 0);
	WorkSetConst(0x802E, 0);
	SEPlay(1372);
	WordSetPlayerName(0);
	MsgSystem(26, 2);
	MsgSystemClose();
	WorkSetConst(0x802C, 0);

label55: ;
	StackPush(0x802C);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label46;
	MsgSystem(40, 2);
	ListMenuInitTR(31, 1, 0, 1, 0x802D);
	ListMenuAdd(27, 29, 27);
	ListMenuAdd(28, 30, 28);
	ListMenuShow2();
	MsgSystemClose();
	WorkCmpConst(0x802D, 28);
	if (1) goto label47;
	goto label48;

label47: ;
	VMReturn();
	goto label49;

label48: ;
	WorkCmpConst(0x802D, 0xFFFE);
	if (1) goto label50;
	goto label51;

label50: ;
	VMReturn();
	goto label49;

label51: ;
	WorkCmpConst(0x802D, 0xFFFD);
	if (1) goto label52;
	goto label49;

label52: ;
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8021, 1);
	VMReturn();
	goto label49;

label49: ;
	CMD_1ae();
	CMD_1b1();
	CallMailbox(0x802E);
	PokecenPCIdle();
	CMD_1ad();
	CMD_1b1();
	StackPush(0x802E);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label53;
	SEPlay(1372);
	goto label54;

label53: ;
	WorkSetConst(0x802C, 1);
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8021, 1);

label54: ;
	goto label55;

label46: ;
	WorkSetConst(0x802E, 0);
	WorkSetConst(0x802D, 0);
	WorkSetConst(0x802C, 0);
	VMReturn();
}

void Routine2()
{
	SEPlay(1372);
	MsgSystem(38, 2);
	RTCallGlobal(10382);
	VMReturn();
}

void Routine3()
{
	WorkSetConst(0x802F, 0);
	WorkSetConst(0x8030, 0);
	SEPlay(1372);
	MsgSystem(34, 2);
	MsgSystemClose();
	WorkSetConst(0x802F, 1);

label73: ;
	StackPush(0x802F);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label56;
	MsgSystem(40, 2);
	ListMenuInitTR(31, 1, 0, 1, 0x8030);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label57;
	ListMenuAdd(31, 35, 31);

label57: ;
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(5);
	if (255) goto label58;
	ListMenuAdd(32, 36, 32);

label58: ;
	ListMenuAdd(33, 37, 33);
	MsgSystem(40, 2);
	ListMenuShow2();
	MsgSystemClose();
	WorkCmpConst(0x8030, 31);
	if (1) goto label59;
	goto label60;

label59: ;
	CallRecordSystem(0, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label61;
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8021, 1);
	WorkSetConst(0x802F, 0);

label61: ;
	goto label62;

label60: ;
	WorkCmpConst(0x8030, 32);
	if (1) goto label63;
	goto label64;

label63: ;
	StackPush(0x8023);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label65;
	CallRecordSystem(1, 0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label66;
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8021, 1);
	WorkSetConst(0x802F, 0);

label66: ;
	goto label67;

label65: ;
	MsgSystem(10, 2);
	MsgSystemClose();

label67: ;
	goto label62;

label64: ;
	WorkCmpConst(0x8030, 33);
	if (1) goto label68;
	goto label69;

label68: ;
	WorkSetConst(0x802F, 0);
	goto label62;

label69: ;
	WorkCmpConst(0x8030, 0xFFFE);
	if (1) goto label70;
	goto label71;

label70: ;
	WorkSetConst(0x802F, 0);
	goto label62;

label71: ;
	WorkCmpConst(0x8030, 0xFFFD);
	if (1) goto label72;
	goto label62;

label72: ;
	WorkSetConst(0x802F, 0);
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8021, 1);
	goto label62;

label62: ;
	goto label73;

label56: ;
	WorkSetConst(0x8030, 0);
	WorkSetConst(0x802F, 0);
	VMReturn();
}

void Routine4()
{
	SEPlay(1372);
	MsgSystem(39, 2);
	MsgSystemClose();
	CMD_244(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label74;
	WorkSetConst(0x8020, 1);
	WorkSetConst(0x8021, 1);

label74: ;
	VMReturn();
}

void Routine5()
{
	WorkSetConst(0x802C, 0);
	WorkSetConst(0x802D, 0);
	WorkSetConst(0x802E, 0);
	WorkSetConst(0x802F, 0);
	// choose decimal or hex
	ListMenuInitTR(31, 1, 0, 0, 0x802C);
	ListMenuAdd(7, 0xFFFF, 0);
	ListMenuAdd(7, 0xFFFF, 1);
	ListMenuShow2();
	// choose mode
	Routine8();
	WorkSet(0x802D, 0x8010);
	if (0x802C == 0)
	{
		Routine8();
		WorkSet(0x802E, 0x8010);
	}
	else
	{
		Routine9();
		WorkSet(0x802E, 0x8010);
	}
	// OOPS NOT POSSIBLE 478 is var
	// 107 is pkmn
	// 216 is item
	// 256 is item sub
	// 100 is flag
	// 999 if unset flag
	// if entered incorrectly, you will be blocked
	// as long as on map
	// but mode still shown as choosable
	// including values
	if (0x4007 != 0xFFFF)
	{
		WorkSetConst(0x802F, 0);
		if (0x802D == 107)
		{
			PokePartyAdd(0x8010, 0x802E, 0, 5);
			WorkSetConst(0x802F, 1);
		}
		if (0x802D == 216)
		{
			ItemAdd(0x802E, 1, 0x8010);
			WorkSetConst(0x802F, 1);
		}
		if (0x802D == 256)
		{
			ItemSub(0x802E, 1, 0x8010);
			WorkSetConst(0x802F, 1);
		}
		if (0x802D == 100)
		{
			FlagSet(0x802E);
			WorkSetConst(0x802F, 1);
		}
		if (0x802D == 999)
		{
			FlagReset(0x802E);
			WorkSetConst(0x802F, 1);
		}
		if (0x802F == 0)
		{
			WorkSetConst(0x4007, 0xFFFF);
		}
	}
	WorkSetConst(0x802C, 0);
	WorkSetConst(0x802D, 0);
	WorkSetConst(0x802E, 0);
	WorkSetConst(0x802F, 0);
	VMReturn();
}

void Routine6()
{
	WorkSetConst(0x8010, 0);
	ListMenuInitTR(31, 1, 0, 0, 0x8010);
	ListMenuAdd(8, 0xFFFF, 0);
	ListMenuAdd(7, 0xFFFF, 1);
	ListMenuAdd(7, 0xFFFF, 2);
	ListMenuAdd(7, 0xFFFF, 3);
	ListMenuAdd(7, 0xFFFF, 4);
	ListMenuAdd(8, 0xFFFF, 5);
	ListMenuAdd(7, 0xFFFF, 6);
	ListMenuAdd(7, 0xFFFF, 7);
	ListMenuAdd(7, 0xFFFF, 8);
	ListMenuAdd(7, 0xFFFF, 9);
	ListMenuShow2();
	VMReturn();
}

void Routine7()
{
	WorkSetConst(0x8010, 0);
	ListMenuInitTR(31, 1, 0, 0, 0x8010);
	ListMenuAdd(8, 0xFFFF, 0);
	ListMenuAdd(7, 0xFFFF, 1);
	ListMenuAdd(7, 0xFFFF, 2);
	ListMenuAdd(7, 0xFFFF, 3);
	ListMenuAdd(8, 0xFFFF, 4);
	ListMenuAdd(7, 0xFFFF, 5);
	ListMenuAdd(7, 0xFFFF, 6);
	ListMenuAdd(7, 0xFFFF, 7);
	ListMenuAdd(8, 0xFFFF, 8);
	ListMenuAdd(7, 0xFFFF, 9);
	ListMenuAdd(7, 0xFFFF, 10);
	ListMenuAdd(7, 0xFFFF, 11);
	ListMenuAdd(8, 0xFFFF, 12);
	ListMenuAdd(7, 0xFFFF, 13);
	ListMenuAdd(7, 0xFFFF, 14);
	ListMenuAdd(7, 0xFFFF, 15);
	ListMenuShow2();
	VMReturn();
}

void Routine8()
{
	Routine6();
	WorkMul(0x8010, 1000);
	WorkSet(0x802F, 0x8010);
	Routine6();
	WorkMul(0x8010, 100);
	WorkAdd(0x802F, 0x8010);
	Routine6();
	WorkMul(0x8010, 10);
	WorkAdd(0x802F, 0x8010);
	Routine6();
	WorkAdd(0x802F, 0x8010);
	WorkSet(0x8010, 0x802F);
	VMReturn();
}

void Routine9()
{
	Routine7();
	WorkMul(0x8010, 0x1000);
	WorkSet(0x802F, 0x8010);
	Routine7();
	WorkMul(0x8010, 0x100);
	WorkAdd(0x802F, 0x8010);
	Routine7();
	WorkMul(0x8010, 0x10);
	WorkAdd(0x802F, 0x8010);
	Routine7();
	WorkAdd(0x802F, 0x8010);
	WorkSet(0x8010, 0x802F);
	VMReturn();
}
