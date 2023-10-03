#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};
	// Arma 3
	class H_HelmetB;
	class H_HelmetB_light;
	class H_Booniehat_khk: HelmetBase
	{
		class ItemInfo: ItemInfo{};
	};
	class H_HelmetSpecB;
	class H_HelmetIA;
    class H_Cap_red;
	class H_HelmetCrew_B;
	class H_HelmetCrew_I: H_HelmetCrew_B
	{
		class ItemInfo;
	};
	class H_PilotHelmetFighter_B: H_HelmetB
	{
		class ItemInfo;
	};
	class H_PilotHelmetFighter_I;
	class H_PilotHelmetHeli_B: H_HelmetB
	{
		class ItemInfo;
	};
	class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B
	{
		class ItemInfo;
	};
	class H_CrewHelmetHeli_B: H_HelmetB
	{
		class ItemInfo;
	};
	class H_CrewHelmetHeli_O: H_CrewHelmetHeli_B
	{
		class ItemInfo;
	};
	class H_HelmetO_ocamo;
	class H_HelmetLeaderO_ocamo;
	class H_MilCap_ocamo;
	class H_HelmetSpecO_ocamo;
	// Arma 3 Apex
	class H_HelmetO_ViperSP_hex_F;
	class H_Beret_CSAT_01_F;
	// Arma 3 Tanks
	class H_Tank_black_F;
	// Arma 3 Enoch
	class H_HelmetHBK_base_F;
	class H_HelmetHBK_headset_base_F;
	class H_HelmetHBK_ear_base_F;
	class H_HelmetHBK_chops_base_F;
	// Arma 3 Aegis
	class H_HelmetSpecB_light;
	class H_MK7_Base_F;
	// Arma 3 MEC
	class MEC_H_Beret_MEC_01_grn_F: H_Beret_CSAT_01_F
	{
		author = $STR_A3_A_Jamie;
		displayName = Beret (Green) [MEC];
		picture = "";
		hiddenSelectionsTextures[] = {"\A3_MEC\characters_f_mec\Headgear\Data\h_beret_mec_01_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_MEC\characters_f_mec\Headgear\Data\h_beret_mec_01.rvmat"};
	};
};