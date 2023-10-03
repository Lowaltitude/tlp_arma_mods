#define HEADGEAR_HOLDER(a,b,c) \
	class Headgear_##a##: Headgear_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_Jamie; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = ##c##; \
		vehicleClass = ItemsHeadgear; \
		model = "\A3\Weapons_F\DummyCap.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	class Headgear_Base_F;
    class Headgear_H_HelmetCrew_I;
    class Headgear_H_PilotHelmetHeli_O;
    class Headgear_H_PilotHelmetHeli_B;
    class Headgear_H_CrewHelmetHeli_O;
    class Headgear_H_CrewHelmetHeli_B;
	// Arma 3 Havana
	HEADGEAR_HOLDER(Havana_H_UtilCap_oli,$STR_A3_H_CfgWeapons_H_UtilCap_oli0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Havana_H_UtilCap_grn,$STR_A3_H_CfgWeapons_H_UtilCap_grn0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Havana_H_UtilCap_snd,$STR_A3_H_CfgWeapons_H_UtilCap_snd0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Havana_H_UtilCap_blk,$STR_A3_H_CfgWeapons_H_UtilCap_blk0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Havana_H_UtilCap_amoeba,$STR_A3_H_CfgWeapons_H_UtilCap_amoeba0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Havana_H_UtilCap_advisor,$STR_A3_H_CfgWeapons_H_UtilCap_advisor0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Havana_H_UtilCap_hex,$STR_A3_H_CfgWeapons_H_UtilCap_hex0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Havana_H_UtilCap_ghex,$STR_A3_H_CfgWeapons_H_UtilCap_ghex0,EdSubcat_Hats)
	HEADGEAR_HOLDER(Havana_H_UtilCap_whex,$STR_A3_H_CfgWeapons_H_UtilCap_whex0,EdSubcat_Hats)
};