#include "UnitType.h"

#define BWAPI_TYPEDEF(type, x) const type x(Enum::x)

namespace BWAPI {
namespace UnitTypes {
BWAPI_TYPEDEF(UnitType, Terran_Marine);
BWAPI_TYPEDEF(UnitType, Terran_Ghost);
BWAPI_TYPEDEF(UnitType, Terran_Vulture);
BWAPI_TYPEDEF(UnitType, Terran_Goliath);
// goliath turret (4)
BWAPI_TYPEDEF(UnitType, Terran_Siege_Tank_Tank_Mode);
// siege tank turret (6)
BWAPI_TYPEDEF(UnitType, Terran_SCV);
BWAPI_TYPEDEF(UnitType, Terran_Wraith);
BWAPI_TYPEDEF(UnitType, Terran_Science_Vessel);
BWAPI_TYPEDEF(UnitType, Hero_Gui_Montag);
BWAPI_TYPEDEF(UnitType, Terran_Dropship);
BWAPI_TYPEDEF(UnitType, Terran_Battlecruiser);
BWAPI_TYPEDEF(UnitType, Terran_Vulture_Spider_Mine);
BWAPI_TYPEDEF(UnitType, Terran_Nuclear_Missile);
BWAPI_TYPEDEF(UnitType, Terran_Civilian);
BWAPI_TYPEDEF(UnitType, Hero_Sarah_Kerrigan);
BWAPI_TYPEDEF(UnitType, Hero_Alan_Schezar);
// alan turret (18)
BWAPI_TYPEDEF(UnitType, Hero_Jim_Raynor_Vulture);
BWAPI_TYPEDEF(UnitType, Hero_Jim_Raynor_Marine);
BWAPI_TYPEDEF(UnitType, Hero_Tom_Kazansky);
BWAPI_TYPEDEF(UnitType, Hero_Magellan);
BWAPI_TYPEDEF(UnitType, Hero_Edmund_Duke_Tank_Mode);
// edmund duke turret (24)
BWAPI_TYPEDEF(UnitType, Hero_Edmund_Duke_Siege_Mode);
// edmund duke turret siege mode (26)
BWAPI_TYPEDEF(UnitType, Hero_Arcturus_Mengsk);
BWAPI_TYPEDEF(UnitType, Hero_Hyperion);
BWAPI_TYPEDEF(UnitType, Hero_Norad_II);
BWAPI_TYPEDEF(UnitType, Terran_Siege_Tank_Siege_Mode);
// siege tank siege mode turret (31)
BWAPI_TYPEDEF(UnitType, Terran_Firebat);
BWAPI_TYPEDEF(UnitType, Spell_Scanner_Sweep);
BWAPI_TYPEDEF(UnitType, Terran_Medic);
BWAPI_TYPEDEF(UnitType, Zerg_Larva);
BWAPI_TYPEDEF(UnitType, Zerg_Egg);
BWAPI_TYPEDEF(UnitType, Zerg_Zergling);
BWAPI_TYPEDEF(UnitType, Zerg_Hydralisk);
BWAPI_TYPEDEF(UnitType, Zerg_Ultralisk);
BWAPI_TYPEDEF(UnitType, Zerg_Broodling);
BWAPI_TYPEDEF(UnitType, Zerg_Drone);
BWAPI_TYPEDEF(UnitType, Zerg_Overlord);
BWAPI_TYPEDEF(UnitType, Zerg_Mutalisk);
BWAPI_TYPEDEF(UnitType, Zerg_Guardian);
BWAPI_TYPEDEF(UnitType, Zerg_Queen);
BWAPI_TYPEDEF(UnitType, Zerg_Defiler);
BWAPI_TYPEDEF(UnitType, Zerg_Scourge);
BWAPI_TYPEDEF(UnitType, Hero_Torrasque);
BWAPI_TYPEDEF(UnitType, Hero_Matriarch);
BWAPI_TYPEDEF(UnitType, Zerg_Infested_Terran);
BWAPI_TYPEDEF(UnitType, Hero_Infested_Kerrigan);
BWAPI_TYPEDEF(UnitType, Hero_Unclean_One);
BWAPI_TYPEDEF(UnitType, Hero_Hunter_Killer);
BWAPI_TYPEDEF(UnitType, Hero_Devouring_One);
BWAPI_TYPEDEF(UnitType, Hero_Kukulza_Mutalisk);
BWAPI_TYPEDEF(UnitType, Hero_Kukulza_Guardian);
BWAPI_TYPEDEF(UnitType, Hero_Yggdrasill);
BWAPI_TYPEDEF(UnitType, Terran_Valkyrie);
BWAPI_TYPEDEF(UnitType, Zerg_Cocoon);
BWAPI_TYPEDEF(UnitType, Protoss_Corsair);
BWAPI_TYPEDEF(UnitType, Protoss_Dark_Templar);
BWAPI_TYPEDEF(UnitType, Zerg_Devourer);
BWAPI_TYPEDEF(UnitType, Protoss_Dark_Archon);
BWAPI_TYPEDEF(UnitType, Protoss_Probe);
BWAPI_TYPEDEF(UnitType, Protoss_Zealot);
BWAPI_TYPEDEF(UnitType, Protoss_Dragoon);
BWAPI_TYPEDEF(UnitType, Protoss_High_Templar);
BWAPI_TYPEDEF(UnitType, Protoss_Archon);
BWAPI_TYPEDEF(UnitType, Protoss_Shuttle);
BWAPI_TYPEDEF(UnitType, Protoss_Scout);
BWAPI_TYPEDEF(UnitType, Protoss_Arbiter);
BWAPI_TYPEDEF(UnitType, Protoss_Carrier);
BWAPI_TYPEDEF(UnitType, Protoss_Interceptor);
BWAPI_TYPEDEF(UnitType, Hero_Dark_Templar);
BWAPI_TYPEDEF(UnitType, Hero_Zeratul);
BWAPI_TYPEDEF(UnitType, Hero_Tassadar_Zeratul_Archon);
BWAPI_TYPEDEF(UnitType, Hero_Fenix_Zealot);
BWAPI_TYPEDEF(UnitType, Hero_Fenix_Dragoon);
BWAPI_TYPEDEF(UnitType, Hero_Tassadar);
BWAPI_TYPEDEF(UnitType, Hero_Mojo);
BWAPI_TYPEDEF(UnitType, Hero_Warbringer);
BWAPI_TYPEDEF(UnitType, Hero_Gantrithor);
BWAPI_TYPEDEF(UnitType, Protoss_Reaver);
BWAPI_TYPEDEF(UnitType, Protoss_Observer);
BWAPI_TYPEDEF(UnitType, Protoss_Scarab);
BWAPI_TYPEDEF(UnitType, Hero_Danimoth);
BWAPI_TYPEDEF(UnitType, Hero_Aldaris);
BWAPI_TYPEDEF(UnitType, Hero_Artanis);
BWAPI_TYPEDEF(UnitType, Critter_Rhynadon);
BWAPI_TYPEDEF(UnitType, Critter_Bengalaas);
BWAPI_TYPEDEF(UnitType, Special_Cargo_Ship);
BWAPI_TYPEDEF(UnitType, Special_Mercenary_Gunship);
BWAPI_TYPEDEF(UnitType, Critter_Scantid);
BWAPI_TYPEDEF(UnitType, Critter_Kakaru);
BWAPI_TYPEDEF(UnitType, Critter_Ragnasaur);
BWAPI_TYPEDEF(UnitType, Critter_Ursadon);
BWAPI_TYPEDEF(UnitType, Zerg_Lurker_Egg);
BWAPI_TYPEDEF(UnitType, Hero_Raszagal);
BWAPI_TYPEDEF(UnitType, Hero_Samir_Duran);
BWAPI_TYPEDEF(UnitType, Hero_Alexei_Stukov);
BWAPI_TYPEDEF(UnitType, Special_Map_Revealer);
BWAPI_TYPEDEF(UnitType, Hero_Gerard_DuGalle);
BWAPI_TYPEDEF(UnitType, Zerg_Lurker);
BWAPI_TYPEDEF(UnitType, Hero_Infested_Duran);
BWAPI_TYPEDEF(UnitType, Spell_Disruption_Web);
BWAPI_TYPEDEF(UnitType, Terran_Command_Center);
BWAPI_TYPEDEF(UnitType, Terran_Comsat_Station);
BWAPI_TYPEDEF(UnitType, Terran_Nuclear_Silo);
BWAPI_TYPEDEF(UnitType, Terran_Supply_Depot);
BWAPI_TYPEDEF(UnitType, Terran_Refinery);
BWAPI_TYPEDEF(UnitType, Terran_Barracks);
BWAPI_TYPEDEF(UnitType, Terran_Academy);
BWAPI_TYPEDEF(UnitType, Terran_Factory);
BWAPI_TYPEDEF(UnitType, Terran_Starport);
BWAPI_TYPEDEF(UnitType, Terran_Control_Tower);
BWAPI_TYPEDEF(UnitType, Terran_Science_Facility);
BWAPI_TYPEDEF(UnitType, Terran_Covert_Ops);
BWAPI_TYPEDEF(UnitType, Terran_Physics_Lab);
// starbase (119)
BWAPI_TYPEDEF(UnitType, Terran_Machine_Shop);
// repair bay (121)
BWAPI_TYPEDEF(UnitType, Terran_Engineering_Bay);
BWAPI_TYPEDEF(UnitType, Terran_Armory);
BWAPI_TYPEDEF(UnitType, Terran_Missile_Turret);
BWAPI_TYPEDEF(UnitType, Terran_Bunker);
BWAPI_TYPEDEF(UnitType, Special_Crashed_Norad_II);
BWAPI_TYPEDEF(UnitType, Special_Ion_Cannon);
BWAPI_TYPEDEF(UnitType, Powerup_Uraj_Crystal);
BWAPI_TYPEDEF(UnitType, Powerup_Khalis_Crystal);
BWAPI_TYPEDEF(UnitType, Zerg_Infested_Command_Center);
BWAPI_TYPEDEF(UnitType, Zerg_Hatchery);
BWAPI_TYPEDEF(UnitType, Zerg_Lair);
BWAPI_TYPEDEF(UnitType, Zerg_Hive);
BWAPI_TYPEDEF(UnitType, Zerg_Nydus_Canal);
BWAPI_TYPEDEF(UnitType, Zerg_Hydralisk_Den);
BWAPI_TYPEDEF(UnitType, Zerg_Defiler_Mound);
BWAPI_TYPEDEF(UnitType, Zerg_Greater_Spire);
BWAPI_TYPEDEF(UnitType, Zerg_Queens_Nest);
BWAPI_TYPEDEF(UnitType, Zerg_Evolution_Chamber);
BWAPI_TYPEDEF(UnitType, Zerg_Ultralisk_Cavern);
BWAPI_TYPEDEF(UnitType, Zerg_Spire);
BWAPI_TYPEDEF(UnitType, Zerg_Spawning_Pool);
BWAPI_TYPEDEF(UnitType, Zerg_Creep_Colony);
BWAPI_TYPEDEF(UnitType, Zerg_Spore_Colony);
// unused zerg 1 (145)
BWAPI_TYPEDEF(UnitType, Zerg_Sunken_Colony);
BWAPI_TYPEDEF(UnitType, Special_Overmind_With_Shell);
BWAPI_TYPEDEF(UnitType, Special_Overmind);
BWAPI_TYPEDEF(UnitType, Zerg_Extractor);
BWAPI_TYPEDEF(UnitType, Special_Mature_Chrysalis);
BWAPI_TYPEDEF(UnitType, Special_Cerebrate);
BWAPI_TYPEDEF(UnitType, Special_Cerebrate_Daggoth);
// unused zerg 2 (153)
BWAPI_TYPEDEF(UnitType, Protoss_Nexus);
BWAPI_TYPEDEF(UnitType, Protoss_Robotics_Facility);
BWAPI_TYPEDEF(UnitType, Protoss_Pylon);
BWAPI_TYPEDEF(UnitType, Protoss_Assimilator);
// unused protoss 1 (158)
BWAPI_TYPEDEF(UnitType, Protoss_Observatory);
BWAPI_TYPEDEF(UnitType, Protoss_Gateway);
// unused protoss 2 (161)
BWAPI_TYPEDEF(UnitType, Protoss_Photon_Cannon);
BWAPI_TYPEDEF(UnitType, Protoss_Citadel_of_Adun);
BWAPI_TYPEDEF(UnitType, Protoss_Cybernetics_Core);
BWAPI_TYPEDEF(UnitType, Protoss_Templar_Archives);
BWAPI_TYPEDEF(UnitType, Protoss_Forge);
BWAPI_TYPEDEF(UnitType, Protoss_Stargate);
BWAPI_TYPEDEF(UnitType, Special_Stasis_Cell_Prison);
BWAPI_TYPEDEF(UnitType, Protoss_Fleet_Beacon);
BWAPI_TYPEDEF(UnitType, Protoss_Arbiter_Tribunal);
BWAPI_TYPEDEF(UnitType, Protoss_Robotics_Support_Bay);
BWAPI_TYPEDEF(UnitType, Protoss_Shield_Battery);
BWAPI_TYPEDEF(UnitType, Special_Khaydarin_Crystal_Form);
BWAPI_TYPEDEF(UnitType, Special_Protoss_Temple);
BWAPI_TYPEDEF(UnitType, Special_XelNaga_Temple);
BWAPI_TYPEDEF(UnitType, Resource_Mineral_Field);
BWAPI_TYPEDEF(UnitType, Resource_Mineral_Field_Type_2);
BWAPI_TYPEDEF(UnitType, Resource_Mineral_Field_Type_3);
// cave (179)
// cave-in (180)
// cantina (181)
// mining platform (182)
// independant command center (183)
BWAPI_TYPEDEF(UnitType, Special_Independant_Starport);
// independant jump gate (185)
// ruins (186)
// unused khaydarin crystal formation (187)
BWAPI_TYPEDEF(UnitType, Resource_Vespene_Geyser);
BWAPI_TYPEDEF(UnitType, Special_Warp_Gate);
BWAPI_TYPEDEF(UnitType, Special_Psi_Disrupter);
// zerg marker (191)
// terran marker (192)
// protoss marker (193)
BWAPI_TYPEDEF(UnitType, Special_Zerg_Beacon);
BWAPI_TYPEDEF(UnitType, Special_Terran_Beacon);
BWAPI_TYPEDEF(UnitType, Special_Protoss_Beacon);
BWAPI_TYPEDEF(UnitType, Special_Zerg_Flag_Beacon);
BWAPI_TYPEDEF(UnitType, Special_Terran_Flag_Beacon);
BWAPI_TYPEDEF(UnitType, Special_Protoss_Flag_Beacon);
BWAPI_TYPEDEF(UnitType, Special_Power_Generator);
BWAPI_TYPEDEF(UnitType, Special_Overmind_Cocoon);
BWAPI_TYPEDEF(UnitType, Spell_Dark_Swarm);
BWAPI_TYPEDEF(UnitType, Special_Floor_Missile_Trap);
BWAPI_TYPEDEF(UnitType, Special_Floor_Hatch);
BWAPI_TYPEDEF(UnitType, Special_Upper_Level_Door);
BWAPI_TYPEDEF(UnitType, Special_Right_Upper_Level_Door);
BWAPI_TYPEDEF(UnitType, Special_Pit_Door);
BWAPI_TYPEDEF(UnitType, Special_Right_Pit_Door);
BWAPI_TYPEDEF(UnitType, Special_Floor_Gun_Trap);
BWAPI_TYPEDEF(UnitType, Special_Wall_Missile_Trap);
BWAPI_TYPEDEF(UnitType, Special_Wall_Flame_Trap);
BWAPI_TYPEDEF(UnitType, Special_Right_Wall_Missile_Trap);
BWAPI_TYPEDEF(UnitType, Special_Right_Wall_Flame_Trap);
BWAPI_TYPEDEF(UnitType, Special_Start_Location);
BWAPI_TYPEDEF(UnitType, Powerup_Flag);
BWAPI_TYPEDEF(UnitType, Powerup_Young_Chrysalis);
BWAPI_TYPEDEF(UnitType, Powerup_Psi_Emitter);
BWAPI_TYPEDEF(UnitType, Powerup_Data_Disk);
BWAPI_TYPEDEF(UnitType, Powerup_Khaydarin_Crystal);
BWAPI_TYPEDEF(UnitType, Powerup_Mineral_Cluster_Type_1);
BWAPI_TYPEDEF(UnitType, Powerup_Mineral_Cluster_Type_2);
BWAPI_TYPEDEF(UnitType, Powerup_Protoss_Gas_Orb_Type_1);
BWAPI_TYPEDEF(UnitType, Powerup_Protoss_Gas_Orb_Type_2);
BWAPI_TYPEDEF(UnitType, Powerup_Zerg_Gas_Sac_Type_1);
BWAPI_TYPEDEF(UnitType, Powerup_Zerg_Gas_Sac_Type_2);
BWAPI_TYPEDEF(UnitType, Powerup_Terran_Gas_Tank_Type_1);
BWAPI_TYPEDEF(UnitType, Powerup_Terran_Gas_Tank_Type_2);

BWAPI_TYPEDEF(UnitType, None);
BWAPI_TYPEDEF(UnitType, AllUnits);
BWAPI_TYPEDEF(UnitType, Men);
BWAPI_TYPEDEF(UnitType, Buildings);
BWAPI_TYPEDEF(UnitType, Factories);
BWAPI_TYPEDEF(UnitType, Unknown);
}

bool operator==(UnitType const& a, UnitType const& b) {
    if (a.id == b.id) {
        return true;
    }
    return false;
}

}
