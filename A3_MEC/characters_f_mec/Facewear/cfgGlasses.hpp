class CfgGlasses
{
    /* Items */
	class Aegis_G_Armband_BLU_F;
	class Aegis_G_Armband_BLU_alt_F;
	class MEC_G_Armband_MEC_F: Aegis_G_Armband_BLU_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = Armband [MEC];
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_CSAT_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_MEC\characters_f_mec\Facewear\Data\G_Armband_mec_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
	class MEC_G_Armband_MEC_alt_F: Aegis_G_Armband_BLU_alt_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = Armband [MEC] (Alt);
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_CSAT_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_MEC\characters_f_mec\Facewear\Data\G_Armband_mec_CO.paa"
		};
		identityTypes[] = {NoGlasses,0};
	};
};
