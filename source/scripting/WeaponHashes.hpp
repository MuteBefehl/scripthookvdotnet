#pragma once

namespace GTA
{
	namespace Native
	{
		public enum class WeaponHash : System::UInt32
		{
			Knife = 0x99B507EA,
			Nightstick = 0x678B81B1,
			Hammer = 0x4E875F73,
			Bat = 0x958A4A8F,
			GolfClub = 0x440E4788,
			Crowbar = 0x84BD7BFD,
			Bottle = 0xF9E6AA4B,
			SwitchBlade = 0xDFE37640,
			BattleAxe = 0xCD274149,
			PoolCue = 0x94117305,
			Wrench = 0x19044EE0,
			Pistol = 0x1B06D571,
			PistolMk2 = 0xBFE256D4,
			CombatPistol = 0x5EF9FEC4,
			APPistol = 0x22D8FE39,
			Pistol50 = 0x99AEEB3B,
			FlareGun = 0x47757124,
			MarksmanPistol = 0xDC4DB296,
			Revolver = 0xC1B3C3D1,
			MicroSMG = 0x13532244,
			SMG = 0x2BE6766B,
			SMGMk2 = 0x78A97CD0,
			AssaultSMG = 0xEFE7E2DF,
			CombatPDW = 0x0A3D4D34,
			MiniSMG = 0xBD248B55,
			AssaultRifle = 0xBFEFFF6D,
			AssaultrifleMk2 = 0x394F415C,
			CarbineRifle = 0x83BF0278,
			CarbineRifleMk2 = 0xFAD1F1C9,
			AdvancedRifle = 0xAF113F99,
			CompactRifle = 0x624FE830,
			MG = 0x9D07F764,
			CombatMG = 0x7FD62962,
			CombatMGMk2 = 0xDBBD7280,
			PumpShotgun = 0x1D073A89,
			SawnOffShotgun = 0x7846A318,
			AssaultShotgun = 0xE284C527,
			BullpupShotgun = 0x9D61E50F,
			DoubleBarrelShotgun = 0xEF951FBB,
			SweeperShotgun = 0x12E82D3D,
			StunGun = 0x3656C8C1,
			SniperRifle = 0x5FC3C11,
			HeavySniper = 0xC472FE2,
			HeavySniperMk2 = 0x0A914799,
			GrenadeLauncher = 0xA284510B,
			GrenadeLauncherSmoke = 0x4DD2DC56,
			CompactGrenadeLauncher = 0x0781FE4A,
			RPG = 0xB1CA77B1,
			Minigun = 0x42BF8A85,
			Grenade = 0x93E220BD,
			StickyBomb = 0x2C3731D9,
			SmokeGrenade = 0xFDBC8A50,
			BZGas = 0xA0973D5E,
			Molotov = 0x24B17070,
			PipeBomb = 0xBA45E8B8,
			FireExtinguisher = 0x60EC506,
			PetrolCan = 0x34A67B97,
			SNSPistol = 0xBFD21232,
			SpecialCarbine = 0xC0A3098D,
			HeavyPistol = 0xD205520E,
			BullpupRifle = 0x7F229F94,
			HomingLauncher = 0x63AB0442,
			ProximityMine = 0xAB564B93,
			Snowball = 0x787F0BB,
			VintagePistol = 0x83839C4,
			Dagger = 0x92A27487,
			Firework = 0x7F7497E5,
			Musket = 0xA89CB99E,
			MarksmanRifle = 0xC734385A,
			HeavyShotgun = 0x3AABBBAA,
			Gusenberg = 0x61012683,
			Hatchet = 0xF9DCBF2D,
			Railgun = 0x6D544C99,
			Unarmed = 0xA2719263,
			KnuckleDuster = 0xD8DF3C3C,
			Machete = 0xDD5DF8D9,
			MachinePistol = 0xDB1AA450,
			Flashlight = 0x8BB05FD7,
			Ball = 0x23C9F95C,
			Flare = 0x497FACC3,
			NightVision = 0xA720365C,
			Parachute = 0xFBAB5776
		};

