/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 -!";
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
};

class CfgCraftingRecipes
{
	
class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBushKitGreen: Exile_AbstractCraftingRecipe
{
	name = "Craft a Bush Kit (Green)";
	pictureItem = "Exile_Item_BushKit_Green";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_BushKit_Green"}
	};
	components[] = 
	{
		{10, "Exile_Item_Leaves"},
		{5, "Exile_Item_WoodSticks"},
		{1, "Exile_Item_Rope"}
	};
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
/*
class CraftWoodDrawBridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Draw-Bridge";
	pictureItem = "Exile_Item_WoodDrawBridgeKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDrawBridgeKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Rope"}
	};
};
*/
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
};
class CfgExileArsenal
{
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Civillian Clothing
	///////////////////////////////////////////////////////////////////////////////
	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 3; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 3; price = 40; };
	class U_NikosBody 								{ quality = 3; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Soldier Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_B_CombatUniform_mcam 					{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 1; price = 40; };
	class U_B_CTRG_1 								{ quality = 2; price = 40; };
	class U_B_CTRG_2 								{ quality = 2; price = 40; };
	class U_B_CTRG_3								{ quality = 2; price = 40; };
	class U_I_CombatUniform 						{ quality = 1; price = 40; };
	class U_I_CombatUniform_shortsleeve				{ quality = 1; price = 40; };
	class U_I_CombatUniform_tshirt					{ quality = 1; price = 40; };
	class U_I_OfficerUniform						{ quality = 1; price = 40; };
	class U_O_CombatUniform_ocamo 					{ quality = 1; price = 40; };
	class U_O_CombatUniform_oucamo 					{ quality = 1; price = 40; };
	class U_O_OfficerUniform_ocamo 					{ quality = 3; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 3; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 3; price = 100; };
	class Exile_Uniform_Woodland 					{ quality = 3; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Guerilla Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_C_HunterBody_grn						{ quality = 1; price = 40; };
	class U_IG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_1							{ quality = 2; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_IG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_1							{ quality = 1; price = 40; };
	class U_IG_Guerilla3_2							{ quality = 1; price = 40; };
	class U_BG_Guerrilla_6_1						{ quality = 2; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_2							{ quality = 1; price = 40; };
	class U_BG_Guerilla2_3							{ quality = 1; price = 40; };
	class U_BG_Guerilla3_1							{ quality = 1; price = 40; };
	class U_BG_leader								{ quality = 1; price = 40; };
	class U_IG_leader								{ quality = 1; price = 40; };
	class U_I_G_resistanceLeader_F					{ quality = 3; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Ghillie Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_B_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_B_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_B_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_B_GhillieSuit							{ quality = 2; price = 100; };
	class U_I_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_I_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_I_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_I_GhillieSuit							{ quality = 2; price = 100; };
	class U_O_FullGhillie_ard						{ quality = 3; price = 150; };
	class U_O_FullGhillie_lsh						{ quality = 3; price = 150; };
	class U_O_FullGhillie_sard						{ quality = 3; price = 150; };
	class U_O_GhillieSuit							{ quality = 2; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Wet Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_I_Wetsuit								{ quality = 3; price = 80; };
	class U_O_Wetsuit								{ quality = 3; price = 80; };
	class U_B_Wetsuit								{ quality = 3; price = 80; };
	class U_B_survival_uniform						{ quality = 3; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandolliers
	///////////////////////////////////////////////////////////////////////////////
	class V_BandollierB_blk							{ quality = 1; price = 20; };
	class V_BandollierB_cbr							{ quality = 1; price = 20; };
	class V_BandollierB_khk							{ quality = 1; price = 20; };
	class V_BandollierB_oli							{ quality = 1; price = 20; };
	class V_BandollierB_rgr							{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Chestrigs
	///////////////////////////////////////////////////////////////////////////////
	class V_Chestrig_blk 							{ quality = 1; price = 30; };
	class V_Chestrig_khk 							{ quality = 1; price = 30; };
	class V_Chestrig_oli 							{ quality = 1; price = 30; };
	class V_Chestrig_rgr 							{ quality = 1; price = 30; };

	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class V_Press_F									{ quality = 1; price = 10; };
	class V_Rangemaster_belt						{ quality = 1; price = 6; };
	class V_TacVest_blk								{ quality = 2; price = 50; };
	class V_TacVest_blk_POLICE						{ quality = 3; price = 50; };
	class V_TacVest_brn								{ quality = 2; price = 50; };
	class V_TacVest_camo							{ quality = 2; price = 50; };
	class V_TacVest_khk								{ quality = 2; price = 50; };
	class V_TacVest_oli								{ quality = 2; price = 50; };
	class V_TacVestCamo_khk							{ quality = 2; price = 50; };
	class V_TacVestIR_blk							{ quality = 2; price = 50; };
	class V_I_G_resistanceLeader_F					{ quality = 2; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Harnesses
	///////////////////////////////////////////////////////////////////////////////
	class V_HarnessO_brn							{ quality = 1; price = 40; };
	class V_HarnessO_gry							{ quality = 1; price = 40; };
	class V_HarnessOGL_brn							{ quality = 1; price = 30; };
	class V_HarnessOGL_gry							{ quality = 1; price = 30; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 40; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Plate Carriers
	///////////////////////////////////////////////////////////////////////////////
	class V_PlateCarrier1_blk 						{ quality = 1; price = 80; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 80; };
	class V_PlateCarrier2_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrier3_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrierGL_blk 						{ quality = 3; price = 500; };
	class V_PlateCarrierGL_mtp 						{ quality = 3; price = 500; };
	class V_PlateCarrierGL_rgr 						{ quality = 3; price = 500; };
	class V_PlateCarrierH_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 2; price = 80; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 2; price = 100; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 3; price = 400; };
	class V_PlateCarrierIAGL_oli 					{ quality = 3; price = 400; };
	class V_PlateCarrierL_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierSpec_blk 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_mtp 					{ quality = 3; price = 200; };
	class V_PlateCarrierSpec_rgr 					{ quality = 3; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Military Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_MilCap_blue 							{ quality = 1; price = 8; };
	class H_MilCap_dgtl 							{ quality = 1; price = 8; };
	class H_MilCap_mcamo 							{ quality = 1; price = 8; };
	class H_MilCap_ocamo 							{ quality = 1; price = 8; };
	class H_MilCap_oucamo 							{ quality = 1; price = 8; };
	class H_MilCap_rucamo 							{ quality = 1; price = 8; };

	///////////////////////////////////////////////////////////////////////////////
	// Beanies
	///////////////////////////////////////////////////////////////////////////////
	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandannas
	///////////////////////////////////////////////////////////////////////////////
	class H_Bandanna_camo							{ quality = 1; price = 4; };
	class H_Bandanna_cbr							{ quality = 1; price = 4; };
	class H_Bandanna_gry							{ quality = 1; price = 4; };
	class H_Bandanna_khk							{ quality = 1; price = 4; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 4; };
	class H_Bandanna_mcamo							{ quality = 1; price = 4; };
	class H_Bandanna_sgg							{ quality = 1; price = 4; };
	class H_Bandanna_surfer							{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// Boonie Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Berets
	///////////////////////////////////////////////////////////////////////////////
	class H_Beret_02								{ quality = 1; price = 6; };
	class H_Beret_blk								{ quality = 1; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 1; price = 6; };
	class H_Beret_brn_SF							{ quality = 1; price = 6; };
	class H_Beret_Colonel							{ quality = 3; price = 8; };
	class H_Beret_grn								{ quality = 1; price = 6; };
	class H_Beret_grn_SF							{ quality = 1; price = 6; };
	class H_Beret_ocamo								{ quality = 1; price = 6; };
	class H_Beret_red								{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Shemags
	///////////////////////////////////////////////////////////////////////////////
	class H_Shemag_khk								{ quality = 1; price = 10; };
	class H_Shemag_olive							{ quality = 1; price = 10; };
	class H_Shemag_olive_hs							{ quality = 1; price = 10; };
	class H_Shemag_tan								{ quality = 1; price = 10; };
	class H_ShemagOpen_khk							{ quality = 1; price = 10; };
	class H_ShemagOpen_tan							{ quality = 1; price = 10; };
	class H_TurbanO_blk								{ quality = 1; price = 10; };
	class G_mas_wpn_gog								{ quality = 1; price = 10; };
	class G_mas_wpn_gog_d							{ quality = 1; price = 10; };
	class G_mas_wpn_gog_m							{ quality = 1; price = 10; };
	class G_mas_wpn_gog_md							{ quality = 1; price = 10; };
	class G_mas_wpn_gog_g							{ quality = 1; price = 10; };
	class G_mas_wpn_gog_gd							{ quality = 1; price = 10; };
	class G_mas_wpn_mask							{ quality = 1; price = 10; };
	class G_mas_wpn_mask_b							{ quality = 1; price = 10; };
	class G_mas_wpn_wrap							{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_f							{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_t							{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_b							{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_c							{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_g							{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_gog						{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_gog_f						{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_gog_t						{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_gog_b						{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_gog_c						{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_gog_g						{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_mask						{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_mask_t						{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_mask_f						{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_mask_b						{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_mask_c						{ quality = 1; price = 10; };
	class G_mas_wpn_wrap_mask_g						{ quality = 1; price = 10; };
	class G_mas_wpn_bala							{ quality = 1; price = 10; };
	class G_mas_wpn_bala_b							{ quality = 1; price = 10; };
	class G_mas_wpn_bala_t							{ quality = 1; price = 10; };
	class G_mas_wpn_bala_gog						{ quality = 1; price = 10; };
	class G_mas_wpn_bala_gog_b						{ quality = 1; price = 10; };
	class G_mas_wpn_bala_gog_t						{ quality = 1; price = 10; };
	class G_mas_wpn_bala_mask						{ quality = 1; price = 10; };
	class G_mas_wpn_bala_mask_b						{ quality = 1; price = 10; };
	class G_mas_wpn_bala_mask_t						{ quality = 1; price = 10; };
	class G_mas_wpn_shemag							{ quality = 1; price = 10; };
	class G_mas_wpn_shemag_r						{ quality = 1; price = 10; };
	class G_mas_wpn_shemag_w						{ quality = 1; price = 10; };
	class G_mas_wpn_shemag_gog						{ quality = 1; price = 10; };
	class G_mas_wpn_shemag_mask						{ quality = 1; price = 10; };
	class G_mas_wpn_gasmask							{ quality = 1; price = 10; };	

	///////////////////////////////////////////////////////////////////////////////
	// Light Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetB_light							{ quality = 1; price = 20; };
	class H_HelmetB_light_black						{ quality = 1; price = 20; };
	class H_HelmetB_light_desert					{ quality = 1; price = 20; };
	class H_HelmetB_light_grass						{ quality = 1; price = 20; };
	class H_HelmetB_light_sand						{ quality = 1; price = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetIA								{ quality = 1; price = 40; };
	class H_HelmetIA_camo							{ quality = 1; price = 40; };
	class H_HelmetIA_net							{ quality = 1; price = 40; };
	class H_HelmetB									{ quality = 2; price = 60; };
	class H_HelmetB_black							{ quality = 2; price = 60; };
	class H_HelmetB_camo							{ quality = 3; price = 80; }; // This one is awesome!
	class H_HelmetB_desert							{ quality = 2; price = 60; };
	class H_HelmetB_grass							{ quality = 2; price = 60; };
	class H_HelmetB_paint							{ quality = 2; price = 60; };
	class H_HelmetB_plain_blk						{ quality = 2; price = 60; };
	class H_HelmetB_sand							{ quality = 2; price = 60; };
	class H_HelmetB_snakeskin						{ quality = 2; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Spec Ops Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetSpecB								{ quality = 2; price = 80; };
	class H_HelmetSpecB_blk							{ quality = 2; price = 80; };
	class H_HelmetSpecB_paint1						{ quality = 2; price = 80; };
	class H_HelmetSpecB_paint2						{ quality = 2; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Super Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetO_ocamo							{ quality = 3; price = 150; };
	class H_HelmetO_oucamo							{ quality = 3; price = 150; };
	class H_HelmetSpecO_blk							{ quality = 3; price = 100; };
	class H_HelmetSpecO_ocamo						{ quality = 3; price = 100; };
	class H_HelmetLeaderO_ocamo						{ quality = 3; price = 200; };
	class H_HelmetLeaderO_oucamo					{ quality = 3; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 10; };
	class acc_mas_flash_gun 						{ quality = 1; price = 40; };
	class acc_mas_pointer_gun_IR 					{ quality = 1; price = 50; };
	class acc_mas_pointer_IR 						{ quality = 1; price = 50; };
	class acc_mas_pointer_IR_b 						{ quality = 1; price = 50; };
	class acc_mas_pointer_IR_top 					{ quality = 1; price = 50; };
	class acc_mas_pointer_IR_top_b 					{ quality = 1; price = 50; };
	class acc_mas_pointer_IR2 						{ quality = 1; price = 50; };
	class acc_mas_pointer_IR2_top 					{ quality = 1; price = 50; };
	class acc_mas_pointer_IR2c 						{ quality = 1; price = 50; };	

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk	 						{ quality = 1; price = 10; };
	class bipod_01_F_mtp	 						{ quality = 1; price = 10; };
	class bipod_01_F_snd	 						{ quality = 1; price = 10; };
	class bipod_02_F_blk	 						{ quality = 1; price = 10; };
	class bipod_02_F_hex	 						{ quality = 1; price = 10; };
	class bipod_02_F_tan	 						{ quality = 1; price = 10; };
	class bipod_03_F_blk	 						{ quality = 1; price = 10; };
	class bipod_03_F_oli	 						{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class muzzle_snds_338_black 					{ quality = 2; price = 50; };
	class muzzle_snds_338_green 					{ quality = 2; price = 50; };
	class muzzle_snds_338_sand 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg 						{ quality = 2; price = 50; };
	class muzzle_snds_93mmg_tan 					{ quality = 2; price = 50; };
	class muzzle_snds_acp 							{ quality = 1; price = 10; };
	class muzzle_snds_B 							{ quality = 1; price = 20; };
	class muzzle_snds_H 							{ quality = 2; price = 20; };
	class muzzle_snds_H_MG 							{ quality = 2; price = 20; };
	class muzzle_snds_H_SW 							{ quality = 2; price = 20; };
	class muzzle_snds_L 							{ quality = 1; price = 10; };
	class muzzle_snds_M 							{ quality = 1; price = 10; };
	class muzzle_mas_snds_L 						{ quality = 1; price = 40; };
	class muzzle_mas_snds_LM 						{ quality = 1; price = 40; };
	class muzzle_mas_snds_C 						{ quality = 2; price = 50; };
	class muzzle_mas_snds_MP5SD6 					{ quality = 2; price = 50; };
	class muzzle_mas_snds_M 						{ quality = 2; price = 50; };
	class muzzle_mas_snds_Mc 						{ quality = 2; price = 50; };
	class muzzle_mas_snds_MP7 						{ quality = 2; price = 50; };
	class muzzle_mas_snds_AK 						{ quality = 2; price = 50; };
	class muzzle_mas_snds_SM 						{ quality = 2; price = 100; };
	class muzzle_mas_snds_SMc 						{ quality = 2; price = 100; };
	class muzzle_mas_snds_SH 						{ quality = 2; price = 100; };
	class muzzle_mas_snds_SHc 						{ quality = 2; price = 100; };
	class muzzle_mas_snds_SV 						{ quality = 2; price = 200; };
	class muzzle_mas_snds_SVc 						{ quality = 2; price = 200; };
	class muzzle_mas_snds_SVD 						{ quality = 2; price = 100; };
	class muzzle_mas_snds_KSVK 						{ quality = 2; price = 200; };	

	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	class I_UavTerminal								{ quality = 3; price = 750; };
	class I_UAV_01_backpack_F						{ quality = 3; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class O_HMG_01_weapon_F 						{ quality = 3; price = 5000; };
	class O_HMG_01_support_F 						{ quality = 3; price = 1000; };
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 				{ quality = 3; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class optic_Aco									{ quality = 1; price = 70; };
	class optic_ACO_grn								{ quality = 1; price = 70; };
	class optic_ACO_grn_smg							{ quality = 1; price = 70; };
	class optic_Aco_smg								{ quality = 1; price = 70; };
	class optic_AMS									{ quality = 3; price = 300; };
	class optic_AMS_khk								{ quality = 3; price = 300; };
	class optic_AMS_snd								{ quality = 3; price = 300; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 1; price = 150; };
	class optic_Hamr								{ quality = 3; price = 200; };
	class optic_Holosight							{ quality = 1; price = 50; };
	class optic_Holosight_smg						{ quality = 1; price = 50; };
	class optic_KHS_blk								{ quality = 3; price = 300; };
	class optic_KHS_hex								{ quality = 3; price = 300; };
	class optic_KHS_old								{ quality = 3; price = 300; };
	class optic_KHS_tan								{ quality = 3; price = 300; };
	class optic_LRPS								{ quality = 2; price = 300; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 10; };
	class optic_Nightstalker						{ quality = 3; price = 1000; };
	class optic_NVS									{ quality = 2; price = 500; };
	class optic_SOS									{ quality = 2; price = 200; };
	//class optic_tws									{ quality = 3; price = 1500; };
	//class optic_tws_mg								{ quality = 3; price = 1500; };
	class optic_Yorris								{ quality = 1; price = 10; };
	class optic_mas_DMS								{ quality = 1; price = 150; };
	class optic_mas_DMS_c							{ quality = 1; price = 150; };
	class optic_mas_Holosight_blk					{ quality = 1; price = 50; };
	class optic_mas_Holosight_camo					{ quality = 1; price = 50; };
	class optic_mas_Arco_blk						{ quality = 1; price = 100; };
	class optic_mas_Arco_camo						{ quality = 1; price = 100; };
	class optic_mas_Hamr_camo						{ quality = 1; price = 100; };
	class optic_mas_Aco_camo						{ quality = 1; price = 50; };
	class optic_mas_ACO_grn_camo					{ quality = 1; price = 50; };
	class optic_mas_MRCO_camo						{ quality = 1; price = 100; };
	class optic_mas_zeiss							{ quality = 3; price = 300; };
	class optic_mas_zeiss_c							{ quality = 3; price = 300; };
	class optic_mas_zeiss_eo						{ quality = 3; price = 400; };
	class optic_mas_zeiss_eo_c						{ quality = 3; price = 400; };
	class optic_mas_acog							{ quality = 3; price = 200; };
	class optic_mas_acog_c							{ quality = 3; price = 200; };
	class optic_mas_acog_eo							{ quality = 3; price = 200; };
	class optic_mas_acog_eo_c						{ quality = 3; price = 200; };
	class optic_mas_acog_rd							{ quality = 3; price = 200; };
	class optic_mas_acog_rd_c						{ quality = 3; price = 200; };
	class optic_mas_handle							{ quality = 2; price = 100; };
	class optic_mas_aim								{ quality = 2; price = 150; };
	class optic_mas_aim_c							{ quality = 2; price = 150; };
	class optic_mas_PSO								{ quality = 3; price = 300; };
	class optic_mas_PSO_c							{ quality = 3; price = 300; };
	class optic_mas_PSO_eo							{ quality = 3; price = 300; };
	class optic_mas_PSO_eo_c						{ quality = 3; price = 300; };
	class optic_mas_PSO_nv							{ quality = 2; price = 500; };
	class optic_mas_PSO_nv_c						{ quality = 2; price = 500; };
	class optic_mas_PSO_nv_eo						{ quality = 2; price = 500; };
	class optic_mas_PSO_nv_eo_c						{ quality = 2; price = 500; };
	class optic_mas_PSO_day							{ quality = 3; price = 300; };
	class optic_mas_PSO_nv_day						{ quality = 2; price = 500; };
	class optic_mas_term							{ quality = 3; price = 600; };
	class optic_mas_MRD								{ quality = 1; price = 50; };
	class optic_mas_LRPS							{ quality = 3; price = 300; };
	class optic_mas_kobra							{ quality = 2; price = 250; };
	class optic_mas_kobra_c							{ quality = 2; price = 250; };
	class optic_mas_nspu							{ quality = 2; price = 250; };
	class optic_mas_goshawk							{ quality = 2; price = 150; };
	class optic_mas_PSO_kv							{ quality = 2; price = 250; };
	class optic_mas_PSO_kv_c						{ quality = 2; price = 250; };	

	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Rope							{ quality = 1; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 300; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 400; };
	class Exile_Item_LightBulb						{ quality = 1; price = 20; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 600; };
	//class Exile_Item_MetalHedgehogKit				{ quality = 1; price = 1200; };
	class Exile_Item_SafeKit						{ quality = 3; price = 10000; };
	class Exile_Item_CodeLock						{ quality = 2; price = 5000; };
	class Exile_Item_Laptop						    { quality = 2; price = 9000; };
	class Exile_Item_BaseCameraKit				    { quality = 2; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Exile_Item_MetalPole						{ quality = 1; price = 800; };
	//class Exile_Item_MetalScrews					{ quality = 1; price = 100; };
	//class Exile_Item_MetalWire						{ quality = 1; price = 100; };
	//class Exile_Item_Cement							{ quality = 1; price = 20; };
	//class Exile_Item_Sand							{ quality = 1; price = 20; };
	//class Exile_Item_CarWheel						{ quality = 1; price = 1000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_EMRE							{ quality = 3; price = 54; }; //75, 60
	class Exile_Item_GloriousKnakworst				{ quality = 3; price = 40; }; //60, 30
	class Exile_Item_GloriousKnakworst_cooked		{ quality = 3; price = 40; }; //60, 30	
	class Exile_Item_Surstromming					{ quality = 3; price = 34; }; //55, 25
	class Exile_Item_Surstromming_cooked			{ quality = 3; price = 34; }; //55, 25
	class Exile_Item_SausageGravy					{ quality = 3; price = 30; }; //50, 25
	class Exile_Item_SausageGravy_cooked			{ quality = 3; price = 30; }; //50, 25	
	class Exile_Item_Catfood						{ quality = 2; price = 24; }; //40, 40
	class Exile_Item_Catfood_cooked					{ quality = 2; price = 24; }; //40, 40	
	class Exile_Item_ChristmasTinner				{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_ChristmasTinner_cooked			{ quality = 3; price = 20; }; //40, 60	
	class Exile_Item_BBQSandwich					{ quality = 3; price = 20; }; //40, 60
	class Exile_Item_BBQSandwich_cooked			    { quality = 3; price = 20; }; //40, 60	
	class Exile_Item_Dogfood						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_Dogfood_cooked					{ quality = 2; price = 18; }; //30, 30	
	class Exile_Item_BeefParts						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_Cheathas						{ quality = 2; price = 18; }; //30, 30
	class Exile_Item_Noodles						{ quality = 1; price = 14; }; //25, 50
	class Exile_Item_SeedAstics						{ quality = 1; price = 12; }; //20, 40
	class Exile_Item_Raisins						{ quality = 1; price = 10; }; //15, 30
	class Exile_Item_Moobar							{ quality = 1; price = 8; }; //10, 30
	class Exile_Item_InstantCoffee					{ quality = 1; price = 20; }; //5, 10
	class Exile_Item_Can_Empty						{ quality = 1; price = 1; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_PlasticBottleCoffee	 		{ quality = 3; price = 40; }; //100, 60
	class Exile_Item_PowerDrink						{ quality = 3; price = 60; }; //95, 10
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 2; price = 50; sellPrice = 4; }; //80, 15
	class Exile_Item_Beer 							{ quality = 1; price = 50; }; //75, 30
	class Exile_Item_EnergyDrink					{ quality = 1; price = 40; }; //75, 20
	class Exile_Item_MountainDupe					{ quality = 1; price = 30; }; //50, 20
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// First Aid
	///////////////////////////////////////////////////////////////////////////////	
	class Exile_Item_InstaDoc                       { quality = 1; price = 1250; };
	class Exile_Item_Vishpirin						{ quality = 1; price = 300; };
	class Exile_Item_Bandage	                    { quality = 1; price = 100; };
	//class Exile_Item_Defibrillator				{ quality = 1; price = 7500; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Matches 						{ quality = 1; price = 60; };
	class Exile_Item_CookingPot						{ quality = 2; price = 80; };
	class Exile_Melee_Axe							{ quality = 1; price = 100; };
	class Exile_Item_CanOpener						{ quality = 1; price = 80; };
	class Exile_Item_Handsaw						{ quality = 1; price = 500; };
	class Exile_Item_Pliers							{ quality = 1; price = 350; };
	class Exile_Item_Grinder						{ quality = 1; price = 1250; };
	class Exile_Item_PortableGeneratorKit			{ quality = 1; price = 1250; };	
	//class Exile_Item_Foolbox						{ quality = 1; price = 4000; };
	//class Exile_Item_CordlessScrewdriver			{ quality = 1; price = 750; };
	//class Exile_Item_FireExtinguisher				{ quality = 1; price = 650; };
	//class Exile_Item_Hammer						{ quality = 1; price = 600; };
	//class Exile_Item_OilCanister					{ quality = 1; price = 1750; };
	//class Exile_Item_Screwdriver					{ quality = 1; price = 250; };
	//class Exile_Item_Shovel						{ quality = 1; price = 700; };
	//class Exile_Item_Wrench						{ quality = 1; price = 250; };
	//class Exile_Item_SleepingMat					{ quality = 1; price = 1250; };
	//class Exile_Item_ToiletPaper					{ quality = 1; price = 5; };
	//class Exile_Item_ZipTie						{ quality = 1; price = 250; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Building Supplies
	///////////////////////////////////////////////////////////////////////////////	
	class Exile_Item_WoodDoorKit						{ quality = 3; price = 500; };
	class Exile_Item_WoodDoorwayKit						{ quality = 3; price = 500; };
	class Exile_Item_WoodFloorKit						{ quality = 3; price = 500; };
	class Exile_Item_WoodFloorPortKit					{ quality = 3; price = 500; };
	class Exile_Item_WoodGateKit						{ quality = 3; price = 500; };
	class Exile_Item_WoodDrawBridgeKit					{ quality = 3; price = 500; };
	class Exile_Item_WoodStairsKit						{ quality = 3; price = 500; };
	class Exile_Item_WoodSupportKit						{ quality = 3; price = 500; };
	class Exile_Item_WoodWallHalfKit					{ quality = 3; price = 500; };
	class Exile_Item_WoodWallKit						{ quality = 3; price = 500; };
	class Exile_Item_WoodWindowKit						{ quality = 3; price = 500; };
	class Exile_Item_WorkBenchKit						{ quality = 3; price = 500; };
	class Exile_Item_FortificationUpgrade				{ quality = 3; price = 1000; };

	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch									{ quality = 1; price = 2; };	
	class ItemGPS									{ quality = 1; price = 40; };
	class ItemMap									{ quality = 1; price = 6; };
	class ItemCompass								{ quality = 1; price = 6; };
	class ItemRadio									{ quality = 1; price = 40; };
	class Binocular									{ quality = 1; price = 40; };
	class Rangefinder								{ quality = 2; price = 200; };
	class Laserdesignator							{ quality = 3; price = 750; };
	class Laserdesignator_02						{ quality = 3; price = 750; };
	class Laserdesignator_03						{ quality = 3; price = 750; };
	class NVGoggles									{ quality = 2; price = 100; };
	class NVGoggles_INDEP							{ quality = 2; price = 100; };
	class NVGoggles_OPFOR							{ quality = 2; price = 100; };
	class Exile_Item_XM8							{ quality = 2; price = 20; };
	class NVGoggles_mas_h							{ quality = 2; price = 250; };
	class Rangefinder_mas_h							{ quality = 2; price = 250; };
	class Laserdesignator_mas_h						{ quality = 3; price = 950; };	

	///////////////////////////////////////////////////////////////////////////////
	// Rebreather
	///////////////////////////////////////////////////////////////////////////////
	class V_RebreatherB								{ quality = 2; price = 250; };
	class V_RebreatherIA							{ quality = 2; price = 250; };
	class V_RebreatherIR							{ quality = 2; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Pilot Stuff
	///////////////////////////////////////////////////////////////////////////////
	class B_Parachute								{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_B						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_I						{ quality = 2; price = 150; };
	class H_CrewHelmetHeli_O						{ quality = 2; price = 150; };
	class H_HelmetCrew_I							{ quality = 1; price = 100; };
	class H_HelmetCrew_B							{ quality = 1; price = 100; };
	class H_HelmetCrew_O							{ quality = 1; price = 100; };
	class H_PilotHelmetHeli_B						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_I						{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_O						{ quality = 3; price = 100; };
	class U_B_HeliPilotCoveralls					{ quality = 1; price = 80; };
	class U_B_PilotCoveralls						{ quality = 1; price = 60; };
	class U_I_HeliPilotCoveralls					{ quality = 1; price = 60; };
	class U_I_pilotCoveralls						{ quality = 1; price = 60; };
	class U_O_PilotCoveralls						{ quality = 1; price = 60; };
	class H_PilotHelmetFighter_B					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_I					{ quality = 2; price = 150; };
	class H_PilotHelmetFighter_O					{ quality = 2; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class CUP_V_B_LHDVest_Violet                                     { quality = 1; price = 50; };
	class B_HuntingBackpack							{ quality = 3; price = 70; };
	class B_OutdoorPack_blk							{ quality = 1; price = 80; };
	class B_OutdoorPack_blu							{ quality = 1; price = 80; };
	class B_OutdoorPack_tan							{ quality = 1; price = 80; };
	class B_AssaultPack_blk							{ quality = 1; price = 90; };
	class B_AssaultPack_cbr							{ quality = 1; price = 90; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 90; };
	class B_AssaultPack_khk							{ quality = 1; price = 90; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 90; };
	class B_AssaultPack_rgr							{ quality = 1; price = 90; };
	class B_AssaultPack_sgg							{ quality = 1; price = 90; };
	class B_FieldPack_blk							{ quality = 2; price = 120; };
	class B_FieldPack_cbr							{ quality = 2; price = 120; };
	class B_FieldPack_ocamo							{ quality = 2; price = 120; };
	class B_FieldPack_oucamo						{ quality = 2; price = 120; };
	class B_TacticalPack_blk						{ quality = 2; price = 150; };
	class B_TacticalPack_rgr						{ quality = 2; price = 150; };
	class B_TacticalPack_ocamo						{ quality = 2; price = 150; };
	class B_TacticalPack_mcamo						{ quality = 2; price = 150; };
	class B_TacticalPack_oli						{ quality = 2; price = 150; };
	class B_Kitbag_cbr								{ quality = 3; price = 200; };
	class B_Kitbag_mcamo							{ quality = 3; price = 200; };
	class B_Kitbag_sgg								{ quality = 3; price = 200; };
	class B_Bergen_blk								{ quality = 2; price = 200; };
	class B_Bergen_mcamo							{ quality = 2; price = 200; };
	class B_Bergen_rgr								{ quality = 2; price = 200; };
	class B_Bergen_sgg								{ quality = 2; price = 200; };
	class B_Carryall_cbr							{ quality = 3; price = 300; };
	class B_Carryall_khk							{ quality = 3; price = 300; };
	class B_Carryall_mcamo							{ quality = 3; price = 300; };
	class B_Carryall_ocamo							{ quality = 3; price = 300; };
	class B_Carryall_oli							{ quality = 3; price = 300; };
	class B_Carryall_oucamo							{ quality = 3; price = 300; };
	class B_mas_m_Bergen_us							{ quality = 2; price = 200; };
	class B_mas_m_Bergen_us_g						{ quality = 2; price = 200; };
	class B_mas_m_Bergen_us_m						{ quality = 2; price = 200; };
	class B_mas_m_Bergen_us_b						{ quality = 2; price = 200; };
	class B_mas_m_Bergen_us_w						{ quality = 2; price = 200; };
	class B_mas_m_Bergen_acr						{ quality = 2; price = 200; };
	class B_mas_m_Bergen_acr_c						{ quality = 2; price = 200; };
	class B_mas_m_Bergen_acr_g						{ quality = 2; price = 200; };
	class B_mas_m_Bergen_acr_w						{ quality = 2; price = 200; };
	class B_mas_m_Bergen_rpg						{ quality = 2; price = 200; };
	class B_mas_m_Bergen_rpg_b						{ quality = 2; price = 200; };
	class B_mas_m_Bergen_al							{ quality = 2; price = 200; };
	class B_mas_AssaultPack_mul						{ quality = 1; price = 90; };
	class B_mas_Kitbag_mul							{ quality = 3; price = 200; };
	class B_mas_Bergen_mul							{ quality = 2; price = 200; };
	class B_mas_AssaultPack_des						{ quality = 1; price = 90; };
	class B_mas_Kitbag_des							{ quality = 3; price = 200; };
	class B_mas_Bergen_des							{ quality = 2; price = 200; };
	class B_mas_AssaultPack_black					{ quality = 1; price = 90; };
	class B_mas_Kitbag_black						{ quality = 3; price = 200; };
	class B_mas_Bergen_black						{ quality = 2; price = 200; };
	class B_mas_AssaultPack_wint					{ quality = 1; price = 90; };
	class B_mas_Kitbag_wint							{ quality = 3; price = 200; };
	class B_mas_Bergen_wint							{ quality = 2; price = 200; };
	class B_mas_AssaultPack_rng						{ quality = 1; price = 90; };
	class B_mas_Kitbag_rng							{ quality = 3; price = 200; };
	class B_mas_Bergen_rng							{ quality = 2; price = 200; };
	class O_mas_Bergen_flo							{ quality = 2; price = 200; };
	class O_mas_Bergen_blk							{ quality = 2; price = 200; };
	class O_mas_Bergen_rtan							{ quality = 2; price = 200; };	

	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class 100Rnd_65x39_caseless_mag 				{ quality = 1; price = 30; };
	class 100Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 40; };
	class 10Rnd_127x54_Mag 							{ quality = 1; price = 30; };
	// Broken in Arma
	class 10Rnd_338_Mag 							{ quality = 1; price = 30; };

	class 10Rnd_762x54_Mag 							{ quality = 1; price = 30; };
	//class 10Rnd_762x51_Mag 						{ quality = 1; price = 30; };
	class 10Rnd_93x64_DMR_05_Mag 					{ quality = 1; price = 40; };
	class 11Rnd_45ACP_Mag 							{ quality = 1; price = 8; };
	class 150Rnd_762x54_Box 						{ quality = 1; price = 20; };
	class 150Rnd_762x54_Box_Tracer 					{ quality = 2; price = 30; };
	class 16Rnd_9x21_Mag 							{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 					{ quality = 1; price = 30; };
	class 200Rnd_65x39_cased_Box_Tracer 			{ quality = 2; price = 30; };
	class 150Rnd_93x64_Mag 							{ quality = 2; price = 50; };
	class 130Rnd_338_Mag 							{ quality = 2; price = 40; };
	class 20Rnd_556x45_UW_mag 						{ quality = 1; price = 20; };
	class 20Rnd_762x51_Mag 							{ quality = 1; price = 20; };
	class 30Rnd_45ACP_Mag_SMG_01 					{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow		{ quality = 2; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red			{ quality = 2; price = 10; };
	class 30Rnd_556x45_Stanag 						{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Green 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_green  				{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Red 			{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 		{ quality = 2; price = 20; };
	class 30Rnd_556x45_Stanag_red 					{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_green 				{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 	{ quality = 2; price = 30; };
	class 30Rnd_65x39_caseless_mag 					{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 30; };
	class 30Rnd_9x21_Mag 							{ quality = 1; price = 40; };
	class 5Rnd_127x108_APDS_Mag 					{ quality = 2; price = 50; };
	class 5Rnd_127x108_Mag 							{ quality = 1; price = 40; };
	class 6Rnd_45ACP_Cylinder 						{ quality = 1; price = 8; };
	class 6Rnd_GreenSignal_F 						{ quality = 9000; price = 30; };
	class 6Rnd_RedSignal_F 							{ quality = 9000; price = 30; };
	class 7Rnd_408_Mag 								{ quality = 1; price = 10; };
	class 9Rnd_45ACP_Mag 							{ quality = 1; price = 6; };
	class 30Rnd_mas_556x45_Stanag					{ quality = 1; price = 20; };
	class 30Rnd_mas_556x45_T_Stanag					{ quality = 2; price = 20; };
	class 30Rnd_mas_556x45sd_Stanag					{ quality = 2; price = 20; };
	class 200Rnd_mas_556x45_Stanag					{ quality = 1; price = 30; };
	class 200Rnd_mas_556x45_T_Stanag				{ quality = 2; price = 30; };
	class 100Rnd_mas_762x51_Stanag					{ quality = 1; price = 30; };
	class 100Rnd_mas_762x51_T_Stanag				{ quality = 2; price = 40; };
	class 100Rnd_mas_762x54_mag						{ quality = 1; price = 30; };
	class 100Rnd_mas_762x54_T_mag					{ quality = 2; price = 40; };
	class 100Rnd_mas_762x39_mag						{ quality = 1; price = 30; };
	class 100Rnd_mas_762x39_T_mag					{ quality = 2; price = 40; };
	class 30Rnd_mas_545x39_mag						{ quality = 1; price = 20; };
	class 30Rnd_mas_545x39_T_mag					{ quality = 2; price = 20; };
	class 100Rnd_mas_545x39_mag						{ quality = 1; price = 25; };
	class 100Rnd_mas_545x39_T_mag					{ quality = 2; price = 25; };
	class 20Rnd_mas_762x51_Stanag					{ quality = 1; price = 20; };
	class 20Rnd_mas_762x51_T_Stanag					{ quality = 2; price = 20; };
	class 20Rnd_mas_762x51sd_Stanag 				{ quality = 2; price = 20; };
	class 5Rnd_mas_762x51_Stanag					{ quality = 1; price = 20; };
	class 5Rnd_mas_762x51_T_Stanag					{ quality = 2; price = 20; };
	class 10Rnd_mas_338_Stanag						{ quality = 1; price = 30; };
	class 10Rnd_mas_338_T_Stanag					{ quality = 2; price = 30; };
	class 30Rnd_mas_762x39_mag						{ quality = 1; price = 20; };
	class 30Rnd_mas_762x39_T_mag					{ quality = 2; price = 20; };
	class 10Rnd_mas_762x54_mag						{ quality = 1; price = 25; };
	class 10Rnd_mas_762x54_T_mag					{ quality = 2; price = 25; };
	class 5Rnd_mas_127x99_Stanag					{ quality = 1; price = 50; };
	class 5Rnd_mas_127x99_T_Stanag					{ quality = 2; price = 50; };
	class 5Rnd_mas_127x108_mag						{ quality = 1; price = 40; };
	class 5Rnd_mas_127x108_T_mag					{ quality = 2; price = 40; };
	class 30Rnd_mas_9x21_Stanag						{ quality = 1; price = 10; };
	class 30Rnd_mas_9x21d_Stanag					{ quality = 1; price = 10; };
	class 12Rnd_mas_45acp_Mag						{ quality = 1; price = 7; };
	class 10Rnd_mas_45acp_Mag						{ quality = 1; price = 7; };
	class 8Rnd_mas_45acp_Mag						{ quality = 1; price = 6; };
	class 15Rnd_mas_9x21_Mag						{ quality = 1; price = 9; };
	class 17Rnd_mas_9x21_Mag						{ quality = 1; price = 9; };
	class 13Rnd_mas_9x21_Mag						{ quality = 1; price = 9; };
	class 8Rnd_mas_9x18_mag							{ quality = 1; price = 7; };
	class 7Rnd_mas_12Gauge_Slug						{ quality = 1; price = 10; };
	class 7Rnd_mas_12Gauge_Pellets					{ quality = 1; price = 10; };
	class 10Rnd_mas_12Gauge_Slug					{ quality = 1; price = 10; };
	class 10Rnd_mas_12Gauge_Pellets					{ quality = 1; price = 10; };
	class 64Rnd_mas_9x18_mag						{ quality = 1; price = 20; };
	class 20Rnd_mas_765x17_Mag						{ quality = 1; price = 20; };
	class 25Rnd_mas_9x19_Mag						{ quality = 1; price = 20; };
	class 40Rnd_mas_46x30_Mag						{ quality = 1; price = 30; };
	class 20Rnd_mas_12Gauge_Slug					{ quality = 1; price = 20; };
	class 20Rnd_mas_12Gauge_Pellets					{ quality = 1; price = 20; };
	class 150Rnd_mas_556x45_Stanag					{ quality = 1; price = 30; };
	class 150Rnd_mas_556x45_T_Stanag				{ quality = 2; price = 30; };
	class 30Rnd_mas_9x39_mag						{ quality = 2; price = 40; };
	class 20Rnd_mas_9x39_mag						{ quality = 2; price = 30; };	

	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	class Chemlight_blue							{ quality = 1; price = 2; };
	class Chemlight_green							{ quality = 1; price = 2; };
	class Chemlight_red								{ quality = 1; price = 2; };
	class FlareGreen_F								{ quality = 1; price = 6; };
	class FlareRed_F								{ quality = 1; price = 6; };
	class FlareWhite_F								{ quality = 1; price = 6; };
	class FlareYellow_F								{ quality = 1; price = 6; };
	class UGL_FlareGreen_F							{ quality = 2; price = 8; };
	class UGL_FlareRed_F							{ quality = 2; price = 8; };
	class UGL_FlareWhite_F							{ quality = 2; price = 8; };
	class UGL_FlareYellow_F							{ quality = 2; price = 8; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	class SmokeShell								{ quality = 1; price = 6; };
	class SmokeShellBlue							{ quality = 1; price = 6; };
	class SmokeShellGreen							{ quality = 1; price = 6; };
	class SmokeShellOrange							{ quality = 1; price = 6; };
	class SmokeShellPurple							{ quality = 1; price = 6; };
	class SmokeShellRed								{ quality = 1; price = 6; };
	class SmokeShellYellow							{ quality = 1; price = 6; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 8; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 8; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 8*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	class HandGrenade								{ quality = 3; price = 40; };
	class MiniGrenade								{ quality = 2; price = 30; };
	class B_IR_Grenade								{ quality = 1; price = 50; };
	class O_IR_Grenade								{ quality = 1; price = 50; };
	class I_IR_Grenade								{ quality = 1; price = 50; };
	class 1Rnd_HE_Grenade_shell						{ quality = 2; price = 70; };
	class 3Rnd_HE_Grenade_shell						{ quality = 3; price = 70*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 3; price = 500; };
	class APERSMine_Range_Mag						{ quality = 3; price = 600; };
	class APERSTripMine_Wire_Mag					{ quality = 3; price = 300; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 3; price = 350; };
	class DemoCharge_Remote_Mag						{ quality = 3; price = 700; };
	class IEDLandBig_Remote_Mag						{ quality = 3; price = 600; };
	class IEDLandSmall_Remote_Mag					{ quality = 3; price = 300; };
	class IEDUrbanBig_Remote_Mag					{ quality = 3; price = 800; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 3; price = 400; };
	class SatchelCharge_Remote_Mag					{ quality = 3; price = 1000; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 3; price = 700; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Launchers
	///////////////////////////////////////////////////////////////////////////////
	class mas_launch_maaws_F 						{ quality = 1; price = 7500; }; 
	class mas_launch_smaw_F 						{ quality = 1; price = 7500; }; 
	class mas_launch_NLAW_F 						{ quality = 1; price = 7500; };
	class mas_launch_LAW_F 							{ quality = 1; price = 7500; };
	class mas_launch_M136_F 						{ quality = 1; price = 7500; };
	class mas_launch_TitanS_F 						{ quality = 1; price = 7500; };
	class mas_launch_RPG7_F 						{ quality = 1; price = 7500; };
	class mas_launch_RPG18_F 						{ quality = 1; price = 7500; };
	class mas_launch_Metis_F 						{ quality = 1; price = 7500; };
	class mas_launch_pzf60_F 						{ quality = 1; price = 7500; };
	class mas_launch_Stinger_F 						{ quality = 1; price = 7500; };
	class mas_launch_Strela_F 						{ quality = 1; price = 7500; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Launcher Ammo
	///////////////////////////////////////////////////////////////////////////////
	class mas_MAAWS									{ quality = 1; price = 3000; };
	class mas_MAAWS_HE								{ quality = 1; price = 3000; };
	class mas_SMAW									{ quality = 1; price = 3000; };
	class mas_SMAW_HE								{ quality = 1; price = 3000; };
	class mas_SMAW_NE								{ quality = 1; price = 3000; };
	class mas_NLAW									{ quality = 1; price = 3000; };
	class mas_NLAW_HE								{ quality = 1; price = 3000; };
	class mas_LAW									{ quality = 1; price = 3000; };
	class mas_M136									{ quality = 1; price = 3000; };
	class mas_M136_HE								{ quality = 1; price = 3000; };
	class mas_TitanS								{ quality = 1; price = 3000; };
	class mas_TitanS_HE								{ quality = 1; price = 3000; };
	class mas_PG7V									{ quality = 1; price = 3000; };
	class mas_OG7									{ quality = 1; price = 3000; };
	class mas_PG7L									{ quality = 1; price = 3000; };
	class mas_PG7VR									{ quality = 1; price = 3000; };
	class mas_TBG7V									{ quality = 1; price = 3000; };
	class mas_PG18									{ quality = 1; price = 3000; };
	class mas_Metis									{ quality = 1; price = 3000; };
	class mas_Metis_HE								{ quality = 1; price = 3000; };
	class mas_pzf60									{ quality = 1; price = 3000; };
	class mas_Stinger								{ quality = 1; price = 3000; };
	class mas_Strela								{ quality = 1; price = 3000; }; 
	
	///////////////////////////////////////////////////////////////////////////////
	// Rocketlaunchers
	///////////////////////////////////////////////////////////////////////////////	
    class launch_NLAW_F                                    { quality = 1; price = 10000; };
    class launch_RPG32_F                                { quality = 1; price = 10000; };
    class launch_B_Titan_F                                { quality = 1; price = 10000; };
    class launch_I_Titan_F                                { quality = 1; price = 10000; };
    class launch_O_Titan_F                                { quality = 1; price = 10000; };
    class launch_Titan_F                                { quality = 1; price = 10000; };
    class launch_B_Titan_short_F                        { quality = 1; price = 10000; };
    class launch_I_Titan_short_F                        { quality = 1; price = 10000; };
    class launch_O_Titan_short_F                        { quality = 1; price = 10000; };
    class launch_Titan_short_F                            { quality = 1; price = 10000; };
	
    ///////////////////////////////////////////////////////////////////////////////
    // Rockets
	///////////////////////////////////////////////////////////////////////////////
    class RPG32_F                                        { quality = 1; price = 5000; };
    class RPG32_HE_F                                    { quality = 1; price = 5000; };
    class NLAW_F                                        { quality = 1; price = 5000; };
    class Titan_AA                                   { quality = 1; price = 5000; };
    class Titan_AP                                   { quality = 1; price = 5000; };
    class Titan_AT                                   { quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class hgun_ACPC2_F 								{ quality = 1; price = 50; };
	class hgun_P07_F 								{ quality = 1; price = 50; };
	class hgun_Pistol_heavy_01_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_heavy_02_F 					{ quality = 2; price = 80; };
	class hgun_Pistol_Signal_F 						{ quality = 9000; price = 100; };
	class hgun_Rook40_F 							{ quality = 1; price = 50; };
	class hgun_mas_mp7p_F 							{ quality = 2; price = 300; };
	class hgun_mas_uzi_F 							{ quality = 2; price = 300; };
	class hgun_mas_sa61_F 							{ quality = 2; price = 300; };
	class hgun_mas_m9_F 							{ quality = 1; price = 50; };
	class hgun_mas_bhp_F 							{ quality = 1; price = 50; };
	class hgun_mas_glock_F 							{ quality = 2; price = 50; };
	class hgun_mas_p226_F 							{ quality = 2; price = 50; };
	class hgun_mas_acp_F 							{ quality = 2; price = 80; };
	class hgun_mas_usp_F 							{ quality = 2; price = 80; };
	class hgun_mas_usp_l_F 							{ quality = 2; price = 80; };
	class hgun_mas_glocksf_F 						{ quality = 2; price = 80; };
	class hgun_mas_grach_F 							{ quality = 1; price = 65; };
	class hgun_mas_mak_F 							{ quality = 1; price = 60; };
	class hgun_mas_mak_F_sd 						{ quality = 1; price = 60; };	

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class hgun_PDW2000_F 							{ quality = 1; price = 100; };
	class SMG_01_F 									{ quality = 1; price = 150; };
	class SMG_02_F 									{ quality = 1; price = 150; };
	class arifle_mas_mp40 							{ quality = 1; price = 250; };
	class arifle_mas_mp40_o 						{ quality = 1; price = 250; };
	class arifle_mas_sten 							{ quality = 1; price = 250; };
	class arifle_mas_m1014 							{ quality = 2; price = 300; };
	class arifle_mas_aa12 							{ quality = 2; price = 400; };
	class arifle_mas_m79 							{ quality = 2; price = 400; };
	class arifle_mas_mp5 							{ quality = 2; price = 400; };
	class arifle_mas_mp5_v 							{ quality = 2; price = 400; };
	class arifle_mas_mp5_d 							{ quality = 2; price = 500; };
	class arifle_mas_mp5sd_ds 						{ quality = 2; price = 600; };
	class hgun_mas_mp7_F 							{ quality = 2; price = 300; };
	class arifle_mas_bizon 							{ quality = 1; price = 450; };
	class arifle_mas_saiga 							{ quality = 2; price = 300; };	

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MX_SW_Black_F						{ quality = 2; price = 250; };
	class arifle_MX_SW_F							{ quality = 2; price = 250; };
	class LMG_Mk200_F								{ quality = 2; price = 300; };
	class LMG_Zafir_F								{ quality = 2; price = 350; };
	class MMG_01_hex_F								{ quality = 3; price = 800; };
	class MMG_01_tan_F								{ quality = 3; price = 800; };
	class MMG_02_black_F							{ quality = 3; price = 450; };
	class MMG_02_camo_F								{ quality = 3; price = 450; };
	class MMG_02_sand_F								{ quality = 3; price = 450; };
	class arifle_mas_m27							{ quality = 2; price = 550; };
	class arifle_mas_m27m							{ quality = 2; price = 550; };
	class arifle_mas_m27_v							{ quality = 2; price = 550; };
	class arifle_mas_m27m_v							{ quality = 2; price = 550; };
	class arifle_mas_m27_d							{ quality = 2; price = 550; };
	class arifle_mas_m27m_d							{ quality = 2; price = 550; };
	class LMG_mas_Mk200_F							{ quality = 3; price = 400; };
	class LMG_mas_M249_F							{ quality = 3; price = 500; };
	class LMG_mas_M249_F_v							{ quality = 3; price = 500; };
	class LMG_mas_M249_F_d							{ quality = 3; price = 500; };
	class LMG_mas_M249a_F							{ quality = 3; price = 500; };
	class LMG_mas_Mk48_F							{ quality = 3; price = 450; };
	class LMG_mas_Mk48_F_v							{ quality = 3; price = 450; };
	class LMG_mas_Mk48_F_d							{ quality = 3; price = 450; };
	class LMG_mas_M240_F							{ quality = 3; price = 600; };
	class LMG_mas_mg3_F								{ quality = 3; price = 800; };
	class LMG_mas_M60_F								{ quality = 3; price = 600; };
	class LMG_mas_m72_F								{ quality = 2; price = 550; };
	class LMG_mas_rpk_F								{ quality = 2; price = 550; };
	class LMG_mas_pkm_F								{ quality = 3; price = 650; };
	class LMG_mas_pech_F							{ quality = 3; price = 700; };		

	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_Katiba_C_F							{ quality = 1; price = 150; };
	class arifle_Katiba_F							{ quality = 1; price = 150; };
	class arifle_Katiba_GL_F						{ quality = 2; price = 200; };
	class arifle_Mk20_F								{ quality = 1; price = 150; };
	class arifle_Mk20_GL_F							{ quality = 2; price = 200; };
	class arifle_Mk20_GL_plain_F					{ quality = 2; price = 200; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 150; };
	class arifle_Mk20C_F							{ quality = 1; price = 150; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 150; };
	class arifle_MX_Black_F							{ quality = 1; price = 450; };
	class arifle_MX_F								{ quality = 1; price = 450; };
	class arifle_MX_GL_Black_F						{ quality = 2; price = 450; };
	class arifle_MX_GL_F							{ quality = 2; price = 450; };
	class arifle_MXC_Black_F						{ quality = 1; price = 350; };
	class arifle_MXC_F								{ quality = 1; price = 350; };
	class arifle_SDAR_F								{ quality = 3; price = 650; };
	class arifle_TRG20_F							{ quality = 1; price = 250; };
	class arifle_TRG21_F							{ quality = 1; price = 250; };
	class arifle_TRG21_GL_F							{ quality = 2; price = 350; };
	class arifle_mas_hk416							{ quality = 1; price = 350; };
	class arifle_mas_hk416_gl						{ quality = 2; price = 450; };
	class arifle_mas_hk416_m203						{ quality = 2; price = 450; };
	class arifle_mas_hk416_v						{ quality = 1; price = 350; };
	class arifle_mas_hk416_gl_v						{ quality = 2; price = 450; };
	class arifle_mas_hk416_m203_v					{ quality = 2; price = 450; };
	class arifle_mas_hk416_d						{ quality = 1; price = 350; };
	class arifle_mas_hk416_gl_d						{ quality = 2; price = 450; };
	class arifle_mas_hk416_m203_d					{ quality = 2; price = 450; };
	class arifle_mas_hk416c							{ quality = 1; price = 300; };
	class arifle_mas_hk416_m203c					{ quality = 2; price = 400; };
	class arifle_mas_hk416c_v						{ quality = 1; price = 300; };
	class arifle_mas_hk416_m203c_v					{ quality = 2; price = 400; };
	class arifle_mas_hk416c_d						{ quality = 1; price = 300; };
	class arifle_mas_hk416_m203c_d					{ quality = 2; price = 400; };
	class arifle_mas_m4								{ quality = 1; price = 350; };
	class arifle_mas_m4_gl							{ quality = 2; price = 450; };
	class arifle_mas_m4_m203						{ quality = 2; price = 450; };
	class arifle_mas_m4_v							{ quality = 1; price = 350; };
	class arifle_mas_m4_gl_v						{ quality = 2; price = 450; };
	class arifle_mas_m4_m203_v						{ quality = 2; price = 450; };
	class arifle_mas_m4_d							{ quality = 1; price = 350; };
	class arifle_mas_m4_gl_d						{ quality = 2; price = 450; };
	class arifle_mas_m4_m203_d						{ quality = 2; price = 450; };
	class arifle_mas_m4vlt							{ quality = 1; price = 400; };
	class arifle_mas_m4c							{ quality = 1; price = 300; };
	class arifle_mas_m4_m203c						{ quality = 2; price = 400; };
	class arifle_mas_m4c_v							{ quality = 1; price = 300; };
	class arifle_mas_m4_m203c_v						{ quality = 2; price = 400; };
	class arifle_mas_m4c_d							{ quality = 1; price = 300; };
	class arifle_mas_m4_m203c_d						{ quality = 2; price = 400; };
	class arifle_mas_m16							{ quality = 2; price = 500; };
	class arifle_mas_m16_gl							{ quality = 2; price = 600; };
	class arifle_mas_l119							{ quality = 1; price = 350; };
	class arifle_mas_l119c							{ quality = 1; price = 300; };
	class arifle_mas_l119_gl						{ quality = 2; price = 450; };
	class arifle_mas_l119_m203						{ quality = 2; price = 450; };
	class arifle_mas_l119_v							{ quality = 1; price = 350; };
	class arifle_mas_l119c_v						{ quality = 1; price = 300; };
	class arifle_mas_l119_gl_v						{ quality = 2; price = 450; };
	class arifle_mas_l119_m203_v					{ quality = 2; price = 450; };
	class arifle_mas_l119_d							{ quality = 1; price = 350; };
	class arifle_mas_l119c_d						{ quality = 1; price = 300; };
	class arifle_mas_l119_gl_d						{ quality = 2; price = 450; };
	class arifle_mas_l119_m203_d					{ quality = 2; price = 450; };
	class arifle_mas_g36c							{ quality = 1; price = 400; };
	class arifle_mas_mk16							{ quality = 1; price = 350; };
	class arifle_mas_mk16_gl						{ quality = 2; price = 450; };
	class arifle_mas_mk16_l							{ quality = 1; price = 400; };
	class arifle_mas_mk16_l_gl						{ quality = 2; price = 450; };
	class arifle_mas_mk17							{ quality = 1; price = 450; };
	class arifle_mas_mk17_gl						{ quality = 2; price = 550; };
	class arifle_mas_arx							{ quality = 1; price = 350; };
	class arifle_mas_arx_gl							{ quality = 2; price = 450; };
	class arifle_mas_arx_l							{ quality = 1; price = 400; };
	class arifle_mas_arx_l_gl						{ quality = 2; price = 450; };
	class arifle_mas_g3								{ quality = 1; price = 500; };
	class arifle_mas_g3_m203						{ quality = 2; price = 600; };
	class arifle_mas_g3s							{ quality = 1; price = 500; };
	class arifle_mas_g3s_m203						{ quality = 2; price = 600; };
	class arifle_mas_fal							{ quality = 1; price = 500; };
	class arifle_mas_fal_m203						{ quality = 2; price = 600; };
	class arifle_mas_ak_74m							{ quality = 1; price = 450; };
	class arifle_mas_ak_74m_gl						{ quality = 2; price = 550; };
	class arifle_mas_ak_74m_c						{ quality = 2; price = 400; };
	class arifle_mas_ak_74m_gl_c					{ quality = 2; price = 500; };
	class arifle_mas_aks74							{ quality = 1; price = 450; };
	class arifle_mas_aks74_gl						{ quality = 2; price = 550; };
	class arifle_mas_ak74							{ quality = 2; price = 400; };
	class arifle_mas_ak74_gl						{ quality = 2; price = 500; };
	class arifle_mas_ak_74m_sf						{ quality = 1; price = 450; };
	class arifle_mas_ak_74m_sf_gl					{ quality = 2; price = 550; };
	class arifle_mas_ak_74m_sf_c					{ quality = 1; price = 400; };
	class arifle_mas_ak_74m_sf_gl_c					{ quality = 2; price = 500; };
	class arifle_mas_aks_74_sf						{ quality = 1; price = 450; };
	class arifle_mas_aks_74_sf_gl					{ quality = 2; price = 550; };
	class arifle_mas_ak12_sf						{ quality = 1; price = 350; };
	class arifle_mas_ak12_sf_gl						{ quality = 2; price = 450; };
	class arifle_mas_akms							{ quality = 2; price = 300; };
	class arifle_mas_akms_gl						{ quality = 2; price = 400; };
	class arifle_mas_akms_c							{ quality = 2; price = 300; };
	class arifle_mas_akms_gl_c						{ quality = 2; price = 400; };
	class arifle_mas_akm							{ quality = 2; price = 300; };
	class arifle_mas_akm_gl							{ quality = 2; price = 400; };
	class arifle_mas_m70							{ quality = 1; price = 450; };
	class arifle_mas_m70_gl							{ quality = 2; price = 550; };
	class arifle_mas_m70ab							{ quality = 1; price = 450; };
	class arifle_mas_m70ab_gl						{ quality = 2; price = 550; };
	class arifle_mas_asval							{ quality = 2; price = 650; };
	class arifle_mas_asval_ds						{ quality = 2; price = 650; };
	class arifle_mas_aks74u							{ quality = 2; price = 300; };
	class arifle_mas_aks74u_c						{ quality = 2; price = 350; };	

	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MXM_Black_F 						{ quality = 1; price = 550; };
	class arifle_MXM_F 								{ quality = 1; price = 550; };
	class srifle_DMR_01_F 							{ quality = 2; price = 600; };
	class srifle_DMR_02_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_02_F 							{ quality = 3; price = 800; };
	class srifle_DMR_02_sniper_F 					{ quality = 3; price = 800; };
	class srifle_DMR_03_F 							{ quality = 3; price = 750; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 750; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 750; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 750; };
	class srifle_DMR_04_F 							{ quality = 3; price = 700; };
	class srifle_DMR_04_Tan_F 						{ quality = 3; price = 700; };
	class srifle_DMR_05_blk_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_hex_F 						{ quality = 3; price = 850; };
	class srifle_DMR_05_tan_f 						{ quality = 3; price = 850; };
	class srifle_DMR_06_camo_F 						{ quality = 3; price = 800; };
	class srifle_DMR_06_olive_F 					{ quality = 3; price = 800; };
	class srifle_EBR_F 								{ quality = 2; price = 700; };
	class srifle_GM6_camo_F 						{ quality = 3; price = 900; };
	class srifle_GM6_F 								{ quality = 3; price = 900; };
	class srifle_LRR_camo_F 						{ quality = 3; price = 850; };
	class srifle_LRR_F 								{ quality = 3; price = 850; };
	class arifle_mas_hk417c 						{ quality = 2; price = 650; };
	class arifle_mas_hk417_m203c					{ quality = 3; price = 750; };
	class arifle_mas_hk417c_v						{ quality = 2; price = 650; };
	class arifle_mas_hk417_m203c_v					{ quality = 3; price = 750; };
	class arifle_mas_hk417c_d						{ quality = 2; price = 650; };
	class arifle_mas_hk417_m203c_d					{ quality = 3; price = 750; };
	class arifle_mas_m14							{ quality = 3; price = 750; };
	class arifle_mas_lee							{ quality = 3; price = 750; };
	class srifle_mas_hk417							{ quality = 2; price = 700; };
	class srifle_mas_hk417_v						{ quality = 2; price = 700; };
	class srifle_mas_hk417_d						{ quality = 2; price = 700; };
	class srifle_mas_sr25							{ quality = 2; price = 700; };
	class srifle_mas_sr25_v							{ quality = 2; price = 700; };
	class srifle_mas_sr25_d							{ quality = 2; price = 700; };
	class srifle_mas_ebr							{ quality = 2; price = 700; };
	class srifle_mas_mk17s							{ quality = 2; price = 700; };
	class srifle_mas_m110							{ quality = 2; price = 800; };
	class srifle_mas_m107 							{ quality = 3; price = 1000; };
	class srifle_mas_m107_v 						{ quality = 3; price = 1000; };
	class srifle_mas_m107_d 						{ quality = 3; price = 1000; };
	class srifle_mas_m24							{ quality = 2; price = 750; };
	class srifle_mas_m24_v							{ quality = 2; price = 750; };
	class srifle_mas_m24_d							{ quality = 2; price = 750; };
	class srifle_mas_lrr							{ quality = 2; price = 800; };
	class srifle_mas_m91							{ quality = 2; price = 700; };
	class srifle_mas_svd							{ quality = 2; price = 800; };
	class srifle_mas_vss							{ quality = 2; price = 750; };
	class srifle_mas_ksvk 							{ quality = 3; price = 1000; };
	class srifle_mas_ksvk_c 						{ quality = 3; price = 1000; };		

	///////////////////////////////////////////////////////////////////////////////
	// BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_OldBike 						{ quality = 1; price = 40; };
	class Exile_Bike_MountainBike 					{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Black					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Blue					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Red					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_White					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Nato					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Csat					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Fia					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla01			{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla02			{ quality = 1; price = 2500; };

	///////////////////////////////////////////////////////////////////////////////
	// KARTS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_BluKing					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_RedStone					{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Vrana						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Green						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Blue						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Orange						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_White						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Yellow						{ quality = 1; price = 1100; };
	class Exile_Car_Kart_Black						{ quality = 1; price = 1100; };

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 700; };
	class I_Boat_Armed_01_minigun_F                 { quality = 1; price = 5000; };	

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_CSAT						{ quality = 1; price = 11000; };
	class Exile_Boat_SDV_Digital					{ quality = 1; price = 11000; };
	class Exile_Boat_SDV_Grey						{ quality = 1; price = 11000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Green				{ quality = 1; price = 7500; };
	class Exile_Chopper_Hellcat_FIA					{ quality = 1; price = 7500; };
	class I_Heli_light_03_F                         { quality = 1; price = 30000; };
	class O_Heli_Attack_02_F                        { quality = 1; price = 30000; };
	class O_Heli_Attack_02_black_F                  { quality = 1; price = 30000; };
	class B_Heli_Attack_01_F   					    { quality = 1; price = 20000; };
	class O_Heli_Light_02_F                         { quality = 1; price = 30000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Green			{ quality = 1; price = 5000; };
	class B_Heli_Light_01_armed_F                   { quality = 1; price = 20000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 1; price = 5000; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Black								{ quality = 1; price = 10000; };
	class Exile_Chopper_Huron_Green								{ quality = 1; price = 10000; };	
	class B_Heli_Transport_01_F								    { quality = 1; price = 12000; };
	class B_Heli_Transport_01_camo_F							{ quality = 1; price = 12000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_FIA								{ quality = 1; price = 10000; };

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_CSAT								{ quality = 1; price = 10000; };
	class Exile_Chopper_Orca_Black								{ quality = 1; price = 10000; };
	class Exile_Chopper_Orca_BlackCustom						{ quality = 1; price = 10000; };
                                                                                       
	///////////////////////////////////////////////////////////////////////////////    
	// Taru                                                                            
	///////////////////////////////////////////////////////////////////////////////    
	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 1; price = 10000; };
	class Exile_Chopper_Taru_Transport_Black					{ quality = 1; price = 10000; };
	                                                                                   
	class Exile_Chopper_Taru_CSAT								{ quality = 1; price = 10000; };
	class Exile_Chopper_Taru_Black								{ quality = 1; price = 10000; };
    class O_Heli_Transport_04_bench_F                           { quality = 1; price = 10000; };                                                                             
	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 1; price = 10000; };
	class Exile_Chopper_Taru_Covered_Black						{ quality = 1; price = 10000; };

	///////////////////////////////////////////////////////////////////////////////
	// Cessna
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_Cessna									{ quality = 1; price = 5000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Jets
	///////////////////////////////////////////////////////////////////////////////
	class O_Plane_CAS_02_F									    { quality = 1; price = 160000; };
	class B_Plane_CAS_01_F									    { quality = 1; price = 160000; };
	class I_Plane_Fighter_03_CAS_F								{ quality = 1; price = 160000; };
	class I_Plane_Fighter_03_AA_F								{ quality = 1; price = 160000; };		

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Beige						{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Green						{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Blue						{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_BlueCustom				{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_BeigeCustom				{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Yellow					{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Grey						{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Black						{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Dark						{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Rusty1					{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Rusty2					{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Rusty3					{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Blue 				{ quality = 1; price = 7000; };
	class Exile_Car_Ikarus_Red 					{ quality = 1; price = 7000; };
	class Exile_Car_Ikarus_Party 				{ quality = 1; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Blue			{ quality = 1; price = 5000; };
	class Exile_Car_Ural_Open_Yellow		{ quality = 1; price = 5000; };
	class Exile_Car_Ural_Open_Worker		{ quality = 1; price = 5000; };
	class Exile_Car_Ural_Open_Military		{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Blue			{ quality = 1; price = 8000; };
	class Exile_Car_Ural_Covered_Yellow			{ quality = 1; price = 8000; };
	class Exile_Car_Ural_Covered_Worker			{ quality = 1; price = 8000; };
	class Exile_Car_Ural_Covered_Military		{ quality = 1; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUVXL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Black 				{ quality = 1; price = 20000; };

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Green 				{ quality = 1; price = 2000; };
	class Exile_Car_Lada_Taxi 				{ quality = 1; price = 2000; };
	class Exile_Car_Lada_Red 				{ quality = 1; price = 2000; };
	class Exile_Car_Lada_White 				{ quality = 1; price = 2000; };
	class Exile_Car_Lada_Hipster 			{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Blue				{ quality = 1; price = 2000; };
	class Exile_Car_Volha_White				{ quality = 1; price = 2000; };
	class Exile_Car_Volha_Black				{ quality = 1; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Red					{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Sport_Blue				{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Sport_Orange				{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Sport_White				{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Sport_Beige				{ quality = 1; price = 4000; };
	class Exile_Car_Hatchback_Sport_Green				{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT 								{ quality = 1; price = 3000; };	

	///////////////////////////////////////////////////////////////////////////////
	// Hunter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter 								{ quality = 1; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit 								{ quality = 1; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Red							{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Beige						{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_White						{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Blue						{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_DarkRed						{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_BlueCustom					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla01					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla02					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla03					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla04					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla05					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla06					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla07					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla08					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla09					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla10					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla11					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Guerilla12					{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Rusty1						{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Rusty2						{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Rusty3						{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Guerilla01 			{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Armed_Guerilla02 			{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Armed_Guerilla03 			{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Armed_Guerilla04 			{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Armed_Guerilla05 			{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Armed_Guerilla06 			{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Armed_Guerilla07 			{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Armed_Guerilla08 			{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Armed_Guerilla09 			{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Armed_Guerilla10 			{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Armed_Guerilla11 			{ quality = 1; price = 6000; };
	class Exile_Car_Offroad_Armed_Guerilla12 			{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Civillian 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Red 					{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Beige 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_White 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Blue 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_DarkRed 				{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_BlueCustom 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla01 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla02 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla03 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla04 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla05 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla06 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla07 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla08 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla09 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla10 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla11 			{ quality = 1; price = 12500; };
	class Exile_Car_Offroad_Repair_Guerilla12 			{ quality = 1; price = 12500; };

	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Strider 							{ quality = 1; price = 14000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Red 							{ quality = 1; price = 4000; };
	class Exile_Car_SUV_Black 							{ quality = 1; price = 4000; };
	class Exile_Car_SUV_Grey 							{ quality = 1; price = 4000; };
	class Exile_Car_SUV_Orange 							{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest 							{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Military (Armed) 
	///////////////////////////////////////////////////////////////////////////////
    class I_APC_Wheeled_03_cannon_F 					{ quality = 1; price = 30000; };
	class B_APC_Wheeled_01_cannon_F                     { quality = 1; price = 30000; };
	class O_APC_Wheeled_02_rcws_F                       { quality = 1; price = 30000; };	
	class I_MRAP_03_hmg_F 							    { quality = 1; price = 22000; };
	class I_MRAP_03_gmg_F 							    { quality = 1; price = 25000; };
	class O_MRAP_02_hmg_F 								{ quality = 1; price = 22000; };
	class O_MRAP_02_gmg_F 								{ quality = 1; price = 25000; };
	class B_MRAP_01_hmg_F                               { quality = 1; price = 22000; };
	class B_MRAP_01_gmg_F                               { quality = 1; price = 25000; };
	class B_APC_Tracked_01_rcws_F                       { quality = 1; price = 50000; };
	class B_APC_Tracked_01_CRV_F                        { quality = 1; price = 50000; };
	class B_APC_Tracked_01_AA_F                         { quality = 1; price = 1500000; };
	class B_MBT_01_cannon_F                             { quality = 1; price = 100000; };
	class O_APC_Tracked_02_cannon_F                     { quality = 1; price = 75000; };
	class O_APC_Tracked_02_AA_F                         { quality = 1; price = 1500000; };
	class O_MBT_02_cannon_F                             { quality = 1; price = 100000; };
	class I_APC_tracked_03_cannon_F                     { quality = 1; price = 50000; };
	class I_MBT_03_cannon_F                             { quality = 1; price = 100000; };
    class B_MBT_01_TUSK_F                               { quality = 1; price = 100000; };
	class O_MBT_02_arty_F                               { quality = 1; price = 6000000; };
	class B_MBT_01_mlrs_F                               { quality = 1; price = 6000000; };
    class B_MBT_01_arty_F                               { quality = 1; price = 6000000; };	
	
	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Black 							{ quality = 1; price = 5000; };
	class Exile_Car_Van_White 							{ quality = 1; price = 5000; };
	class Exile_Car_Van_Red 							{ quality = 1; price = 5000; };
	class Exile_Car_Van_Guerilla01 						{ quality = 1; price = 5000; };
	class Exile_Car_Van_Guerilla02 						{ quality = 1; price = 5000; };
	class Exile_Car_Van_Guerilla03 						{ quality = 1; price = 5000; };
	class Exile_Car_Van_Guerilla04 						{ quality = 1; price = 5000; };
	class Exile_Car_Van_Guerilla05 						{ quality = 1; price = 5000; };
	class Exile_Car_Van_Guerilla06 						{ quality = 1; price = 5000; };
	class Exile_Car_Van_Guerilla07 						{ quality = 1; price = 5000; };
	class Exile_Car_Van_Guerilla08 						{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Black 						{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_White 						{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Red 						{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla01 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla02 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla03 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla04 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla05 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla06 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla07 					{ quality = 1; price = 7000; };
	class Exile_Car_Van_Box_Guerilla08 					{ quality = 1; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Black 						{ quality = 1; price = 5000; };
	class Exile_Car_Van_Fuel_White 						{ quality = 1; price = 5000; };
	class Exile_Car_Van_Fuel_Red 						{ quality = 1; price = 5000; };
	class Exile_Car_Van_Fuel_Guerilla01 				{ quality = 1; price = 5000; };
	class Exile_Car_Van_Fuel_Guerilla02 				{ quality = 1; price = 5000; };
	class Exile_Car_Van_Fuel_Guerilla03 				{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Zamak
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Zamak 								{ quality = 1; price = 3000; };
	class B_Truck_01_ammo_F 							{ quality = 1; price = 10000; };
	class I_Truck_02_ammo_F 							{ quality = 1; price = 10000; };

	///////////////////////////////////////////////////////////////////////////////
	// MAS Vehicles  [CiC]red_ned http://cic-gaming.co.uk
	///////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////
	// UAZ
	//////////////////////////////////////////////////////////////////////////////
	class I_mas_cars_UAZ_Unarmed 						{ quality = 1; price = 13500; };
	class I_mas_cars_UAZ_Med 							{ quality = 1; price = 13700; };
	class O_mas_cars_UAZ_Unarmed 						{ quality = 1; price = 13500; };
	class O_mas_cars_UAZ_Med 							{ quality = 1; price = 13700; };

	///////////////////////////////////////////////////////////////////////////////
	// Hilux
	//////////////////////////////////////////////////////////////////////////////
	class B_mas_cars_Hilux_Unarmed 						{ quality = 1; price = 15000; };
	class B_mas_cars_Hilux_Med 							{ quality = 1; price = 15200; };

	///////////////////////////////////////////////////////////////////////////////
	// LAND ROVERS
	//////////////////////////////////////////////////////////////////////////////
	class B_mas_cars_LR_Unarmed 						{ quality = 1; price = 14500; };
	class B_mas_cars_LR_Med 							{ quality = 1; price = 14700; };
	class I_mas_cars_LR_soft_Unarmed 					{ quality = 1; price = 14500; };
	class I_mas_cars_LR_soft_Med 						{ quality = 1; price = 14500; };

	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class B_mas_HMMWV_UNA 								{ quality = 2; price = 17000; };
	class B_mas_HMMWV_MEV 								{ quality = 2; price = 17200; };
	class B_mas_HMMWV_UNA_des 							{ quality = 2; price = 17100; };
	class B_mas_HMMWV_MEV_des 							{ quality = 2; price = 17300; };

	///////////////////////////////////////////////////////////////////////////////
	// URAL
	//////////////////////////////////////////////////////////////////////////////
	class I_mas_cars_Ural 								{ quality = 1; price = 23000; };
	class I_mas_cars_Ural_open 							{ quality = 2; price = 22800; };
	class I_mas_cars_Ural_repair 						{ quality = 2; price = 25500; };
	class I_mas_cars_Ural_fuel 							{ quality = 2; price = 24800; };
	class O_mas_cars_Ural 								{ quality = 1; price = 23200; };
	class O_mas_cars_Ural_open 							{ quality = 2; price = 23000; };
	class O_mas_cars_Ural_repair 						{ quality = 2; price = 25700; };
	class O_mas_cars_Ural_fuel 							{ quality = 2; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// TRACKED
	//////////////////////////////////////////////////////////////////////////////
	class I_mas_BMP2_Ambul_01	        				{ quality = 1; price = 35000; };
	class O_mas_BMP2_Ambul_01	        				{ quality = 1; price = 35000; };

	///////////////////////////////////////////////////////////////////////////////	
	// Armed
	///////////////////////////////////////////////////////////////////////////////
	class B_mas_cars_LR_M2 								{ quality = 2; price = 16500; };
	class I_mas_cars_LR_soft_M2 						{ quality = 2; price = 16500; };
	class B_mas_HMMWV_M2 								{ quality = 2; price = 25000; };
	class B_mas_HMMWV_M2_des 							{ quality = 2; price = 28100; };	
	class B_mas_cars_Hilux_MG 							{ quality = 3; price = 22000; };
	class B_mas_cars_Hilux_AGS30 						{ quality = 3; price = 22000; };
	class B_mas_cars_Hilux_SPG9 						{ quality = 3; price = 25000; }; 
	//class B_mas_cars_Hilux_RKTS 						{ quality = 3; price = 25000; }; 
	class B_mas_cars_Hilux_M2 							{ quality = 3; price = 28000; };
	class I_mas_BRDM2 									{ quality = 2; price = 150000; };
	class O_mas_BRDM2 									{ quality = 2; price = 150000; };
	class I_mas_BTR60 									{ quality = 1; price = 150000; };
	class O_mas_BTR60 									{ quality = 1; price = 150000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tanks - I dont use them and leave out class in trader
	///////////////////////////////////////////////////////////////////////////////
	class I_mas_T72_AAF_01 								{ quality = 1; price = 1000000; };
	class I_mas_T72B_Early_AAF_01 						{ quality = 1; price = 1000000; }; 
	class I_mas_T72B_AAF_01 							{ quality = 1; price = 1000000; };
	class I_mas_T72BM_AAF_01 							{ quality = 1; price = 1000000; };
	class I_mas_T55_AAF_01 								{ quality = 1; price = 1000000; };
	class I_mas_T34_AAF_01 								{ quality = 1; price = 1000000; };
	class I_mas_ZSU_AAF_01 								{ quality = 1; price = 1500000; };
	class O_mas_T72_OPF_01 								{ quality = 1; price = 1000000; };
	class O_mas_T72B_Early_OPF_01 						{ quality = 1; price = 1000000; };
	class O_mas_T72B_OPF_01 							{ quality = 1; price = 1000000; };
	class O_mas_T72BM_OPF_01 							{ quality = 1; price = 1000000; };
	class O_mas_T55_OPF_01 								{ quality = 1; price = 1000000; };
	class O_mas_ZSU_OPF_01 								{ quality = 1; price = 1500000; };

	///////////////////////////////////////////////////////////////////////////////	
	// Heli's
	///////////////////////////////////////////////////////////////////////////////
	class B_mas_CH_47F	                				{ quality = 1; price = 100000; };
	class B_mas_UH1Y_F 									{ quality = 2; price = 100000; };
	class B_mas_UH1Y_UNA_F 								{ quality = 2; price = 100000; };
	class B_mas_UH1Y_MEV_F 								{ quality = 2; price = 50000; };
	class B_mas_UH60M 									{ quality = 2; price = 100000; };	
	class B_mas_UH60M_SF 								{ quality = 2; price = 100000; };		
	class B_mas_UH60M_MEV 								{ quality = 2; price = 100000; };	
	class I_mas_MI8 									{ quality = 2; price = 55000; };
	class I_mas_MI8MTV 									{ quality = 2; price = 100000; };
	class O_mas_MI8 									{ quality = 2; price = 55000; };
	class O_mas_MI8MTV 									{ quality = 2; price = 100000; };
	class I_mas_MI24V 									{ quality = 2; price = 200000; };
	class O_mas_MI24V 									{ quality = 2; price = 200000; };

	///////////////////////////////////////////////////////////////////////////////	
	// Planes
	///////////////////////////////////////////////////////////////////////////////
	class mas_F_35C	                					{ quality = 1; price = 160000; };
	class mas_F_35C_S	                				{ quality = 1; price = 160000; };
	class mas_F_35C_cas	     				           	{ quality = 1; price = 160000; };
	class MV22                                          { quality = 1; price = 35000; };
    class sab_camel_blu                                 { quality = 1; price = 28000; };
    class sab_camel_red                                 { quality = 1; price = 28000; };
	
    ///////////////////////////////////////////////////////////////////////////////
    // yamaha R6
    ///////////////////////////////////////////////////////////////////////////////
    class Mrshounka_yamaha_p_bf				        { quality = 1; price = 4000; };
    class Mrshounka_yamaha_p_g				        { quality = 1; price = 4000; };
    class Mrshounka_yamaha_p_j				        { quality = 1; price = 4000; };
    class Mrshounka_yamaha_p_noir				    { quality = 1; price = 4000; };
    class Mrshounka_yamaha_p_o				        { quality = 1; price = 4000; };
    class Mrshounka_yamaha_p_rose				    { quality = 1; price = 4000; };
    class Mrshounka_yamaha_p_r				        { quality = 1; price = 4000; };
    class Mrshounka_yamaha_p_v				        { quality = 1; price = 4000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // pugeot
    ///////////////////////////////////////////////////////////////////////////////
    class Mrshounka_a3_308_civ_bleufonce			{ quality = 1; price = 7000; };
    class Mrshounka_a3_308_civ_grise		        { quality = 1; price = 7000; };
    class Mrshounka_a3_308_civ_jaune			    { quality = 1; price = 7000; };
    class Mrshounka_a3_308_civ_noir				    { quality = 1; price = 7000; };
    class Mrshounka_a3_308_civ_orange				{ quality = 1; price = 7000; };
    class Mrshounka_a3_308_civ_rose			        { quality = 1; price = 7000; };
    class Mrshounka_a3_308_civ_rouge			    { quality = 1; price = 7000; };
    class Mrshounka_a3_308_civ_violet			    { quality = 1; price = 7000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // buggy
    ///////////////////////////////////////////////////////////////////////////////
    class shounka_buggy_bleufonce				    { quality = 1; price = 8000; };
    class shounka_buggy_grise				        { quality = 1; price = 8000; };
    class shounka_buggy_jaune				        { quality = 1; price = 8000; };
    class shounka_buggy_noir				        { quality = 1; price = 8000; };
    class shounka_buggy_orange				        { quality = 1; price = 8000; };
    class shounka_buggy_rose				        { quality = 1; price = 8000; };
    class shounka_buggy_rouge				        { quality = 1; price = 8000; };
    class shounka_buggy_violet				        { quality = 1; price = 8000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // GMC van
    ///////////////////////////////////////////////////////////////////////////////
    class Mrshounka_Vandura_civ				        { quality = 1; price = 9000; };
    class Mrshounka_Vandura_civ_bleufonce		    { quality = 1; price = 9000; };
    class Mrshounka_Vandura_civ_grise				{ quality = 1; price = 9000; };
    class Mrshounka_Vandura_civ_jaune				{ quality = 1; price = 9000; };
    class Mrshounka_Vandura_civ_noir				{ quality = 1; price = 9000; };
    class Mrshounka_Vandura_civ_orange				{ quality = 1; price = 9000; };
    class Mrshounka_Vandura_civ_rose			    { quality = 1; price = 9000; };
    class Mrshounka_Vandura_civ_rouge				{ quality = 1; price = 9000; };
    class Mrshounka_Vandura_civ_violet				{ quality = 1; price = 9000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // hummer
    ///////////////////////////////////////////////////////////////////////////////
    class Mr_Own_hummer_civ_noir				    { quality = 1; price = 10000; };
    class Mr_Own_hummer_civ_bleufonce			    { quality = 1; price = 10000; };
    class Mr_Own_hummer_civ_grise				    { quality = 1; price = 10000; };
    class Mr_Own_hummer_civ_jaune				    { quality = 1; price = 10000; };
    class Mr_Own_hummer_civ_orange				    { quality = 1; price = 10000; };
    class Mr_Own_hummer_civ_rose				    { quality = 1; price = 10000; };
    class Mr_Own_hummer_civ_rouge				    { quality = 1; price = 10000; };
    class Mr_Own_hummer_civ_violet				    { quality = 1; price = 10000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // roadrunners
    ///////////////////////////////////////////////////////////////////////////////
    class SIG_Roadrunner				            { quality = 1; price = 12000; };
    class SIG_Hubcaps				                { quality = 1; price = 12000; };
    class SIG_Magnums				                { quality = 1; price = 12000; };
    class SIG_Hcode				                    { quality = 1; price = 12000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // avalanche
    ///////////////////////////////////////////////////////////////////////////////
    class shounka_avalanche_bleufonce			    { quality = 1; price = 15000; };
    class shounka_avalanche_grise				    { quality = 1; price = 15000; };
    class shounka_avalanche_jaune				    { quality = 1; price = 15000; };
    class shounka_avalanche_noir				    { quality = 1; price = 15000; };
    class shounka_avalanche_orange				    { quality = 1; price = 15000; };
    class shounka_avalanche_rose				    { quality = 1; price = 15000; };
    class shounka_avalanche_rouge				    { quality = 1; price = 15000; };
    class shounka_avalanche_violet				    { quality = 1; price = 15000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // zombie car :P
    ///////////////////////////////////////////////////////////////////////////////
    class Mrshounka_corbillard_c_bleufonce		    { quality = 1; price = 16000; };
    class Mrshounka_corbillard_c_grise			    { quality = 1; price = 16000; };
    class Mrshounka_corbillard_c_jaune				{ quality = 1; price = 16000; };
    class Mrshounka_corbillard_c_noir				{ quality = 1; price = 16000; };
    class Mrshounka_corbillard_c_orange			    { quality = 1; price = 16000; };
    class Mrshounka_corbillard_c_rose			    { quality = 1; price = 16000; };
    class Mrshounka_corbillard_c_rouge			    { quality = 1; price = 16000; };
    class Mrshounka_corbillard_c_violet				{ quality = 1; price = 16000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // superbees
    ///////////////////////////////////////////////////////////////////////////////
    class SIG_Superbee				                { quality = 1; price = 18000; };
    class SIG_SuperbeeY				                { quality = 1; price = 18000; };
    class SIG_SuperbeeB				                { quality = 1; price = 18000; };
    class SIG_SuperbeeL				                { quality = 1; price = 18000; };
    class SIG_SuperbeeM				                { quality = 1; price = 18000; };
    class SIG_SuperbeeG				                { quality = 1; price = 18000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // armored buggy
    ///////////////////////////////////////////////////////////////////////////////
    class Mr_Own_buggy_bleufonce			    { quality = 1; price = 19000; };
    class Mr_Own_buggy_grise				    { quality = 1; price = 19000; };
    class Mr_Own_buggy_jaune				    { quality = 1; price = 19000; };
    class Mr_Own_buggy_noir				        { quality = 1; price = 19000; };
    class Mr_Own_buggy_orange				    { quality = 1; price = 19000; };
    class Mr_Own_buggy_rose				        { quality = 1; price = 19000; };
    class Mr_Own_buggy_rouge				    { quality = 1; price = 19000; };
    class Mr_Own_buggy_violet				    { quality = 1; price = 19000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // monster trucks
    ///////////////////////////////////////////////////////////////////////////////
    class shounka_monsteur_bleufonce				{ quality = 1; price = 25000; };
    class shounka_monsteur_grise				    { quality = 1; price = 25000; };
    class shounka_monsteur_jaune				    { quality = 1; price = 25000; };
    class shounka_monsteur_noir				        { quality = 1; price = 25000; };
    class shounka_monsteur_orange				    { quality = 1; price = 25000; };
    class shounka_monsteur_rose				        { quality = 1; price = 25000; };
    class shounka_monsteur_rouge			  	    { quality = 1; price = 25000; };
    class shounka_monsteur_violet				    { quality = 1; price = 25000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // Truck(Trailerless)
    ///////////////////////////////////////////////////////////////////////////////
    class shounka_a3_dafxf_euro6_f				    { quality = 1; price = 28000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // Truck(Trailer)
    ///////////////////////////////////////////////////////////////////////////////
    class shounka_ivceco_bleufonce				{ quality = 1; price = 29000; };
    class shounka_ivceco_grise		            { quality = 1; price = 29000; };
    class shounka_ivceco_jaune			        { quality = 1; price = 29000; };
    class shounka_ivceco_noir				    { quality = 1; price = 29000; };
    class shounka_ivceco_orange				    { quality = 1; price = 29000; };
    class shounka_ivceco_rose			        { quality = 1; price = 29000; };
    class shounka_ivceco_rouge			        { quality = 1; price = 29000; };
    class shounka_ivceco_violet			        { quality = 1; price = 29000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // Limo
    ///////////////////////////////////////////////////////////////////////////////
    class shounka_limo_civ_bleufonce				{ quality = 1; price = 30000; };
    class shounka_limo_civ_grise		            { quality = 1; price = 30000; };
    class shounka_limo_civ_jaune			        { quality = 1; price = 30000; };
    class shounka_limo_civ_noir				        { quality = 1; price = 30000; };
    class shounka_limo_civ_orange				    { quality = 1; price = 30000; };
    class shounka_limo_civ_rose			            { quality = 1; price = 30000; };
    class shounka_limo_civ_violet			        { quality = 1; price = 30000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // dodge charger
    ///////////////////////////////////////////////////////////////////////////////
    class Mr_Own_dodge15_civ				        { quality = 1; price = 32000; };
    class Mr_Own_dodge15_civ_bleufonce				{ quality = 1; price = 32000; };
    class Mr_Own_dodge15_civ_grise				    { quality = 1; price = 32000; };
    class Mr_Own_dodge15_civ_jaune				    { quality = 1; price = 32000; };
    class Mr_Own_dodge15_civ_noir				    { quality = 1; price = 32000; };
    class Mr_Own_dodge15_civ_orange				    { quality = 1; price = 32000; };
    class Mr_Own_dodge15_civ_rose				    { quality = 1; price = 32000; };
    class Mr_Own_dodge15_civ_rouge				    { quality = 1; price = 32000; };
    class Mr_Own_dodge15_civ_violet				    { quality = 1; price = 32000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // Ferrari
    ///////////////////////////////////////////////////////////////////////////////
    class shounka_f430_spider_bleufonce				{ quality = 1; price = 35000; };
    class shounka_f430_spider_grise		            { quality = 1; price = 35000; };
    class shounka_f430_spider_jaune			        { quality = 1; price = 35000; };
    class shounka_f430_spider_noir				    { quality = 1; price = 35000; };
    class shounka_f430_spider_rose				    { quality = 1; price = 35000; };
    class shounka_f430_spider_rouge			        { quality = 1; price = 35000; };
    class shounka_f430_spider_violet			    { quality = 1; price = 35000; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // Lykan
    ///////////////////////////////////////////////////////////////////////////////
    class Mrshounka_lykan_c_bleufonce				{ quality = 1; price = 36000; };
    class Mrshounka_lykan_c_grise		            { quality = 1; price = 36000; };
    class Mrshounka_lykan_c_jaune			        { quality = 1; price = 36000; };
    class Mrshounka_lykan_c_noir				    { quality = 1; price = 36000; };
    class Mrshounka_lykan_c_orange				    { quality = 1; price = 36000; };
    class Mrshounka_lykan_c_rose			        { quality = 1; price = 36000; };
    class Mrshounka_lykan_c_rouge			        { quality = 1; price = 36000; };
    class Mrshounka_lykan_c_violet			        { quality = 1; price = 36000; };
	
    ///////////////////////////////////////////////////////////////////////////////
    // CUP Units Price List 
    ///////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////
    // CUP Headgear 
    ///////////////////////////////////////////////////////////////////////////////	
    class CUP_H_C_Ushanka_01                                         { quality = 1; price = 50; };
    class CUP_H_C_Ushanka_02                                         { quality = 1; price = 50; };
    class CUP_H_C_Ushanka_03                                         { quality = 1; price = 50; };
    class CUP_H_C_Ushanka_04                                         { quality = 1; price = 50; };
    class CUP_H_C_Beanie_01                                             { quality = 1; price = 50; };
    class CUP_H_C_Beanie_02                                             { quality = 1; price = 50; };
    class CUP_H_C_Beanie_03                                             { quality = 1; price = 50; };
    class CUP_H_C_Beanie_04                                             { quality = 1; price = 50; };
    class CUP_H_C_Beret_01                                             { quality = 1; price = 50; };
    class CUP_H_C_Beret_02                                             { quality = 1; price = 50; };
    class CUP_H_C_Beret_03                                             { quality = 1; price = 50; };
    class CUP_H_C_Beret_04                                             { quality = 1; price = 50; };
    class CUP_H_GER_Boonie_desert                                     { quality = 1; price = 50; };
    class CUP_H_GER_Boonie_Flecktarn                                { quality = 1; price = 50; };
    class CUP_H_NAPA_Fedora                                             { quality = 1; price = 50; };
    class CUP_H_PMC_PRR_Headset                                         { quality = 1; price = 50; };
    class CUP_H_PMC_EP_Headset                                         { quality = 1; price = 50; };
    class CUP_H_PMC_Cap_Tan                                             { quality = 1; price = 50; };
    class CUP_H_PMC_Cap_Grey                                         { quality = 1; price = 50; };
    class CUP_H_PMC_Cap_PRR_Tan                                         { quality = 1; price = 50; };
    class CUP_H_PMC_Cap_PRR_Grey                                     { quality = 1; price = 50; };
    class CUP_H_RACS_Beret_Blue                                         { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_Des                                         { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_Goggles_Des                                 { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_Headset_Des                                 { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_DPAT                                     { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_Goggles_DPAT                             { quality = 1; price = 50; };
    class CUP_H_RACS_Helmet_Headset_DPAT                             { quality = 1; price = 50; };
    class CUP_H_SLA_TankerHelmet                                     { quality = 1; price = 50; };
    class CUP_H_SLA_Helmet                                             { quality = 1; price = 50; };
    class CUP_H_SLA_Pilot_Helmet                                    { quality = 1; price = 50; };
    class CUP_H_SLA_OfficerCap                                         { quality = 1; price = 50; };
    class CUP_H_SLA_SLCap                                             { quality = 1; price = 50; };
    class CUP_H_SLA_Boonie                                             { quality = 1; price = 50; };
    class CUP_H_SLA_Beret                                             { quality = 1; price = 50; };
    /* class CUP_H_SLA_BeretRed                                         { quality = 1; price = 50; }; */
    class CUP_H_SLA_BeenieGreen                                         { quality = 1; price = 50; };
    class CUP_H_TK_TankerHelmet                                         { quality = 1; price = 50; };
    class CUP_H_TK_PilotHelmet                                         { quality = 1; price = 50; };
    class CUP_H_TK_Helmet                                             { quality = 1; price = 50; };
    class CUP_H_TK_Lungee                                             { quality = 1; price = 50; };
    class CUP_H_TK_Beret                                             { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_01                                         { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_02                                         { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_03                                         { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_04                                         { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_05                                         { quality = 1; price = 50; };
    class CUP_H_TKI_SkullCap_06                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_01                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_02                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_03                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_04                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_05                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_06                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_01                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_02                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_03                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_04                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_05                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Lungee_Open_06                                     { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_01                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_02                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_03                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_04                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_05                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_1_06                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_01                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_02                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_03                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_04                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_05                                         { quality = 1; price = 50; };
    class CUP_H_TKI_Pakol_2_06                                         { quality = 1; price = 50; };
    class CUP_H_USMC_Officer_Cap                                     { quality = 1; price = 50; };
    class CUP_H_USMC_HelmetWDL                                         { quality = 1; price = 50; };
    class CUP_H_USMC_HeadSet_HelmetWDL                                 { quality = 1; price = 50; };
    class CUP_H_USMC_HeadSet_GoggleW_HelmetWDL                         { quality = 1; price = 50; };
    class CUP_H_USMC_Crew_Helmet                                     { quality = 1; price = 50; };
    class CUP_H_USMC_Goggles_HelmetWDL                                 { quality = 1; price = 50; };
    class CUP_H_USMC_Helmet_Pilot                                     { quality = 1; price = 50; };
    class CUP_H_FR_Headset                                             { quality = 1; price = 50; };
    class CUP_H_FR_Cap_Headset_Green                                 { quality = 1; price = 50; };
    class CUP_H_FR_Cap_Officer_Headset                                 { quality = 1; price = 50; };
    class CUP_H_FR_BandanaGreen                                         { quality = 1; price = 50; };
    class CUP_H_FR_BandanaWdl                                         { quality = 1; price = 50; };
    class CUP_H_FR_Bandana_Headset                                     { quality = 1; price = 50; };
    class CUP_H_FR_Headband_Headset                                     { quality = 1; price = 50; };
    class CUP_H_FR_ECH                                                 { quality = 1; price = 50; };
    class CUP_H_FR_BoonieMARPAT                                         { quality = 1; price = 50; };
    class CUP_H_FR_BoonieWDL                                         { quality = 1; price = 50; };
    class CUP_H_FR_BeanieGreen                                         { quality = 1; price = 50; };
    class CUP_H_FR_PRR_BoonieWDL                                     { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Blue                                 { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Brown                                 { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Green                                 { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Red                                     { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Violet                                 { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_White                                 { quality = 1; price = 50; };
    class CUP_H_Navy_CrewHelmet_Yellow                                 { quality = 1; price = 50; };

    ///////////////////////////////////////////////////////////////////////////////
    // CUP Rigs 
    ///////////////////////////////////////////////////////////////////////////////	
    class CUP_V_B_GER_Carrier_Rig                                     { quality = 1; price = 50; };
    class CUP_V_B_GER_Carrier_Rig_2                                     { quality = 1; price = 50; };
    class CUP_V_B_GER_Carrier_Vest                                     { quality = 1; price = 50; };
    class CUP_V_B_GER_Carrier_Vest_2                                 { quality = 1; price = 50; };
    class CUP_V_B_GER_Carrier_Vest_3                                 { quality = 1; price = 50; };
    class CUP_V_B_GER_Vest_1                                         { quality = 1; price = 50; };
    class CUP_V_B_GER_Vest_2                                         { quality = 1; price = 50; };
    class CUP_V_B_MTV                                                 { quality = 1; price = 50; };
    class CUP_V_B_MTV_Patrol                                         { quality = 1; price = 50; };
    class CUP_V_B_MTV_Pouches                                         { quality = 1; price = 50; };
    class CUP_V_B_MTV_noCB                                             { quality = 1; price = 50; };
    class CUP_V_B_MTV_Marksman                                         { quality = 1; price = 50; };
    class CUP_V_B_MTV_PistolBlack                                     { quality = 1; price = 50; };
    class CUP_V_B_MTV_LegPouch                                         { quality = 1; price = 50; };
    class CUP_V_B_MTV_MG                                             { quality = 1; price = 50; };
    class CUP_V_B_MTV_Mine                                             { quality = 1; price = 50; };
    class CUP_V_B_MTV_TL                                             { quality = 1; price = 50; };
    class CUP_V_B_PilotVest                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_TL                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_Officer                                         { quality = 1; price = 50; };
    class CUP_V_B_RRV_Medic                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_DA1                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_DA2                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_MG                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_Light                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_Scout                                             { quality = 1; price = 50; };
    class CUP_V_B_RRV_Scout2                                         { quality = 1; price = 50; };
    class CUP_V_B_RRV_Scout3                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Blue                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Brown                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Green                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Red                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Violet                                     { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_White                                         { quality = 1; price = 50; };
    class CUP_V_B_LHDVest_Yellow                                     { quality = 1; price = 50; };
    class CUP_V_I_Carrier_Belt                                         { quality = 1; price = 50; };
    class CUP_V_I_Guerilla_Jacket                                     { quality = 1; price = 50; };
    class CUP_V_I_RACS_Carrier_Vest                                     { quality = 1; price = 50; };
    class CUP_V_I_RACS_Carrier_Vest_2                                 { quality = 1; price = 50; };
    class CUP_V_I_RACS_Carrier_Vest_3                                 { quality = 1; price = 50; };
    class CUP_V_O_SLA_Carrier_Belt                                     { quality = 1; price = 50; };
    class CUP_V_O_SLA_Carrier_Belt02                                 { quality = 1; price = 50; };
    class CUP_V_O_SLA_Carrier_Belt03                                 { quality = 1; price = 50; };
    class CUP_V_O_SLA_Flak_Vest01                                     { quality = 1; price = 50; };
    class CUP_V_O_SLA_Flak_Vest02                                     { quality = 1; price = 50; };
    class CUP_V_O_SLA_Flak_Vest03                                     { quality = 1; price = 50; };
    class CUP_V_O_TK_CrewBelt                                         { quality = 1; price = 50; };
    class CUP_V_O_TK_OfficerBelt                                     { quality = 1; price = 50; };
    class CUP_V_O_TK_OfficerBelt2                                     { quality = 1; price = 50; };
    class CUP_V_O_TK_Vest_1                                             { quality = 1; price = 50; };
    class CUP_V_O_TK_Vest_2                                             { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_01                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_02                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_03                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_04                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_05                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket1_06                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_01                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_02                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_03                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_04                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_05                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket2_06                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_01                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_02                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_03                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_04                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_05                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket3_06                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_01                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_02                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_03                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_04                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_05                                     { quality = 1; price = 50; };
    class CUP_V_OI_TKI_Jacket4_06                                     { quality = 1; price = 50; };	
	
    ///////////////////////////////////////////////////////////////////////////////
    // CUP Umiforms 
    ///////////////////////////////////////////////////////////////////////////////	
    class CUP_O_TKI_Khet_Partug_01                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_02                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_03                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_04                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_05                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_06                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_07                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Partug_08                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Jeans_01                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Jeans_02                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Jeans_03                                     { quality = 1; price = 50; };
    class CUP_O_TKI_Khet_Jeans_04                                     { quality = 1; price = 50; };
    class CUP_U_C_Pilot_01                                             { quality = 1; price = 50; };
    class CUP_U_C_Citizen_01                                         { quality = 1; price = 50; };
    class CUP_U_C_Citizen_02                                         { quality = 1; price = 50; };
    class CUP_U_C_Citizen_03                                         { quality = 1; price = 50; };
    class CUP_U_C_Citizen_04                                         { quality = 1; price = 50; };
    class CUP_U_C_Worker_01                                             { quality = 1; price = 50; };
    class CUP_U_C_Worker_02                                             { quality = 1; price = 50; };
    class CUP_U_C_Worker_03                                             { quality = 1; price = 50; };
    class CUP_U_C_Worker_04                                             { quality = 1; price = 50; };
    class CUP_U_C_Profiteer_01                                         { quality = 1; price = 50; };
    class CUP_U_C_Profiteer_02                                         { quality = 1; price = 50; };
    class CUP_U_C_Profiteer_03                                         { quality = 1; price = 50; };
    class CUP_U_C_Profiteer_04                                         { quality = 1; price = 50; };
    class CUP_U_C_Woodlander_01                                         { quality = 1; price = 50; };
    class CUP_U_C_Woodlander_02                                         { quality = 1; price = 50; };
    class CUP_U_C_Woodlander_03                                         { quality = 1; price = 50; };
    class CUP_U_C_Woodlander_04                                         { quality = 1; price = 50; };
    class CUP_U_C_Villager_01                                         { quality = 1; price = 50; };
    class CUP_U_C_Villager_02                                         { quality = 1; price = 50; };
    class CUP_U_C_Villager_03                                         { quality = 1; price = 50; };
    class CUP_U_C_Villager_04                                         { quality = 1; price = 50; };
    class CUP_U_B_CZ_WDL_TShirt                                         { quality = 1; price = 50; };
    class CUP_U_B_GER_Tropentarn_1                                     { quality = 1; price = 50; };
    class CUP_U_B_GER_Tropentarn_2                                     { quality = 1; price = 50; };
    class CUP_U_B_GER_Ghillie                                         { quality = 1; price = 50; };
    class CUP_U_B_GER_Flecktarn_1                                     { quality = 1; price = 50; };
    class CUP_U_B_GER_Flecktarn_2                                     { quality = 1; price = 50; };
    class CUP_U_B_GER_Fleck_Ghillie                                     { quality = 1; price = 50; };
    class CUP_U_B_USMC_Officer                                         { quality = 1; price = 50; };
    class CUP_U_B_USMC_PilotOverall                                     { quality = 1; price = 50; };
    class CUP_U_B_USMC_Ghillie_WDL                                     { quality = 1; price = 50; };
    class CUP_U_B_USMC_MARPAT_WDL_Sleeves                            { quality = 1; price = 50; };
    class CUP_U_B_USMC_MARPAT_WDL_RolledUp                             { quality = 1; price = 50; };
    class CUP_U_B_USMC_MARPAT_WDL_Kneepad                             { quality = 1; price = 50; };
    class CUP_U_B_USMC_MARPAT_WDL_TwoKneepads                         { quality = 1; price = 50; };
    class CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad                        { quality = 1; price = 50; };
    class CUP_U_B_FR_SpecOps                                         { quality = 1; price = 50; };
    class CUP_U_B_FR_Scout                                             { quality = 1; price = 50; };
    class CUP_U_B_FR_Scout1                                             { quality = 1; price = 50; };
    class CUP_U_B_FR_Scout2                                             { quality = 1; price = 50; };
    class CUP_U_B_FR_Scout3                                             { quality = 1; price = 50; };
    class CUP_U_B_FR_Officer                                         { quality = 1; price = 50; };
    class CUP_U_B_FR_Corpsman                                         { quality = 1; price = 50; };
    class CUP_U_B_FR_DirAction                                         { quality = 1; price = 50; };
    class CUP_U_B_FR_DirAction2                                         { quality = 1; price = 50; };
    class CUP_U_B_FR_Light                                             { quality = 1; price = 50; };
    class CUP_U_I_GUE_Flecktarn                                         { quality = 1; price = 50; };
    class CUP_U_I_GUE_Flecktarn2                                     { quality = 1; price = 50; };
    class CUP_U_I_GUE_Flecktarn3                                     { quality = 1; price = 50; };
    class CUP_U_I_GUE_Woodland1                                         { quality = 1; price = 50; };
    class CUP_U_I_Ghillie_Top                                         { quality = 1; price = 50; };
    class CUP_U_I_RACS_PilotOverall                                     { quality = 1; price = 50; };
    class CUP_U_I_RACS_Desert_1                                         { quality = 1; price = 50; };
    class CUP_U_I_RACS_Desert_2                                         { quality = 1; price = 50; };
    class CUP_U_I_RACS_Urban_1                                         { quality = 1; price = 50; };
    class CUP_U_I_RACS_Urban_2                                         { quality = 1; price = 50; };
    class CUP_U_O_SLA_Officer                                         { quality = 1; price = 50; };
    class CUP_U_O_SLA_Officer_Suit                                     { quality = 1; price = 50; };
    class CUP_U_O_SLA_MixedCamo                                         { quality = 1; price = 50; };
    class CUP_U_O_SLA_Green                                             { quality = 1; price = 50; };
    class CUP_U_O_SLA_Urban                                             { quality = 1; price = 50; };
    class CUP_U_O_SLA_Desert                                         { quality = 1; price = 50; };
    class CUP_U_O_SLA_Overalls_Pilot                                 { quality = 1; price = 50; };
    class CUP_U_O_SLA_Overalls_Tank                                     { quality = 1; price = 50; };
    class CUP_U_O_Partisan_TTsKO                                     { quality = 1; price = 50; };
    class CUP_U_O_Partisan_TTsKO_Mixed                                { quality = 1; price = 50; };
    class CUP_U_O_Partisan_VSR_Mixed1                                { quality = 1; price = 50; };
    class CUP_U_O_Partisan_VSR_Mixed2                                { quality = 1; price = 50; };
    class CUP_U_O_TK_Officer                                         { quality = 1; price = 50; };
    class CUP_U_O_TK_MixedCamo                                         { quality = 1; price = 50; };
    class CUP_U_O_TK_Green                                             { quality = 1; price = 50; };
    class CUP_U_O_TK_Ghillie                                         { quality = 1; price = 50; };
    class CUP_U_O_TK_Ghillie_Top                                     { quality = 1; price = 50; };	
	
    ///////////////////////////////////////////////////////////////////////////////
    // CUP Weapons 
    ///////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////
    // CUP Assault Rifles 
    ///////////////////////////////////////////////////////////////////////////////
    class CUP_arifle_AK74                                     { quality = 1; price = 200; };
    class CUP_arifle_AK107                                     { quality = 1; price = 200; };
    class CUP_arifle_AK107_GL                                { quality = 1; price = 200; };
    class CUP_arifle_AKS74                                    { quality = 1; price = 200; };
    class CUP_arifle_AKS74U                                     { quality = 1; price = 200; };
    class CUP_arifle_AK74_GL                                 { quality = 1; price = 200; };
    class CUP_arifle_AKM                                     { quality = 1; price = 200; };
    class CUP_arifle_AKS                                    { quality = 1; price = 200; };
    class CUP_arifle_AKS_Gold                                 { quality = 1; price = 200; };
    class CUP_arifle_RPK74                                    { quality = 1; price = 200; };
    class CUP_arifle_AK107_GL_kobra                         { quality = 1; price = 200; };
    class CUP_arifle_AK107_kobra                             { quality = 1; price = 200; };
    class CUP_arifle_AK107_GL_pso                             { quality = 1; price = 200; };
    class CUP_arifle_AK107_pso                                 { quality = 1; price = 200; };
    class CUP_arifle_AKS74UN_kobra_snds                        { quality = 1; price = 200; };
    class CUP_arifle_AKS74_Goshawk                             { quality = 1; price = 200; };
    class CUP_arifle_AKS74_NSPU                                 { quality = 1; price = 200; };
    class CUP_arifle_AK74_GL_kobra                             { quality = 1; price = 200; };
    class CUP_arifle_CZ805_A1_ZDDot_Laser                    { quality = 1; price = 200; };
    class CUP_arifle_CZ805_GL_ZDDot_Laser                     { quality = 1; price = 200; };
    class CUP_arifle_CZ805_A2                                { quality = 1; price = 200; };
    class CUP_arifle_CZ805_A2_ZDDot_Flashlight_Snds            { quality = 1; price = 200; };
    class CUP_arifle_CZ805B_GL_ACOG_Laser                     { quality = 1; price = 200; };
    class CUP_arifle_FNFAL                                     { quality = 1; price = 200; };
    class CUP_arifle_FNFAL_ANPVS4                             { quality = 1; price = 200; };
    class CUP_arifle_FNFAL_railed                             { quality = 1; price = 200; };
    class CUP_arifle_G36A                                    { quality = 1; price = 200; };
    class CUP_arifle_G36A_camo                                 { quality = 1; price = 200; };
    class CUP_arifle_G36K                                     { quality = 1; price = 200; };
    class CUP_arifle_G36K_camo                                 { quality = 1; price = 200; };
    class CUP_arifle_G36C                                    { quality = 1; price = 200; };
    class CUP_arifle_G36C_camo                                 { quality = 1; price = 200; };
    class CUP_arifle_MG36                                    { quality = 1; price = 200; };
    class CUP_arifle_MG36_camo                                 { quality = 1; price = 200; };
    class CUP_arifle_G36C_holo_snds                             { quality = 1; price = 200; };
    class CUP_arifle_G36C_camo_holo_snds                     { quality = 1; price = 200; };
    /* class CUP_arifle_ksvk_PSO3                                 { quality = 1; price = 200; }; */
    class CUP_arifle_L85A2_Holo_laser                        { quality = 1; price = 200; };
    class CUP_arifle_L85A2_GL_Holo_laser                    { quality = 1; price = 200; };
    class CUP_arifle_L85A2_SUSAT_Laser                         { quality = 1; price = 200; };
    class CUP_arifle_L85A2_GL_SUSAT_Laser                    { quality = 1; price = 200; };
    class CUP_arifle_L85A2_CWS_Laser                        { quality = 1; price = 200; };
    class CUP_arifle_L85A2_ACOG_Laser                         { quality = 1; price = 200; };
    class CUP_arifle_L85A2                                     { quality = 1; price = 200; };
    class CUP_arifle_L85A2_GL                                { quality = 1; price = 200; };
    class CUP_arifle_L85A2_GL_ACOG_Laser                    { quality = 1; price = 200; };
    class CUP_arifle_L86A2_ACOG                             { quality = 1; price = 200; };
    class CUP_arifle_L86A2                                     { quality = 1; price = 200; };
    class CUP_arifle_M16A2                                     { quality = 1; price = 200; };
    class CUP_arifle_M16A2_GL                                 { quality = 1; price = 200; }; 
    class CUP_arifle_M16A4_Aim_Laser                         { quality = 1; price = 200; };
    class CUP_arifle_M16A4_ACOG_Laser                        { quality = 1; price = 200; };
    class CUP_arifle_M16A4_GL                                 { quality = 1; price = 200; };
    class CUP_arifle_M16A4_GL_ACOG_Laser                     { quality = 1; price = 200; };
    class CUP_arifle_M4A1                                    { quality = 1; price = 200; };
    class CUP_arifle_M4A1_camo                                { quality = 1; price = 200; };
    class CUP_arifle_M4A1_camo_Aim                             { quality = 1; price = 200; };
    class CUP_arifle_M4A3_desert_Aim_Flashlight                { quality = 1; price = 200; };
    class CUP_arifle_M4A3_desert_GL_ACOG_Laser                 { quality = 1; price = 200; };
    class CUP_arifle_M4A1_Aim                                 { quality = 1; price = 200; };
    class CUP_arifle_M4A1_camo_AIM_snds                        { quality = 1; price = 200; };
    class CUP_arifle_M4A1_GL_Holo_Flashlight                 { quality = 1; price = 200; };
    class CUP_arifle_M4A1_GL_ACOG_Flashlight                { quality = 1; price = 200; };
    class CUP_arifle_M4A1_camo_GL_Holo_Flashlight            { quality = 1; price = 200; };
    class CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds        { quality = 1; price = 200; };
    class CUP_arifle_M16A4_Base                                { quality = 1; price = 200; };
    /* class CUP_arifle_M16A4GL                                { quality = 1; price = 200; }; */ 
    class CUP_arifle_M4A1_BUIS_GL                            { quality = 1; price = 200; };
    class CUP_arifle_M4A1_BUIS_camo_GL                        { quality = 1; price = 200; };
    class CUP_arifle_M4A1_BUIS_desert_GL                    { quality = 1; price = 200; };
    class CUP_arifle_M4A1_black                                 { quality = 1; price = 200; };
    class CUP_arifle_M4A1_desert                            { quality = 1; price = 200; };
    class CUP_arifle_Sa58P                                    { quality = 1; price = 200; };
    class CUP_arifle_Sa58V                                    { quality = 1; price = 200; };
    class CUP_arifle_Sa58V_ACOG_Laser                         { quality = 1; price = 200; };
    class CUP_arifle_Sa58V_Aim_Laser                        { quality = 1; price = 200; };
    class CUP_arifle_Mk16_CQC                                 { quality = 1; price = 200; };
    class CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds             { quality = 1; price = 200; };
    class CUP_arifle_Mk16_CQC_SFG_Holo                        { quality = 1; price = 200; };
    class CUP_arifle_Mk16_STD_EGLM_ACOG_Laser                 { quality = 1; price = 200; };
    class CUP_arifle_Mk16_STD_EGLM_ANPAS13c1_Laser_mfsup    { quality = 1; price = 200; };
    class CUP_arifle_Mk16_STD_FG_Holo_Laser                    { quality = 1; price = 200; };
    class CUP_arifle_Mk16_STD_FG_LeupoldMk4CQT_Laser        { quality = 1; price = 200; };
    class CUP_arifle_Mk17_CQC_SFG_Aim_mfsup                    { quality = 1; price = 200; };
    class CUP_arifle_Mk17_STD_FG_Aim_Laser_snds                { quality = 1; price = 200; };
    class CUP_arifle_Mk20_SB11420_snds                         { quality = 1; price = 200; };
    class CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser        { quality = 1; price = 200; };
    class CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds        { quality = 1; price = 200; };
    class CUP_arifle_XM8_Compact_Rail                         { quality = 1; price = 200; };
    class CUP_arifle_XM8_Railed                                { quality = 1; price = 200; };
    class CUP_arifle_XM8_Carbine                             { quality = 1; price = 200; };
    class CUP_arifle_XM8_Carbine_FG                            { quality = 1; price = 200; };
    class CUP_arifle_XM8_Carbine_GL                             { quality = 1; price = 200; };
    class CUP_arifle_XM8_Compact                            { quality = 1; price = 200; };
    class CUP_arifle_XM8_Compact_Holo_Flashlight            { quality = 1; price = 200; };
    class CUP_arifle_XM8_Railed_Holo_Laser_snds                { quality = 1; price = 200; };
    class CUP_arifle_xm8_SAW                                { quality = 1; price = 200; };
    class CUP_arifle_xm8_sharpshooter                        { quality = 1; price = 200; };
    class CUP_arifle_XM8_Railed_ANPAS13c1_Laser                { quality = 1; price = 200; };
    class CUP_arifle_XM8_Railed_ANPAS13c1_Laser_snds        { quality = 1; price = 200; };
    class CUP_arifle_CZ805_A1                                { quality = 1; price = 200; };
    class CUP_arifle_CZ805_GL                                 { quality = 1; price = 200; };
    class CUP_arifle_CZ805_A2_Holo_Laser                    { quality = 1; price = 200; };
    class CUP_arifle_CZ805_A1_Holo_Laser                    { quality = 1; price = 200; };
    class CUP_arifle_CZ805_A2_Aco_Laser                        { quality = 1; price = 200; };
    class CUP_arifle_CZ805_A1_Aco_Laser                        { quality = 1; price = 200; };
    class CUP_arifle_CZ805_A1_MRCO_Laser                    { quality = 1; price = 200; };
    class CUP_arifle_CZ805_A2_MRCO_Laser                    { quality = 1; price = 200; };
    class CUP_arifle_CZ805_GL_Hamr_Laser                    { quality = 1; price = 200; };
    class CUP_arifle_CZ805_B_GL                                 { quality = 1; price = 200; };
    class CUP_arifle_CZ805_B                                { quality = 1; price = 200; };
    class CUP_arifle_Sa58P_des                                 { quality = 1; price = 200; };
    class CUP_arifle_Sa58V_camo                                 { quality = 1; price = 200; };
    class CUP_arifle_Sa58RIS1                                { quality = 1; price = 200; };
    class CUP_arifle_Sa58RIS1_des                             { quality = 1; price = 200; };
    class CUP_arifle_Sa58RIS2                                { quality = 1; price = 200; };
    class CUP_arifle_Sa58RIS2_camo                            { quality = 1; price = 200; };
    class CUP_arifle_Sa58RIS1_Aco_Laser                        { quality = 1; price = 200; };
    class CUP_arifle_Sa58RIS2_Arco_Laser                    { quality = 1; price = 200; };
    class CUP_arifle_Sa58RIS1_camo_Aco_Laser                { quality = 1; price = 200; };
    class CUP_arifle_Sa58RIS2_camo_Arco_Lase                { quality = 1; price = 200; };
    class CUP_arifle_Mk16_CQC_FG                            { quality = 1; price = 200; };
    class CUP_arifle_Mk16_CQC_SFG                             { quality = 1; price = 200; };
    class CUP_arifle_Mk16_CQC_EGLM                            { quality = 1; price = 200; };
    class CUP_arifle_Mk16_STD                                { quality = 1; price = 200; };
    class CUP_arifle_Mk16_STD_FG                            { quality = 1; price = 200; };
    class CUP_arifle_Mk16_STD_SFG                             { quality = 1; price = 200; };
    class CUP_arifle_Mk16_STD_EGLM                            { quality = 1; price = 200; };
    class CUP_arifle_Mk16_SV                                 { quality = 1; price = 200; };
    class CUP_arifle_Mk16_CQC_EGLM_Holo_Laser_mfsup            { quality = 1; price = 200; };
    class CUP_arifle_Mk17_CQC                                { quality = 1; price = 200; };
    class CUP_arifle_Mk17_CQC_FG                            { quality = 1; price = 200; };
    class CUP_arifle_Mk17_CQC_SFG                             { quality = 1; price = 200; };
    class CUP_arifle_Mk17_CQC_EGLM                            { quality = 1; price = 200; };
    class CUP_arifle_Mk17_STD                                 { quality = 1; price = 200; };
    class CUP_arifle_Mk17_STD_FG                            { quality = 1; price = 200; };
    class CUP_arifle_Mk17_STD_SFG                            { quality = 1; price = 200; };
    class CUP_arifle_Mk17_STD_EGLM                            { quality = 1; price = 200; };
    class CUP_arifle_Mk20                                    { quality = 1; price = 200; };
    class CUP_arifle_Mk20_LeupoldMk4MRT                        { quality = 1; price = 200; };
	
	///////////////////////////////////////////////////////////////////////////////
    // CUP Shot Guns
    ///////////////////////////////////////////////////////////////////////////////	
    class CUP_sgun_AA12                                        { quality = 1; price = 200; };
    class CUP_sgun_M1014                                    { quality = 1; price = 200; };
    class CUP_sgun_Saiga12K                                    { quality = 1; price = 200; };
    
	///////////////////////////////////////////////////////////////////////////////
    // CUP Hand Guns
    ///////////////////////////////////////////////////////////////////////////////
    class CUP_hgun_Colt1911                                     { quality = 1; price = 200; };
    class CUP_hgun_Colt1911_snds                            { quality = 1; price = 200; };
    class CUP_hgun_Compact                                     { quality = 1; price = 200; };
    class CUP_hgun_Duty_M3X                                    { quality = 1; price = 200; };
    class CUP_hgun_Glock17                                    { quality = 1; price = 200; };
    class CUP_hgun_glock17_flashlight_snds                    { quality = 1; price = 200; };
    class CUP_hgun_glock17_snds                                { quality = 1; price = 200; };
    class CUP_hgun_glock17_flashlight                         { quality = 1; price = 200; };
    class CUP_hgun_M9                                        { quality = 1; price = 200; };
    class CUP_hgun_M9_snds                                    { quality = 1; price = 200; };
    class CUP_hgun_Makarov                                    { quality = 1; price = 200; };
    class CUP_hgun_PB6P9                                     { quality = 1; price = 200; };
    class CUP_hgun_PB6P9_snds                                { quality = 1; price = 200; };
    class CUP_hgun_MicroUzi                                    { quality = 1; price = 200; };
    class CUP_hgun_MicroUzi_snds                            { quality = 1; price = 200; };
    class CUP_hgun_Phantom_Flashlight                        { quality = 1; price = 200; };
    class CUP_hgun_Phantom_Flashlight_snds                     { quality = 1; price = 200; };
    class CUP_hgun_TaurusTracker455                            { quality = 1; price = 200; };
    class CUP_hgun_TaurusTracker455_gold                    { quality = 1; price = 200; };
    class CUP_hgun_SA61                                         { quality = 1; price = 200; };
    class CUP_hgun_Duty                                        { quality = 1; price = 200; };
    class CUP_hgun_Phantom                                    { quality = 1; price = 200; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // CUP Light Machine Guns
    ///////////////////////////////////////////////////////////////////////////////
    class CUP_lmg_L7A2                                         { quality = 1; price = 300; };
    class CUP_lmg_L110A1                                    { quality = 1; price = 300; };
    class CUP_lmg_L110A1_Aim_Laser                            { quality = 1; price = 300; };
    /* class CUP_lmg_M60A4                                         { quality = 1; price = 300; }; */
    class CUP_lmg_M240                                        { quality = 1; price = 300; };
    class CUP_lmg_M240_ElcanM143                            { quality = 1; price = 300; };
    class CUP_lmg_M249                                        { quality = 1; price = 300; };
    class CUP_lmg_M249_para                                     { quality = 1; price = 300; };
    class CUP_lmg_M249_ElcanM145_Laser                        { quality = 1; price = 300; };
    class CUP_lmg_M249_Laser                                { quality = 1; price = 300; };
    class CUP_lmg_M249_ANPAS13c2_Laser                         { quality = 1; price = 300; };
    class CUP_lmg_Mk48_des_Aim_Laser                        { quality = 1; price = 300; };
    class CUP_lmg_Mk48_wdl_Aim_Laser                        { quality = 1; price = 300; };
    class CUP_lmg_Mk48_des                                    { quality = 1; price = 300; };
    class CUP_lmg_Mk48_wdl                                    { quality = 1; price = 300; };
    class CUP_lmg_PKM                                         { quality = 1; price = 300; };
    class CUP_lmg_Pecheneg_PScope                            { quality = 1; price = 300; };
    class CUP_lmg_UK59                                        { quality = 1; price = 300; };
    class CUP_lmg_Pecheneg                                    { quality = 1; price = 300; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // CUP Sub Machine Guns
    ///////////////////////////////////////////////////////////////////////////////
    class CUP_smg_bizon                                         { quality = 1; price = 200; };
    class CUP_smg_bizon_snds                                { quality = 1; price = 200; };
    class CUP_smg_EVO                                        { quality = 1; price = 250; };
    class CUP_smg_EVO_MRad_Flashlight                        { quality = 1; price = 250; };
    class CUP_smg_EVO_MRad_Flashlight_Snds                    { quality = 1; price = 250; };
    class CUP_smg_MP5SD6                                    { quality = 1; price = 250; };
    class CUP_smg_MP5A5                                        { quality = 1; price = 200; };
    
    ///////////////////////////////////////////////////////////////////////////////
    // CUP Sniper Rifles
    ///////////////////////////////////////////////////////////////////////////////
    class CUP_srifle_AS50_SBPMII                             { quality = 1; price = 1500; };
    class CUP_srifle_AS50_AMPAS13c2                            { quality = 1; price = 1500; };
    class CUP_srifle_AWM_des                                { quality = 1; price = 1500; };
    class CUP_srifle_AWM_wdl                                 { quality = 1; price = 1500; };
    class CUP_srifle_AWM_des_SBPMII                            { quality = 1; price = 1500; };
    class CUP_srifle_AWM_wdl_SBPMII                            { quality = 1; price = 1500; };
    class CUP_srifle_CZ750                                    { quality = 1; price = 1500; };
    class CUP_srifle_CZ750_SOS_bipod                        { quality = 1; price = 1500; };
    class CUP_srifle_DMR                                    { quality = 1; price = 1500; };
    class CUP_srifle_DMR_LeupoldMk4                            { quality = 1; price = 1500; };
    class CUP_srifle_CZ550                                    { quality = 1; price = 1500; };
    class CUP_srifle_LeeEnfield                                { quality = 1; price = 1500; };
    class CUP_srifle_M14                                    { quality = 1; price = 1500; };
    /* class CUP_srifle_M15_Aim                                { quality = 1; price = 1500; }; */
    class CUP_srifle_Mk12SPR                                { quality = 1; price = 1500; };
    class CUP_srifle_Mk12SPR_LeupoldM3LR                    { quality = 1; price = 1500; };
    class CUP_srifle_M24_des                                { quality = 1; price = 1500; };
    class CUP_srifle_M24_wdl                                { quality = 1; price = 1500; };
    class CUP_srifle_M24_ghillie                            { quality = 1; price = 1500; };
    class CUP_srifle_M24_wdl_LeupoldMk4LRT                    { quality = 1; price = 1500; };
    class CUP_srifle_M24_des_LeupoldMk4LRT                    { quality = 1; price = 1500; };
    class CUP_srifle_M40A3                                    { quality = 1; price = 1500; };
    class CUP_srifle_M107_Base                                { quality = 1; price = 1500; };
    class CUP_srifle_M107_LeupoldVX3                        { quality = 1; price = 1500; };
    class CUP_srifle_M107_ANPAS13c2                            { quality = 1; price = 1500; };
    class CUP_srifle_M110                                    { quality = 1; price = 1500; };
    class CUP_srifle_M110_ANPAS13c2                            { quality = 1; price = 1500; };
    class CUP_srifle_M110_ANPVS10                            { quality = 1; price = 1500; };
    class CUP_srifle_SVD                                    { quality = 1; price = 1500; };
    class CUP_srifle_SVD_des                                { quality = 1; price = 1500; };
    class CUP_srifle_SVD_Des_pso                             { quality = 1; price = 1500; };
    class CUP_srifle_SVD_pso                                 { quality = 1; price = 1500; };
    class CUP_srifle_SVD_wdl_ghillie                        { quality = 1; price = 1500; };
    class CUP_srifle_SVD_des_ghillie_pso                    { quality = 1; price = 1500; };
    class CUP_srifle_SVD_NSPU                                { quality = 1; price = 1500; };
    class CUP_srifle_ksvk                                     { quality = 1; price = 1500; };
    class CUP_srifle_VSSVintorez                            { quality = 1; price = 1500; };
    class CUP_srifle_VSSVintorez_pso                        { quality = 1; price = 1500; };
    class CUP_srifle_AS50                                    { quality = 1; price = 1500; };

    ///////////////////////////////////////////////////////////////////////////////
    // CUP Grenade Launchers
    ///////////////////////////////////////////////////////////////////////////////
    class CUP_glaunch_M32                                    { quality = 1; price = 1000; };
    class CUP_glaunch_M79                                    { quality = 1; price = 1000; };
    class CUP_glaunch_Mk13                                    { quality = 1; price = 1000; };
    class CUP_glaunch_6G30                                    { quality = 1; price = 1000; };
        
    ///////////////////////////////////////////////////////////////////////////////
    // CUP Launchers
    ///////////////////////////////////////////////////////////////////////////////
    class CUP_launch_Igla                                    { quality = 1; price = 2000; };
    class CUP_launch_Javelin                                { quality = 1; price = 2000; };
    class CUP_launch_M47                                    { quality = 1; price = 2000; };
    class CUP_launch_M136                                    { quality = 1; price = 2000; };
    class CUP_launch_MAAWS_Scope                             { quality = 1; price = 2000; };
    class CUP_launch_Metis                                    { quality = 1; price = 2000; };
    class CUP_launch_NLAW                                    { quality = 1; price = 2000; };
    class CUP_launch_RPG7V                                    { quality = 1; price = 2000; };
    class CUP_launch_RPG18                                    { quality = 1; price = 2000; };
    class CUP_launch_Mk153Mod0_SMAWOptics                    { quality = 1; price = 2000; };
    class CUP_launch_FIM92Stinger                             { quality = 1; price = 2000; };
    class CUP_launch_MAAWS                                    { quality = 1; price = 2000; };
    class CUP_launch_Mk153Mod0                                { quality = 1; price = 2000; };
    class CUP_launch_9K32Strela                                { quality = 1; price = 2000; };

    ///////////////////////////////////////////////////////////////////////////////
    // CUP Optic Attachments
    ///////////////////////////////////////////////////////////////////////////////
    class CUP_optic_PSO_1                                    { quality = 1; price = 50; };
    class CUP_optic_PSO_3                                    { quality = 1; price = 50; };
    class CUP_optic_Kobra                                    { quality = 1; price = 50; };
    class CUP_optic_GOSHAWK                                    { quality = 1; price = 50; };
    class CUP_optic_NSPU                                    { quality = 1; price = 50; };
    class CUP_optic_PechenegScope                            { quality = 1; price = 50; };
    class CUP_optic_MAAWS_Scope                                { quality = 1; price = 50; };
    class CUP_optic_SMAW_Scope                                { quality = 1; price = 50; };
    class CUP_optic_AN_PAS_13c2                                { quality = 1; price = 50; };
    class CUP_optic_LeupoldMk4                                { quality = 1; price = 50; };
    class CUP_optic_HoloBlack                                { quality = 1; price = 50; };
    class CUP_optic_HoloWdl                                    { quality = 1; price = 50; };
    class CUP_optic_HoloDesert                                { quality = 1; price = 50; };
    class CUP_optic_Eotech533                                { quality = 1; price = 50; };
    class CUP_optic_CompM4                                    { quality = 1; price = 50; };
    class CUP_optic_SUSAT                                    { quality = 1; price = 50; };
    class CUP_optic_ACOG                                    { quality = 1; price = 50; };
    class CUP_optic_CWS                                        { quality = 1; price = 50; };
    class CUP_optic_Leupold_VX3                                { quality = 1; price = 50; };
    class CUP_optic_AN_PVS_10                                { quality = 1; price = 50; };
    class CUP_optic_CompM2_Black                            { quality = 1; price = 50; };
    class CUP_optic_CompM2_Woodland                            { quality = 1; price = 50; };
    class CUP_optic_CompM2_Woodland2                        { quality = 1; price = 50; };
    class CUP_optic_CompM2_Desert                            { quality = 1; price = 50; };
    class CUP_optic_RCO                                        { quality = 1; price = 50; };
    class CUP_optic_RCO_desert                                { quality = 1; price = 50; };
    class CUP_optic_LeupoldM3LR                                { quality = 1; price = 50; };
    class CUP_optic_LeupoldMk4_10x40_LRT_Desert                { quality = 1; price = 50; };
    class CUP_optic_LeupoldMk4_10x40_LRT_Woodland            { quality = 1; price = 50; };
    class CUP_optic_ElcanM145                                { quality = 1; price = 50; };
    class CUP_optic_AN_PAS_13c1                                { quality = 1; price = 50; };
    class CUP_optic_LeupoldMk4_CQ_T                            { quality = 1; price = 50; };
    class CUP_optic_ELCAN_SpecterDR                            { quality = 1; price = 50; };
    class CUP_optic_LeupoldMk4_MRT_tan                        { quality = 1; price = 50; };
    class CUP_optic_SB_11_4x20_PM                            { quality = 1; price = 50; };
    class CUP_optic_ZDDot                                    { quality = 1; price = 50; };
    class CUP_optic_MRad                                    { quality = 1; price = 50; };
    class CUP_optic_TrijiconRx01_desert                        { quality = 1; price = 50; };
    class CUP_optic_TrijiconRx01_black                        { quality = 1; price = 50; };
    class CUP_optic_AN_PVS_4                                { quality = 1; price = 50; };

    ///////////////////////////////////////////////////////////////////////////////
    // CUP Muzzle Attachments
    ///////////////////////////////////////////////////////////////////////////////
    class CUP_muzzle_PBS4                                    { quality = 1; price = 20; };
    class CUP_muzzle_PB6P9                                    { quality = 1; price = 20; };
    class CUP_muzzle_Bizon                                    { quality = 1; price = 20; };
    class CUP_muzzle_snds_M110                                { quality = 1; price = 20; };
    class CUP_muzzle_snds_M14                                { quality = 1; price = 20; };
    class CUP_muzzle_snds_M9                                { quality = 1; price = 20; };
    class CUP_muzzle_snds_MicroUzi                            { quality = 1; price = 20; };
    class CUP_muzzle_snds_AWM                                { quality = 1; price = 20; };
    class CUP_muzzle_snds_G36_black                            { quality = 1; price = 20; };
    class CUP_muzzle_snds_G36_desert                        { quality = 1; price = 20; };
    class CUP_muzzle_snds_L85                                { quality = 1; price = 20; };
    class CUP_muzzle_snds_M16_camo                            { quality = 1; price = 20; };
    class CUP_muzzle_snds_M16                                { quality = 1; price = 20; };
    class CUP_muzzle_snds_SCAR_L                            { quality = 1; price = 20; };
    class CUP_muzzle_mfsup_SCAR_L                            { quality = 1; price = 20; };
    class CUP_muzzle_snds_SCAR_H                            { quality = 1; price = 20; };
    class CUP_muzzle_mfsup_SCAR_H                            { quality = 1; price = 20; };
    class CUP_muzzle_snds_XM8                                { quality = 1; price = 20; };

    ///////////////////////////////////////////////////////////////////////////////
    // CUP Ammo
    ///////////////////////////////////////////////////////////////////////////////
    
	///////////////////////////////////////////////////////////////////////////////
    // CUP Shotgun Ammo
	///////////////////////////////////////////////////////////////////////////////
    class CUP_20Rnd_B_AA12_Pellets                            { quality = 1; price = 10; };
    class CUP_20Rnd_B_AA12_74Slug                            { quality = 1; price = 10; };
    class CUP_20Rnd_B_AA12_HE                                { quality = 1; price = 10; };
    class CUP_8Rnd_B_Beneli_74Slug                            { quality = 1; price = 10; };
    class CUP_8Rnd_B_Saiga12_74Slug_M                        { quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
    // CUP Launcher Ammo
	///////////////////////////////////////////////////////////////////////////////
    class CUP_Igla_M                                        { quality = 1; price = 1000; };
    class CUP_M136_M                                        { quality = 1; price = 1000; };
    class CUP_MAAWS_HEAT_M                                    { quality = 1; price = 1000; };
    class CUP_MAAWS_HEDP_M                                    { quality = 1; price = 1000; };
    class CUP_AT13_M                                        { quality = 1; price = 1000; };
    class CUP_NLAW_M                                        { quality = 1; price = 1000; };
    class CUP_PG7V_M                                        { quality = 1; price = 1000; };
    class CUP_PG7VL_M                                        { quality = 1; price = 1000; };
    class CUP_PG7VR_M                                        { quality = 1; price = 1000; };
    class CUP_OG7_M                                            { quality = 1; price = 1000; };
    class CUP_RPG18_M                                        { quality = 1; price = 1000; };
    class CUP_SMAW_HEAA_M                                    { quality = 1; price = 1000; };
    class CUP_SMAW_HEDP_M                                    { quality = 1; price = 1000; };
    class CUP_Stinger_M                                        { quality = 1; price = 1000; };
    class CUP_Strela_2_M                                    { quality = 1; price = 1000; };
    class CUP_Dragon_EP1_M                                    { quality = 1; price = 1000; };
    class CUP_Javelin_M                                        { quality = 1; price = 1000; };
	
	///////////////////////////////////////////////////////////////////////////////
    // CUP Smoke Ammo
	///////////////////////////////////////////////////////////////////////////////	
    class CUP_6Rnd_HE_M203                                    { quality = 1; price = 50; };
    class CUP_6Rnd_FlareWhite_M203                            { quality = 1; price = 50; };
    class CUP_6Rnd_FlareGreen_M203                            { quality = 1; price = 50; };
    class CUP_6Rnd_FlareRed_M203                            { quality = 1; price = 50; };
    class CUP_6Rnd_FlareYellow_M203                            { quality = 1; price = 50; };
    class CUP_6Rnd_Smoke_M203                                { quality = 1; price = 50; };
    class CUP_6Rnd_SmokeRed_M203                            { quality = 1; price = 50; };
    class CUP_6Rnd_SmokeGreen_M203                            { quality = 1; price = 50; };
    class CUP_6Rnd_SmokeYellow_M203                            { quality = 1; price = 50; };
    class CUP_1Rnd_HE_M203                                    { quality = 1; price = 50; };
    class CUP_1Rnd_HEDP_M203                                { quality = 1; price = 50; };
    class CUP_FlareWhite_M203                                { quality = 1; price = 50; };
    class CUP_FlareGreen_M203                                { quality = 1; price = 50; };
    class CUP_FlareRed_M203                                    { quality = 1; price = 50; };
    class CUP_FlareYellow_M203                                { quality = 1; price = 50; };
    class CUP_1Rnd_Smoke_M203                                { quality = 1; price = 50; };
    class CUP_1Rnd_SmokeRed_M203                            { quality = 1; price = 50; };
    class CUP_1Rnd_SmokeGreen_M203                            { quality = 1; price = 50; };
    class CUP_1Rnd_SmokeYellow_M203                            { quality = 1; price = 50; };	

	///////////////////////////////////////////////////////////////////////////////
    // CUP Handgun Ammo
	///////////////////////////////////////////////////////////////////////////////
    class CUP_8Rnd_9x18_Makarov_M                            { quality = 1; price = 8; };
    class CUP_8Rnd_9x18_MakarovSD_M                            { quality = 1; price = 8; };
    class CUP_15Rnd_9x19_M9                                    { quality = 1; price = 8; };
    class CUP_18Rnd_9x19_Phantom                            { quality = 1; price = 8; };
    class CUP_6Rnd_45ACP_M                                    { quality = 1; price = 8; };
    class CUP_17Rnd_9x19_glock17                            { quality = 1; price = 8; };
    class CUP_7Rnd_45ACP_1911                                { quality = 1; price = 8; };
    class CUP_10Rnd_9x19_Compact                            { quality = 1; price = 8; };

	///////////////////////////////////////////////////////////////////////////////
    // CUP Light Machine Gun Ammo
	///////////////////////////////////////////////////////////////////////////////
    class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M    { quality = 1; price = 50; };
    class CUP_200Rnd_TE4_Red_Tracer_556x45_M249                { quality = 1; price = 50; };
    class CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249            { quality = 1; price = 50; };
    class CUP_200Rnd_TE1_Red_Tracer_556x45_M249                { quality = 1; price = 50; };
    class CUP_100Rnd_TE4_Green_Tracer_556x45_M249            { quality = 1; price = 50; };
    class CUP_100Rnd_TE4_Red_Tracer_556x45_M249                { quality = 1; price = 50; };
    class CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249            { quality = 1; price = 50; };
    class CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1            { quality = 1; price = 50; };
    class CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1            { quality = 1; price = 50; };
    class CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1        { quality = 1; price = 50; };
    class CUP_50Rnd_UK59_762x54R_Tracer                        { quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
    // CUP Sub Machine Gun Ammo
	///////////////////////////////////////////////////////////////////////////////
    class CUP_64Rnd_9x19_Bizon_M                            { quality = 1; price = 20; };
    class CUP_64Rnd_Green_Tracer_9x19_Bizon_M                { quality = 1; price = 20; };
    class CUP_64Rnd_Red_Tracer_9x19_Bizon_M                    { quality = 1; price = 20; };
    class CUP_64Rnd_White_Tracer_9x19_Bizon_M                { quality = 1; price = 20; };
    class CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M                { quality = 1; price = 20; };
    class CUP_30Rnd_9x19_EVO                                { quality = 1; price = 10; };
    class CUP_30Rnd_9x19_UZI                                { quality = 1; price = 10; };
    class CUP_30Rnd_9x19_MP5                                { quality = 1; price = 10; };
    class CUP_20Rnd_B_765x17_Ball_M                            { quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
    // CUP Sniper Rifle Ammo
	///////////////////////////////////////////////////////////////////////////////
    class CUP_5Rnd_127x99_as50_M                            { quality = 1; price = 10; };
    class CUP_5Rnd_86x70_L115A1                                { quality = 1; price = 10; };
    class CUP_10Rnd_762x51_CZ750_Tracer                        { quality = 1; price = 10; };
    class CUP_10Rnd_762x51_CZ750                            { quality = 1; price = 10; };
    class CUP_10x_303_M                                        { quality = 1; price = 10; };
    class CUP_5Rnd_762x51_M24                                { quality = 1; price = 10; };
    class CUP_10Rnd_127x99_m107                                { quality = 1; price = 10; };
    class CUP_20Rnd_762x51_B_M110                            { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110            { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Red_Tracer_762x51_M110                { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Green_Tracer_762x51_M110            { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_White_Tracer_762x51_M110            { quality = 1; price = 10; };
    class CUP_10Rnd_762x54_SVD_M                            { quality = 1; price = 10; };
    class CUP_10Rnd_9x39_SP5_VSS_M                            { quality = 1; price = 10; };
    class CUP_20Rnd_9x39_SP5_VSS_M                            { quality = 1; price = 10; };
    class CUP_5x_22_LR_17_HMR_M                                { quality = 1; price = 10; };
    class CUP_5Rnd_127x108_KSVK_M                            { quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
    // CUP Assault Rifle Ammo
	///////////////////////////////////////////////////////////////////////////////
    class CUP_30Rnd_545x39_AK_M                                { quality = 1; price = 10; };
    class CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M            { quality = 1; price = 10; };
    class CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M                { quality = 1; price = 10; };
    class CUP_30Rnd_TE1_White_Tracer_545x39_AK_M            { quality = 1; price = 10; };
    class CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M            { quality = 1; price = 10; };
    class CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M        { quality = 1; price = 10; };
    class CUP_30Rnd_762x39_AK47_M                            { quality = 1; price = 10; };
    class CUP_30Rnd_556x45_Stanag                            { quality = 1; price = 10; };
    class CUP_30Rnd_556x45_G36                                { quality = 1; price = 10; };
    class CUP_30Rnd_TE1_Red_Tracer_556x45_G36                { quality = 1; price = 10; };
    class CUP_30Rnd_TE1_Green_Tracer_556x45_G36                { quality = 1; price = 10; };
    class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36            { quality = 1; price = 10; };
    class CUP_100Rnd_556x45_BetaCMag                        { quality = 1; price = 10; };
    class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag            { quality = 1; price = 10; };
    class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag        { quality = 1; price = 10; };
    class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag        { quality = 1; price = 10; };
    class CUP_20Rnd_556x45_Stanag                            { quality = 1; price = 10; };
    class CUP_20Rnd_762x51_CZ805B                            { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B            { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B            { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B            { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B            { quality = 1; price = 10; };
    class CUP_20Rnd_762x51_DMR                                { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR            { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Red_Tracer_762x51_DMR                { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Green_Tracer_762x51_DMR                { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_White_Tracer_762x51_DMR                { quality = 1; price = 10; };
    class CUP_20Rnd_762x51_FNFAL_M                            { quality = 1; price = 10; };
    class CUP_30Rnd_Sa58_M_TracerG                            { quality = 1; price = 10; };
    class CUP_30Rnd_Sa58_M_TracerR                            { quality = 1; price = 10; };
    class CUP_30Rnd_Sa58_M_TracerY                            { quality = 1; price = 10; };
    class CUP_30Rnd_Sa58_M                                    { quality = 1; price = 10; };
    class CUP_20Rnd_762x51_B_SCAR                            { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR            { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR                { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR            { quality = 1; price = 10; };
    class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR            { quality = 1; price = 10; };	

	///////////////////////////////////////////////////////////////////////////////
    // CUP Vehicle Price List
 	///////////////////////////////////////////////////////////////////////////////
    
	///////////////////////////////////////////////////////////////////////////////
    // CUP Wheeled
 	///////////////////////////////////////////////////////////////////////////////
    class CUP_C_UAZ_Open_TK_CIV                            { quality = 1; price = 10; };
    class CUP_C_UAZ_Unarmed_TK_CIV                        { quality = 1; price = 10; };
    class CUP_O_UAZ_AGS30_CHDKZ                            { quality = 1; price = 10; };
    class CUP_O_UAZ_AGS30_RU                            { quality = 1; price = 10; };
    class CUP_O_UAZ_AGS30_TKA                            { quality = 1; price = 10; };
    class CUP_O_UAZ_MG_CHDKZ                            { quality = 1; price = 10; };
    class CUP_O_UAZ_MG_RU                                { quality = 1; price = 10; };
    class CUP_O_UAZ_MG_TKA                                { quality = 1; price = 10; };
    class CUP_O_UAZ_Open_CHDKZ                            { quality = 1; price = 10; };
    class CUP_O_UAZ_Open_RU                                { quality = 1; price = 10; };
    class CUP_O_UAZ_Open_TKA                            { quality = 1; price = 10; };
    class CUP_O_UAZ_SPG9_CHDKZ                            { quality = 1; price = 10; };
    class CUP_O_UAZ_SPG9_RU                                { quality = 1; price = 10; };
    class CUP_O_UAZ_SPG9_TKA                            { quality = 1; price = 10; };
    class CUP_O_UAZ_Unarmed_CHDKZ                        { quality = 1; price = 10; };
    class CUP_O_UAZ_Unarmed_RU                            { quality = 1; price = 10; };
    class CUP_O_UAZ_Unarmed_TKA                            { quality = 1; price = 10; };
    class CUP_B_UAZ_AGS30_ACR                            { quality = 1; price = 10; };
    class CUP_B_UAZ_AGS30_CDF                            { quality = 1; price = 10; };
    class CUP_B_UAZ_MG_ACR                                { quality = 1; price = 10; };
    class CUP_B_UAZ_MG_CDF                                { quality = 1; price = 10; };
    class CUP_B_UAZ_Open_ACR                            { quality = 1; price = 10; };
    class CUP_B_UAZ_Open_CDF                            { quality = 1; price = 10; };
    class CUP_B_UAZ_SPG9_ACR                            { quality = 1; price = 10; };
    class CUP_B_UAZ_SPG9_CDF                            { quality = 1; price = 10; };
    class CUP_B_UAZ_Unarmed_ACR                            { quality = 1; price = 10; };
    class CUP_B_UAZ_Unarmed_CDF                            { quality = 1; price = 10; };
    class CUP_I_UAZ_AGS30_UN                            { quality = 1; price = 10; };
    class CUP_I_UAZ_MG_UN                                { quality = 1; price = 10; };
    class CUP_I_UAZ_Open_UN                                { quality = 1; price = 10; };
    class CUP_I_UAZ_SPG9_UN                                { quality = 1; price = 10; };
    class CUP_I_UAZ_Unarmed_UN                            { quality = 1; price = 10; };
    class CUP_B_Ural_CDF                                { quality = 1; price = 10; };
    class CUP_B_Ural_Empty_CDF                            { quality = 1; price = 10; };
    class CUP_B_Ural_Open_CDF                            { quality = 1; price = 10; };
    class CUP_B_Ural_Reammo_CDF                            { quality = 1; price = 10; };
    class CUP_B_Ural_Refuel_CDF                            { quality = 1; price = 10; };
    class CUP_B_Ural_Repair_CDF                            { quality = 1; price = 10; };
    class CUP_B_Ural_ZU23_CDF                            { quality = 1; price = 10; };
    class CUP_O_Ural_CHDKZ                                { quality = 1; price = 10; };
    class CUP_O_Ural_Empty_CHDKZ                        { quality = 1; price = 10; };
    class CUP_O_Ural_Empty_RU                            { quality = 1; price = 10; };
    class CUP_O_Ural_Empty_SLA                            { quality = 1; price = 10; };
    class CUP_O_Ural_Empty_TKA                            { quality = 1; price = 10; };
    class CUP_O_Ural_Open_CHDKZ                            { quality = 1; price = 10; };
    class CUP_O_Ural_Open_RU                            { quality = 1; price = 10; };
    class CUP_O_Ural_Open_SLA                            { quality = 1; price = 10; };
    class CUP_O_Ural_Open_TKA                            { quality = 1; price = 10; };
    class CUP_O_Ural_RU                                    { quality = 1; price = 10; };
    class CUP_O_Ural_Reammo_CHDKZ                        { quality = 1; price = 10; };
    class CUP_O_Ural_Reammo_RU                            { quality = 1; price = 10; };
    class CUP_O_Ural_Reammo_SLA                            { quality = 1; price = 10; };
    class CUP_O_Ural_Reammo_TKA                            { quality = 1; price = 10; };
    class CUP_O_Ural_Refuel_CHDKZ                        { quality = 1; price = 10; };
    class CUP_O_Ural_Refuel_RU                            { quality = 1; price = 10; };
    class CUP_O_Ural_Refuel_SLA                            { quality = 1; price = 10; };
    class CUP_O_Ural_Refuel_TKA                            { quality = 1; price = 10; };
    class CUP_O_Ural_Repair_CHDKZ                        { quality = 1; price = 10; };
    class CUP_O_Ural_Repair_RU                            { quality = 1; price = 10; };
    class CUP_O_Ural_Repair_SLA                            { quality = 1; price = 10; };
    class CUP_O_Ural_Repair_TKA                            { quality = 1; price = 10; };
    class CUP_O_Ural_SLA                                { quality = 1; price = 10; };
    class CUP_O_Ural_TKA                                { quality = 1; price = 10; };
    class CUP_O_Ural_ZU23_CHDKZ                            { quality = 1; price = 10; };
    class CUP_O_Ural_ZU23_RU                            { quality = 1; price = 10; };
    class CUP_O_Ural_ZU23_SLA                            { quality = 1; price = 10; };
    class CUP_O_Ural_ZU23_TKA                            { quality = 1; price = 10; };
    class CUP_O_Ural_ZU23_TKM                            { quality = 1; price = 10; };
    class CUP_C_Ural_Civ_01                                { quality = 1; price = 10; };
    class CUP_C_Ural_Civ_02                                { quality = 1; price = 10; };
    class CUP_C_Ural_Civ_03                                { quality = 1; price = 10; };
    class CUP_C_Ural_Open_Civ_01                        { quality = 1; price = 10; };
    class CUP_C_Ural_Open_Civ_02                        { quality = 1; price = 10; };
    class CUP_C_Ural_Open_Civ_03                        { quality = 1; price = 10; };
    class CUP_I_Ural_Empty_UN                            { quality = 1; price = 10; };
    class CUP_I_Ural_Reammo_UN                            { quality = 1; price = 10; };
    class CUP_I_Ural_Repair_UN                            { quality = 1; price = 10; };
    class CUP_I_Ural_UN                                    { quality = 1; price = 10; };
    class CUP_I_Ural_ZU23_NAPA                            { quality = 1; price = 10; };
    class CUP_I_Ural_ZU23_TK_Gue                        { quality = 1; price = 10; };
    class CUP_C_Datsun                                    { quality = 1; price = 10; };
    class CUP_C_Datsun_4seat                            { quality = 1; price = 10; };
    class CUP_C_Datsun_Covered                            { quality = 1; price = 10; };
    class CUP_C_Datsun_Plain                            { quality = 1; price = 10; };
    class CUP_C_Datsun_Tubeframe                        { quality = 1; price = 10; };
    class CUP_I_Datsun_PK                                { quality = 1; price = 10; };
    class CUP_I_Datsun_PK_Random                        { quality = 1; price = 10; };
    class CUP_I_Datsun_PK_TK                            { quality = 1; price = 10; };
    class CUP_I_Datsun_PK_TK_Random                        { quality = 1; price = 10; };
    class CUP_O_Datsun_PK                                { quality = 1; price = 10; };
    class CUP_O_Datsun_PK_Random                        { quality = 1; price = 10; };
    class CUP_C_LR_Transport_CTK                        { quality = 1; price = 10; };
    class CUP_B_M1030                                    { quality = 1; price = 10; };
    class CUP_BAF_Jackal2_GMG_D                            { quality = 1; price = 10; };
    class CUP_BAF_Jackal2_GMG_W                            { quality = 1; price = 10; };
    class CUP_BAF_Jackal2_L2A1_D                        { quality = 1; price = 10; };
    class CUP_BAF_Jackal2_L2A1_W                        { quality = 1; price = 10; };
    class CUP_B_Dingo_Des                                { quality = 1; price = 10; };
    class CUP_B_Dingo_GL_Des                            { quality = 1; price = 10; };
    class CUP_B_Dingo_GL_Wdl                            { quality = 1; price = 10; };
    class CUP_B_Dingo_Wdl                                { quality = 1; price = 10; };
    class CUP_B_HMMWV_AGS_GPK_ACR                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_Ambulance_ACR                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_Ambulance_USA                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_Ambulance_USMC                    { quality = 1; price = 10; };
    class CUP_B_HMMWV_Avenger_USA                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_Avenger_USMC                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_Crows_M2_USA                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_Crows_MK19_USA                    { quality = 1; price = 10; };
    class CUP_B_HMMWV_DSHKM_GPK_ACR                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_M1114_USMC                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_M2_GPK_ACR                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_M2_GPK_USA                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_M2_USA                            { quality = 1; price = 10; };
    class CUP_B_HMMWV_M2_USMC                            { quality = 1; price = 10; };
    class CUP_B_HMMWV_MK19_USA                            { quality = 1; price = 10; };
    class CUP_B_HMMWV_MK19_USMC                            { quality = 1; price = 10; };
    class CUP_B_HMMWV_SOV_USA                            { quality = 1; price = 10; };
    class CUP_B_HMMWV_TOW_USA                            { quality = 1; price = 10; };
    class CUP_B_HMMWV_TOW_USMC                            { quality = 1; price = 10; };
    class CUP_B_HMMWV_Terminal_USA                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_Transport_USA                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_Unarmed_USA                        { quality = 1; price = 10; };
    class CUP_B_HMMWV_Unarmed_USMC                        { quality = 1; price = 10; };
    class CUP_B_LR_Ambulance_CZ_D                        { quality = 1; price = 10; };
    class CUP_B_LR_Ambulance_CZ_W                        { quality = 1; price = 10; };
    class CUP_B_LR_Ambulance_GB_D                        { quality = 1; price = 10; };
    class CUP_B_LR_Ambulance_GB_W                        { quality = 1; price = 10; };
    class CUP_B_LR_MG_CZ_W                                { quality = 1; price = 10; };
    class CUP_B_LR_MG_GB_W                                { quality = 1; price = 10; };
    class CUP_B_LR_Special_CZ_W                            { quality = 1; price = 10; };
    class CUP_B_LR_Special_Des_CZ_D                        { quality = 1; price = 10; };
    class CUP_B_LR_Transport_CZ_D                        { quality = 1; price = 10; };
    class CUP_B_LR_Transport_CZ_W                        { quality = 1; price = 10; };
    class CUP_B_LR_Transport_GB_D                        { quality = 1; price = 10; };
    class CUP_B_LR_Transport_GB_W                        { quality = 1; price = 10; };
    class CUP_O_LR_Ambulance_TKA                        { quality = 1; price = 10; };
    class CUP_O_LR_MG_TKA                                { quality = 1; price = 10; };
    class CUP_O_LR_MG_TKM                                { quality = 1; price = 10; };
    class CUP_O_LR_SPG9_TKA                                { quality = 1; price = 10; };
    class CUP_O_LR_SPG9_TKM                                { quality = 1; price = 10; };
    class CUP_O_LR_Transport_TKA                        { quality = 1; price = 10; };
    class CUP_O_LR_Transport_TKM                        { quality = 1; price = 10; };
    class CUP_I_BRDM2_ATGM_NAPA                            { quality = 1; price = 10; };
    class CUP_I_BRDM2_ATGM_TK_Gue                        { quality = 1; price = 10; };
    class CUP_I_BRDM2_HQ_NAPA                            { quality = 1; price = 10; };
    class CUP_I_BRDM2_HQ_TK_Gue                            { quality = 1; price = 10; };
    class CUP_I_BRDM2_HQ_UN                                { quality = 1; price = 10; };
    class CUP_I_BRDM2_NAPA                                { quality = 1; price = 10; };
    class CUP_I_BRDM2_TK_Gue                            { quality = 1; price = 10; };
    class CUP_I_BRDM2_UN                                { quality = 1; price = 10; };
    class CUP_O_BRDM2_ATGM_CHDKZ                        { quality = 1; price = 10; };
    class CUP_O_BRDM2_ATGM_SLA                            { quality = 1; price = 10; };
    class CUP_O_BRDM2_ATGM_TKA                            { quality = 1; price = 10; };
    class CUP_O_BRDM2_CHDKZ                                { quality = 1; price = 10; };
    class CUP_O_BRDM2_HQ_CHDKZ                            { quality = 1; price = 10; };
    class CUP_O_BRDM2_HQ_SLA                            { quality = 1; price = 10; };
    class CUP_O_BRDM2_HQ_TKA                            { quality = 1; price = 10; };
    class CUP_O_BRDM2_SLA                                { quality = 1; price = 10; };
    class CUP_O_BRDM2_TKA                                { quality = 1; price = 10; };
    class CUP_B_BRDM2_ATGM_CDF                            { quality = 1; price = 10; };
    class CUP_B_BRDM2_CDF                                { quality = 1; price = 10; };
    class CUP_B_BRDM2_HQ_CDF                            { quality = 1; price = 10; };
    class CUP_B_LAV25M240_USMC                            { quality = 1; price = 10; };
    class CUP_B_LAV25_HQ_USMC                            { quality = 1; price = 10; };
    class CUP_B_LAV25_USMC                                { quality = 1; price = 10; };
    class CUP_B_BM21_CDF                                { quality = 1; price = 10; };
    class CUP_O_BM21_CHDKZ                                { quality = 1; price = 10; };
    class CUP_O_BM21_RU                                    { quality = 1; price = 10; };
    class CUP_O_BM21_SLA                                { quality = 1; price = 10; };
    class CUP_O_BM21_TKA                                { quality = 1; price = 10; };
    class CUP_O_BTR60_TK                                { quality = 1; price = 10; };
    class CUP_O_BTR90_HQ_RU                                { quality = 1; price = 10; };
    class CUP_O_BTR90_RU                                { quality = 1; price = 10; };
    class CUP_B_M1126_ICV_M2_Desert                        { quality = 1; price = 10; };
    class CUP_B_M1126_ICV_M2_Desert_Slat                { quality = 1; price = 10; };
    class CUP_B_M1126_ICV_M2_Woodland                    { quality = 1; price = 10; };
    class CUP_B_M1126_ICV_M2_Woodland_Slat                { quality = 1; price = 10; };
    class CUP_B_M1126_ICV_Mk19_Desert                    { quality = 1; price = 10; };
    class CUP_B_M1126_ICV_Mk19_Desert_Slat                { quality = 1; price = 10; };
    class CUP_B_M1126_ICV_Mk19_Woodland                    { quality = 1; price = 10; };
    class CUP_B_M1126_ICV_Mk19_Woodland_Slat            { quality = 1; price = 10; };
    class CUP_B_M1128_MGS_Desert                        { quality = 1; price = 10; };
    class CUP_B_M1128_MGS_Desert_Slat                    { quality = 1; price = 10; };
    class CUP_B_M1128_MGS_Woodland                        { quality = 1; price = 10; };
    class CUP_B_M1128_MGS_Woodland_Slat                    { quality = 1; price = 10; };
    class CUP_B_M1129_MC_MK19_Desert                    { quality = 1; price = 10; };
    class CUP_B_M1129_MC_MK19_Desert_Slat                { quality = 1; price = 10; };
    class CUP_B_M1129_MC_MK19_Woodland                    { quality = 1; price = 10; };
    class CUP_B_M1129_MC_MK19_Woodland_Slat                { quality = 1; price = 10; };
    class CUP_B_M1130_CV_M2_Desert                        { quality = 1; price = 10; };
    class CUP_B_M1130_CV_M2_Desert_Slat                    { quality = 1; price = 10; };
    class CUP_B_M1130_CV_M2_Woodland                    { quality = 1; price = 10; };
    class CUP_B_M1130_CV_M2_Woodland_Slat                { quality = 1; price = 10; };
    class CUP_B_M1133_MEV_Desert                        { quality = 1; price = 10; };
    class CUP_B_M1133_MEV_Desert_Slat                    { quality = 1; price = 10; };
    class CUP_B_M1133_MEV_Woodland                        { quality = 1; price = 10; };
    class CUP_B_M1133_MEV_Woodland_Slat                    { quality = 1; price = 10; };
    class CUP_B_M1135_ATGMV_Desert                        { quality = 1; price = 10; };
    class CUP_B_M1135_ATGMV_Desert_Slat                    { quality = 1; price = 10; };
    class CUP_B_M1135_ATGMV_Woodland                    { quality = 1; price = 10; };
    class CUP_B_M1135_ATGMV_Woodland_Slat                { quality = 1; price = 10; };
    class CUP_B_TowingTractor_USMC                        { quality = 1; price = 10; };
    class CUP_I_LR_Transport_RACS                        { quality = 1; price = 10; };
    class CUP_I_LR_MG_RACS                                { quality = 1; price = 10; };
    class CUP_I_LR_Ambulance_RACS                        { quality = 1; price = 10; };
    class CUP_C_Octavia_CIV                                { quality = 1; price = 10; };
    class CUP_C_Skoda_Red_Civ                            { quality = 1; price = 10; };
    class CUP_C_Skoda_White_Civ                            { quality = 1; price = 10; };
    class CUP_C_Skoda_Blue_Civ                            { quality = 1; price = 10; };
    class CUP_C_Skoda_Green_Civ                            { quality = 1; price = 10; };
    class CUP_C_Golf4_red_Civ                            { quality = 1; price = 10; };
    class CUP_C_Golf4_black_Civ                            { quality = 1; price = 10; };
    class CUP_C_Golf4_yellow_Civ                        { quality = 1; price = 10; };
    class CUP_C_Golf4_blue_Civ                            { quality = 1; price = 10; };
    class CUP_C_Golf4_white_Civ                            { quality = 1; price = 10; };
    class CUP_C_Golf4_green_Civ                            { quality = 1; price = 10; };
    class CUP_C_Golf4_random_Civ                        { quality = 1; price = 10; };
    class CUP_C_Golf4_whiteblood_Civ                    { quality = 1; price = 10; };
    class CUP_C_Golf4_camo_Civ                            { quality = 1; price = 10; };
    class CUP_C_Golf4_camodigital_Civ                    { quality = 1; price = 10; };
    class CUP_C_Golf4_camodark_Civ                        { quality = 1; price = 10; };
    class CUP_C_Golf4_reptile_Civ                        { quality = 1; price = 10; };
    class CUP_C_Golf4_kitty_Civ                            { quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
    // CUP Tracked
	///////////////////////////////////////////////////////////////////////////////
    class CUP_B_AAV_USMC                                { quality = 1; price = 10; };
    class CUP_B_M113_Med_USA                            { quality = 1; price = 10; };
    class CUP_B_M113_USA                                { quality = 1; price = 10; };
    class CUP_I_M113_Med_RACS                            { quality = 1; price = 10; };
    class CUP_I_M113_Med_UN                                { quality = 1; price = 10; };
    class CUP_I_M113_RACS                                { quality = 1; price = 10; };
    class CUP_I_M113_UN                                    { quality = 1; price = 10; };
    class CUP_O_M113_Med_TKA                            { quality = 1; price = 10; };
    class CUP_O_M113_TKA                                { quality = 1; price = 10; };
    class CUP_B_M163_USA                                { quality = 1; price = 10; };
    class CUP_B_M1A1_DES_USMC                            { quality = 1; price = 10; };
    class CUP_B_M1A1_DES_US_Army                        { quality = 1; price = 10; };
    class CUP_B_M1A1_Woodland_USMC                        { quality = 1; price = 10; };
    class CUP_B_M1A1_Woodland_US_Army                    { quality = 1; price = 10; };
    class CUP_B_M1A2_TUSK_MG_DES_USMC                    { quality = 1; price = 10; };
    class CUP_B_M1A2_TUSK_MG_DES_US_Army                { quality = 1; price = 10; };
    class CUP_B_M1A2_TUSK_MG_USMC                        { quality = 1; price = 10; };
    class CUP_B_M1A2_TUSK_MG_US_Army                    { quality = 1; price = 10; };
    class CUP_B_M270_DPICM_USA                            { quality = 1; price = 10; };
    class CUP_B_M270_DPICM_USMC                            { quality = 1; price = 10; };
    class CUP_B_M270_HE_USA                                { quality = 1; price = 10; };
    class CUP_B_M270_HE_USMC                            { quality = 1; price = 10; };
    class CUP_B_M2Bradley_USA_D                            { quality = 1; price = 10; };
    class CUP_B_M2Bradley_USA_W                            { quality = 1; price = 10; };
    class CUP_B_M2A3Bradley_USA_D                        { quality = 1; price = 10; };
    class CUP_B_M2A3Bradley_USA_W                        { quality = 1; price = 10; };
    class CUP_I_T55_TK_GUE                                { quality = 1; price = 10; };
    class CUP_O_T55_TK                                    { quality = 1; price = 10; };
    class CUP_O_T72_CHDKZ                                { quality = 1; price = 10; };
    class CUP_O_T72_RU                                    { quality = 1; price = 10; };
    class CUP_O_T72_SLA                                    { quality = 1; price = 10; };
    class CUP_O_T72_TKA                                    { quality = 1; price = 10; };
    class CUP_B_T72_CDF                                    { quality = 1; price = 10; };
    class CUP_I_T72_NAPA                                { quality = 1; price = 10; };
    class CUP_I_T72_RACS                                { quality = 1; price = 10; };
    class CUP_B_ZSU23_CDF                                { quality = 1; price = 10; };
    class CUP_O_ZSU23_ChDKZ                                { quality = 1; price = 10; };
    class CUP_O_ZSU23_SLA                                { quality = 1; price = 10; };
    class CUP_O_ZSU23_TK                                { quality = 1; price = 10; };
    class CUP_T34_BASE                                    { quality = 1; price = 10; };
    class CUP_I_T34_NAPA                                { quality = 1; price = 10; };
    class CUP_I_T34_TK_GUE                                { quality = 1; price = 10; };
    class CUP_O_T34_TKA                                    { quality = 1; price = 10; };
 
	///////////////////////////////////////////////////////////////////////////////
    // CUP Helis
	///////////////////////////////////////////////////////////////////////////////
    class CUP_B_AH1Z                                    { quality = 1; price = 10; };	
    /* class CUP_B_AH1Z_14RndHydrax                        { quality = 1; price = 10; }; */
    class CUP_B_AH1Z_7RndHydra                            { quality = 1; price = 10; };
    class CUP_B_AH1Z_AT                                    { quality = 1; price = 10; };
    class CUP_B_AH1Z_Escort                                { quality = 1; price = 10; };
    class CUP_B_AH1Z_NOAA                                { quality = 1; price = 10; };
    class CUP_B_AH1Z_NoWeapons                            { quality = 1; price = 10; };
    class CUP_B_AH1_AT_BAF                                { quality = 1; price = 10; };
    class CUP_B_AH1_BAF                                    { quality = 1; price = 10; };
    class CUP_B_AH1_ES_BAF                                { quality = 1; price = 10; };
    class CUP_B_AH1_MR_BAF                                { quality = 1; price = 10; };
    class CUP_B_AH1_NO_BAF                                { quality = 1; price = 10; };
    class CUP_B_AH64D_AT_USA                            { quality = 1; price = 10; };
    class CUP_B_AH64D_ES_USA                            { quality = 1; price = 10; };
    class CUP_B_AH64D_MR_USA                            { quality = 1; price = 10; };
    class CUP_B_AH64D_NO_USA                            { quality = 1; price = 10; };
    class CUP_B_AH64D_USA                                { quality = 1; price = 10; };
    class CUP_B_AW159_Armed_BAF                            { quality = 1; price = 10; };
    class CUP_B_AW159_Unarmed_BAF                        { quality = 1; price = 10; };
    class CUP_B_CH47F_GB                                { quality = 1; price = 10; };
    class CUP_B_CH47F_USA                                { quality = 1; price = 10; };
    class CUP_B_CH53E_USMC                                { quality = 1; price = 10; };
    class CUP_B_MH60S_FFV_USMC                            { quality = 1; price = 10; };
    class CUP_B_MH60S_USMC                                { quality = 1; price = 10; };
    class CUP_B_UH1Y_GUNSHIP_USMC                        { quality = 1; price = 10; };
    class CUP_B_UH1Y_MEV_USMC                            { quality = 1; price = 10; };
    class CUP_B_UH1Y_UNA_USMC                            { quality = 1; price = 10; };
    class CUP_B_UH60L_FFV_US                            { quality = 1; price = 10; };
    class CUP_B_UH60L_US                                { quality = 1; price = 10; };
    class CUP_B_UH60L_Unarmed_FFV_MEV_US                { quality = 1; price = 10; };
    class CUP_B_UH60L_Unarmed_FFV_US                    { quality = 1; price = 10; };
    class CUP_B_UH60L_Unarmed_US                        { quality = 1; price = 10; };
    class CUP_I_UH60L_FFV_RACS                            { quality = 1; price = 10; };
    class CUP_I_UH60L_RACS                                { quality = 1; price = 10; };
    class CUP_I_UH60L_Unarmed_FFV_MEV_Racs                { quality = 1; price = 10; };
    class CUP_I_UH60L_Unarmed_FFV_Racs                    { quality = 1; price = 10; };
    class CUP_I_UH60L_Unarmed_RACS                        { quality = 1; price = 10; };
    class CUP_B_UH60M_FFV_US                            { quality = 1; price = 10; };
    class CUP_B_UH60M_US                                { quality = 1; price = 10; };
    class CUP_B_UH60M_Unarmed_FFV_MEV_US                { quality = 1; price = 10; };
    class CUP_B_UH60M_Unarmed_FFV_US                    { quality = 1; price = 10; };
    class CUP_B_UH60M_Unarmed_US                        { quality = 1; price = 10; };
    class CUP_O_Mi8_CHDKZ                                { quality = 1; price = 10; };
    class CUP_O_Mi8_RU                                    { quality = 1; price = 10; };
    class CUP_O_Mi8_SLA_1                                { quality = 1; price = 10; };
    class CUP_O_Mi8_SLA_2                                { quality = 1; price = 10; };
    class CUP_O_Mi8_medevac_CHDKZ                        { quality = 1; price = 10; };
    class CUP_O_Mi8_medevac_RU                            { quality = 1; price = 10; };
    class CUP_B_Mi171Sh_ACR                                { quality = 1; price = 10; };
    class CUP_B_Mi171Sh_Unarmed_ACR                        { quality = 1; price = 10; };
    class CUP_B_Mi17_CDF                                { quality = 1; price = 10; };
    class CUP_B_Mi17_medevac_CDF                        { quality = 1; price = 10; };
    class CUP_I_Mi17_UN                                    { quality = 1; price = 10; };
    class CUP_O_Mi17_TK                                    { quality = 1; price = 10; };
    class CUP_C_Mi17_Civilian_RU                        { quality = 1; price = 10; };
    class CUP_B_Mi24_D_CDF                                { quality = 1; price = 10; };
    class CUP_I_Mi24_D_ION                                { quality = 1; price = 10; };
    class CUP_I_Mi24_D_UN                                { quality = 1; price = 10; };
    class CUP_O_Mi24_D_TK                                { quality = 1; price = 10; };
    class CUP_O_Mi24_P_RU                                { quality = 1; price = 10; };
    class CUP_O_Mi24_V_RU                                { quality = 1; price = 10; };
    class CUP_B_Mi35_CZ                                    { quality = 1; price = 10; };
    class CUP_I_M163_RACS                                { quality = 1; price = 10; };
    class CUP_O_UH1H_TKA                                { quality = 1; price = 10; };
    class CUP_I_UH1H_TK_GUE                                { quality = 1; price = 10; };
    class CUP_B_UH1D_GER_KSK                            { quality = 1; price = 10; };
    class CUP_B_UH1D_GER_KSK_DES                        { quality = 1; price = 10; };
    class CUP_B_Merlin_HC3_GB                            { quality = 1; price = 10; };
    class CUP_B_Merlin_HC3A_GB                            { quality = 1; price = 10; };
    class CUP_B_AW159_Unarmed_GB                        { quality = 1; price = 10; };
    class CUP_B_AW159_Hellfire_GB                        { quality = 1; price = 10; };
    class CUP_B_AW159_Cannon_GB                            { quality = 1; price = 10; };
    class CUP_B_SA330_Puma_HC1_BAF                        { quality = 1; price = 10; };
    class CUP_B_SA330_Puma_HC2_BAF                        { quality = 1; price = 10; };
    class CUP_I_SA330_Puma_HC1_RACS                        { quality = 1; price = 10; };
    class CUP_I_SA330_Puma_HC2_RACS                        { quality = 1; price = 10; };
    class CUP_O_KA50_SLA                                { quality = 1; price = 10; };
    class CUP_O_KA50_AA_SLA                                { quality = 1; price = 10; };
    class CUP_O_KA50_RU                                    { quality = 1; price = 10; };
    class CUP_O_KA50_AA_RU                                { quality = 1; price = 10; };
    
	///////////////////////////////////////////////////////////////////////////////
    // CUP Planes
	///////////////////////////////////////////////////////////////////////////////
    class CUP_C_C47_CIV                                    { quality = 1; price = 10; };
    class CUP_C_DC3_CIV                                    { quality = 1; price = 10; };
    class CUP_B_MV22_USMC                                { quality = 1; price = 10; };
    class CUP_B_A10_AT_USA                                { quality = 1; price = 10; };
    class CUP_B_A10_CAS_USA                                { quality = 1; price = 10; };
    class CUP_B_Su25_CDF                                { quality = 1; price = 10; };
    class CUP_O_Su25_RU_1                                { quality = 1; price = 10; };
    class CUP_O_Su25_RU_2                                { quality = 1; price = 10; };
    class CUP_O_Su25_RU_3                                { quality = 1; price = 10; };
    class CUP_O_Su25_SLA                                { quality = 1; price = 10; };
    class CUP_O_Su25_TKA                                { quality = 1; price = 10; };
    class CUP_B_C130J_USMC                                { quality = 1; price = 10; };
    class CUP_B_C130J_Cargo_USMC                        { quality = 1; price = 10; };
    class CUP_B_C130J_GB                                { quality = 1; price = 10; };
    class CUP_B_C130J_Cargo_GB                            { quality = 1; price = 10; };
    class CUP_I_C130J_AAF                                { quality = 1; price = 10; };
    class CUP_I_C130J_Cargo_AAF                            { quality = 1; price = 10; };
    class CUP_I_C130J_RACS                                { quality = 1; price = 10; };
    class CUP_I_C130J_Cargo_RACS                        { quality = 1; price = 10; };
    class CUP_O_C130J_TKA                                { quality = 1; price = 10; };
    class CUP_O_C130J_Cargo_TKA                            { quality = 1; price = 10; };
    class CUP_B_F35B_AA_USMC                            { quality = 1; price = 10; };
    class CUP_B_F35B_CAS_USMC                            { quality = 1; price = 10; };
    class CUP_B_F35B_LGB_USMC                            { quality = 1; price = 10; };
    class CUP_B_F35B_AA_BAF                                { quality = 1; price = 10; };
    class CUP_B_F35B_CAS_BAF                            { quality = 1; price = 10; };
    class CUP_B_F35B_LGB_BAF                            { quality = 1; price = 10; };
    class CUP_B_AV8B_CAP_USMC                            { quality = 1; price = 10; };
    class CUP_B_AV8B_MK82_USMC                            { quality = 1; price = 10; };
    class CUP_B_AV8B_GBU12_USMC                            { quality = 1; price = 10; };
    class CUP_B_AV8B_AGM_USMC                            { quality = 1; price = 10; };
    class CUP_I_AV8B_CAP_AAF                            { quality = 1; price = 10; };
    class CUP_I_AV8B_MK82_AAF                            { quality = 1; price = 10; };
    class CUP_I_AV8B_GBU12_AAF                            { quality = 1; price = 10; };
    class CUP_I_AV8B_AGM_AAF                            { quality = 1; price = 10; };
    class CUP_B_GR9_CAP_GB                                { quality = 1; price = 10; };
    class CUP_B_GR9_MK82_GB                                { quality = 1; price = 10; };
    class CUP_B_GR9_GBU12_GB                            { quality = 1; price = 10; };
    class CUP_B_GR9_AGM_GB                                { quality = 1; price = 10; };
    class CUP_O_SU34_LGB_RU                                { quality = 1; price = 10; };
    class CUP_O_SU34_LGB_SLA                            { quality = 1; price = 10; };
    class CUP_O_SU34_AGM_RU                                { quality = 1; price = 10; };
    class CUP_O_SU34_AGM_SLA                            { quality = 1; price = 10; };
    class CUP_I_SU34_LGB_AAF                            { quality = 1; price = 10; };
    class CUP_I_SU34_AGM_AAF                            { quality = 1; price = 10; };
    class CUP_B_SU34_LGB_CDF                            { quality = 1; price = 10; };
    class CUP_B_SU34_AGM_CDF                            { quality = 1; price = 10; };
    
	///////////////////////////////////////////////////////////////////////////////
    // CUP Boats
	///////////////////////////////////////////////////////////////////////////////
    class CUP_C_Fishing_Boat_Chernarus                    { quality = 1; price = 10; };
    class CUP_B_RHIB2Turret_USMC                        { quality = 1; price = 10; };
    class CUP_B_RHIB_USMC                                { quality = 1; price = 10; };
    class CUP_B_RHIB2Turret_RACS                        { quality = 1; price = 10; };
    class CUP_B_RHIB_RACS                                { quality = 1; price = 10; };
    class CUP_B_Seafox_USMC                                { quality = 1; price = 10; };
    class CUP_B_Seafox_USV_USMC                            { quality = 1; price = 10; };
    class CUP_B_Zodiac_USMC                                { quality = 1; price = 10; };	
};                                                                             
class CfgExileCustomCode
{
	ExileServer_world_spawnVehicles = "ExileServer_world_spawnVehicles.sqf";
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uid = "";
	};
};
class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_Repair";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Tank
        {
        targetType=2;
        target="Tank";
        class Actions
        {
            class Lock: ExileAbstractAction
            {
                title="Lock";
                condition="((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
                action="true spawn ExileClient_object_lock_toggle";
            };
            class Unlock: ExileAbstractAction
            {
                title="Unlock";
                condition="((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
                action="false spawn ExileClient_object_lock_toggle";
            };
            class Repair: ExileAbstractAction
            {
                title="Repair";
                condition="call ExileClient_object_vehicle_interaction_show";
                action="_this call ExileClient_object_vehicle_Repair";
            };
            class Flip: ExileAbstractAction
            {
                title="Flip";
                condition="call ExileClient_object_vehicle_interaction_show";
                action="_this call Exileclient_object_vehicle_flip";
            };
            class Refuel: ExileAbstractAction
            {
                title="Refuel";
                condition="call ExileClient_object_vehicle_interaction_show";
                action="_this call ExileClient_object_vehicle_refuel";
            };
            class DrainFuel: ExileAbstractAction
            {
                title="Drain Fuel";
                condition="call ExileClient_object_vehicle_interaction_show";
                action="_this call ExileClient_object_vehicle_drain";
			};
		};
	};
	
	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_Repair";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_Object_lock_SetPin";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "isNull (attachedTo ExileClientInteractionObject)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject))";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "true";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction. Does not refund anything YET!
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "true";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

		};
	};

	/*
		Tent, Storage crate etc.
	*/
	class Container 
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "true";
				action = "_this spawn ExileClient_object_container_pack";
			};
		};
	};

	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class Upgrade: ExileAbstractAction
			{
				title = "Upgrade";
				condition = "true";
				action = "_this call ExileClient_gui_upgradeterritoryDialog_request";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_Repair";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	class BushSource
	{
		name = "Bushes";
		models[] = {" b_"};
	};

	class StoneSource
	{
		name = "Stones, stone walls or rocks";
		models[] = 
		{
			// We are using find() so this should match everything that is out of stone/rock
			"stone",
			"Stone",
			"Rock",
			"rock",
			"cobble",
			"Cobble",
			"sea_wall_f.p3d"
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d"
		};	
	};

	class Wrecks
	{
		name = "Wrecks";
		models[] = 
		{
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/
		};
	};

	class Trash
	{
		name = "Trash";
		models[] = 
		{
			"trash",
			"garbage",
			"crabcages_f.p3d",
			"fishinggear",
			"junkpile_f.p3d",
			"wheeliebin_01_f.p3d"
/*
			"barreltrash_f.p3d",
			"barreltrash_grey_f.p3d",
			"crabcages_f.p3d",
			"fishinggear_01_f.p3d",
			"fishinggear_02_f.p3d",
			"garbage_square3_f.p3d",
			"garbage_square5_f.p3d",
			"garbagebags_f.p3d",
			"garbagebarrel_01_f.p3d",
			"garbagecontainer_closed_f.p3d",
			"garbagecontainer_open_f.p3d",
			"garbagepallet_f.p3d",
			"garbagewashingmachine_f.p3d",
			"junkpile_f.p3d",
			"wheeliebin_01_f.p3d"
*/
		};
	};
};
class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 60;

	// Damage taken form 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 90;
	hungerRegen = 90;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,				    15,			45 		            }, // Level 1
        {10000,				    30,			90 		            }, // Level 2 
        {15000,				    45,			135		            }, // Level 3
        {25000,				    60,			180		            }, // Level 4
        {35000,				    75,			225		            }, // Level 5
        {45000,				    90,			270		            }, // Level 6
        {55000,				    105,		315		            }, // Level 7
        {65000,				    120,		360		            }, // Level 8
        {75000,			        135,		405		            }, // Level 9
        {100000,			    150,		450		            }, // Level 10	
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 50; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 3;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 1000;

	// Amount of pop tabs or respect per object to pay
	popTabAmountPerObject = 10;
	respectAmountPerObject = 5;
};
class CfgTraderCategories 
{
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Exile_Uniform_Woodland",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls"	
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] = 
		{
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr"
		};
	};

	class Headgear 
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O"
		};
	};


	class PointerAttachments 
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"acc_flashlight",
			"acc_pointer_IR"
		};
	};

	class BipodAttachments 
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] = 
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli"
		};
	};

	class MuzzleAttachments 
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] = 
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments 
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			//"optic_tws",
			//"optic_tws_mg",
			"optic_Yorris"
		};
	};

	class Hardware 
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_WoodDoorKit",
			"Exile_Item_WoodDoorwayKit",
			"Exile_Item_WoodFloorKit",
			"Exile_Item_WoodFloorPortKit",
			"Exile_Item_WoodGateKit",
			//"Exile_Item_WoodDrawBridgeKit",	//removed as it doesnt work properly yet
			"Exile_Item_WoodStairsKit",
			"Exile_Item_WoodSupportKit",
			"Exile_Item_WoodWallHalfKit",
			"Exile_Item_WoodWallKit",
			"Exile_Item_WoodWindowKit",
			"Exile_Item_WorkBenchKit",
            "Exile_Item_FortificationUpgrade",			
			"Exile_Item_Matches",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",			
			"Exile_Item_CookingPot",			
			"Exile_Item_Rope",
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock",
			"Exile_Melee_Axe",
			"Exile_Item_Laptop",
			"Exile_Item_BaseCameraKit",
			"Exile_Item_PortableGeneratorKit"
			
			/*
			"Exile_Item_MetalScrews",
			"Exile_Item_Cement",
			"Exile_Item_Sand",			
			"Exile_Item_MetalWire",
			"Exile_Item_MetalHedgehogKit",
			"Exile_Item_CarWheel"
			*/
		};
	};

	class Food 
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",		
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_GloriousKnakworst_cooked",
			"Exile_Item_Surstromming",
			"Exile_Item_Surstromming_cooked",
			"Exile_Item_SausageGravy",
			"Exile_Item_SausageGravy_cooked",
			"Exile_Item_Catfood",
			"Exile_Item_Catfood_cooked",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_ChristmasTinner_cooked",
			"Exile_Item_BBQSandwich",
			"Exile_Item_BBQSandwich_cooked",
			"Exile_Item_Dogfood",
			"Exile_Item_Dogfood_cooked",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee"
		};
	};

	class Drinks 
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Binocular",
			
			/*
			"class Exile_Item_Foolbox",
			"class Exile_Item_CordlessScrewdriver",
			"class Exile_Item_FireExtinguisher",
			"class Exile_Item_Hammer",
			"class Exile_Item_OilCanister",
			"class Exile_Item_Screwdriver",
			"class Exile_Item_Shovel",
			"class Exile_Item_Wrench",
			"Exile_Item_ToiletPaper",			
			"class Exile_Item_SleepingMat",			
			"class Exile_Item_ZipTie",
			*/

			"Rangefinder",
			/*"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",*/
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8"
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin"

			// Not available in 0.9.4!
			//"Exile_Item_Defibrillator"
		};
	};
	
	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR"		
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			//"130Rnd_338_Mag", SPMG
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			//"150Rnd_93x64_Mag", // NAVID
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag"
		};
	};

	class Flares 
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes 
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};	

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] = 
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag"
		};
	};
	
	class RocketLauncher
    {
        name = "Rocketlaunchers";
        icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
        items[] = 
        {
            "launch_NLAW_F",
            "launch_RPG32_F",
            "launch_B_Titan_F",
            "launch_I_Titan_F",
            "launch_O_Titan_F",
            "launch_Titan_F",
            "launch_B_Titan_short_F",
            "launch_I_Titan_short_F",
            "launch_O_Titan_short_F",
            "launch_Titan_short_F"
        };
    };

    class Rockets 
    {
        name = "Rockets";
        icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
        items[] = 
        {    
            "RPG32_F",
            "RPG32_HE_F",
            "NLAW_F",
            "Titan_AA",
            "Titan_AP",
            "Titan_AT"
        };
    };

	class Pistols 
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F"
		};
	};

	class SubMachineGuns 
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F"
		};
	};

	class LightMachineGuns 
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F"

			/*
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F"
			*/
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F"
		};
	};

	class A3Vehicles
	{
		name = "Arma3 Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike",
			"Exile_Bike_QuadBike_Black",	
			"Exile_Bike_QuadBike_Blue",	
			"Exile_Bike_QuadBike_Red",	
			"Exile_Bike_QuadBike_White",	
			"Exile_Bike_QuadBike_Nato",	
			"Exile_Bike_QuadBike_Csat",	
			"Exile_Bike_QuadBike_Fia",	
			"Exile_Bike_QuadBike_Guerilla01",
			"Exile_Bike_QuadBike_Guerilla02",			
			"Exile_Car_Kart_Black",
			"Exile_Car_Lada_Green",
			"Exile_Car_Lada_Taxi",
	        "Exile_Car_Lada_Hipster",
			"Exile_Car_Volha_White",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUVXL_Black",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
	        "Exile_Car_Offroad_Repair_Civillian",
	        "Exile_Car_Offroad_Repair_Red",
	        "Exile_Car_Offroad_Repair_Beige",
	        "Exile_Car_Offroad_Repair_White",
	        "Exile_Car_Offroad_Repair_Blue",
	        "Exile_Car_Offroad_Repair_DarkRed",
	        "Exile_Car_Offroad_Repair_BlueCustom", 
	        "Exile_Car_Offroad_Repair_Guerilla01", 
	        "Exile_Car_Offroad_Repair_Guerilla02", 					
			"Exile_Car_Ifrit",
			"Exile_Car_Hunter",
			"Exile_Car_Strider",
			"Exile_Car_Ikarus_Blue", 	
	        "Exile_Car_Ikarus_Party",
			"Exile_Car_Van_Black",
            "Exile_Car_Van_Fuel_Black",		     					
		    "Exile_Car_Van_Fuel_White",								
		    "Exile_Car_Van_Fuel_Red",								
		    "Exile_Car_Van_Fuel_Guerilla01",							
		    "Exile_Car_Van_Fuel_Guerilla02",							
		    "Exile_Car_Van_Fuel_Guerilla03",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Box_White", 		
            "Exile_Car_Van_Box_Red", 			
            "Exile_Car_Van_Box_Guerilla01", 	
			"Exile_Car_Van_Box_Guerilla02", 	
			"Exile_Car_Van_Box_Guerilla03",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Open_Blue",		
            "Exile_Car_Ural_Open_Yellow",	
			"Exile_Car_Ural_Open_Military",
			"Exile_Car_Ural_Covered_Worker", 
		    "Exile_Car_Ural_Covered_Blue",	
            "Exile_Car_Ural_Covered_Yellow",	
    	    "Exile_Car_Ural_Covered_Military",		
            "B_Truck_01_ammo_F",
            "I_Truck_02_ammo_F" 			
		};  	
	}; 

		class HVPVehicles
	{
		name = "HVP Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "Mrshounka_yamaha_p_bf",
            "Mrshounka_yamaha_p_g",
            "Mrshounka_yamaha_p_j",
            "Mrshounka_yamaha_p_noir",
            "Mrshounka_yamaha_p_o",
            "Mrshounka_yamaha_p_rose",
            "Mrshounka_yamaha_p_r",
            "Mrshounka_yamaha_p_v",
		    "Mrshounka_a3_308_civ_bleufonce",
            "Mrshounka_a3_308_civ_grise",
            "Mrshounka_a3_308_civ_jaune",
            "Mrshounka_a3_308_civ_noir",
            "Mrshounka_a3_308_civ_orange",
            "Mrshounka_a3_308_civ_rose",
            "Mrshounka_a3_308_civ_rouge",
            "Mrshounka_a3_308_civ_violet",
            "shounka_buggy_bleufonce",
            "shounka_buggy_grise",
            "shounka_buggy_jaune",
            "shounka_buggy_noir",
            "shounka_buggy_orange",
            "shounka_buggy_rose",
            "shounka_buggy_rouge",
            "shounka_buggy_violet",		
            "Mrshounka_Vandura_civ",
            "Mrshounka_Vandura_civ_bleufonce",
            "Mrshounka_Vandura_civ_grise",
            "Mrshounka_Vandura_civ_jaune",
            "Mrshounka_Vandura_civ_noir",
            "Mrshounka_Vandura_civ_orange",
            "Mrshounka_Vandura_civ_rose",
            "Mrshounka_Vandura_civ_rouge",
            "Mrshounka_Vandura_civ_violet",		
            "Mr_Own_hummer_civ_noir",
            "Mr_Own_hummer_civ_bleufonce",
            "Mr_Own_hummer_civ_grise",
            "Mr_Own_hummer_civ_jaune",
            "Mr_Own_hummer_civ_orange",
            "Mr_Own_hummer_civ_rose",
            "Mr_Own_hummer_civ_rouge",
            "Mr_Own_hummer_civ_violet",		
            "SIG_Roadrunner",
            "SIG_Hubcaps",
            "SIG_Magnums",
            "SIG_Hcode",		
            "shounka_avalanche_bleufonce",
            "shounka_avalanche_grise",
            "shounka_avalanche_jaune",
            "shounka_avalanche_noir",
            "shounka_avalanche_orange",
            "shounka_avalanche_rose",
            "shounka_avalanche_rouge",
            "shounka_avalanche_violet",
            "Mrshounka_corbillard_c_bleufonce",
            "Mrshounka_corbillard_c_grise",
            "Mrshounka_corbillard_c_jaune",
            "Mrshounka_corbillard_c_noir",
            "Mrshounka_corbillard_c_orange",
            "Mrshounka_corbillard_c_rose",
            "Mrshounka_corbillard_c_rouge",
            "Mrshounka_corbillard_c_violet",
            "SIG_Superbee",
            "SIG_SuperbeeY",
            "SIG_SuperbeeB",
            "SIG_SuperbeeL",
            "SIG_SuperbeeM",
            "SIG_SuperbeeG",
            "Mr_Own_buggy_bleufonce",
            "Mr_Own_buggy_grise",
            "Mr_Own_buggy_jaune",
            "Mr_Own_buggy_noir",
            "Mr_Own_buggy_orange",
            "Mr_Own_buggy_rose",
            "Mr_Own_buggy_rouge",
            "Mr_Own_buggy_violet",
            "shounka_limo_civ_bleufonce",
            "shounka_limo_civ_grise",
            "shounka_limo_civ_jaune",
            "shounka_limo_civ_noir",
            "shounka_limo_civ_orange",
            "shounka_limo_civ_rose",
            "shounka_limo_civ_violet",
            "Mr_Own_dodge15_civ",
            "Mr_Own_dodge15_civ_bleufonce",
            "Mr_Own_dodge15_civ_grise",
            "Mr_Own_dodge15_civ_jaune",
            "Mr_Own_dodge15_civ_noir",
            "Mr_Own_dodge15_civ_orange",
            "Mr_Own_dodge15_civ_rose",
            "Mr_Own_dodge15_civ_rouge",
            "Mr_Own_dodge15_civ_violet",
            "shounka_f430_spider_bleufonce",
            "shounka_f430_spider_grise",
            "shounka_f430_spider_jaune",
            "shounka_f430_spider_noir",
            "shounka_f430_spider_rose",
            "shounka_f430_spider_rouge",
            "shounka_f430_spider_violet",
            "Mrshounka_lykan_c_bleufonce",
            "Mrshounka_lykan_c_grise",
            "Mrshounka_lykan_c_jaune",
            "Mrshounka_lykan_c_noir",
            "Mrshounka_lykan_c_orange",
            "Mrshounka_lykan_c_rose",
            "Mrshounka_lykan_c_rouge",
            "Mrshounka_lykan_c_violet"
		}; 
	};     

	class HVPTrucks
	{
		name = "HVP Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "shounka_monsteur_bleufonce",
            "shounka_monsteur_grise",
            "shounka_monsteur_jaune",
            "shounka_monsteur_noir",
            "shounka_monsteur_orange",
            "shounka_monsteur_rose",
            "shounka_monsteur_rouge",
            "shounka_monsteur_violet",	
            "shounka_a3_dafxf_euro6_f",
            "shounka_ivceco_bleufonce",
            "shounka_ivceco_grise",
            "shounka_ivceco_jaune",
            "shounka_ivceco_noir",
            "shounka_ivceco_orange",
            "shounka_ivceco_rose",
            "shounka_ivceco_rouge",
            "shounka_ivceco_violet"	
		};     
	};	
	
	class Military
	{
		name = "Military Armed Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "Exile_Car_Offroad_Armed_Guerilla01",
	        "Exile_Car_Offroad_Armed_Guerilla02", 	
			"I_MRAP_03_hmg_F",
			"I_MRAP_03_gmg_F",			
 			"O_MRAP_02_hmg_F",
			"O_MRAP_02_gmg_F",						
			"B_MRAP_01_hmg_F",
			"B_MRAP_01_gmg_F"			
		};     
	};
	
	class Tanks
	{
		name = "Military Tank Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"I_APC_Wheeled_03_cannon_F",
			"B_APC_Wheeled_01_cannon_F",
			"O_APC_Wheeled_02_rcws_F",
	        "B_APC_Tracked_01_rcws_F",              
	        "B_APC_Tracked_01_CRV_F",              
	        "B_APC_Tracked_01_AA_F",              
	        "B_MBT_01_cannon_F",              
	        "O_APC_Tracked_02_cannon_F",           
	        "O_APC_Tracked_02_AA_F",             
	        "O_MBT_02_cannon_F",             
	        "I_APC_tracked_03_cannon_F",             
	        "I_MBT_03_cannon_F",
            "B_MBT_01_TUSK_F",	
	        "O_MBT_02_arty_F",                          
	        "B_MBT_01_mlrs_F",                           
            "B_MBT_01_arty_F"  		
		};     
	};	
	
	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Taru_Black",
			"O_Heli_Transport_04_bench_F",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green"		
		};
	};
	
	class Helicopter
	{
		name = "Helicopters Armed";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"I_Heli_light_03_F",
			"B_Heli_Light_01_armed_F",
			"O_Heli_Attack_02_F",
            "O_Heli_Attack_02_black_F", 
            "B_Heli_Attack_01_F",
            "O_Heli_Light_02_F",
			"B_Heli_Transport_01_F",
			"B_Heli_Transport_01_camo_F"		
		};
	};	

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
		    "I_Boat_Armed_01_minigun_F"			
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Plane_Cessna"
		};
	};
	
	class HVPPlanes
	{
		name = "HVP Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "sab_camel_blu",
            "sab_camel_red",
            "MV22"	
		};
	};	
	
	class Jets
	{
		name = "Jets";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"O_Plane_CAS_02_F",
			"B_Plane_CAS_01_F", 			
			"I_Plane_Fighter_03_CAS_F",
            "I_Plane_Fighter_03_AA_F"			
		};
	};
	
	class MASHeadgear 
	{
		name = "MAS Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"G_mas_wpn_gog",
			"G_mas_wpn_gog_d",
			"G_mas_wpn_gog_m",
			"G_mas_wpn_gog_md",
			"G_mas_wpn_gog_g",
			"G_mas_wpn_gog_gd",
			"G_mas_wpn_mask",
			"G_mas_wpn_mask_b",
			"G_mas_wpn_wrap",
			"G_mas_wpn_wrap_f",
			"G_mas_wpn_wrap_t",
			"G_mas_wpn_wrap_b",
			"G_mas_wpn_wrap_c",
			"G_mas_wpn_wrap_g",
			"G_mas_wpn_wrap_gog",
			"G_mas_wpn_wrap_gog_f",
			"G_mas_wpn_wrap_gog_t",
			"G_mas_wpn_wrap_gog_b",
			"G_mas_wpn_wrap_gog_c",
			"G_mas_wpn_wrap_gog_g",
			"G_mas_wpn_wrap_mask",
			"G_mas_wpn_wrap_mask_t",
			"G_mas_wpn_wrap_mask_f",
			"G_mas_wpn_wrap_mask_b",
			"G_mas_wpn_wrap_mask_c",
			"G_mas_wpn_wrap_mask_g",
			"G_mas_wpn_bala",
			"G_mas_wpn_bala_b",
			"G_mas_wpn_bala_t",
			"G_mas_wpn_bala_gog",
			"G_mas_wpn_bala_gog_b",
			"G_mas_wpn_bala_gog_t",
			"G_mas_wpn_bala_mask",
			"G_mas_wpn_bala_mask_b",
			"G_mas_wpn_bala_mask_t",
			"G_mas_wpn_shemag",
			"G_mas_wpn_shemag_r",
			"G_mas_wpn_shemag_w",
			"G_mas_wpn_shemag_gog",
			"G_mas_wpn_shemag_mask",
			"G_mas_wpn_gasmask"
		};
	};

	class MASPointerAttachments 
	{
		name = "MAS Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"acc_mas_flash_gun",
			"acc_mas_pointer_gun_IR",
			"acc_mas_pointer_IR",
			"acc_mas_pointer_IR_b",
			"acc_mas_pointer_IR_top",
			"acc_mas_pointer_IR_top_b",
			"acc_mas_pointer_IR2",
			"acc_mas_pointer_IR2_top",
			"acc_mas_pointer_IR2c",
			"acc_mas_pointer_IR2c_top"
		};
	};

	class MASMuzzleAttachments 
	{
		name = "MAS Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
			"muzzle_mas_snds_L",
			"muzzle_mas_snds_LM",
			"muzzle_mas_snds_C",
			"muzzle_mas_snds_MP5SD6",
			"muzzle_mas_snds_M",
			"muzzle_mas_snds_Mc",
			"muzzle_mas_snds_MP7",
			"muzzle_mas_snds_AK",
			"muzzle_mas_snds_SM",
			"muzzle_mas_snds_SMc",
			"muzzle_mas_snds_SH",
			"muzzle_mas_snds_SHc",
			"muzzle_mas_snds_SV",
			"muzzle_mas_snds_SVc",
			"muzzle_mas_snds_SVD",
			"muzzle_mas_snds_KSVK"
		};
	};

	class MASOpticAttachments 
	{
		name = "MAS Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"optic_mas_DMS",
			"optic_mas_DMS_c",
			"optic_mas_Holosight_blk",
			"optic_mas_Holosight_camo",
			"optic_mas_Arco_blk",
			"optic_mas_Arco_camo",
			"optic_mas_Hamr_camo",
			"optic_mas_Aco_camo",
			"optic_mas_ACO_grn_camo",
			"optic_mas_MRCO_camo",
			"optic_mas_zeiss",
			"optic_mas_zeiss_c",
			"optic_mas_zeiss_eo",
			"optic_mas_zeiss_eo_c",
			"optic_mas_acog",
			"optic_mas_acog_c",
			"optic_mas_acog_eo",
			"optic_mas_acog_eo_c",
			"optic_mas_acog_rd",
			"optic_mas_acog_rd_c",
			"optic_mas_handle",
			"optic_mas_aim",
			"optic_mas_aim_c",
			"optic_mas_PSO",
			"optic_mas_PSO_c",
			"optic_mas_PSO_eo",
			"optic_mas_PSO_eo_c",
			"optic_mas_PSO_nv",
			"optic_mas_PSO_nv_c",
			"optic_mas_PSO_nv_eo",
			"optic_mas_PSO_nv_eo_c",
			"optic_mas_PSO_day",
			"optic_mas_PSO_nv_day",
			"optic_mas_term",
			"optic_mas_MRD",
			"optic_mas_LRPS",
			"optic_mas_kobra",
			"optic_mas_kobra_c",
			"optic_mas_nspu",
			"optic_mas_goshawk",
			"optic_mas_PSO_kv",
			"optic_mas_PSO_kv_c"
		};
	};

	class MASTools
	{
		name = "MAS Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"NVGoggles_mas_h",
			"Rangefinder_mas_h",
			"Laserdesignator_mas_h"
		};
	};

	class MASBackpacks
	{
		name = "MAS Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"B_mas_m_Bergen_us",
			"B_mas_m_Bergen_us_g",
			"B_mas_m_Bergen_us_m",
			"B_mas_m_Bergen_us_b",
			"B_mas_m_Bergen_us_w",
			"B_mas_m_Bergen_acr",
			"B_mas_m_Bergen_acr_c",
			"B_mas_m_Bergen_acr_g",
			"B_mas_m_Bergen_acr_w",
			"B_mas_m_Bergen_rpg",
			"B_mas_m_Bergen_rpg_b",
			"B_mas_m_Bergen_al",
			"B_mas_AssaultPack_mul",
			"B_mas_Kitbag_mul",
			"B_mas_Bergen_mul",
			"B_mas_AssaultPack_des",
			"B_mas_Kitbag_des",
			"B_mas_Bergen_des",
			"B_mas_AssaultPack_black",
			"B_mas_Kitbag_black",
			"B_mas_Bergen_black",
			"B_mas_AssaultPack_wint",
			"B_mas_Kitbag_wint",
			"B_mas_Bergen_wint",
			"B_mas_AssaultPack_rng",
			"B_mas_Kitbag_rng",
			"B_mas_Bergen_rng",
			"O_mas_Bergen_flo",
			"O_mas_Bergen_blk",
			"O_mas_Bergen_rtan"
		};
	};

	class MASAmmunition
	{
		name = "MAS Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"30Rnd_mas_556x45sd_Stanag",
			"200Rnd_mas_556x45_Stanag",
			"200Rnd_mas_556x45_T_Stanag",
			"100Rnd_mas_762x51_Stanag",
			"100Rnd_mas_762x51_T_Stanag",
			"100Rnd_mas_762x54_mag",
			"100Rnd_mas_762x54_T_mag",
			"100Rnd_mas_762x39_mag",
			"100Rnd_mas_762x39_T_mag",
			"30Rnd_mas_545x39_mag",
			"30Rnd_mas_545x39_T_mag",
			"100Rnd_mas_545x39_mag",
			"100Rnd_mas_545x39_T_mag",
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag",
			"20Rnd_mas_762x51sd_Stanag",
			"5Rnd_mas_762x51_Stanag",
			"5Rnd_mas_762x51_T_Stanag",
			"10Rnd_mas_338_Stanag",
			"10Rnd_mas_338_T_Stanag",
			"30Rnd_mas_762x39_mag",
			"30Rnd_mas_762x39_T_mag",
			"10Rnd_mas_762x54_mag",
			"10Rnd_mas_762x54_T_mag",
			"5Rnd_mas_127x99_Stanag",
			"5Rnd_mas_127x99_T_Stanag",
			"5Rnd_mas_127x108_mag",
			"5Rnd_mas_127x108_T_mag",
			"30Rnd_mas_9x21_Stanag",
			"30Rnd_mas_9x21d_Stanag",
			"12Rnd_mas_45acp_Mag",
			"10Rnd_mas_45acp_Mag",
			"8Rnd_mas_45acp_Mag",
			"15Rnd_mas_9x21_Mag",
			"17Rnd_mas_9x21_Mag",
			"13Rnd_mas_9x21_Mag",
			"8Rnd_mas_9x18_mag",
			"7Rnd_mas_12Gauge_Slug",
			"7Rnd_mas_12Gauge_Pellets",
			"10Rnd_mas_12Gauge_Slug",
			"10Rnd_mas_12Gauge_Pellets",
			"64Rnd_mas_9x18_mag",
			"20Rnd_mas_765x17_Mag",
			"25Rnd_mas_9x19_Mag",
			"40Rnd_mas_46x30_Mag",
			"20Rnd_mas_12Gauge_Slug",
			"20Rnd_mas_12Gauge_Pellets",
			"150Rnd_mas_556x45_Stanag",
			"150Rnd_mas_556x45_T_Stanag",
			"30Rnd_mas_9x39_mag",
			"20Rnd_mas_9x39_mag"
		};
	};

	class MASPistols 
	{
		name = "MAS Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
			"hgun_mas_mp7p_F",
			"hgun_mas_uzi_F",
			"hgun_mas_sa61_F",
			"hgun_mas_m9_F",
			"hgun_mas_bhp_F",
			"hgun_mas_glock_F",
			"hgun_mas_p226_F",
			"hgun_mas_acp_F",
			"hgun_mas_usp_F",
			"hgun_mas_usp_l_F",
			"hgun_mas_glocksf_F",
			"hgun_mas_grach_F",
			"hgun_mas_mak_F",
			"hgun_mas_mak_F_sd"
		};
	};

	class MASSubMachineGuns 
	{
		name = "MAS Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_mas_mp40",
			"arifle_mas_mp40_o",
			"arifle_mas_sten",
			"arifle_mas_m1014",
			"arifle_mas_aa12",
			"arifle_mas_mp5",
			"arifle_mas_mp5_v",
			"arifle_mas_mp5_d",
			"arifle_mas_mp5sd_ds",
			"hgun_mas_mp7_F"
		};
	};

	class MASLightMachineGuns 
	{
		name = "MAS Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_mas_m27",
			"arifle_mas_m27m",
			"arifle_mas_m27_v",
			"arifle_mas_m27m_v",
			"arifle_mas_m27_d",
			"arifle_mas_m27m_d",
			"LMG_mas_Mk200_F",
			"LMG_mas_M249_F",
			"LMG_mas_M249_F_v",
			"LMG_mas_M249_F_d",
			"LMG_mas_M249a_F",
			"LMG_mas_Mk48_F",
			"LMG_mas_Mk48_F_v",
			"LMG_mas_Mk48_F_d",
			"LMG_mas_M240_F",
			"LMG_mas_mg3_F",
			"LMG_mas_M60_F",
			"LMG_mas_m72_F",
			"LMG_mas_rpk_F",
			"LMG_mas_pkm_F",
			"LMG_mas_pech_F"
		};
	};

	class MASAssaultRifles
	{
		name = "MAS Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_mas_hk416",
			"arifle_mas_hk416_gl",
			"arifle_mas_hk416_m203",
			"arifle_mas_hk416_v",
			"arifle_mas_hk416_gl_v",
			"arifle_mas_hk416_m203_v",
			"arifle_mas_hk416_d",
			"arifle_mas_hk416_gl_d",
			"arifle_mas_hk416_m203_d",
			"arifle_mas_hk416c",
			"arifle_mas_hk416_m203c",
			"arifle_mas_hk416c_v",
			"arifle_mas_hk416_m203c_v",
			"arifle_mas_hk416c_d",
			"arifle_mas_hk416_m203c_d",
			"arifle_mas_m4",
			"arifle_mas_m4_gl",
			"arifle_mas_m4_m203",
			"arifle_mas_m4_v",
			"arifle_mas_m4_gl_v",
			"arifle_mas_m4_m203_v",
			"arifle_mas_m4_d",
			"arifle_mas_m4_gl_d",
			"arifle_mas_m4_m203_d",
			"arifle_mas_m4vlt",
			"arifle_mas_m4c",
			"arifle_mas_m4_m203c",
			"arifle_mas_m4c_v",
			"arifle_mas_m4_m203c_v",
			"arifle_mas_m4c_d",
			"arifle_mas_m4_m203c_d",
			"arifle_mas_m16",
			"arifle_mas_m16_gl",
			"arifle_mas_l119",
			"arifle_mas_l119c",
			"arifle_mas_l119_gl",
			"arifle_mas_l119_m203",
			"arifle_mas_l119_v",
			"arifle_mas_l119c_v",
			"arifle_mas_l119_gl_v",
			"arifle_mas_l119_m203_v",
			"arifle_mas_l119_d",
			"arifle_mas_l119c_d",
			"arifle_mas_l119_gl_d",
			"arifle_mas_l119_m203_d",
			"arifle_mas_g36c",
			"arifle_mas_mk16",
			"arifle_mas_mk16_gl",
			"arifle_mas_mk16_l",
			"arifle_mas_mk16_l_gl",
			"arifle_mas_mk17",
			"arifle_mas_mk17_gl",
			"arifle_mas_arx",
			"arifle_mas_arx_gl",
			"arifle_mas_arx_l",
			"arifle_mas_arx_l_gl",
			"arifle_mas_g3",
			"arifle_mas_g3_m203",
			"arifle_mas_g3s",
			"arifle_mas_g3s_m203",
			"arifle_mas_fal",
			"arifle_mas_fal_m203",
			"arifle_mas_ak_74m",
			"arifle_mas_ak_74m_gl",
			"arifle_mas_ak_74m_c",
			"arifle_mas_ak_74m_gl_c",
			"arifle_mas_aks74",
			"arifle_mas_aks74_gl",
			"arifle_mas_ak74",
			"arifle_mas_ak74_gl",
			"arifle_mas_ak_74m_sf",
			"arifle_mas_ak_74m_sf_gl",
			"arifle_mas_ak_74m_sf_c",
			"arifle_mas_ak_74m_sf_gl_c",
			"arifle_mas_aks_74_sf",
			"arifle_mas_aks_74_sf_gl",
			"arifle_mas_ak12_sf",
			"arifle_mas_ak12_sf_gl",
			"arifle_mas_akms",
			"arifle_mas_akms_gl",
			"arifle_mas_akms_c",
			"arifle_mas_akms_gl_c",
			"arifle_mas_akm",
			"arifle_mas_akm_gl",
			"arifle_mas_m70",
			"arifle_mas_m70_gl",
			"arifle_mas_m70ab",
			"arifle_mas_m70ab_gl",
			"arifle_mas_asval",
			"arifle_mas_asval_ds",
			"arifle_mas_aks74u",
			"arifle_mas_aks74u_c"
		};
	};

	class MASSniperRifles
	{
		name = "MAS Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_mas_hk417c",
			"arifle_mas_hk417_m203c",
			"arifle_mas_hk417c_v",
			"arifle_mas_hk417_m203c_v",
			"arifle_mas_hk417c_d",
			"arifle_mas_hk417_m203c_d",
			"arifle_mas_m14",
			"arifle_mas_lee",
			"srifle_mas_hk417",
			"srifle_mas_hk417_v",
			"srifle_mas_hk417_d",
			"srifle_mas_sr25",
			"srifle_mas_sr25_v",
			"srifle_mas_sr25_d",
			"srifle_mas_ebr",
			"srifle_mas_mk17s",
			"srifle_mas_m110",
			"srifle_mas_m107",
			"srifle_mas_m107_v",
			"srifle_mas_m107_d",
			"srifle_mas_m24",
			"srifle_mas_m24_v",
			"srifle_mas_m24_d",
			"srifle_mas_lrr",
			"srifle_mas_m91",
			"srifle_mas_svd",
			"srifle_mas_vss",
			"srifle_mas_ksvk",
			"srifle_mas_ksvk_c"
		};
	};
	class MASExplosive
	{
		name = "MAS Explosive Weapons";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{	
			"arifle_mas_aa12",
			"arifle_mas_m79"
		};
	};
	
	class MASLaunchers 
	{
		name = "MAS Launchers";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"mas_launch_maaws_F", 
			"mas_launch_smaw_F", 
			"mas_launch_NLAW_F",
			"mas_launch_LAW_F",
			"mas_launch_M136_F",
			"mas_launch_TitanS_F",
			"mas_launch_RPG7_F",
			"mas_launch_RPG18_F",
			"mas_launch_Metis_F",
			"mas_launch_pzf60_F",
			"mas_launch_Stinger_F",
			"mas_launch_Strela_F"
		};
	};	
	
	class MASLauncherAmmo 
	{
		name = "MAS Launcher Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"mas_MAAWS",
			"mas_MAAWS_HE",
			"mas_SMAW",
			"mas_SMAW_HE",
			"mas_SMAW_NE",
			"mas_NLAW",
			"mas_NLAW_HE",
			"mas_LAW",
			"mas_M136",
			"mas_M136_HE",
			"mas_TitanS",
			"mas_TitanS_HE",
			"mas_PG7V",
			"mas_OG7",
			"mas_PG7L",
			"mas_PG7VR",
			"mas_TBG7V",
			"mas_PG18",
			"mas_Metis",
			"mas_Metis_HE",
			"mas_pzf60",
			"mas_Stinger",
			"mas_Strela"
		};
	};	

	class MASCars
	{
		name = "MAS Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"I_mas_cars_UAZ_Unarmed",
			"I_mas_cars_UAZ_Med",
			"O_mas_cars_UAZ_Unarmed",
			"O_mas_cars_UAZ_Med",
			"B_mas_cars_Hilux_Unarmed",
			"B_mas_cars_Hilux_Med",
			"B_mas_cars_LR_Unarmed",
			"B_mas_cars_LR_Med",
			"I_mas_cars_LR_soft_Unarmed",
			"I_mas_cars_LR_soft_Med",
			"B_mas_HMMWV_UNA",
			"B_mas_HMMWV_MEV",
			"B_mas_HMMWV_UNA_des",
			"B_mas_HMMWV_MEV_des"
		};
	};

		class MASArmed
	{
		name = "MAS Armed";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"B_mas_cars_Hilux_MG",  
			"B_mas_cars_Hilux_AGS30",
			"B_mas_cars_LR_M2",
			"I_mas_cars_LR_soft_M2",
			"B_mas_HMMWV_M2",
			"B_mas_HMMWV_M2_des",			
			"B_mas_cars_Hilux_SPG9",  
			//"B_mas_cars_Hilux_RKTS",
			"B_mas_cars_Hilux_M2",
			"I_mas_BRDM2",  
			"O_mas_BRDM2",
			"I_mas_BTR60",			
			"O_mas_BTR60" 
		};
	};
	
	class MASTrucks
	{
		name = "MAS Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"I_mas_cars_Ural",
			"I_mas_cars_Ural_open",
			"I_mas_cars_Ural_repair",
			"I_mas_cars_Ural_fuel",
			"O_mas_cars_Ural",
			"O_mas_cars_Ural_open",
			"O_mas_cars_Ural_repair",
			"O_mas_cars_Ural_fuel",
			"I_mas_BMP2_Ambul_01", 
			"O_mas_BMP2_Ambul_01"
		};
	};

	class MASTanks
	{
		name = "MAS Tanks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{	
			"I_mas_T72_AAF_01", 
			"I_mas_T72B_Early_AAF_01", 
			"I_mas_T72B_AAF_01", 
			"I_mas_T72BM_AAF_01",  
			"I_mas_T55_AAF_01",  
			"I_mas_T34_AAF_01",  
			"I_mas_ZSU_AAF_01", 
			"O_mas_T72_OPF_01", 
			"O_mas_T72B_Early_OPF_01", 
			"O_mas_T72B_OPF_01", 
			"O_mas_T72BM_OPF_01",  
			"O_mas_T55_OPF_01", 
			"O_mas_ZSU_OPF_01"
		};
	};
	
	class MASChoppers
	{
		name = "MAS Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{			
			"B_mas_CH_47F",
			"B_mas_UH1Y_F",
			"B_mas_UH1Y_UNA_F",
			"B_mas_UH1Y_MEV_F",
			"B_mas_UH60M", 
			"B_mas_UH60M_SF", 
			"B_mas_UH60M_MEV",
			"I_mas_MI8", 
			"I_mas_MI8MTV", 
			"O_mas_MI8", 
			"O_mas_MI8MTV",
			"I_mas_MI24V", 
			"O_mas_MI24V"
		};
	};

	class MASPlanes
	{
		name = "MAS Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{			
			"mas_F_35C", 
			"mas_F_35C_S",
			"mas_F_35C_cas"
		};
	};

	class CUPHeadgear
	{
		name = "CUP Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{			
            "CUP_H_C_Ushanka_01",
            "CUP_H_C_Ushanka_02",
            "CUP_H_C_Ushanka_03",
            "CUP_H_C_Ushanka_04",
            "CUP_H_C_Beanie_01",
            "CUP_H_C_Beanie_02",
            "CUP_H_C_Beanie_03",
            "CUP_H_C_Beanie_04",
            "CUP_H_C_Beret_01",
            "CUP_H_C_Beret_02",
            "CUP_H_C_Beret_03",
            "CUP_H_C_Beret_04",
            "CUP_H_GER_Boonie_desert",
            "CUP_H_GER_Boonie_Flecktarn",
            "CUP_H_NAPA_Fedora",
            "CUP_H_PMC_PRR_Headset",
            "CUP_H_PMC_EP_Headset",
            "CUP_H_PMC_Cap_Tan",
            "CUP_H_PMC_Cap_Grey",
            "CUP_H_PMC_Cap_PRR_Tan",
            "CUP_H_PMC_Cap_PRR_Grey",
            "CUP_H_RACS_Beret_Blue",
            "CUP_H_RACS_Helmet_Des",
            "CUP_H_RACS_Helmet_Goggles_Des",
            "CUP_H_RACS_Helmet_Headset_Des",
            "CUP_H_RACS_Helmet_DPAT",
            "CUP_H_RACS_Helmet_Goggles_DPAT",
            "CUP_H_RACS_Helmet_Headset_DPAT",
            "CUP_H_SLA_TankerHelmet",
            "CUP_H_SLA_Helmet",
            "CUP_H_SLA_Pilot_Helmet",
            "CUP_H_SLA_OfficerCap",
            "CUP_H_SLA_SLCap",
            "CUP_H_SLA_Boonie",
            "CUP_H_SLA_Beret",
            /* "CUP_H_SLA_BeretRed", */
            "CUP_H_SLA_BeenieGreen",
            "CUP_H_TK_TankerHelmet",
            "CUP_H_TK_PilotHelmet",
            "CUP_H_TK_Helmet",
            "CUP_H_TK_Lungee",
            "CUP_H_TK_Beret",
            "CUP_H_TKI_SkullCap_01",
            "CUP_H_TKI_SkullCap_02",
            "CUP_H_TKI_SkullCap_03",
            "CUP_H_TKI_SkullCap_04",
            "CUP_H_TKI_SkullCap_05",
            "CUP_H_TKI_SkullCap_06",
            "CUP_H_TKI_Lungee_01",
            "CUP_H_TKI_Lungee_02",
            "CUP_H_TKI_Lungee_03",
            "CUP_H_TKI_Lungee_04",
            "CUP_H_TKI_Lungee_05",
            "CUP_H_TKI_Lungee_06",
            "CUP_H_TKI_Lungee_Open_01",
            "CUP_H_TKI_Lungee_Open_02",
            "CUP_H_TKI_Lungee_Open_03",
            "CUP_H_TKI_Lungee_Open_04",
            "CUP_H_TKI_Lungee_Open_05",
            "CUP_H_TKI_Lungee_Open_06",
            "CUP_H_TKI_Pakol_1_01",
            "CUP_H_TKI_Pakol_1_02",
            "CUP_H_TKI_Pakol_1_03",
            "CUP_H_TKI_Pakol_1_04",
            "CUP_H_TKI_Pakol_1_05",
            "CUP_H_TKI_Pakol_1_06",
            "CUP_H_TKI_Pakol_2_01",
            "CUP_H_TKI_Pakol_2_02",
            "CUP_H_TKI_Pakol_2_03",
            "CUP_H_TKI_Pakol_2_04",
            "CUP_H_TKI_Pakol_2_05",
            "CUP_H_TKI_Pakol_2_06",
            "CUP_H_USMC_Officer_Cap",
            "CUP_H_USMC_HelmetWDL",
            "CUP_H_USMC_HeadSet_HelmetWDL",
            "CUP_H_USMC_HeadSet_GoggleW_HelmetWDL",
            "CUP_H_USMC_Crew_Helmet",
            "CUP_H_USMC_Goggles_HelmetWDL",
            "CUP_H_USMC_Helmet_Pilot",
            "CUP_H_FR_Headset",
            "CUP_H_FR_Cap_Headset_Green",
            "CUP_H_FR_Cap_Officer_Headset",
            "CUP_H_FR_BandanaGreen",
            "CUP_H_FR_BandanaWdl",
            "CUP_H_FR_Bandana_Headset",
            "CUP_H_FR_Headband_Headset",
            "CUP_H_FR_ECH",
            "CUP_H_FR_BoonieMARPAT",
            "CUP_H_FR_BoonieWDL",
            "CUP_H_FR_BeanieGreen",
            "CUP_H_FR_PRR_BoonieWDL",
            "CUP_H_Navy_CrewHelmet_Blue",
            "CUP_H_Navy_CrewHelmet_Brown",
            "CUP_H_Navy_CrewHelmet_Green",
            "CUP_H_Navy_CrewHelmet_Red",
            "CUP_H_Navy_CrewHelmet_Violet",
            "CUP_H_Navy_CrewHelmet_White",
            "CUP_H_Navy_CrewHelmet_Yellow"
		};
	};	
	
	class CUPRigs
	{
		name = "CUP Rigs";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{			
            "CUP_V_B_GER_Carrier_Rig",
            "CUP_V_B_GER_Carrier_Rig_2",
            "CUP_V_B_GER_Carrier_Vest",
            "CUP_V_B_GER_Carrier_Vest_2",
            "CUP_V_B_GER_Carrier_Vest_3",
            "CUP_V_B_GER_Vest_1",
            "CUP_V_B_GER_Vest_2",
            "CUP_V_B_MTV",
            "CUP_V_B_MTV_Patrol",
            "CUP_V_B_MTV_Pouches",
            "CUP_V_B_MTV_noCB",
            "CUP_V_B_MTV_Marksman",
            "CUP_V_B_MTV_PistolBlack",
            "CUP_V_B_MTV_LegPouch",
            "CUP_V_B_MTV_MG",
            "CUP_V_B_MTV_Mine",
            "CUP_V_B_MTV_TL",
            "CUP_V_B_PilotVest",
            "CUP_V_B_RRV_TL",
            "CUP_V_B_RRV_Officer",
            "CUP_V_B_RRV_Medic",
            "CUP_V_B_RRV_DA1",
            "CUP_V_B_RRV_DA2",
            "CUP_V_B_RRV_MG",
            "CUP_V_B_RRV_Light",
            "CUP_V_B_RRV_Scout",
            "CUP_V_B_RRV_Scout2",
            "CUP_V_B_RRV_Scout3",
            "CUP_V_B_LHDVest_Blue",
            "CUP_V_B_LHDVest_Brown",
            "CUP_V_B_LHDVest_Green",
            "CUP_V_B_LHDVest_Red",
            "CUP_V_B_LHDVest_Violet",
            "CUP_V_B_LHDVest_White",
            "CUP_V_B_LHDVest_Yellow",
            "CUP_V_I_Carrier_Belt",
            "CUP_V_I_Guerilla_Jacket",
            "CUP_V_I_RACS_Carrier_Vest",
            "CUP_V_I_RACS_Carrier_Vest_2",
            "CUP_V_I_RACS_Carrier_Vest_3",
            "CUP_V_O_SLA_Carrier_Belt",
            "CUP_V_O_SLA_Carrier_Belt02",
            "CUP_V_O_SLA_Carrier_Belt03",
            "CUP_V_O_SLA_Flak_Vest01",
            "CUP_V_O_SLA_Flak_Vest02",
            "CUP_V_O_SLA_Flak_Vest03",
            "CUP_V_O_TK_CrewBelt",
            "CUP_V_O_TK_OfficerBelt",
            "CUP_V_O_TK_OfficerBelt2",
            "CUP_V_O_TK_Vest_1",
            "CUP_V_O_TK_Vest_2",
            "CUP_V_OI_TKI_Jacket1_01",
            "CUP_V_OI_TKI_Jacket1_02",
            "CUP_V_OI_TKI_Jacket1_03",
            "CUP_V_OI_TKI_Jacket1_04",
            "CUP_V_OI_TKI_Jacket1_05",
            "CUP_V_OI_TKI_Jacket1_06",
            "CUP_V_OI_TKI_Jacket2_01",
            "CUP_V_OI_TKI_Jacket2_02",
            "CUP_V_OI_TKI_Jacket2_03",
            "CUP_V_OI_TKI_Jacket2_04",
            "CUP_V_OI_TKI_Jacket2_05",
            "CUP_V_OI_TKI_Jacket2_06",
            "CUP_V_OI_TKI_Jacket3_01",
            "CUP_V_OI_TKI_Jacket3_02",
            "CUP_V_OI_TKI_Jacket3_03",
            "CUP_V_OI_TKI_Jacket3_04",
            "CUP_V_OI_TKI_Jacket3_05",
            "CUP_V_OI_TKI_Jacket3_06",
            "CUP_V_OI_TKI_Jacket4_01",
            "CUP_V_OI_TKI_Jacket4_02",
            "CUP_V_OI_TKI_Jacket4_03",
            "CUP_V_OI_TKI_Jacket4_04",
            "CUP_V_OI_TKI_Jacket4_05",
            "CUP_V_OI_TKI_Jacket4_06"
		};
	};	
	
	class CUPUniforms
	{
		name = "CUP Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{			
            "CUP_O_TKI_Khet_Partug_01",
            "CUP_O_TKI_Khet_Partug_02",
            "CUP_O_TKI_Khet_Partug_03",
            "CUP_O_TKI_Khet_Partug_04",
            "CUP_O_TKI_Khet_Partug_05",
            "CUP_O_TKI_Khet_Partug_06",
            "CUP_O_TKI_Khet_Partug_07",
            "CUP_O_TKI_Khet_Partug_08",
            "CUP_O_TKI_Khet_Jeans_01",
            "CUP_O_TKI_Khet_Jeans_02",
            "CUP_O_TKI_Khet_Jeans_03",
            "CUP_O_TKI_Khet_Jeans_04",
            "CUP_U_C_Pilot_01",
            "CUP_U_C_Citizen_01",
            "CUP_U_C_Citizen_02",
            "CUP_U_C_Citizen_03",
            "CUP_U_C_Citizen_04",
            "CUP_U_C_Worker_01",
            "CUP_U_C_Worker_02",
            "CUP_U_C_Worker_03",
            "CUP_U_C_Worker_04",
            "CUP_U_C_Profiteer_01",
            "CUP_U_C_Profiteer_02",
            "CUP_U_C_Profiteer_03",
            "CUP_U_C_Profiteer_04",
            "CUP_U_C_Woodlander_01",
            "CUP_U_C_Woodlander_02",
            "CUP_U_C_Woodlander_03",
            "CUP_U_C_Woodlander_04",
            "CUP_U_C_Villager_01",
            "CUP_U_C_Villager_02",
            "CUP_U_C_Villager_03",
            "CUP_U_C_Villager_04",
            "CUP_U_B_CZ_WDL_TShirt",
            "CUP_U_B_GER_Tropentarn_1",
            "CUP_U_B_GER_Tropentarn_2",
            "CUP_U_B_GER_Ghillie",
            "CUP_U_B_GER_Flecktarn_1",
            "CUP_U_B_GER_Flecktarn_2",
            "CUP_U_B_GER_Fleck_Ghillie",
            "CUP_U_B_USMC_Officer",
            "CUP_U_B_USMC_PilotOverall",
            "CUP_U_B_USMC_Ghillie_WDL",
            "CUP_U_B_USMC_MARPAT_WDL_Sleeves",
            "CUP_U_B_USMC_MARPAT_WDL_RolledUp",
            "CUP_U_B_USMC_MARPAT_WDL_Kneepad",
            "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads",
            "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad",
            "CUP_U_B_FR_SpecOps",
            "CUP_U_B_FR_Scout",
            "CUP_U_B_FR_Scout1",
            "CUP_U_B_FR_Scout2",
            "CUP_U_B_FR_Scout3",
            "CUP_U_B_FR_Officer",
            "CUP_U_B_FR_Corpsman",
            "CUP_U_B_FR_DirAction",
            "CUP_U_B_FR_DirAction2",
            "CUP_U_B_FR_Light",
            "CUP_U_I_GUE_Flecktarn",
            "CUP_U_I_GUE_Flecktarn2",
            "CUP_U_I_GUE_Flecktarn3",
            "CUP_U_I_GUE_Woodland1",
            "CUP_U_I_Ghillie_Top",
            "CUP_U_I_RACS_PilotOverall",
            "CUP_U_I_RACS_Desert_1",
            "CUP_U_I_RACS_Desert_2",
            "CUP_U_I_RACS_Urban_1",
            "CUP_U_I_RACS_Urban_2",
            "CUP_U_O_SLA_Officer",
            "CUP_U_O_SLA_Officer_Suit",
            "CUP_U_O_SLA_MixedCamo",
            "CUP_U_O_SLA_Green",
            "CUP_U_O_SLA_Urban",
            "CUP_U_O_SLA_Desert",
            "CUP_U_O_SLA_Overalls_Pilot",
            "CUP_U_O_SLA_Overalls_Tank",
            "CUP_U_O_Partisan_TTsKO",
            "CUP_U_O_Partisan_TTsKO_Mixed",
            "CUP_U_O_Partisan_VSR_Mixed1",
            "CUP_U_O_Partisan_VSR_Mixed2",
            "CUP_U_O_TK_Officer",
            "CUP_U_O_TK_MixedCamo",
            "CUP_U_O_TK_Green",
            "CUP_U_O_TK_Ghillie",
            "CUP_U_O_TK_Ghillie_Top"
		};
	};		

	class CUPAssaultRifles 
	{
		name = "CUP Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_arifle_AK74",
            "CUP_arifle_AK107",
            "CUP_arifle_AK107_GL",
            "CUP_arifle_AKS74",
            "CUP_arifle_AKS74U",
            "CUP_arifle_AK74_GL",
            "CUP_arifle_AKM",
            "CUP_arifle_AKS",
            "CUP_arifle_AKS_Gold",
            "CUP_arifle_RPK74",
            "CUP_arifle_AK107_GL_kobra",
            "CUP_arifle_AK107_kobra",
            "CUP_arifle_AK107_GL_pso",
            "CUP_arifle_AK107_pso",
            "CUP_arifle_AKS74UN_kobra_snds",
            "CUP_arifle_AKS74_Goshawk",
            "CUP_arifle_AKS74_NSPU",
            "CUP_arifle_AK74_GL_kobra",
            "CUP_arifle_CZ805_A1_ZDDot_Laser",
            "CUP_arifle_CZ805_GL_ZDDot_Laser",
            "CUP_arifle_CZ805_A2",
            "CUP_arifle_CZ805_A2_ZDDot_Flashlight_Snds",
            "CUP_arifle_CZ805B_GL_ACOG_Laser",
            "CUP_arifle_FNFAL",
            "CUP_arifle_FNFAL_ANPVS4",
            "CUP_arifle_FNFAL_railed",
            "CUP_arifle_G36A",
            "CUP_arifle_G36A_camo",
            "CUP_arifle_G36K",
            "CUP_arifle_G36K_camo",
            "CUP_arifle_G36C",
            "CUP_arifle_G36C_camo",
            "CUP_arifle_MG36",
            "CUP_arifle_MG36_camo",
            "CUP_arifle_G36C_holo_snds",
            "CUP_arifle_G36C_camo_holo_snds",
            /* "CUP_arifle_ksvk_PSO3", */
            "CUP_arifle_L85A2_Holo_laser",
            "CUP_arifle_L85A2_GL_Holo_laser",
            "CUP_arifle_L85A2_SUSAT_Laser",
            "CUP_arifle_L85A2_GL_SUSAT_Laser",
            "CUP_arifle_L85A2_CWS_Laser",
            "CUP_arifle_L85A2_ACOG_Laser",
            "CUP_arifle_L85A2",
            "CUP_arifle_L85A2_GL",
            "CUP_arifle_L85A2_GL_ACOG_Laser",
            "CUP_arifle_L86A2_ACOG",
            "CUP_arifle_L86A2",
            "CUP_arifle_M16A2",
            "CUP_arifle_M16A2_GL",
            "CUP_arifle_M16A4_Aim_Laser",
            "CUP_arifle_M16A4_ACOG_Laser",
            "CUP_arifle_M16A4_GL",
            "CUP_arifle_M16A4_GL_ACOG_Laser",
            "CUP_arifle_M4A1",
            "CUP_arifle_M4A1_camo",
            "CUP_arifle_M4A1_camo_Aim",
            "CUP_arifle_M4A3_desert_Aim_Flashlight",
            "CUP_arifle_M4A3_desert_GL_ACOG_Laser",
            "CUP_arifle_M4A1_Aim",
            "CUP_arifle_M4A1_camo_AIM_snds",
            "CUP_arifle_M4A1_GL_Holo_Flashlight",
            "CUP_arifle_M4A1_GL_ACOG_Flashlight",
            "CUP_arifle_M4A1_camo_GL_Holo_Flashlight",
            "CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds",
            "CUP_arifle_M16A4_Base",
            /* "CUP_arifle_M16A4GL", */
            "CUP_arifle_M4A1_BUIS_GL",
            "CUP_arifle_M4A1_BUIS_camo_GL",
            "CUP_arifle_M4A1_BUIS_desert_GL",
            "CUP_arifle_M4A1_black",
            "CUP_arifle_M4A1_desert",
            "CUP_arifle_Sa58P",
            "CUP_arifle_Sa58V",
            "CUP_arifle_Sa58V_ACOG_Laser",
            "CUP_arifle_Sa58V_Aim_Laser",
            "CUP_arifle_Mk16_CQC",
            "CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds",
            "CUP_arifle_Mk16_CQC_SFG_Holo",
            "CUP_arifle_Mk16_STD_EGLM_ACOG_Laser",
            "CUP_arifle_Mk16_STD_EGLM_ANPAS13c1_Laser_mfsup",
            "CUP_arifle_Mk16_STD_FG_Holo_Laser",
            "CUP_arifle_Mk16_STD_FG_LeupoldMk4CQT_Laser",
            "CUP_arifle_Mk17_CQC_SFG_Aim_mfsup",
            "CUP_arifle_Mk17_STD_FG_Aim_Laser_snds",
            "CUP_arifle_Mk20_SB11420_snds",
            "CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser",
            "CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds",
            "CUP_arifle_XM8_Compact_Rail",
            "CUP_arifle_XM8_Railed",
            "CUP_arifle_XM8_Carbine",
            "CUP_arifle_XM8_Carbine_FG",
            "CUP_arifle_XM8_Carbine_GL",
            "CUP_arifle_XM8_Compact",
            "CUP_arifle_XM8_Compact_Holo_Flashlight",
            "CUP_arifle_XM8_Railed_Holo_Laser_snds",
            "CUP_arifle_xm8_SAW",
            "CUP_arifle_xm8_sharpshooter",
            "CUP_arifle_XM8_Railed_ANPAS13c1_Laser",
            "CUP_arifle_XM8_Railed_ANPAS13c1_Laser_snds",
            "CUP_arifle_CZ805_A1",
            "CUP_arifle_CZ805_GL",
            "CUP_arifle_CZ805_A2_Holo_Laser",
            "CUP_arifle_CZ805_A1_Holo_Laser",
            "CUP_arifle_CZ805_A2_Aco_Laser",
            "CUP_arifle_CZ805_A1_Aco_Laser",
            "CUP_arifle_CZ805_A1_MRCO_Laser",
            "CUP_arifle_CZ805_A2_MRCO_Laser",
            "CUP_arifle_CZ805_GL_Hamr_Laser",
            "CUP_arifle_CZ805_B_GL",
            "CUP_arifle_CZ805_B",
            "CUP_arifle_Sa58P_des",
            "CUP_arifle_Sa58V_camo",
            "CUP_arifle_Sa58RIS1",
            "CUP_arifle_Sa58RIS1_des",
            "CUP_arifle_Sa58RIS2",
            "CUP_arifle_Sa58RIS2_camo",
            "CUP_arifle_Sa58RIS1_Aco_Laser",
            "CUP_arifle_Sa58RIS2_Arco_Laser",
            "CUP_arifle_Sa58RIS1_camo_Aco_Laser",
            "CUP_arifle_Sa58RIS2_camo_Arco_Laser",
            "CUP_arifle_Mk16_CQC_FG",
            "CUP_arifle_Mk16_CQC_SFG",
            "CUP_arifle_Mk16_CQC_EGLM",
            "CUP_arifle_Mk16_STD",
            "CUP_arifle_Mk16_STD_FG",
            "CUP_arifle_Mk16_STD_SFG",
            "CUP_arifle_Mk16_STD_EGLM",
            "CUP_arifle_Mk16_SV",
            "CUP_arifle_Mk16_CQC_EGLM_Holo_Laser_mfsup",
            "CUP_arifle_Mk17_CQC",
            "CUP_arifle_Mk17_CQC_FG",
            "CUP_arifle_Mk17_CQC_SFG",
            "CUP_arifle_Mk17_CQC_EGLM",
            "CUP_arifle_Mk17_STD",
            "CUP_arifle_Mk17_STD_FG",
            "CUP_arifle_Mk17_STD_SFG",
            "CUP_arifle_Mk17_STD_EGLM",
            "CUP_arifle_Mk20",
            "CUP_arifle_Mk20_LeupoldMk4MRT"
		};
	};	
	
	class CUPShotGuns
	{
		name = "CUP Shot Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_sgun_AA12",
            "CUP_sgun_M1014",
            "CUP_sgun_Saiga12K"
		};
	};		
	
	class CUPHandGuns 
	{
		name = "CUP Hand Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_hgun_Colt1911",
            "CUP_hgun_Colt1911_snds",
            "CUP_hgun_Compact",
            "CUP_hgun_Duty_M3X",
            "CUP_hgun_Glock17",
            "CUP_hgun_glock17_flashlight_snds",
            "CUP_hgun_glock17_snds",
            "CUP_hgun_glock17_flashlight",
            "CUP_hgun_M9",
            "CUP_hgun_M9_snds",
            "CUP_hgun_Makarov",
            "CUP_hgun_PB6P9",
            "CUP_hgun_PB6P9_snds",
            "CUP_hgun_MicroUzi",
            "CUP_hgun_MicroUzi_snds",
            "CUP_hgun_Phantom_Flashlight",
            "CUP_hgun_Phantom_Flashlight_snds",
            "CUP_hgun_TaurusTracker455",
            "CUP_hgun_TaurusTracker455_gold",
            "CUP_hgun_SA61",
            "CUP_hgun_Duty",
            "CUP_hgun_Phantom"
		};
	};	
	
	class CUPLightMachineGuns
	{
		name = "CUP Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_lmg_L7A2",
            "CUP_lmg_L110A1",
            "CUP_lmg_L110A1_Aim_Laser",
            /* "CUP_lmg_M60A4", */
            "CUP_lmg_M240",
            "CUP_lmg_M240_ElcanM143",
            "CUP_lmg_M249",
            "CUP_lmg_M249_para",
            "CUP_lmg_M249_ElcanM145_Laser",
            "CUP_lmg_M249_Laser",
            "CUP_lmg_M249_ANPAS13c2_Laser",
            "CUP_lmg_Mk48_des_Aim_Laser",
            "CUP_lmg_Mk48_wdl_Aim_Laser",
            "CUP_lmg_Mk48_des",
            "CUP_lmg_Mk48_wdl",
            "CUP_lmg_PKM",
            "CUP_lmg_Pecheneg_PScope",
            "CUP_lmg_UK59",
            "CUP_lmg_Pecheneg"
		};
	};	
	
	class CUPSubMachineGuns 
	{
		name = "CUP Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_smg_bizon",
            "CUP_smg_bizon_snds",
            "CUP_smg_EVO",
            "CUP_smg_EVO_MRad_Flashlight",
            "CUP_smg_EVO_MRad_Flashlight_Snds",
            "CUP_smg_MP5SD6",
            "CUP_smg_MP5A5"
		};
	};		
	
	class CUPSniperRifles 
	{
		name = "CUP Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_srifle_AS50_SBPMII",
            "CUP_srifle_AS50_AMPAS13c2",
            "CUP_srifle_AWM_des",
            "CUP_srifle_AWM_wdl",
            "CUP_srifle_AWM_des_SBPMII",
            "CUP_srifle_AWM_wdl_SBPMII",
            "CUP_srifle_CZ750",
            "CUP_srifle_CZ750_SOS_bipod",
            "CUP_srifle_DMR",
            "CUP_srifle_DMR_LeupoldMk4",
            "CUP_srifle_CZ550",
            "CUP_srifle_LeeEnfield",
            "CUP_srifle_M14",
            /* "CUP_srifle_M15_Aim", */
            "CUP_srifle_Mk12SPR",
            "CUP_srifle_Mk12SPR_LeupoldM3LR",
            "CUP_srifle_M24_des",
            "CUP_srifle_M24_wdl",
            "CUP_srifle_M24_ghillie",
            "CUP_srifle_M24_wdl_LeupoldMk4LRT",
            "CUP_srifle_M24_des_LeupoldMk4LRT",
            "CUP_srifle_M40A3",
            "CUP_srifle_M107_Base",
            "CUP_srifle_M107_LeupoldVX3",
            "CUP_srifle_M107_ANPAS13c2",
            "CUP_srifle_M110",
            "CUP_srifle_M110_ANPAS13c2",
            "CUP_srifle_M110_ANPVS10",
            "CUP_srifle_SVD",
            "CUP_srifle_SVD_des",
            "CUP_srifle_SVD_Des_pso",
            "CUP_srifle_SVD_pso",
            "CUP_srifle_SVD_wdl_ghillie",
            "CUP_srifle_SVD_des_ghillie_pso",
            "CUP_srifle_SVD_NSPU",
            "CUP_srifle_ksvk",
            "CUP_srifle_VSSVintorez",
            "CUP_srifle_VSSVintorez_pso",
            "CUP_srifle_AS50"
		};
	};	
	
	class CUPGrenadeLaunchers
	{
		name = "CUP Grenade Launchers";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_glaunch_M32",
            "CUP_glaunch_M79",
            "CUP_glaunch_Mk13"
		};
	};	
	
	class CUPLaunchers 
	{
		name = "CUP Launchers";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_launch_Igla",
            "CUP_launch_Javelin",
            "CUP_launch_M47",
            "CUP_launch_M136",
            "CUP_launch_MAAWS_Scope",
            "CUP_launch_Metis",
            "CUP_launch_NLAW",
            "CUP_launch_RPG7V",
            "CUP_launch_RPG18",
            "CUP_launch_Mk153Mod0_SMAWOptics",
            "CUP_launch_FIM92Stinger",
            "CUP_launch_MAAWS",
            "CUP_launch_Mk153Mod0",
            "CUP_launch_9K32Strela"
		};
	};	
	
	class CUPOpticAttachments 
	{
		name = "CUP Optic Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_optic_PSO_1",
            "CUP_optic_PSO_3",
            "CUP_optic_Kobra",
            "CUP_optic_GOSHAWK",
            "CUP_optic_NSPU",
            "CUP_optic_PechenegScope",
            "CUP_optic_MAAWS_Scope",
            "CUP_optic_SMAW_Scope",
            "CUP_optic_AN_PAS_13c2",
            "CUP_optic_LeupoldMk4",
            "CUP_optic_HoloBlack",
            "CUP_optic_HoloWdl",
            "CUP_optic_HoloDesert",
            "CUP_optic_Eotech533",
            "CUP_optic_CompM4",
            "CUP_optic_SUSAT",
            "CUP_optic_ACOG",
            "CUP_optic_CWS",
            "CUP_optic_Leupold_VX3",
            "CUP_optic_AN_PVS_10",
            "CUP_optic_CompM2_Black",
            "CUP_optic_CompM2_Woodland",
            "CUP_optic_CompM2_Woodland2",
            "CUP_optic_CompM2_Desert",
            "CUP_optic_RCO",
            "CUP_optic_RCO_desert",
            "CUP_optic_LeupoldM3LR",
            "CUP_optic_LeupoldMk4_10x40_LRT_Desert",
            "CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
            "CUP_optic_ElcanM145",
            "CUP_optic_AN_PAS_13c1",
            "CUP_optic_LeupoldMk4_CQ_T",
            "CUP_optic_ELCAN_SpecterDR",
            "CUP_optic_LeupoldMk4_MRT_tan",
            "CUP_optic_SB_11_4x20_PM",
            "CUP_optic_ZDDot",
            "CUP_optic_MRad",
            "CUP_optic_TrijiconRx01_desert",
            "CUP_optic_TrijiconRx01_black",
            "CUP_optic_AN_PVS_4"
		};
	};		
	
	class CUPMuzzleAttachments 
	{
		name = "CUP Muzzle Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_muzzle_PBS4",
            "CUP_muzzle_PB6P9",
            "CUP_muzzle_Bizon",
            "CUP_muzzle_snds_M110",
            "CUP_muzzle_snds_M14",
            "CUP_muzzle_snds_M9",
            "CUP_muzzle_snds_MicroUzi",
            "CUP_muzzle_snds_AWM",
            "CUP_muzzle_snds_G36_black",
            "CUP_muzzle_snds_G36_desert",
            "CUP_muzzle_snds_L85",
            "CUP_muzzle_snds_M16_camo",
            "CUP_muzzle_snds_M16",
            "CUP_muzzle_snds_SCAR_L",
            "CUP_muzzle_mfsup_SCAR_L",
            "CUP_muzzle_snds_SCAR_H",
            "CUP_muzzle_mfsup_SCAR_H",
            "CUP_muzzle_snds_XM8"
		};
	};	
	
	class CUPAmmo 
	{
		name = "CUP Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_20Rnd_B_AA12_Pellets",
            "CUP_20Rnd_B_AA12_74Slug", 
            "CUP_20Rnd_B_AA12_HE",
            "CUP_8Rnd_B_Beneli_74Slug",
            "CUP_8Rnd_B_Saiga12_74Slug_M",
            "CUP_8Rnd_9x18_Makarov_M",
            "CUP_8Rnd_9x18_MakarovSD_M",
            "CUP_15Rnd_9x19_M9",
            "CUP_18Rnd_9x19_Phantom",
            "CUP_6Rnd_45ACP_M",
            "CUP_17Rnd_9x19_glock17",
            "CUP_7Rnd_45ACP_1911",
            "CUP_10Rnd_9x19_Compact",
            "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
            "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
            "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
            "CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
            "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
            "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
            "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1",
            "CUP_50Rnd_UK59_762x54R_Tracer",
            "CUP_64Rnd_9x19_Bizon_M",
            "CUP_64Rnd_Green_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_Red_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_White_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M",
            "CUP_30Rnd_9x19_EVO",
            "CUP_30Rnd_9x19_UZI",
            "CUP_30Rnd_9x19_MP5",
            "CUP_20Rnd_B_765x17_Ball_M",
            "CUP_5Rnd_127x99_as50_M",
            "CUP_5Rnd_86x70_L115A1",
            "CUP_10Rnd_762x51_CZ750_Tracer",
            "CUP_10Rnd_762x51_CZ750",
            "CUP_10x_303_M",
            "CUP_5Rnd_762x51_M24",
            "CUP_10Rnd_127x99_m107",
            "CUP_20Rnd_762x51_B_M110",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_White_Tracer_762x51_M110",
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_9x39_SP5_VSS_M",
            "CUP_20Rnd_9x39_SP5_VSS_M",
            "CUP_5x_22_LR_17_HMR_M",
            "CUP_5Rnd_127x108_KSVK_M",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
            "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_556x45_Stanag",
            "CUP_30Rnd_556x45_G36",
            "CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
            "CUP_30Rnd_TE1_Green_Tracer_556x45_G36",
            "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36",
            "CUP_100Rnd_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag",
            "CUP_20Rnd_556x45_Stanag",
            "CUP_20Rnd_762x51_CZ805B",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B",
            "CUP_20Rnd_762x51_DMR",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_White_Tracer_762x51_DMR",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_30Rnd_Sa58_M_TracerG",
            "CUP_30Rnd_Sa58_M_TracerR",
            "CUP_30Rnd_Sa58_M_TracerY",
            "CUP_30Rnd_Sa58_M",
            "CUP_20Rnd_762x51_B_SCAR",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"
		};
	};		
	
	class CUPExplosivesAmmo 
	{
		name = "CUP Explosives Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_Igla_M",
            "CUP_M136_M",
            "CUP_MAAWS_HEAT_M",
            "CUP_MAAWS_HEDP_M",
            "CUP_AT13_M",
            "CUP_NLAW_M",
            "CUP_PG7V_M",
            "CUP_PG7VL_M",
            "CUP_PG7VR_M",
            "CUP_OG7_M",
            "CUP_RPG18_M",
            "CUP_SMAW_HEAA_M",
            "CUP_SMAW_HEDP_M",
            "CUP_Stinger_M",
            "CUP_Strela_2_M",
            "CUP_Dragon_EP1_M",
            "CUP_Javelin_M"			
		};
	};	
	
	class CUPSmokeAmmo 
	{
		name = "CUP Smoke Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"CUP_6Rnd_HE_M203",
            "CUP_6Rnd_FlareWhite_M203",
            "CUP_6Rnd_FlareGreen_M203",
            "CUP_6Rnd_FlareRed_M203",
            "CUP_6Rnd_FlareYellow_M203",
            "CUP_6Rnd_Smoke_M203",
            "CUP_6Rnd_SmokeRed_M203",
            "CUP_6Rnd_SmokeGreen_M203",
            "CUP_6Rnd_SmokeYellow_M203",
            "CUP_1Rnd_HE_M203",
            "CUP_1Rnd_HEDP_M203",
            "CUP_FlareWhite_M203",
            "CUP_FlareGreen_M203",
            "CUP_FlareRed_M203",
            "CUP_FlareYellow_M203",
            "CUP_1Rnd_Smoke_M203",
            "CUP_1Rnd_SmokeRed_M203",
            "CUP_1Rnd_SmokeGreen_M203",
            "CUP_1Rnd_SmokeYellow_M203"
		};
	};	

	class CUPLightMachineGunAmmo 
	{
		name = "CUP Light Machine Gun Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_C_Fishing_Boat_Chernarus",
            "CUP_B_RHIB2Turret_USMC",
            "CUP_B_RHIB_USMC",
            "CUP_B_RHIB2Turret_RACS",
            "CUP_B_RHIB_RACS",
            "CUP_B_Seafox_USMC",
            "CUP_B_Seafox_USV_USMC",
            "CUP_B_Zodiac_USMC"
		};
	};	
	
	class CUPSubMachineGunAmmo 
	{
		name = "CUP Sub Machine Gun Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_C_Fishing_Boat_Chernarus",
            "CUP_B_RHIB2Turret_USMC",
            "CUP_B_RHIB_USMC",
            "CUP_B_RHIB2Turret_RACS",
            "CUP_B_RHIB_RACS",
            "CUP_B_Seafox_USMC",
            "CUP_B_Seafox_USV_USMC",
            "CUP_B_Zodiac_USMC"
		};
	};			
	
	class CUPSniperRifleAmmo
	{
		name = "CUP Sniper Rifle Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_C_Fishing_Boat_Chernarus",
            "CUP_B_RHIB2Turret_USMC",
            "CUP_B_RHIB_USMC",
            "CUP_B_RHIB2Turret_RACS",
            "CUP_B_RHIB_RACS",
            "CUP_B_Seafox_USMC",
            "CUP_B_Seafox_USV_USMC",
            "CUP_B_Zodiac_USMC"
		};
	};	
	
	class CUPAssaultRifleAmmo
	{
		name = "CUP Assault Rifle Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_C_Fishing_Boat_Chernarus",
            "CUP_B_RHIB2Turret_USMC",
            "CUP_B_RHIB_USMC",
            "CUP_B_RHIB2Turret_RACS",
            "CUP_B_RHIB_RACS",
            "CUP_B_Seafox_USMC",
            "CUP_B_Seafox_USV_USMC",
            "CUP_B_Zodiac_USMC"
		};
	};	

	class CUPWheeled 
	{
		name = "CUP Wheeled";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_C_UAZ_Open_TK_CIV",
            "CUP_C_UAZ_Unarmed_TK_CIV",
            "CUP_O_UAZ_AGS30_CHDKZ",
            "CUP_O_UAZ_AGS30_RU",
            "CUP_O_UAZ_AGS30_TKA",
            "CUP_O_UAZ_MG_CHDKZ",
            "CUP_O_UAZ_MG_RU",
            "CUP_O_UAZ_MG_TKA",
            "CUP_O_UAZ_Open_CHDKZ",
            "CUP_O_UAZ_Open_RU",
            "CUP_O_UAZ_Open_TKA",
            "CUP_O_UAZ_SPG9_CHDKZ",
            "CUP_O_UAZ_SPG9_RU",
            "CUP_O_UAZ_SPG9_TKA",
            "CUP_O_UAZ_Unarmed_CHDKZ",
            "CUP_O_UAZ_Unarmed_RU",
            "CUP_O_UAZ_Unarmed_TKA",
            "CUP_B_UAZ_AGS30_ACR",
            "CUP_B_UAZ_AGS30_CDF",
            "CUP_B_UAZ_MG_ACR",
            "CUP_B_UAZ_MG_CDF",
            "CUP_B_UAZ_Open_ACR",
            "CUP_B_UAZ_Open_CDF",
            "CUP_B_UAZ_SPG9_ACR",
            "CUP_B_UAZ_SPG9_CDF",
            "CUP_B_UAZ_Unarmed_ACR",
            "CUP_B_UAZ_Unarmed_CDF",
            "CUP_I_UAZ_AGS30_UN",
            "CUP_I_UAZ_MG_UN",
            "CUP_I_UAZ_Open_UN",
            "CUP_I_UAZ_SPG9_UN",
            "CUP_I_UAZ_Unarmed_UN",
            "CUP_B_Ural_CDF",
            "CUP_B_Ural_Empty_CDF",
            "CUP_B_Ural_Open_CDF",
            "CUP_B_Ural_Reammo_CDF",
            "CUP_B_Ural_Refuel_CDF",
            "CUP_B_Ural_Repair_CDF",
            "CUP_B_Ural_ZU23_CDF",
            "CUP_O_Ural_CHDKZ",
            "CUP_O_Ural_Empty_CHDKZ",
            "CUP_O_Ural_Empty_RU",
            "CUP_O_Ural_Empty_SLA",
            "CUP_O_Ural_Empty_TKA",
            "CUP_O_Ural_Open_CHDKZ",
            "CUP_O_Ural_Open_RU",
            "CUP_O_Ural_Open_SLA",
            "CUP_O_Ural_Open_TKA",
            "CUP_O_Ural_RU",
            "CUP_O_Ural_Reammo_CHDKZ",
            "CUP_O_Ural_Reammo_RU",
            "CUP_O_Ural_Reammo_SLA",
            "CUP_O_Ural_Reammo_TKA",
            "CUP_O_Ural_Refuel_CHDKZ",
            "CUP_O_Ural_Refuel_RU",
            "CUP_O_Ural_Refuel_SLA",
            "CUP_O_Ural_Refuel_TKA",
            "CUP_O_Ural_Repair_CHDKZ",
            "CUP_O_Ural_Repair_RU",
            "CUP_O_Ural_Repair_SLA",
            "CUP_O_Ural_Repair_TKA",
            "CUP_O_Ural_SLA",
            "CUP_O_Ural_TKA",
            "CUP_O_Ural_ZU23_CHDKZ",
            "CUP_O_Ural_ZU23_RU",
            "CUP_O_Ural_ZU23_SLA",
            "CUP_O_Ural_ZU23_TKA",
            "CUP_O_Ural_ZU23_TKM",
            "CUP_C_Ural_Civ_01",
            "CUP_C_Ural_Civ_02",
            "CUP_C_Ural_Civ_03",
            "CUP_C_Ural_Open_Civ_01",
            "CUP_C_Ural_Open_Civ_02",
            "CUP_C_Ural_Open_Civ_03",
            "CUP_I_Ural_Empty_UN",
            "CUP_I_Ural_Reammo_UN",
            "CUP_I_Ural_Repair_UN",
            "CUP_I_Ural_UN",
            "CUP_I_Ural_ZU23_NAPA",
            "CUP_I_Ural_ZU23_TK_Gue",
            "CUP_C_Datsun",
            "CUP_C_Datsun_4seat",
            "CUP_C_Datsun_Covered",
            "CUP_C_Datsun_Plain",
            "CUP_C_Datsun_Tubeframe",
            "CUP_I_Datsun_PK",
            "CUP_I_Datsun_PK_Random",
            "CUP_I_Datsun_PK_TK",
            "CUP_I_Datsun_PK_TK_Random",
            "CUP_O_Datsun_PK",
            "CUP_O_Datsun_PK_Random",
            "CUP_C_LR_Transport_CTK",
            "CUP_B_M1030",
            "CUP_BAF_Jackal2_GMG_D",
            "CUP_BAF_Jackal2_GMG_W",
            "CUP_BAF_Jackal2_L2A1_D",
            "CUP_BAF_Jackal2_L2A1_W",
            "CUP_B_Dingo_Des",
            "CUP_B_Dingo_GL_Des",
            "CUP_B_Dingo_GL_Wdl",
            "CUP_B_Dingo_Wdl",
            "CUP_B_HMMWV_AGS_GPK_ACR",
            "CUP_B_HMMWV_Ambulance_ACR",
            "CUP_B_HMMWV_Ambulance_USA",
            "CUP_B_HMMWV_Ambulance_USMC",
            "CUP_B_HMMWV_Avenger_USA",
            "CUP_B_HMMWV_Avenger_USMC",
            "CUP_B_HMMWV_Crows_M2_USA",
            "CUP_B_HMMWV_Crows_MK19_USA",
            "CUP_B_HMMWV_DSHKM_GPK_ACR",
            "CUP_B_HMMWV_M1114_USMC",
            "CUP_B_HMMWV_M2_GPK_ACR",
            "CUP_B_HMMWV_M2_GPK_USA",
            "CUP_B_HMMWV_M2_USA",
            "CUP_B_HMMWV_M2_USMC",
            "CUP_B_HMMWV_MK19_USA",
            "CUP_B_HMMWV_MK19_USMC",
            "CUP_B_HMMWV_SOV_USA",
            "CUP_B_HMMWV_TOW_USA",
            "CUP_B_HMMWV_TOW_USMC",
            "CUP_B_HMMWV_Terminal_USA",
            "CUP_B_HMMWV_Transport_USA",
            "CUP_B_HMMWV_Unarmed_USA",
            "CUP_B_HMMWV_Unarmed_USMC",
            "CUP_B_LR_Ambulance_CZ_D",
            "CUP_B_LR_Ambulance_CZ_W",
            "CUP_B_LR_Ambulance_GB_D",
            "CUP_B_LR_Ambulance_GB_W",
            "CUP_B_LR_MG_CZ_W",
            "CUP_B_LR_MG_GB_W",
            "CUP_B_LR_Special_CZ_W",
            "CUP_B_LR_Special_Des_CZ_D",
            "CUP_B_LR_Transport_CZ_D",
            "CUP_B_LR_Transport_CZ_W",
            "CUP_B_LR_Transport_GB_D",
            "CUP_B_LR_Transport_GB_W",
            "CUP_O_LR_Ambulance_TKA",
            "CUP_O_LR_MG_TKA",
            "CUP_O_LR_MG_TKM",
            "CUP_O_LR_SPG9_TKA",
            "CUP_O_LR_SPG9_TKM",
            "CUP_O_LR_Transport_TKA",
            "CUP_O_LR_Transport_TKM",
            "CUP_I_LR_Transport_RACS",
            "CUP_I_LR_MG_RACS",
            "CUP_I_LR_Ambulance_RACS",            
            "CUP_I_BRDM2_ATGM_NAPA",
            "CUP_I_BRDM2_ATGM_TK_Gue",
            "CUP_I_BRDM2_HQ_NAPA",
            "CUP_I_BRDM2_HQ_TK_Gue",
            "CUP_I_BRDM2_HQ_UN",
            "CUP_I_BRDM2_NAPA",
            "CUP_I_BRDM2_TK_Gue",
            "CUP_I_BRDM2_UN",
            "CUP_O_BRDM2_ATGM_CHDKZ",
            "CUP_O_BRDM2_ATGM_SLA",
            "CUP_O_BRDM2_ATGM_TKA",
            "CUP_O_BRDM2_CHDKZ",
            "CUP_O_BRDM2_HQ_CHDKZ",
            "CUP_O_BRDM2_HQ_SLA",
            "CUP_O_BRDM2_HQ_TKA",
            "CUP_O_BRDM2_SLA",
            "CUP_O_BRDM2_TKA",
            "CUP_B_BRDM2_ATGM_CDF",
            "CUP_B_BRDM2_CDF",
            "CUP_B_BRDM2_HQ_CDF",
            "CUP_B_LAV25M240_USMC",
            "CUP_B_LAV25_HQ_USMC",
            "CUP_B_LAV25_USMC",
            "CUP_B_BM21_CDF",
            "CUP_O_BM21_CHDKZ",
            "CUP_O_BM21_RU",
            "CUP_O_BM21_SLA",
            "CUP_O_BM21_TKA",
            "CUP_O_BTR60_TK",
            "CUP_O_BTR90_HQ_RU",
            "CUP_O_BTR90_RU",
            "CUP_C_Octavia_CIV",
            "CUP_C_Skoda_Red_Civ",
            "CUP_C_Skoda_White_Civ",
            "CUP_C_Skoda_Blue_Civ",
            "CUP_C_Skoda_Green_Civ",
            "CUP_C_Golf4_red_Civ",
            "CUP_C_Golf4_black_Civ",
            "CUP_C_Golf4_yellow_Civ",
            "CUP_C_Golf4_blue_Civ",
            "CUP_C_Golf4_white_Civ",
            "CUP_C_Golf4_green_Civ",
            "CUP_C_Golf4_random_Civ",
            "CUP_C_Golf4_whiteblood_Civ",
            "CUP_C_Golf4_camo_Civ",
            "CUP_C_Golf4_camodigital_Civ",
            "CUP_C_Golf4_camodark_Civ",
            "CUP_C_Golf4_reptile_Civ",
            "CUP_C_Golf4_kitty_Civ",
            "CUP_B_M1126_ICV_M2_Desert",
            "CUP_B_M1126_ICV_M2_Desert_Slat",
            "CUP_B_M1126_ICV_M2_Woodland",
            "CUP_B_M1126_ICV_M2_Woodland_Slat",
            "CUP_B_M1126_ICV_Mk19_Desert",
            "CUP_B_M1126_ICV_Mk19_Desert_Slat",
            "CUP_B_M1126_ICV_Mk19_Woodland",
            "CUP_B_M1126_ICV_Mk19_Woodland_Slat",
            "CUP_B_M1128_MGS_Desert",
            "CUP_B_M1128_MGS_Desert_Slat",
            "CUP_B_M1128_MGS_Woodland",
            "CUP_B_M1128_MGS_Woodland_Slat",
            "CUP_B_M1129_MC_MK19_Desert",
            "CUP_B_M1129_MC_MK19_Desert_Slat",
            "CUP_B_M1129_MC_MK19_Woodland",
            "CUP_B_M1129_MC_MK19_Woodland_Slat",
            "CUP_B_M1130_CV_M2_Desert",
            "CUP_B_M1130_CV_M2_Desert_Slat",
            "CUP_B_M1130_CV_M2_Woodland",
            "CUP_B_M1130_CV_M2_Woodland_Slat",
            "CUP_B_M1133_MEV_Desert",
            "CUP_B_M1133_MEV_Desert_Slat",
            "CUP_B_M1133_MEV_Woodland",
            "CUP_B_M1133_MEV_Woodland_Slat",
            "CUP_B_M1135_ATGMV_Desert",
            "CUP_B_M1135_ATGMV_Desert_Slat",
            "CUP_B_M1135_ATGMV_Woodland",
            "CUP_B_M1135_ATGMV_Woodland_Slat",
            "CUP_B_TowingTractor_USMC"
		};
	};

	class CUPTracked 
	{
		name = "CUP Tracked";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_B_AAV_USMC",
            "CUP_B_M113_Med_USA",
            "CUP_B_M113_USA",
            "CUP_I_M113_Med_RACS",
            "CUP_I_M113_Med_UN",
            "CUP_I_M113_RACS",
            "CUP_I_M113_UN",
            "CUP_O_M113_Med_TKA",
            "CUP_O_M113_TKA",
            "CUP_B_M163_USA",
            "CUP_I_M163_RACS",
            "CUP_B_M1A1_DES_USMC",
            "CUP_B_M1A1_DES_US_Army",
            "CUP_B_M1A1_Woodland_USMC",
            "CUP_B_M1A1_Woodland_US_Army",
            "CUP_B_M1A2_TUSK_MG_DES_USMC",
            "CUP_B_M1A2_TUSK_MG_DES_US_Army",
            "CUP_B_M1A2_TUSK_MG_USMC",
            "CUP_B_M1A2_TUSK_MG_US_Army",
            "CUP_B_M270_DPICM_USA",
            "CUP_B_M270_DPICM_USMC",
            "CUP_B_M270_HE_USA",
            "CUP_B_M270_HE_USMC",
            "CUP_B_M2Bradley_USA_D",
            "CUP_B_M2Bradley_USA_W",
            "CUP_B_M2A3Bradley_USA_D",
            "CUP_B_M2A3Bradley_USA_W",
            "CUP_I_T55_TK_GUE",
            "CUP_O_T55_TK",
            "CUP_O_T72_CHDKZ",
            "CUP_O_T72_RU",
            "CUP_O_T72_SLA",
            "CUP_O_T72_TKA",
            "CUP_B_T72_CDF",
            "CUP_I_T72_NAPA",
            "CUP_I_T72_RACS",
            "CUP_B_ZSU23_CDF",
            "CUP_O_ZSU23_ChDKZ",
            "CUP_O_ZSU23_SLA",
            "CUP_O_ZSU23_TK",
            "CUP_T34_BASE",
            "CUP_I_T34_NAPA",
            "CUP_I_T34_TK_GUE",
            "CUP_O_T34_TKA"
		};
	};

	class CUPHelis 
	{
		name = "CUP Helis";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_B_AH1Z",
             /* "CUP_B_AH1Z_14RndHydrax", */
            "CUP_B_AH1Z_7RndHydra",
            "CUP_B_AH1Z_AT",
            "CUP_B_AH1Z_Escort",
            "CUP_B_AH1Z_NOAA",
            "CUP_B_AH1Z_NoWeapons",
            "CUP_B_AH1_AT_BAF",
            "CUP_B_AH1_BAF",
            "CUP_B_AH1_ES_BAF",
            "CUP_B_AH1_MR_BAF",
            "CUP_B_AH1_NO_BAF",
            "CUP_B_AH64D_AT_USA",
            "CUP_B_AH64D_ES_USA",
            "CUP_B_AH64D_MR_USA",
            "CUP_B_AH64D_NO_USA",
            "CUP_B_AH64D_USA",
            "CUP_B_AW159_Armed_BAF",
            "CUP_B_AW159_Unarmed_BAF",
            "CUP_B_CH47F_GB",
            "CUP_B_CH47F_USA",
            "CUP_B_CH53E_USMC",
            "CUP_B_MH60S_FFV_USMC",
            "CUP_B_MH60S_USMC",
            "CUP_B_UH1Y_GUNSHIP_USMC",
            "CUP_B_UH1Y_MEV_USMC",
            "CUP_B_UH1Y_UNA_USMC",
            "CUP_B_UH60L_FFV_US",
            "CUP_B_UH60L_US",
            "CUP_B_UH60L_Unarmed_FFV_MEV_US",
            "CUP_B_UH60L_Unarmed_FFV_US",
            "CUP_B_UH60L_Unarmed_US",
            "CUP_I_UH60L_FFV_RACS",
            "CUP_I_UH60L_RACS",
            "CUP_I_UH60L_Unarmed_FFV_MEV_Racs",
            "CUP_I_UH60L_Unarmed_FFV_Racs",
            "CUP_I_UH60L_Unarmed_RACS",
            "CUP_B_UH60M_FFV_US",
            "CUP_B_UH60M_US",
            "CUP_B_UH60M_Unarmed_FFV_MEV_US",
            "CUP_B_UH60M_Unarmed_FFV_US",
            "CUP_B_UH60M_Unarmed_US",
            "CUP_O_Mi8_CHDKZ",
            "CUP_O_Mi8_RU",
            "CUP_O_Mi8_SLA_1",
            "CUP_O_Mi8_SLA_2",
            "CUP_O_Mi8_medevac_CHDKZ",
            "CUP_O_Mi8_medevac_RU",
            "CUP_B_Mi171Sh_ACR",
            "CUP_B_Mi171Sh_Unarmed_ACR",
            "CUP_B_Mi17_CDF",
            "CUP_B_Mi17_medevac_CDF",
            "CUP_I_Mi17_UN",
            "CUP_O_Mi17_TK",
            "CUP_C_Mi17_Civilian_RU",
            "CUP_B_Mi24_D_CDF",
            "CUP_I_Mi24_D_ION",
            "CUP_I_Mi24_D_UN",
            "CUP_O_Mi24_D_TK",
            "CUP_O_Mi24_P_RU",
            "CUP_O_Mi24_V_RU",
            "CUP_B_Mi35_CZ",
            "CUP_O_UH1H_TKA",
            "CUP_I_UH1H_TK_GUE",
            "CUP_B_UH1D_GER_KSK",
            "CUP_B_UH1D_GER_KSK_DES",
            "CUP_B_Merlin_HC3_GB",
            "CUP_B_Merlin_HC3A_GB",
            "CUP_B_AW159_Unarmed_GB",
            "CUP_B_AW159_Hellfire_GB",
            "CUP_B_AW159_Cannon_GB",
            "CUP_B_SA330_Puma_HC1_BAF",
            "CUP_B_SA330_Puma_HC2_BAF",
            "CUP_I_SA330_Puma_HC1_RACS",
            "CUP_I_SA330_Puma_HC2_RACS",
            "CUP_O_KA50_SLA",
            "CUP_O_KA50_AA_SLA",
            "CUP_O_KA50_RU",
            "CUP_O_KA50_AA_RU"
		};
	};

	class CUPPlanes 
	{
		name = "CUP Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_C_C47_CIV",
            "CUP_C_DC3_CIV",
            "CUP_B_MV22_USMC",
            "CUP_B_A10_AT_USA",
            "CUP_B_A10_CAS_USA",
            "CUP_B_Su25_CDF",
            "CUP_O_Su25_RU_1",
            "CUP_O_Su25_RU_2",
            "CUP_O_Su25_RU_3",
            "CUP_O_Su25_SLA",
            "CUP_O_Su25_TKA",
            "CUP_B_C130J_USMC",
            "CUP_B_C130J_Cargo_USMC",
            "CUP_B_C130J_GB",
            "CUP_B_C130J_Cargo_GB",
            "CUP_I_C130J_AAF",
            "CUP_I_C130J_Cargo_AAF",
            "CUP_I_C130J_RACS",
            "CUP_I_C130J_Cargo_RACS",
            "CUP_O_C130J_TKA",
            "CUP_O_C130J_Cargo_TKA",
            "CUP_B_F35B_AA_USMC",
            "CUP_B_F35B_CAS_USMC",
            "CUP_B_F35B_LGB_USMC",
            "CUP_B_F35B_AA_BAF",
            "CUP_B_F35B_CAS_BAF",
            "CUP_B_F35B_LGB_BAF",
            "CUP_B_AV8B_CAP_USMC",
            "CUP_B_AV8B_MK82_USMC",
            "CUP_B_AV8B_GBU12_USMC",
            "CUP_B_AV8B_AGM_USMC",
            "CUP_I_AV8B_CAP_AAF",
            "CUP_I_AV8B_MK82_AAF",
            "CUP_I_AV8B_GBU12_AAF",
            "CUP_I_AV8B_AGM_AAF",
            "CUP_B_GR9_CAP_GB",
            "CUP_B_GR9_MK82_GB",
            "CUP_B_GR9_GBU12_GB",
            "CUP_B_GR9_AGM_GB",
            "CUP_O_SU34_LGB_RU",
            "CUP_O_SU34_LGB_SLA",
            "CUP_O_SU34_AGM_RU",
            "CUP_O_SU34_AGM_SLA",
            "CUP_I_SU34_LGB_AAF",
            "CUP_I_SU34_AGM_AAF",
            "CUP_B_SU34_LGB_CDF",
            "CUP_B_SU34_AGM_CDF"
		};
	};

	class CUPBoats 
	{
		name = "CUP Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
            "CUP_C_Fishing_Boat_Chernarus",
            "CUP_B_RHIB2Turret_USMC",
            "CUP_B_RHIB_USMC",
            "CUP_B_RHIB2Turret_RACS",
            "CUP_B_RHIB_RACS",
            "CUP_B_Seafox_USMC",
            "CUP_B_Seafox_USV_USMC",
            "CUP_B_Zodiac_USMC"
		};
	};
	};

class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles",
            "CUPAssaultRifles",
            "CUPHandGuns",
            "CUPLightMachineGuns",
            "CUPSub MachineGuns",
            "CUPSniperRifles",
            "CUPOpticAttachments",
            "CUPMuzzleAttachments",
            "CUPAssaultRifleAmmo",
            "CUPHandgunAmmo",
            "CUPLightMachineGunAmmo",
            "CUPShotgunAmmo",
            "CUPSub MachineGunAmmo",
            "CUPSniperRifleAmmo",			
	        "MASPointerAttachments",
            "MASMuzzleAttachments",
            "MASOpticAttachments",		
			"MASAmmunition",
            "MASPistols",
            "MASSubMachineGuns",
            "MASLightMachineGuns",
            "MASAssaultRifles",
            "MASSniperRifles"		
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation",
			"RocketLauncher",
			"Rockets",
            "CUP Grenade Launchers",
            "CUP Launchers",
            "CUP Launcher Ammo",			
			"CUPSmokeAmmo",			
			"MASExplosive",
            "MASLaunchers",
            "MASLauncherAmmo"			
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"Uniforms",
			"Vests",
			"Backpacks",
			"FirstAid",
			"Tools",
			"CUPHeadgear",
            "CUPRigs",
            "CUPUniforms",
			"MASTools",
            "MASBackpacks",
			"MASHeadgear"			
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"A3Vehicles",
			"Military",
            "Tanks",
            "CUPTracked",
            "CUPWheeled",
			"HVPTrucks",
			"HVPVehicles",
            "MASCars",
            "MASArmed",
            "MASTrucks",
            "MASTanks"			
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers",
			"Helicopter",
			"Planes",
			"Jets",
			"CUPHelis",
            "CUPPlanes",
			"MASChoppers",
            "MASPlanes",
            "HVPPlanes"			
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats",
			"CUPBoats"
		};
	};

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] = 
		{
			{"Exile_Bike_QuadBike_Black",		100},
			{"Exile_Bike_QuadBike_Blue",		100},
			{"Exile_Bike_QuadBike_Red",			100},
			{"Exile_Bike_QuadBike_White",		100},
			{"Exile_Bike_QuadBike_Nato",		150},
			{"Exile_Bike_QuadBike_Csat",		150},
			{"Exile_Bike_QuadBike_Fia",			150},
			{"Exile_Bike_QuadBike_Guerilla01",	150},
			{"Exile_Bike_QuadBike_Guerilla02",	150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_MotorBoat_Police",		350},
			{"Exile_Boat_MotorBoat_Orange",		300},
			{"Exile_Boat_MotorBoat_White",		300}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_RubberDuck_CSAT",		200},
			{"Exile_Boat_RubberDuck_Digital",	200},
			{"Exile_Boat_RubberDuck_Orange",	150},
			{"Exile_Boat_RubberDuck_Blue",		150},
			{"Exile_Boat_RubberDuck_Black",		150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_SDV_CSAT",		200},
			{"Exile_Boat_SDV_Digital",	200},
			{"Exile_Boat_SDV_Grey",		100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hellcat_Green", 350},
			{"Exile_Chopper_Hellcat_FIA", 	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Kart_BluKing", 				100},	
			{"Exile_Car_Kart_RedStone", 			100},
			{"Exile_Car_Kart_Vrana", 				100},	
			{"Exile_Car_Kart_Green", 				100},	
			{"Exile_Car_Kart_Blue", 				100},	
			{"Exile_Car_Kart_Orange", 				100},	
			{"Exile_Car_Kart_White", 				100},	
			{"Exile_Car_Kart_Yellow", 				100},	
			{"Exile_Car_Kart_Black", 				100}	
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huron_Black", 	450},
			{"Exile_Chopper_Huron_Green", 	450}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Orca_CSAT", 		350},
			{"Exile_Chopper_Orca_Black", 		350},
			{"Exile_Chopper_Orca_BlackCustom", 	350}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_CSAT",		500},
			{"Exile_Chopper_Taru_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500},
			{"Exile_Chopper_Taru_Transport_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500},
			{"Exile_Chopper_Taru_Covered_Black",	500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Hatchback_Rusty1", 			50},
			{"Exile_Car_Hatchback_Rusty2", 			50},
			{"Exile_Car_Hatchback_Rusty3", 			50},
			{"Exile_Car_Hatchback_Beige", 			100},
			{"Exile_Car_Hatchback_Green", 			100},
			{"Exile_Car_Hatchback_Blue", 			100},
			{"Exile_Car_Hatchback_BlueCustom", 		100},
			{"Exile_Car_Hatchback_BeigeCustom", 	100},
			{"Exile_Car_Hatchback_Yellow", 			100},
			{"Exile_Car_Hatchback_Grey", 			100},
			{"Exile_Car_Hatchback_Black", 			100},
			{"Exile_Car_Hatchback_Dark", 			100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100},
			{"Exile_Car_Hatchback_Sport_Blue", 		100},
			{"Exile_Car_Hatchback_Sport_Orange", 	100},
			{"Exile_Car_Hatchback_Sport_White", 	100},
			{"Exile_Car_Hatchback_Sport_Beige", 	100},
			{"Exile_Car_Hatchback_Sport_Green", 	100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Rusty1", 		50},
			{"Exile_Car_Offroad_Rusty2", 		50},
			{"Exile_Car_Offroad_Rusty3", 		50},
			{"Exile_Car_Offroad_Red", 			500},
			{"Exile_Car_Offroad_Beige", 		500},
			{"Exile_Car_Offroad_White", 		500},
			{"Exile_Car_Offroad_Blue", 			500},
			{"Exile_Car_Offroad_DarkRed", 		500},
			{"Exile_Car_Offroad_BlueCustom", 	500},
			{"Exile_Car_Offroad_Guerilla01", 	700},
			{"Exile_Car_Offroad_Guerilla02", 	700},
			{"Exile_Car_Offroad_Guerilla03", 	700},
			{"Exile_Car_Offroad_Guerilla04", 	700},
			{"Exile_Car_Offroad_Guerilla05", 	700},
			{"Exile_Car_Offroad_Guerilla06", 	700},
			{"Exile_Car_Offroad_Guerilla07", 	700},
			{"Exile_Car_Offroad_Guerilla08", 	700},
			{"Exile_Car_Offroad_Guerilla09", 	700},
			{"Exile_Car_Offroad_Guerilla10", 	700},
			{"Exile_Car_Offroad_Guerilla11", 	700},
			{"Exile_Car_Offroad_Guerilla12", 	700}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150},
			{"Exile_Car_Offroad_Repair_Red",			150},
			{"Exile_Car_Offroad_Repair_Beige",			150},
			{"Exile_Car_Offroad_Repair_White",			150},
			{"Exile_Car_Offroad_Repair_Blue",			150},
			{"Exile_Car_Offroad_Repair_DarkRed",		150},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUV_Red", 		100},
			{"Exile_Car_SUV_Black", 	150},
			{"Exile_Car_SUV_Grey", 		100},
			{"Exile_Car_SUV_Orange", 	100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUVXL_Black", 100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Black",			100},
			{"Exile_Car_Van_White",			100},
			{"Exile_Car_Van_Red",			100},
			{"Exile_Car_Van_Guerilla01",	150},
			{"Exile_Car_Van_Guerilla02",	150},
			{"Exile_Car_Van_Guerilla03",	150},
			{"Exile_Car_Van_Guerilla04",	150},
			{"Exile_Car_Van_Guerilla05",	150},
			{"Exile_Car_Van_Guerilla06",	150},
			{"Exile_Car_Van_Guerilla07",	150},
			{"Exile_Car_Van_Guerilla08",	150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Box_Black",				100},
			{"Exile_Car_Van_Box_White",				100},
			{"Exile_Car_Van_Box_Red",				100},
			{"Exile_Car_Van_Box_Guerilla01",		150},
			{"Exile_Car_Van_Box_Guerilla02",		150},
			{"Exile_Car_Van_Box_Guerilla03",		150},
			{"Exile_Car_Van_Box_Guerilla04",		150},
			{"Exile_Car_Van_Box_Guerilla05",		150},
			{"Exile_Car_Van_Box_Guerilla06",		150},
			{"Exile_Car_Van_Box_Guerilla07",		150},
			{"Exile_Car_Van_Box_Guerilla08",		150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Fuel_Black",			100},
			{"Exile_Car_Van_Fuel_White",			100},
			{"Exile_Car_Van_Fuel_Red",				100},
			{"Exile_Car_Van_Fuel_Guerilla01",		150},
			{"Exile_Car_Van_Fuel_Guerilla02",		150},
			{"Exile_Car_Van_Fuel_Guerilla03",		150}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ikarus_Blue", 		200},
			{"Exile_Car_Ikarus_Red", 		200},
			{"Exile_Car_Ikarus_Party", 		500}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Open_Blue",			300},
			{"Exile_Car_Ural_Open_Yellow",			300},
			{"Exile_Car_Ural_Open_Worker",			300},
			{"Exile_Car_Ural_Open_Military",		300}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Covered_Blue",			300},
			{"Exile_Car_Ural_Covered_Yellow",		300},
			{"Exile_Car_Ural_Covered_Worker",		300},
			{"Exile_Car_Ural_Covered_Military",		300}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Lada_Green", 		100},
			{"Exile_Car_Lada_Taxi", 		100},
			{"Exile_Car_Lada_Red", 			100},
			{"Exile_Car_Lada_White", 		100},
			{"Exile_Car_Lada_Hipster", 		100}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Volha_Blue", 		100},
			{"Exile_Car_Volha_White", 		100},
			{"Exile_Car_Volha_Black",		100}
		};
	};
};
class SpawnVehicleItems{
	/**
	* Vehicles in the world
	*/
	class WorldVehicles{
		/*
		* Allow(1) or disable(0) Items in Spawned vehicles
		* kinda self explanitory
		*/
		vehicleItemsAllowed = 1;
		/*
		* Set the maximum Items per Vehicle to
		* kinda self explanitory
		*/
		maximumItemsPerVehicle = 5;
		/*
		* Array of allowedItems
		* kinda self explanitory
		*/
		allowedItems[] = {
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Cheathas",
			"Exile_Item_Beer",
			"Exile_Item_Beer",
			"Exile_Item_BeefParts"
		};
	};
};
class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};