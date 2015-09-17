class CfgAmmo {	

	class GrenadeHand;
	class BulletCore;
	class PipeBombBase;
	class SmokeShell;
	
//	#include "CfgAmmo\cfg_FMradio_ammo.hpp"
	
	
	class UV_lamp_Base: SmokeShell {
		timeToLive = 60;
		typicalspeed = 14;
		grenadeFireSound[] = {};
		grenadeBurningSound[] = {};
	};
	
	class UV_lamp: UV_lamp_Base {
		model = "\A3\Weapons_f\chemlight\chemlight_blue_lit";
		effectsSmoke = "ChemlightLight_blue";
	};
	
	class Battery: BulletCore {
		visibleFire = 0;	// how much is visible when this weapon is fired
		audibleFire = 0;
		visibleFireTime = 0;	// how long is it visible
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\ammo\shell";
		caliber = 0;
		cartridge = "";
		cost = 1;
		timeToLive = 0;
		deflecting = 0;
		tracerStartTime = -1;
		muzzleEffect = "";
		waterEffectOffset = 0;
		effectFly = "0";
	};
	
	class ThrownObjects : GrenadeHand {
		hit = 0.5;
		indirectHit = 0.2;
		indirectHitRange = 1;
		cost = 1;
		whistleDist = 0;
		fuseDistance = 0;
		initTime = 0;
		explosive = true;
	};
	
	class SodaCan : ThrownObjects {
		model = "\dayz_equip\models\soda_coke_e.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		soundHit[] = {"dayz_equip\sound\can_hit_0", 0.5, 1, 60};
	};
	
	class TinCan : ThrownObjects {
		model = "\dayz_equip\models\trash_tincan.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		soundHit[] = {"dayz_equip\sound\can_hit_1", 0.5, 1, 60};
	};
	
	class JackDaniels : ThrownObjects {
		model = "\dayz_equip\models\bottle_jd.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "GlassSmash";
		soundHit[] = {"dayz_weapons\sounds\bottle_break_0", 0.5, 1, 80};
	};
};
