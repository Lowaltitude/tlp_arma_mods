#define UNIFORM_HOLDER(a,b) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_Jamie; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_Uniforms; \
		vehicleClass = ItemsUniforms; \
		model = "\A3\Weapons_F\dummyweapon.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	// Arma 3
	class Item_Base_F;
	// MEC
	UNIFORM_HOLDER(MEC_U_O_M_CombatFatigues_F,Combat Fatigues [MEC]);
	UNIFORM_HOLDER(MEC_U_O_M_CombatFatigues_02_F,Combat Fatigues [MEC] (Rolled-up));
	UNIFORM_HOLDER(MEC_U_O_M_Uniform_01_F,Light Combat Fatigues [MEC]);
	UNIFORM_HOLDER(MEC_U_O_M_Uniform_01_shortsleeve_F,Light Combat Fatigues [MEC] (Rolled-up));
};