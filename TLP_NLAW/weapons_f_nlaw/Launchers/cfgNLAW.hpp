#define LAUNCHER_MASS 60
#define LAUNCHER_MAGAZINE_MASS 20
#include "sensors.hpp"
class CBA_DisposableLaunchers 
{
    TLP_launch_NLAW_base_F[] = {"TLP_launch_NLAW_Loaded_F","TLP_launch_NLAW_Used_F"};
};

class cfgAmmo
{
    class MissileCore;
	class MissileBase: MissileCore
	{
		class Components;
	};
    class ammo_Penetrator_Base;
    class ammo_Penetrator_tlp_NLAW: ammo_Penetrator_Base
    {
        caliber=60;
        warheadName="AP";
        hit=650;
    };
    class M_TLP_NLAW_AT_F: MissileBase
	{
		hit=150;
		indirectHit=50;
		indirectHitRange=2.4000001;
		proximityExplosionDistance=5;
		explosive=0.5;
		maneuvrability=4;
		simulationStep=0.0020000001;
		trackOversteer=0.80000001;
		trackLead=1;
		irLock=1;
		aiAmmoUsageFlags="128 + 512";
		maxControlRange=11;
		model="\A3\weapons_f\launchers\nlaw\nlaw_rocket";
		cost=400;
		timeToLive=8;
		airFriction=0.075000003;
		sideAirFriction=0.07500003;
		maxSpeed=200;
		initTime=0.2;
		thrustTime=2;
		thrust=200;
		fuseDistance=20;
		effectsMissile="missile3";
		whistleDist=16;
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		effectsMissileInit="";
		allowAgainstInfantry=0;
		soundHit[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\NLAW_Hit",
			1.7782794,
			1,
			1500
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",
			0.56234133,
			1.5,
			700
		};
		class CamShakeExplode
		{
			power=11;
			duration=1.4;
			frequency=20;
			distance=91.329597;
		};
		class CamShakeHit
		{
			power=110;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.5148699;
			duration=1.2;
			frequency=20;
			distance=50.596401;
		};
		class CamShakePlayerFire
		{
			power=2;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		submunitionAmmo="ammo_Penetrator_tlp_NLAW";
		submunitionDirectionType="SubmunitionTargetDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.5};
		triggerOnImpact=1;
		triggerDistance=2;
		deleteParentWhenTriggered=0;
		flightProfiles[]=
		{
			"Direct"
		};
		class Direct
		{
		};
		airLock=1;
		missileLockCone=5;
		missileKeepLockedCone=300;
		missileLockMaxDistance=800;
		missileLockMinDistance=20;
		missileLockMaxSpeed=35;
		weaponLockSystem="1 + 16";
		cmImmunity=0.2;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=20;
							maxRange=800;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=20;
							maxRange=800;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=35;
						nightRangeCoef=0.80000001;
						angleRangeHorizontal=5;
						angleRangeVertical=5;
						maxTrackableATL=20;
					};
				};
			};
		};
	};
};
class CfgMagazines 
{
    class CA_LauncherMagazine;
    class 1rnd_115mm_NLAW_F: CA_LauncherMagazine
    {
        author="$STR_A3_Bohemia_Interactive";
        scope=2;
        displayName="NLAW Missile";
        descriptionShort="Used In: NLAW";
        displaynameshort="NLAW Missile";
        ammo="M_TLP_NLAW_AT_F";
        type="3 *         256";
        picture="\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_rocket_ca.paa";
        modelSpecial="\A3\weapons_f\launchers\nlaw\nlaw_loaded_F";
        model="\A3\weapons_f\launchers\nlaw\nlaw_proxy";
        initSpeed=40;
        maxLeadSpeed=27.7778;
        mass=80;
    };
};

class CfgMagazineWells 
{
	class magazineWell_NLAW
	{
		Magazines[] =
		{
			"1rnd_115mm_NLAW_F"
		};
	};
};

class CfgWeapons 
{
    class Launcher_Base_F;
    class launch_NLAW_F: Launcher_Base_F {
    class WeaponSlotsInfo;
    };

    class TLP_launch_NLAW_base_F: launch_NLAW_F {
        author = "OokamiJamie";
        scope = 1;
        scopeArsenal = 1;
		airLock=1;
        baseWeapon = "TLP_launch_NLAW_Loaded_F";
        DisplayName = "NLAW";
        magazines[] = {"1rnd_115mm_NLAW_F"};
		magazineWell[]= {"magazineWell_NLAW"};
        magazineReloadTime = 0.1;
        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = LAUNCHER_MASS;
        };
    };

    class TLP_launch_NLAW_Loaded_F: TLP_launch_NLAW_base_F {
        author = "OokamiJamie";
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "TLP_launch_NLAW_Loaded_F";

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = LAUNCHER_MASS + LAUNCHER_MAGAZINE_MASS;
        };
    };

    class TLP_launch_NLAW_Used_F: TLP_launch_NLAW_base_F {
        author = "OokamiJamie";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "TLP_launch_NLAW_Used_F";

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = LAUNCHER_MASS;
        };
    };
};