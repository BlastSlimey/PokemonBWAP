#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	PlayerGetDir(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	SEPlay(1740);
	SEWait();
	CMD_1b6();
	CMD_192(1);
	CMD_1b1();
	RTReserveScript(15);
	MapChangeCore(97, 17, 50, 25, 0);

label0: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	CMD_18b();
	CMD_1b5();
	CMD_192(0);
	CMD_1b1();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	StackPushFlag(122);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	MsgActor(1024, 0, 0, 0);
	MsgActorClose();
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2805);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(122);
	MsgActor(1024, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label3;

label2: ;
	FlagGet(0x176, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	MsgActor(1024, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();

label3: ;
	goto label4;

label1: ;
	MsgActor(1024, 2, 0, 0);
	InputWaitLast();
	MsgActorClose();

label4: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	WordSetPlayerName(0);
	FlagGet(0x176, 0x8008);
	StackPush(0x8008);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label5; // jump if defeated
	MsgInfo(5, 2);
	goto label6;

label5: ;
	StackPush(0x409A);
	StackPushConst(2);
	StackCmp(4);
	if (255) goto label7;
	MsgInfo(7, 2);
	goto label6;

label7: ;
	MsgInfo(6, 2);

label6: ;
	InputWaitLast();
	MsgInfoClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgSystem(4, 2);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}