		public enum class WeaponComponent : System::UInt32
		{
			AdvancedRifleClip01 = 0xFA8FA10F,
			AdvancedRifleClip02 = 0x8EC1C979,
			AdvancedRifleVarmodLuxe = 0x377CD377,
			APPistolClip01 = 0x31C4B22A,
			APPistolClip02 = 0x249A17D5,
			APPistolVarmodLuxe = 0x9B76C72C,
			AssaultRifleClip01 = 0xBE5EEA16,
			AssaultRifleClip02 = 0xB1214F9B,
			AssaultRifleVarmodLuxe = 0x4EAD7533,
			AssaultSMGClip01 = 0x8D1307B0,
			AssaultSMGClip02 = 0xBB46E417,
			AssaultSMGVarmodLowrider = 0x278C78AF,
			AssaultShotgunClip01 = 0x94E81BC7,
			AssaultShotgunClip02 = 0x86BD7F72,
			AtArAfGrip = 0xC164F53,
			AtArFlsh = 0x7BC4CDDC,
			AtArSupp = 0x837445AA,
			AtArSupp02 = 0xA73D4664,
			AtPiFlsh = 0x359B7AAE,
			AtPiSupp = 0xC304849A,
			AtPiSupp02 = 0x65EA7EBB,
			AtRailCover01 = 0x75414F30,
			AtScopeLarge = 0xD2443DDC,
			AtScopeLargeFixedZoom = 0x1C221B1A,
			AtScopeMacro = 0x9D2FBF29,
			AtScopeMacro02 = 0x3CC6BA57,
			AtScopeMax = 0xBC54DA77,
			AtScopeMedium = 0xA0D89C42,
			AtScopeSmall = 0xAA2C45B4,
			AtScopeSmall02 = 0x3C00AFED,
			AtSrSupp = 0xE608B35E,
			BullpupRifleClip01 = 0xC5A12F80,
			BullpupRifleClip02 = 0xB3688B0F,
			BullpupRifleVarmodLow = 0xA857BC78,
			BullpupShotgunClip01 = 0xC94E550E,
			CarbineRifleClip01 = 0x9FBE33EC,
			CarbineRifleClip02 = 0x91109691,
			CarbineRifleVarmodLuxe = 0xD89B9658,
			CombatMGClip01 = 0xE1FFB34A,
			CombatMGClip02 = 0xD6C59CD6,
			CombatMGVarmodLowrider = 0x92FECCDD,
			CombatPDWClip01 = 0x4317F19E,
			CombatPDWClip02 = 0x334A5203,
			CombatPistolClip01 = 0x721B079,
			CombatPistolClip02 = 0xD67B4F2D,
			CombatPistolVarmodLowrider = 0xC6654D72,
			CompactRifleClip01 = 0x513F0A63,
			CompactRifleClip02 = 0x59FF9BF8,
			DBShotgunClip01 = 0x29EA741E,
			FireworkClip01 = 0xE4E4C28D,
			FlareGunClip01 = 0x93E9BD99,
			FlashlightLight = 0xDDB7390F,
			GrenadeLauncherClip01 = 0x11AE5C97,
			GusenbergClip01 = 0x1CE5A6A5,
			GusenbergClip02 = 0xEAC8C270,
			HeavyPistolClip01 = 0xD4A969A,
			HeavyPistolClip02 = 0x64F9C62B,
			HeavyPistolVarmodLuxe = 0x7A6A7B7B,
			HeavyShotgunClip01 = 0x324F2D5F,
			HeavyShotgunClip02 = 0x971CF6FD,
			HeavySniperClip01 = 0x476F52F4,
			HomingLauncherClip01 = 0xF8132D3F,
			KnuckleVarmodBallas = 0xEED9FD63,
			KnuckleVarmodBase = 0xF3462F33,
			KnuckleVarmodDiamond = 0x9761D9DC,
			KnuckleVarmodDollar = 0x50910C31,
			KnuckleVarmodHate = 0x7DECFE30,
			KnuckleVarmodKing = 0xE28BABEF,
			KnuckleVarmodLove = 0x3F4E8AA6,
			KnuckleVarmodPimp = 0xC613F685,
			KnuckleVarmodPlayer = 0x8B808BB,
			KnuckleVarmodVagos = 0x7AF3F785,
			MGClip01 = 0xF434EF84,
			MGClip02 = 0x82158B47,
			MGVarmodLowrider = 0xD6DABABE,
			MachinePistolClip01 = 0x476E85FF,
			MachinePistolClip02 = 0xB92C6979,
			MarksmanPistolClip01 = 0xCB9E41ED,
			MarksmanRifleClip01 = 0xD83B4141,
			MarksmanRifleClip02 = 0xCCFD2AC5,
			MicroSMGClip01 = 0xCB48AEF0,
			MicroSMGClip02 = 0x10E6BA2B,
			MicroSMGVarmodLuxe = 0x487AAE09,
			MinigunClip01 = 0xC8DE6F06,
			MusketClip01 = 0x4ED2073F,
			Pistol50Clip01 = 0x2297BE19,
			Pistol50Clip02 = 0xD9D3AC92,
			Pistol50VarmodLuxe = 0x77B8AB2F,
			PistolClip01 = 0xFED0FD71,
			PistolClip02 = 0xED265A1C,
			PistolVarmodLuxe = 0xD7391086,
			PoliceTorchFlashlight = 0xC5A30FED,
			PumpShotgunClip01 = 0xD16F1438,
			PumpShotgunVarmodLowrider = 0xA2D79DDB,
			RPGClip01 = 0x4EA573B3,
			RailgunClip01 = 0x384F3E8,
			RevolverClip01 = 0xE9867CE3,
			RevolverVarmodBoss = 0x16EE3040,
			RevolverVarmodGoon = 0x9493B80D,
			SMGClip01 = 0x26574997,
			SMGClip02 = 0x350966FB,
			SMGVarmodLuxe = 0x27872C90,
			SNSPistolClip01 = 0xF8802ED9,
			SNSPistolClip02 = 0x7B0033B3,
			SNSPistolVarmodLowrider = 0x8033ECAF,
			SawnoffShotgunClip01 = 0xC7D62225,
			SawnoffShotgunVarmodLuxe = 0x85A64DF9,
			SniperRifleClip01 = 0x9BC64089,
			SniperRifleVarmodLuxe = 0x4032B5E7,
			SpecialCarbineClip01 = 0xC6C7E581,
			SpecialCarbineClip02 = 0x7C8BD10E,
			SpecialCarbineVarmodLowrider = 0x730154F2,
			SwitchbladeVarmodBase = 0x9137A500,
			SwitchbladeVarmodVar1 = 0x5B3E7DB6,
			SwitchbladeVarmodVar2 = 0xE7939662,
			VintagePistolClip01 = 0x45A3B6BB,
			VintagePistolClip02 = 0x33BA12E8,

			Invalid = 0xFFFFFFFF,
		};
	}
}
