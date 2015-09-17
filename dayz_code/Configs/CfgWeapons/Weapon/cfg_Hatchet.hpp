
	class MeleeWeapon : Rifle {
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		canDrop = false;
//		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		optics = true;
		modelOptics = "-";
		modes[] = {"Single"};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		reloadMagazineSound[] = {"", 1};
		
		class Single : DZ_SingleMelee {
			multiplier = 1;
			burst = 1;
			displayName = "Hack";
			dispersion = 0.2;
			optics = true;
			recoil = "DZ_Swing";
			autoFire = true;
			aiRateOfFire = 0.7;	// delay between shots at given distance
			aiRateOfFireDistance = 2.2;
			useAction = false;
			useActionTitle = "";
			recoilProne = "DZ_Swing";
			swing0[] = {"dayz_weapons\sounds\swing_0", 1.77828, 1, 30};
			swing1[] = {"dayz_weapons\sounds\swing_1", 1.77828, 1, 30};
			soundBegin[] = {"swing0", 0.5, "swing1", 0.5};
			drySound[] = {"", 1};
			reloadTime = 0;
			reloadMagazineSound[] = {"", 1};
			showToPlayer = true;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 0.3;
			midRangeProbab = 0.8;
			maxRange = 3;
			maxRangeProbab = 0;
		};
		cursor = "Vehicle_Grenade_W";
		cursoraim = "Vehicle_Grenade_W";
		cursorSize = 1;
	};
	
	class MeleeHatchet : MeleeWeapon {
		scope = public;
		model = "\dayz_weapons\models\Hatchet_weaponized";
		picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
		displayName = $STR_EQUIP_NAME_41;
		magazines[] = {"Hatchet_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\dayz_weapons\anim\melee_hatchet_holding.rtm"};
		
		class ItemActions {
			class Use {
				text = $STR_ACTIONS_CHOPWOOD;
				script = "spawn player_chopWood;";
			};
		};
		
		class Library {
			libTextDesc = $STR_EQUIP_DESC_41;
		};
		descriptionShort = $STR_EQUIP_DESC_41;
	};