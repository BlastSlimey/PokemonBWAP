#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 0, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	WordSetPokeSpecies(0, 585);
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(350);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	StackPushFlag(811);
	StackPushConst(0);
	StackCmp(1);
	StackPushFlag(812);
	StackPushConst(0);
	StackCmp(1);
	StackPushFlag(813);
	StackPushConst(0);
	StackCmp(1);
	StackPushFlag(814);
	StackPushConst(0);
	StackCmp(1);
	StackPush(0x4001);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	StackCmp(7);
	StackCmp(7);
	StackCmp(7);
	if (255) goto label1;
	MsgActor(1024, 11, 0, 0);
	MsgWinCloseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(350);
	goto label2;

label1: ;
	StackPushFlag(349);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	StackPush(0x4002);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	StackPush(0x4000);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label5;
	MsgActor(1024, 2, 0, 0);
	MsgActor(1024, 3, 0, 0);

label5: ;
	Routine0();
	FlagSet(349);
	WorkSetConst(0x4000, 1);
	goto label6;

label4: ;
	StackPush(0x4002);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label7;
	MsgActor(1024, 5, 0, 0);
	goto label6;

label7: ;
	StackPush(0x4002);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label8;
	MsgActor(1024, 6, 0, 0);
	goto label6;

label8: ;
	StackPush(0x4002);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label9;
	MsgActor(1024, 7, 0, 0);
	goto label6;

label9: ;
	StackPush(0x4002);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label6;
	MsgActor(1024, 8, 0, 0);

label6: ;
	InputWaitLast();
	MsgWinCloseAll();
	goto label2;

label3: ;
	StackPush(0x4002);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	Routine0();
	goto label11;

label10: ;
	StackPush(0x4002);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label12;
	MsgActor(1024, 5, 0, 0);
	goto label11;

label12: ;
	StackPush(0x4002);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label13;
	MsgActor(1024, 6, 0, 0);
	goto label11;

label13: ;
	StackPush(0x4002);
	StackPushConst(3);
	StackCmp(1);
	if (255) goto label14;
	MsgActor(1024, 7, 0, 0);
	goto label11;

label14: ;
	StackPush(0x4002);
	StackPushConst(4);
	StackCmp(1);
	if (255) goto label11;
	MsgActor(1024, 8, 0, 0);

label11: ;
	InputWaitLast();
	MsgWinCloseAll();

label2: ;
	goto label15;

label0: ;
	MsgActor(1024, 12, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label15: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 18, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8027, 0);
	RTCGetSeason(0x8027);
	StackPush(0x8027);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label16;
	MsgInfo(19, 2);
	goto label17;

label16: ;
	StackPush(0x8027);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label18;
	MsgInfo(20, 2);
	goto label17;

label18: ;
	StackPush(0x8027);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label19;
	MsgInfo(21, 2);
	goto label17;

label19: ;
	MsgInfo(22, 2);

label17: ;
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x8027, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8029, 0);
	RTCGetSeason(0x8028);
	StackPush(0x8028);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label20;
	WordSetNumber(0, 0x4003, 2);
	MsgInfo(23, 2);
	goto label21;

label20: ;
	StackPush(0x8028);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label22;
	WordSetNumber(0, 0x4003, 2);
	MsgInfo(24, 2);
	goto label21;

label22: ;
	StackPush(0x8028);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label23;
	WordSetNumber(0, 0x4003, 2);
	MsgInfo(25, 2);
	goto label21;

label23: ;
	WordSetNumber(0, 0x4003, 2);
	MsgInfo(26, 2);

label21: ;
	InputWaitLast();
	MsgWinCloseAll();
	WorkSetConst(0x8029, 0);
	WorkSetConst(0x8028, 0);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(585, 0);
	MsgActor(1024, 14, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(585, 0);
	MsgActor(1024, 15, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(585, 0);
	MsgActor(1024, 16, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	PVPlay(585, 0);
	MsgActor(1024, 17, 0, 0);
	PVWait();
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	WorkSetConst(0x8020, 0);
	RTCGetSeason(0x8020);
	StackPush(0x8020);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label24;
	Random(0x4003, 9);
	WorkAdd(0x4003, 11);
	goto label25;

label24: ;
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label26;
	Random(0x4003, 16);
	WorkAdd(0x4003, 19);
	goto label25;

label26: ;
	StackPush(0x8020);
	StackPushConst(2);
	StackCmp(1);
	if (255) goto label27;
	Random(0x4003, 9);
	WorkAdd(0x4003, 11);
	goto label25;

label27: ;
	Random(0x4003, 9);
	WorkAdd(0x4003, 1);

label25: ;
	WorkSetConst(0x8020, 0);
	VMHalt();
}

void Routine0()
{
	MsgActor(1024, 4, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label28;
	MsgWinCloseAll();
	CallPokeSelect(0x8022, 0x8023, 0);
	PokePartyGetSpecies(0x8021, 0x8023);
	PokePartyIsEgg(0x8026, 0x8023);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label29;
	StackPush(0x8026);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label30;
	StackPush(0x8021);
	StackPushConst(585);
	StackCmp(1);
	if (255) goto label31;
	PokePartyGetForme(0x8024, 0x8023);
	StackPush(0x8024);
	StackPushConst(0);
	StackCmp(1);
	StackPushFlag(811);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label32;
	MsgActor(1024, 5, 0, 0);
	FlagReset(811);
	WorkSetConst(0x4002, 1);
	goto label33;

label32: ;
	StackPush(0x8024);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(812);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label34;
	MsgActor(1024, 6, 0, 0);
	FlagReset(812);
	WorkSetConst(0x4002, 2);
	goto label33;

label34: ;
	StackPush(0x8024);
	StackPushConst(2);
	StackCmp(1);
	StackPushFlag(813);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label35;
	MsgActor(1024, 7, 0, 0);
	FlagReset(813);
	WorkSetConst(0x4002, 3);
	goto label33;

label35: ;
	StackPush(0x8024);
	StackPushConst(3);
	StackCmp(1);
	StackPushFlag(814);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label36;
	MsgActor(1024, 8, 0, 0);
	FlagReset(814);
	WorkSetConst(0x4002, 4);
	goto label33;

label36: ;
	MsgActor(1024, 9, 0, 0);

label33: ;
	WorkSetConst(0x4001, 1);
	goto label37;

label31: ;
	WordSetPokeSpecies(0, 585);
	MsgActor(1024, 13, 0, 0);

label37: ;
	goto label38;

label30: ;
	WordSetPokeSpecies(0, 585);
	MsgActor(1024, 13, 0, 0);

label38: ;
	goto label39;

label29: ;
	MsgActor(1024, 10, 0, 0);

label39: ;
	goto label40;

label28: ;
	MsgActor(1024, 10, 0, 0);

label40: ;
	VMReturn();
}
