class CfgVehicles
{
    /* Definitons */
    #include "\A3_Aegis\macros_characters.hpp"
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Inheritance Tree */
    class CAManBase;
    class Civilian;

    /* Bases */
    class Civilian_F: Civilian
    {
        modelSides[] = {TFriendly};
        linkedItems[] = {ItemSmartPhone};
        respawnLinkedItems[] = {ItemSmartPhone};
    };
	class SoldierWB: CAManBase
    {
	    modelSides[] = {TFriendly};
    };
	class SoldierEB: CAManBase
    {
	    modelSides[] = {TFriendly};
    };
	class SoldierGB: CAManBase
    {
	    modelSides[] = {TFriendly};
    };

    /* Base Classes from A3 + DLC */
    class I_sniper_F;
    class I_G_Soldier_M_F;
    class C_man_p_fugitive_F;
    class I_E_Uniform_01_F;
    class I_E_Uniform_01_tanktop_F;
    class I_E_Uniform_01_shortsleeve_F;
    class B_Soldier_04_f;
    class I_Story_Crew_F;
    class I_E_Uniform_01_officer_F;
    class I_officer_F;
    class I_diver_F;
    class O_A_Soldier_lxWS;
    class O_A_soldier_F;
    class Aegis_O_CombatFatigues_F;
    class Aegis_O_CombatFatigues_02_F;
    class I_soldier_F;
    class I_soldier_lite_F;
    class O_SFIA_Soldier_TL_lxWS;
    class O_R_Gorka_F;
    class B_Soldier_F;
    class B_Soldier_SL_F;
    class Atlas_O_Afghanka_03_base_F;
    class Atlas_O_Afghanka_04_base_F;
    class Atlas_UniformBDU_01_oli_F;
    class Atlas_UniformBDU_02_oli_F;
    class O_SFIA_soldier_lxWS;
    class O_G_Soldier_LAT_F;

    /* Factions */

    /* Uniforms */
	#include "cfgUniforms.hpp"
};