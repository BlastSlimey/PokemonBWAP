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

	Movement m[] = { //1
		LookRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 1, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //1
		WalkLeft, 2,
		WalkDown, 5,
		WalkLeft, 3,
	};

	ActorCmdWait();
	ActorDelete(1);
	FlagSet(548);
	WorkSetConst(0x408C, 2);
	WorkSetConst(0x408D, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	StackPushFlag(2737);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	Routine0();
	goto label1;

label0: ;
	MsgInfo(6, 2);
	InputWaitLast();
	MsgInfoClose();

label1: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(7, 3);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	StackPush(0x8000);
	StackPush(0x8001);
	StackPush(0x8002);
	StackPush(0x8003);
	StackPush(0x8004);
	StackPush(0x8005);
	StackPush(0x8006);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	WorkSet(0x8002, 271);
	WorkSet(0x8003, 2);
	WorkSet(0x8004, 3);
	WorkSet(0x8005, 3);
	RTGetTextFile(0x8006);
	RTCallGlobal(2800);
	StackPop(0x8006);
	StackPop(0x8005);
	StackPop(0x8004);
	StackPop(0x8003);
	StackPop(0x8002);
	StackPop(0x8001);
	StackPop(0x8000);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8022, 0);
	PokePartyGetCount(0x8024, 0);

label9: ;
	StackPush(0x8022);
	StackPush(0x8024);
	StackCmp(0);
	if (255) goto label2;
	PokePartyIsEgg(0x8023, 0x8022);
	StackPush(0x8023);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	PokePartyGetTypes(0x8020, 0x8021, 0x8022);
	StackPush(0x8020);
	StackPushConst(1);
	StackCmp(1);
	StackPush(0x8021);
	StackPushConst(1);
	StackCmp(1);
	StackCmp(6);
	if (255) goto label4;
	WordSetPartyPokeName(0, 0x8022);
	MsgInfo(4, 2);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label5;
	WordSetPartyPokeName(0, 0x8022);
	MsgInfo(5, 2);
	MsgInfoClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2806);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(2737);
	WorkSetConst(0x8022, 6);
	WorkSetConst(0x8025, 1);
	goto label6;

label5: ;
	MsgInfoClose();
	WorkSetConst(0x8022, 6);
	WorkSetConst(0x8025, 1);

label6: ;
	goto label7;

label4: ;
	WorkAdd(0x8022, 1);

label7: ;
	goto label8;

label3: ;
	WorkAdd(0x8022, 1);

label8: ;
	goto label9;

label2: ;
	StackPush(0x8025);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label10;
	MsgInfo(6, 2);
	InputWaitLast();
	MsgInfoClose();

label10: ;
	VMReturn();
}
