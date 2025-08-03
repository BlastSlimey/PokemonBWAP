#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	Routine0();
	VMHalt();
}

void Sequence1()
{
	Routine0();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	Random(0x8021, 2);
	WorkSetConst(0x8022, 0x146);
	WorkAdd(0x8021, 0x8022);
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x8021);
	WorkSetConst(0x8001, 1);
	RTCallGlobal(2807);
	StackPop(0x8001);
	StackPop(0x8000);
	MsgSystem(0, 0);
	InputWaitLast();
	MsgSystemClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	StackPush(0x40D8);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(801);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label0;
	CMD_1eb(1, 23, 0, 45);
	CMD_1eb(2, 23, 0xFFFA, 50);

label0: ;
	VMReturn();
}
