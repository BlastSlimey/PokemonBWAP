#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	Routine0();
	Routine1();
	FieldSetTeleportZone(1);
	MoneyAdd(3000);
	VMHalt();
}

void Sequence1()
{
	StackPushFlag(2400);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label0;
	Routine2();
	goto label1;

label0: ;
	StackPushFlag(2427);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	Routine3();

label1: ;
	PokePartyRecoverAll();
	FieldSetTeleportZone(1);
	FieldSetNextZone(391, 1, 5, 0, 6);
	FlagSet(2406);
	FlagSet(368);
	StackPushFlag(649);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(166);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label2;
	FlagReset(649);

label2: ;
	StackPushFlag(650);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(167);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label3;
	FlagReset(650);

label3: ;
	StackPushFlag(651);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(168);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label4;
	FlagReset(651);

label4: ;
	StackPushFlag(750);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(313);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label5;
	FlagReset(750);

label5: ;
	StackPushFlag(766);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(307);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label6;
	FlagReset(766);

label6: ;
	StackPushFlag(801);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(338);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label7;
	FlagReset(801);

label7: ;
	StackPushFlag(810);
	StackPushConst(1);
	StackCmp(1);
	StackPushFlag(348);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label8;
	FlagReset(810);

label8: ;
	VMHalt();
}

void Sequence2()
{
	Routine0();
	FieldSetTeleportZone(3);
	FlagSet(115);
	FlagSet(2401);
	FlagSet(2402);
	PlayerEnableRunningShoes();
	VMHalt();
}

void Routine0()
{
	FlagSet(517);
	FlagSet(572);
	FlagSet(625);
	FlagSet(2436);
	FlagSet(523);
	FlagSet(524);
	FlagSet(525);
	FlagSet(528);
	FlagSet(637);
	FlagSet(519);
	FlagSet(501);
	FlagSet(530);
	FlagSet(529);
	FlagSet(562);
	FlagSet(648);
	FlagSet(547);
	FlagSet(536);
	FlagSet(537);
	FlagSet(539);
	FlagSet(540);
	FlagSet(558);
	FlagSet(544);
	FlagSet(545);
	FlagSet(805);
	FlagSet(546);
	FlagSet(555);
	FlagSet(557);
	FlagSet(717);
	FlagSet(551);
	FlagSet(636);
	FlagSet(534);
	FlagSet(532);
	FlagSet(533);
	FlagSet(757);
	FlagSet(707);
	FlagSet(748);
	FlagSet(566);
	FlagSet(567);
	FlagSet(815);
	FlagSet(582);
	FlagSet(584);
	FlagSet(541);
	FlagSet(576);
	FlagSet(577);
	FlagSet(578);
	FlagSet(587);
	FlagSet(603);
	FlagSet(604);
	FlagSet(605);
	FlagSet(606);
	FlagSet(613);
	FlagSet(607);
	FlagSet(659);
	FlagSet(614);
	FlagSet(751);
	FlagSet(588);
	FlagSet(589);
	FlagSet(594);
	FlagSet(599);
	FlagSet(600);
	FlagSet(601);
	FlagSet(617);
	FlagSet(618);
	FlagSet(548);
	FlagSet(552);
	FlagSet(654);
	FlagSet(615);
	FlagSet(616);
	FlagSet(639);
	FlagSet(780);
	FlagSet(662);
	FlagSet(668);
	FlagSet(658);
	FlagSet(660);
	FlagSet(661);
	FlagSet(641);
	FlagSet(657);
	FlagSet(669);
	FlagSet(568);
	FlagSet(675);
	FlagSet(656);
	FlagSet(679);
	FlagSet(688);
	FlagSet(699);
	FlagSet(702);
	FlagSet(703);
	FlagSet(731);
	FlagSet(734);
	FlagSet(735);
	FlagSet(736);
	FlagSet(708);
	FlagSet(750);
	FlagSet(759);
	FlagSet(763);
	FlagSet(681);
	FlagSet(682);
	FlagSet(683);
	FlagSet(684);
	FlagSet(685);
	FlagSet(742);
	FlagSet(743);
	FlagSet(744);
	FlagSet(745);
	FlagSet(746);
	FlagSet(747);
	FlagSet(766);
	FlagSet(796);
	FlagSet(797);
	FlagSet(798);
	FlagSet(799);
	FlagSet(800);
	FlagSet(803);
	FlagSet(804);
	FlagSet(640);
	FlagSet(2430);
	FlagSet(706);
	FlagSet(718);
	FlagSet(811);
	FlagSet(812);
	FlagSet(813);
	FlagSet(814);
	FlagSet(816);
	WorkSetConst(0x4116, 1);
	FlagSet(817);
	FlagSet(829);
	FlagSet(835);
	FlagSet(837);
	FlagSet(655);
	FlagSet(838);
	FlagSet(839);
	FlagSet(842);
	FlagSet(843);
	VMReturn();
}

void Routine1()
{
	GameGetVersion(0x8010);
	WorkCmpConst(0x8010, 21);
	if (1) goto label9;
	goto label10;

label9: ;
	CMD_21c(0, 1);
	goto label11;

label10: ;
	WorkCmpConst(0x8010, 20);
	if (1) goto label12;
	goto label11;

label12: ;
	CMD_21c(0, 2);
	goto label11;

label11: ;
	TrainerCardGetSex(0x8010);
	WorkCmpConst(0x8010, 0);
	if (1) goto label13;
	goto label14;

label13: ;
	CMD_21c(1, 1);
	goto label15;

label14: ;
	WorkCmpConst(0x8010, 1);
	if (1) goto label16;
	goto label15;

label16: ;
	CMD_21c(1, 2);
	goto label15;

label15: ;
	CMD_21c(29, 1);
	VMReturn();
}

void Routine2()
{
	FlagSet(2400);
	MapReplaceSetEvent(1, 0, 0);
	FlagReset(2428);
	FlagReset(599);
	WorkSetConst(0x40A2, 3);
	FlagReset(185);
	MapReplaceSetEvent(5, 1, 0);
	CMD_E4(1);
	FlagReset(815);
	FlagReset(780);
	WorkSetConst(0x40D2, 1);
	WorkSetConst(0x4085, 2);
	FlagReset(736);
	FlagReset(708);
	FlagReset(707);
	FlagSet(820);
	FlagReset(716);
	FlagReset(706);
	FlagReset(717);
	FlagSet(740);
	FlagSet(740);
	FlagSet(760);
	WorkSetConst(0x40D0, 1);
	FlagReset(718);
	FlagSet(355);
	StackPush(0x4077);
	StackPushConst(2);
	StackCmp(5);
	if (255) goto label17;
	WorkSetConst(0x4077, 1);

label17: ;
	VMReturn();
}

void Routine3()
{
	FlagSet(2427);
	FlagReset(817);
	FlagSet(512);
	CMD_E4(2);
	VMReturn();
}
