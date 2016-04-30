/**
 * MAIN CONFIGURATION FILE
 * 
 * English and French comments
 * Commentaires anglais et français
 * 
 * (EN)
 * This file contains the configuration variables of the logistics system.
 * For the configuration of the creation factory, see the file "config_creation_factory.sqf".
 * IMPORTANT NOTE : when a logistics feature is given to an object/vehicle class name, all the classes which inherit
 *                  of the parent/generic class (according to the CfgVehicles) will also have this feature.
 *                  CfgVehicles tree view example : http://madbull.arma.free.fr/A3_stable_1.20.124746_CfgVehicles_tree.html
 * 
 * (FR)
 * Fichier contenant les variables de configuration du système de logistique.
 * Pour la configuration de l'usine de création, voir le fichier "config_creation_factory.sqf".
 * NOTE IMPORTANTE : lorsqu'une fonctionnalité logistique est accordée à un nom de classe d'objet/véhicule, les classes
 *                   héritant de cette classe mère/générique (selon le CfgVehicles) se verront également dotées de cette fonctionnalité.
 *                   Exemple d'arborescence du CfgVehicles : http://madbull.arma.free.fr/A3_stable_1.20.124746_CfgVehicles_tree.html
 */

/**
 * DISABLE LOGISTICS ON OBJECTS BY DEFAULT
 * 
 * (EN)
 * Define if objects and vehicles have logistics features by default,
 * or if it must be allowed explicitely on specific objects/vehicles.
 * 
 * If false : all objects are enabled according to the class names listed in this configuration file
 *            You can disable some objects with : object setVariable ["R3F_LOG_disabled", true];
 * If true :  all objects are disabled by default
 *            You can enable some objects with : object setVariable ["R3F_LOG_disabled", false];
 * 
 * 
 * (FR)
 * Défini si les objets et véhicules disposent des fonctionnalités logistiques par défaut,
 * ou si elles doivent être autorisés explicitement sur des objets/véhicules spécifiques.
 * 
 * Si false : tous les objets sont actifs en accord avec les noms de classes listés dans ce fichier
 *            Vous pouvez désactiver certains objets avec : objet setVariable ["R3F_LOG_disabled", true];
 * Si true :  tous les objets sont inactifs par défaut
 *            Vous pouvez activer quelques objets avec : objet setVariable ["R3F_LOG_disabled", false];
 */
R3F_LOG_CFG_disabled_by_default = false;

/**
 * LOCK THE LOGISTICS FEATURES TO SIDE, FACTION OR PLAYER
 * 
 * (EN)
 * Define the lock mode of the logistics features for an object.
 * An object can be locked to the a side, faction, a player (respawn) or a unit (life).
 * If the object is locked, the player can unlock it according to the
 * value of the config variable R3F_LOG_CFG_unlock_objects_timer.
 * 
 * If "none" : no lock features, everyone can used the logistics features.
 * If "side" : the object is locked to the last side which interacts with it.
 * If "faction" : the object is locked to the last faction which interacts with it.
 * If "player" : the object is locked to the last player which interacts with it. The lock is transmitted after respawn.
 * If "unit" : the object is locked to the last player which interacts with it. The lock is lost when the unit dies.
 * 
 * Note : for military objects (not civilian), the lock is initialized to the object's side.
 * 
 * See also the config variable R3F_LOG_CFG_unlock_objects_timer.
 * 
 * (FR)
 * Défini le mode de verrouillage des fonctionnalités logistics pour un objet donné.
 * Un objet peut être verrouillé pour une side, une faction, un joueur (respawn) ou une unité (vie).
 * Si l'objet est verrouillé, le joueur peut le déverrouiller en fonction de la
 * valeur de la variable de configiration R3F_LOG_CFG_unlock_objects_timer.
 * 
 * Si "none" : pas de verrouillage, tout le monde peut utiliser les fonctionnalités logistiques.
 * Si "side" : l'objet est verrouillé pour la dernière side ayant interagit avec lui.
 * Si "faction" : l'objet est verrouillé pour la dernière faction ayant interagit avec lui.
 * Si "player" : l'objet est verrouillé pour le dernier joueur ayant interagit avec lui. Le verrou est transmis après respawn.
 * Si "unit" : l'objet est verrouillé pour le dernier joueur ayant interagit avec lui. Le verrou est perdu quand l'unité meurt.
 * 
 * Note : pour les objets militaires (non civils), le verrou est initialisé à la side de l'objet.
 * 
 * Voir aussi la variable de configiration R3F_LOG_CFG_unlock_objects_timer.
 */
R3F_LOG_CFG_lock_objects_mode = "none";

/**
 * COUNTDOWN TO UNLOCK AN OBJECT
 * 
 * Define the countdown duration (in seconds) to unlock a locked object.
 * Set to -1 to deny the unlock of objects.
 * See also the config variable R3F_LOG_CFG_lock_objects_mode.
 * 
 * Défini la durée (en secondes) du compte-à-rebours pour déverrouiller un objet.
 * Mettre à -1 pour qu'on ne puisse pas déverrouiller les objets.
 * Voir aussi la variable de configiration R3F_LOG_CFG_lock_objects_mode.
 */
R3F_LOG_CFG_unlock_objects_timer = 30;

/**
 * ALLOW NO GRAVITY OVER GROUND
 * 
 * Define if movable objects with no gravity simulation can be set in height over the ground (no ground contact).
 * The no gravity objects corresponds to most of decoration and constructions items.
 * 
 * Défini si les objets déplaçable sans simulation de gravité peuvent être position en hauteur sans être contact avec le sol.
 * Les objets sans gravité correspondent à la plupart des objets de décors et de construction.
 */
R3F_LOG_CFG_no_gravity_objects_can_be_set_in_height_over_ground = true;

/**
 * LANGUAGE
 * 
 * Automatic language selection according to the game language.
 * New languages can be easily added (read below).
 * 
 * Sélection automatique de la langue en fonction de la langue du jeu.
 * De nouveaux langages peuvent facilement être ajoutés (voir ci-dessous).
 */
R3F_LOG_CFG_language = switch (language) do
{
	case "English":{"en"};
	case "French":{"fr"};
	
	// Feel free to create you own language file named "XX_strings_lang.sqf", where "XX" is the language code.
	// Make a copy of an existing language file (e.g. en_strings_lang.sqf) and translate it.
	// Then add a line with this syntax : case "YOUR_GAME_LANGUAGE":{"LANGUAGE_CODE"};
	// For example :
	
	//case "Czech":{"cz"}; // Not supported. Need your own "cz_strings_lang.sqf"
	//case "Polish":{"pl"}; // Not supported. Need your own "pl_strings_lang.sqf"
	//case "Portuguese":{"pt"}; // Not supported. Need your own "pt_strings_lang.sqf"
	//case "YOUR_GAME_LANGUAGE":{"LANGUAGE_CODE"};  // Need your own "LANGUAGE_CODE_strings_lang.sqf"
	
	default {"en"}; // If language is not supported, use English
};

/**
 * CONDITION TO ALLOW LOGISTICS
 * 
 * (EN)
 * This variable allow to set a dynamic SQF condition to allow/deny all logistics features only on specific clients.
 * The variable must be a STRING delimited by quotes and containing a valid SQF condition to evaluate during the game.
 * For example you can allow logistics only on few clients having a known game ID by setting the variable to :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Or based on the profile name : "profileName in [""john"", ""jack"", ""james""]"
 * Or only for the server admin : "serverCommandAvailable "#kick"""
 * The condition is evaluted in real time, so it can use condition depending on the mission progress : "alive officer && taskState task1 == ""Succeeded"""
 * Or to deny logistics in a circular area defined by a marker : "player distance getMarkerPos ""markerName"" > getMarkerSize ""markerName"" select 0"
 * Note that quotes of the strings inside the string condition must be doubled.
 * Note : if the condition depends of the aimed objects/vehicle, you can use the command cursorTarget
 * To allow the logistics to everyone, just set the condition to "true".
 * 
 * (FR)
 * Cette variable permet d'utiliser une condition SQF dynamique pour autoriser ou non les fonctions logistiques sur des clients spécifiques.
 * La variable doit être une CHAINE de caractères délimitée par des guillemets et doit contenir une condition SQF valide qui sera évaluée durant la mission.
 * Par exemple pour autoriser la logistique sur seulement quelques joueurs ayant un ID de jeu connu, la variable peut être défini comme suit :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Ou elle peut se baser sur le nom de profil : "profileName in [""maxime"", ""martin"", ""marc""]"
 * Ou pour n'autoriser que l'admin de serveur : "serverCommandAvailable "#kick"""
 * Les condition sont évaluées en temps réel, et peuvent donc dépendre du déroulement de la mission : "alive officier && taskState tache1 == ""Succeeded"""
 * Ou pour interdire la logistique dans la zone défini par un marqueur circulaire : "player distance getMarkerPos ""markerName"" > getMarkerSize ""markerName"" select 0"
 * Notez que les guillemets des chaînes de caractères dans la chaîne de condition doivent être doublés.
 * Note : si la condition dépend de l'objet/véhicule pointé, vous pouvez utiliser la commande cursorTarget
 * Pour autoriser la logistique chez tout le monde, il suffit de définir la condition à "true".
 */
R3F_LOG_CFG_string_condition_allow_logistics_on_this_client = "true";

/**
 * CONDITION TO ALLOW CREATION FACTORY
 * 
 * (EN)
 * This variable allow to set a dynamic SQF condition to allow/deny the access to the creation factory only on specific clients.
 * The variable must be a STRING delimited by quotes and containing a valid SQF condition to evaluate during the game.
 * For example you can allow the creation factory only on few clients having a known game ID by setting the variable to :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Or based on the profile name : "profileName in [""john"", ""jack"", ""james""]"
 * Or only for the server admin : "serverCommandAvailable "#kick"""
 * Note that quotes of the strings inside the string condition must be doubled.
 * Note : if the condition depends of the aimed objects/véhicule, you can use the command cursorTarget
 * Note also that the condition is evaluted in real time, so it can use condition depending on the mission progress :
 * "alive officer && taskState task1 == ""Succeeded"""
 * To allow the creation factory to everyone, just set the condition to "true".
 * 
 * (FR)
 * Cette variable permet d'utiliser une condition SQF dynamique pour rendre accessible ou non l'usine de création sur des clients spécifiques.
 * La variable doit être une CHAINE de caractères délimitée par des guillemets et doit contenir une condition SQF valide qui sera évaluée durant la mission.
 * Par exemple pour autoriser l'usine de création sur seulement quelques joueurs ayant un ID de jeu connu, la variable peut être défini comme suit :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Ou elle peut se baser sur le nom de profil : "profileName in [""maxime"", ""martin"", ""marc""]"
 * Ou pour n'autoriser que l'admin de serveur : "serverCommandAvailable "#kick"""
 * Notez que les guillemets des chaînes de caractères dans la chaîne de condition doivent être doublés.
 * Note : si la condition dépend de l'objet/véhicule pointé, vous pouvez utiliser la commande cursorTarget
 * Notez aussi que les condition sont évaluées en temps réel, et peuvent donc dépendre du déroulement de la mission :
 * "alive officier && taskState tache1 == ""Succeeded"""
 * Pour autoriser l'usine de création chez tout le monde, il suffit de définir la condition à "true".
 */
R3F_LOG_CFG_string_condition_allow_creation_factory_on_this_client = "false";

/*
 ********************************************************************************************
 * BELOW IS THE CLASS NAMES CONFIGURATION / CI-DESSOUS LA CONFIGURATION DES NOMS DE CLASSES *
 ********************************************************************************************
 * 
 * (EN)
 * There are two ways to manage new objects with the logistics system. The first one is to add these objects in the
 * following appropriate lists. The second one is to create a new external file in the /addons_config/ directory,
 * based on /addons_config/TEMPLATE.sqf, and to add a #include below to.
 * The first method is better to add/fix only some various class names.
 * The second method is better to take into account an additional addon.
 * 
 * These variables are based on the inheritance principle according to the CfgVehicles tree.
 * It means that a features accorded to a class name, is also accorded to all child classes.
 * Inheritance tree view : http://madbull.arma.free.fr/A3_1.32_CfgVehicles_tree.html
 * 
 * (FR)
 * Deux moyens existent pour gérer de nouveaux objets avec le système logistique. Le premier consiste à ajouter
 * ces objets dans les listes appropriées ci-dessous. Le deuxième est de créer un fichier externe dans le répertoire
 * /addons_config/ basé sur /addons_config/TEMPLATE.sqf, et d'ajouter un #include ci-dessous.
 * La première méthode est préférable lorsqu'il s'agit d'ajouter ou corriger quelques classes diverses.
 * La deuxième méthode est préférable s'il s'agit de prendre en compte le contenu d'un addon supplémentaire.
 * 
 * Ces variables sont basées sur le principe d'héritage utilisés dans l'arborescence du CfgVehicles.
 * Cela signifie qu'une fonctionnalité accordée à une classe, le sera aussi pour toutes ses classes filles.
 * Vue de l'arborescence d'héritage : http://madbull.arma.free.fr/A3_1.32_CfgVehicles_tree.html
 */

/****** LIST OF ADDONS CONFIG TO INCLUDE / LISTE DES CONFIG D'ADDONS A INCLURE ******/
#include "addons_config\A3_vanilla.sqf"
//#include "addons_config\All_in_Arma.sqf"
//#include "addons_config\R3F_addons.sqf"
//#include "addons_config\YOUR_ADDITIONAL_ADDON.sqf"

/****** TOW WITH VEHICLE / REMORQUER AVEC VEHICULE ******/

/**
 * List of class names of ground vehicles which can tow objects.
 * Liste des noms de classes des véhicules terrestres pouvant remorquer des objets.
 */
R3F_LOG_CFG_can_tow = R3F_LOG_CFG_can_tow +
[
	// e.g. : "MyTowingVehicleClassName1", "MyTowingVehicleClassName2"
	
	"Exile_Car_Offroad_Repair_Civillian",
	"Exile_Car_Offroad_Repair_Red",
	"Exile_Car_Offroad_Repair_Beige",
	"Exile_Car_Offroad_Repair_White",
	"Exile_Car_Offroad_Repair_Blue",
	"Exile_Car_Offroad_Repair_DarkRed",
	"Exile_Car_Offroad_Repair_BlueCustom",
	"Exile_Car_Offroad_Repair_Guerilla01",
	"Exile_Car_Offroad_Repair_Guerilla02",	
	"Exile_Car_Offroad_Repair_Guerilla03",
	"Exile_Car_Offroad_Repair_Guerilla04",
	"Exile_Car_Offroad_Repair_Guerilla05",
	"Exile_Car_Offroad_Repair_Guerilla06",
	"Exile_Car_Offroad_Repair_Guerilla07",
	"Exile_Car_Offroad_Repair_Guerilla08",
	"Exile_Car_Offroad_Repair_Guerilla09",
	"Exile_Car_Offroad_Repair_Guerilla10",
	"Exile_Car_Offroad_Repair_Guerilla11",
	"Exile_Car_Offroad_Repair_Guerilla12",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_TowTractor_White",
			"Exile_Car_Tractor_Red",
			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_Octavius_White",
			"Exile_Car_LandRover_Green",
			"Exile_Car_LandRover_Ambulance_Green",
			"Exile_Car_Lada_Green",
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
			"Exile_Car_Offroad_Armed_Guerilla01",
	"Exile_Car_Strider",
	"Exile_Car_Hunter",
	"Exile_Car_Ifrit",
	"B_mas_cars_Hilux_MG",
	"B_mas_cars_Hilux_AGS30",
	"B_mas_cars_Hilux_SPG9",
	"B_mas_cars_Hilux_RKTS",
	"B_mas_cars_Hilux_Unarmed",
	"B_mas_cars_Hilux_Med",
	"B_mas_cars_Hilux_M2",
	"B_mas_cars_LR_Unarmed",
	"B_mas_cars_LR_Med",
	"B_mas_cars_LR_M2",
	"B_mas_cars_LR_Mk19",
	"B_mas_cars_LR_TOW",
	"B_mas_cars_LR_SPG9",
	"I_mas_cars_UAZ_MG",
	"I_mas_cars_UAZ_AGS30",
	"I_mas_cars_UAZ_SPG9",
	"I_mas_cars_UAZ_Unarmed",
	"I_mas_cars_UAZ_Med",
	"I_mas_cars_UAZ_M2",
	"O_mas_cars_UAZ_MG",
	"O_mas_cars_UAZ_AGS30",
	"O_mas_cars_UAZ_SPG9",
	"O_mas_cars_UAZ_Unarmed",
	"O_mas_cars_UAZ_Med",
	"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker",
			"I_MRAP_03_hmg_F",                 
            "I_MRAP_03_gmg_F",
            "O_MRAP_02_hmg_F", 								
           "O_MRAP_02_gmg_F",
          "B_MRAP_01_gmg_F",
            "B_MRAP_01_hmg_F",
           "B_APC_Wheeled_01_cannon_F",
			"B_mas_HMMWV_M134",
					"B_mas_HMMWV_SOV",
					"B_mas_HMMWV_SOV_M134",
					"B_mas_HMMWV_TOW",
					"B_mas_HMMWV_MK19",
					"B_mas_HMMWV_UNA",
					"B_mas_HMMWV_MEV",
					"B_mas_HMMWV_M2_des",
					"B_mas_HMMWV_M134_des",
					"B_mas_HMMWV_SOV_des",
					"B_mas_HMMWV_SOV_M134_des",
					"B_mas_HMMWV_TOW_des",
					"B_mas_HMMWV_MK19_des",
					"B_mas_HMMWV_UNA_des",
					"B_mas_HMMWV_MEV_des",
					"B_mas_HMMWV_M2",
					"Mrshounka_corbillard_c",
"Mrshounka_corbillard_c_bleufonce",
"Mrshounka_corbillard_c_grise",
"Mrshounka_corbillard_c_jaune",
"Mrshounka_corbillard_c_noir",
"Mrshounka_corbillard_c_orange",
"Mrshounka_corbillard_c_rose",
"Mrshounka_corbillard_c_rouge",
"Mrshounka_corbillard_c_violet",
"shounka_a3_dafxf_euro6_f",
"shounka_f430_spider_bleufonce",
"shounka_f430_spider_grise",
"shounka_f430_spider_jaune",
"shounka_f430_spider_noir",
"shounka_f430_spider_orange",
"shounka_f430_spider_rose",
"shounka_f430_spider_rouge",
"shounka_f430_spider_violet",
"shounka_ivceco_bleufonce",
"shounka_ivceco_grise",
"shounka_ivceco_jaune",
"shounka_ivceco_noir",
"shounka_ivceco_orange",
"shounka_ivceco_rose",
"shounka_ivceco_rouge",
"shounka_ivceco_violet",
"shounka_limo_civ_bleufonce",
"shounka_limo_civ_grise",
"shounka_limo_civ_jaune",
"shounka_limo_civ_noir",
"shounka_limo_civ_orange",
"shounka_limo_civ_rose",
"shounka_limo_civ_violet",
"Mrshounka_lykan_c_bleufonce",
"Mrshounka_lykan_c_grise",
"Mrshounka_lykan_c_jaune",
"Mrshounka_lykan_c_noir",
"Mrshounka_lykan_c_orange",
"Mrshounka_lykan_c_rose",
"Mrshounka_lykan_c_rouge",
"Mrshounka_lykan_c_violet",
"Mrshounka_a3_308_civ_bleufonce",
"Mrshounka_a3_308_civ_grise",
"Mrshounka_a3_308_civ_jaune",
"Mrshounka_a3_308_civ_noir",
"Mrshounka_a3_308_civ_orange",
"Mrshounka_a3_308_civ_rose",
"Mrshounka_a3_308_civ_rouge",
"Mrshounka_a3_308_civ_violet",
"Mr_Own_buggy_bleufonce",
"Mr_Own_buggy_grise",
"Mr_Own_buggy_jaune",
"Mr_Own_buggy_noir",
"Mr_Own_buggy_orange",
"Mr_Own_buggy_rose",
"Mr_Own_buggy_rouge",
"Mr_Own_buggy_violet",
"Mr_Own_dodge15_civ",
"Mr_Own_dodge15_civ_bleufonce",
"Mr_Own_dodge15_civ_grise",
"Mr_Own_dodge15_civ_jaune",
"Mr_Own_dodge15_civ_noir",
"Mr_Own_dodge15_civ_orange",
"Mr_Own_dodge15_civ_rose",
"Mr_Own_dodge15_civ_rouge",
"Mr_Own_dodge15_civ_violet",
"Mr_Own_hummer_civ_noir",
"Mr_Own_hummer_civ_bleufonce",
"Mr_Own_hummer_civ_grise",
"Mr_Own_hummer_civ_jaune",
"Mr_Own_hummer_civ_orange",
"Mr_Own_hummer_civ_rose",
"Mr_Own_hummer_civ_violet",
"Mr_Own_hummer_civ_rouge",
"shounka_buggy_bleufonce",
"shounka_buggy_grise",
"shounka_buggy_jaune",
"shounka_buggy_noir",
"shounka_buggy_orange",
"shounka_buggy_rose",
"shounka_buggy_rouge",
"shounka_buggy_violet",
"shounka_avalanche_bleufonce",
"shounka_avalanche_grise",
"shounka_avalanche_jaune",
"shounka_avalanche_noir",
"shounka_avalanche_orange",
"shounka_avalanche_rose",
"shounka_avalanche_rouge",
"shounka_avalanche_violet",
"shounka_monsteur_bleufonce",
"shounka_monsteur_grise",
"shounka_monsteur_jaune",
"shounka_monsteur_noir",
"shounka_monsteur_orange",
"shounka_monsteur_rose",
"shounka_monsteur_rouge",
"shounka_monsteur_violet",
"Mrshounka_Vandura_civ",
"Mrshounka_Vandura_civ_bleufonce",
"Mrshounka_Vandura_civ_grise",
"Mrshounka_Vandura_civ_jaune",
"Mrshounka_Vandura_civ_noir",
"Mrshounka_Vandura_civ_orange",
"Mrshounka_Vandura_civ_rose",
"Mrshounka_Vandura_civ_rouge",
"Mrshounka_Vandura_civ_violet",
"Mrshounka_yamaha_p_bf",
"Mrshounka_yamaha_p_g",
"Mrshounka_yamaha_p_j",
"Mrshounka_yamaha_p_noir",
"Mrshounka_yamaha_p_o",
"Mrshounka_yamaha_p_rose",
"Mrshounka_yamaha_p_r",
"Mrshounka_yamaha_p_v",
"SIG_Roadrunner",
"SIG_Hubcaps",
"SIG_Magnums",
"SIG_Hcode",
"SIG_Superbee",
"SIG_SuperbeeY",
"SIG_SuperbeeB",
"SIG_SuperbeeL",
"SIG_SuperbeeM",
"SIG_SuperbeeG"
];

/**
 * List of class names of objects which can be towed.
 * Liste des noms de classes des objets remorquables.
 */
R3F_LOG_CFG_can_be_towed = R3F_LOG_CFG_can_be_towed +
[
	// e.g. : "MyTowableObjectClassName1", "MyTowableObjectClassName2"
	
  "Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_TowTractor_White",
			"Exile_Car_Tractor_Red",
			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_Octavius_White",
			"Exile_Car_LandRover_Green",
			"Exile_Car_LandRover_Ambulance_Green",
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_White",
   "Exile_Car_SUV_Red",
	"Exile_Car_SUVXL_Black",
  "Exile_Car_Van_White", 
  "Exile_Car_Van_Red", 
  "Exile_Car_Van_Guerilla01", 
  "Exile_Car_Van_Guerilla02", 
  "Exile_Car_Van_Guerilla03", 
  "Exile_Car_Van_Guerilla04", 
  "Exile_Car_Van_Guerilla05", 
  "Exile_Car_Van_Guerilla06", 
  "Exile_Car_Van_Guerilla07", 
  "Exile_Car_Van_Guerilla08",
  "Exile_Car_Offroad_Rusty1", 
  "Exile_Car_Offroad_Rusty2", 
  "Exile_Car_Offroad_Rusty3", 
  "Exile_Car_Offroad_Red", 
  "Exile_Car_Offroad_Beige", 
  "Exile_Car_Offroad_White", 
  "Exile_Car_Offroad_Blue", 
  "Exile_Car_Offroad_DarkRed", 
  "Exile_Car_Offroad_BlueCustom", 
  "Exile_Car_Offroad_Guerilla01", 
  "Exile_Car_Offroad_Guerilla02", 
  "Exile_Car_Offroad_Guerilla03", 
  "Exile_Car_Offroad_Guerilla04", 
  "Exile_Car_Offroad_Guerilla05", 
  "Exile_Car_Offroad_Guerilla06", 
  "Exile_Car_Offroad_Guerilla07", 
  "Exile_Car_Offroad_Guerilla08", 
  "Exile_Car_Offroad_Guerilla09", 
  "Exile_Car_Offroad_Guerilla10", 
  "Exile_Car_Offroad_Guerilla11", 
  "Exile_Car_Offroad_Guerilla12",
  "Exile_Car_Offroad_Armed_Guerilla01", 
  "Exile_Car_Offroad_Armed_Guerilla02", 
  "Exile_Car_Offroad_Armed_Guerilla03", 
  "Exile_Car_Offroad_Armed_Guerilla04", 
  "Exile_Car_Offroad_Armed_Guerilla05", 
  "Exile_Car_Offroad_Armed_Guerilla06", 
  "Exile_Car_Offroad_Armed_Guerilla07", 
  "Exile_Car_Offroad_Armed_Guerilla08", 
  "Exile_Car_Offroad_Armed_Guerilla09", 
  "Exile_Car_Offroad_Armed_Guerilla10", 
  "Exile_Car_Offroad_Armed_Guerilla11", 
  "Exile_Car_Offroad_Armed_Guerilla12",
  "Exile_Car_SUV_Red", 
  "Exile_Car_SUV_Black", 
  "Exile_Car_SUV_Grey", 
  "Exile_Car_SUV_Orange",
  "Exile_Car_Hatchback_Beige", 
  "Exile_Car_Hatchback_Green", 
  "Exile_Car_Hatchback_Blue", 
  "Exile_Car_Hatchback_BlueCustom", 
  "Exile_Car_Hatchback_BeigeCustom", 
  "Exile_Car_Hatchback_Yellow", 
  "Exile_Car_Hatchback_Grey", 
  "Exile_Car_Hatchback_Black", 
  "Exile_Car_Hatchback_Dark", 
  "Exile_Car_Hatchback_Rusty1", 
  "Exile_Car_Hatchback_Rusty2", 
  "Exile_Car_Hatchback_Rusty3", 
  "Exile_Car_Hatchback_Sport_Red", 
  "Exile_Car_Hatchback_Sport_Blue", 
  "Exile_Car_Hatchback_Sport_Orange", 
  "Exile_Car_Hatchback_Sport_White", 
  "Exile_Car_Hatchback_Sport_Beige", 
  "Exile_Car_Hatchback_Sport_Green",
  "Exile_Bike_QuadBike_Black", 
  "Exile_Bike_QuadBike_Blue", 
  "Exile_Bike_QuadBike_Red", 
  "Exile_Bike_QuadBike_White", 
  "Exile_Bike_QuadBike_Nato", 
  "Exile_Bike_QuadBike_Csat",
  "Exile_Bike_QuadBike_Fia", 
  "Exile_Bike_QuadBike_Guerilla01", 
  "Exile_Bike_QuadBike_Guerilla02",
"Exile_Car_Strider",
	"Exile_Car_Hunter",
	"Exile_Car_Ifrit",
	"B_mas_cars_Hilux_MG",
	"B_mas_cars_Hilux_AGS30",
	"B_mas_cars_Hilux_SPG9",
	"B_mas_cars_Hilux_RKTS",
	"B_mas_cars_Hilux_Unarmed",
	"B_mas_cars_Hilux_Med",
	"B_mas_cars_Hilux_M2",
	"B_mas_cars_LR_Unarmed",
	"B_mas_cars_LR_Med",
	"B_mas_cars_LR_M2",
	"B_mas_cars_LR_Mk19",
	"B_mas_cars_LR_TOW",
	"B_mas_cars_LR_SPG9",
	"I_mas_cars_UAZ_MG",
	"I_mas_cars_UAZ_AGS30",
	"I_mas_cars_UAZ_SPG9",
	"I_mas_cars_UAZ_Unarmed",
	"I_mas_cars_UAZ_Med",
	"I_mas_cars_UAZ_M2",
	"O_mas_cars_UAZ_MG",
	"O_mas_cars_UAZ_AGS30",
	"O_mas_cars_UAZ_SPG9",
	"O_mas_cars_UAZ_Unarmed",
	"O_mas_cars_UAZ_Med",
	"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker",
			"I_MRAP_03_hmg_F",                 
            "I_MRAP_03_gmg_F",
            "O_MRAP_02_hmg_F", 								
           "O_MRAP_02_gmg_F",
          "B_MRAP_01_gmg_F",
            "B_MRAP_01_hmg_F",
           "B_APC_Wheeled_01_cannon_F",
			"B_mas_HMMWV_M134",
					"B_mas_HMMWV_SOV",
					"B_mas_HMMWV_SOV_M134",
					"B_mas_HMMWV_TOW",
					"B_mas_HMMWV_MK19",
					"B_mas_HMMWV_UNA",
					"B_mas_HMMWV_MEV",
					"B_mas_HMMWV_M2_des",
					"B_mas_HMMWV_M134_des",
					"B_mas_HMMWV_SOV_des",
					"B_mas_HMMWV_SOV_M134_des",
					"B_mas_HMMWV_TOW_des",
					"B_mas_HMMWV_MK19_des",
					"B_mas_HMMWV_UNA_des",
					"B_mas_HMMWV_MEV_des",
					"B_mas_HMMWV_M2",
"Mrshounka_corbillard_c",
"Mrshounka_corbillard_c_bleufonce",
"Mrshounka_corbillard_c_grise",
"Mrshounka_corbillard_c_jaune",
"Mrshounka_corbillard_c_noir",
"Mrshounka_corbillard_c_orange",
"Mrshounka_corbillard_c_rose",
"Mrshounka_corbillard_c_rouge",
"Mrshounka_corbillard_c_violet",
"shounka_a3_dafxf_euro6_f",
"shounka_f430_spider_bleufonce",
"shounka_f430_spider_grise",
"shounka_f430_spider_jaune",
"shounka_f430_spider_noir",
"shounka_f430_spider_orange",
"shounka_f430_spider_rose",
"shounka_f430_spider_rouge",
"shounka_f430_spider_violet",
"shounka_ivceco_bleufonce",
"shounka_ivceco_grise",
"shounka_ivceco_jaune",
"shounka_ivceco_noir",
"shounka_ivceco_orange",
"shounka_ivceco_rose",
"shounka_ivceco_rouge",
"shounka_ivceco_violet",
"shounka_limo_civ_bleufonce",
"shounka_limo_civ_grise",
"shounka_limo_civ_jaune",
"shounka_limo_civ_noir",
"shounka_limo_civ_orange",
"shounka_limo_civ_rose",
"shounka_limo_civ_violet",
"Mrshounka_lykan_c_bleufonce",
"Mrshounka_lykan_c_grise",
"Mrshounka_lykan_c_jaune",
"Mrshounka_lykan_c_noir",
"Mrshounka_lykan_c_orange",
"Mrshounka_lykan_c_rose",
"Mrshounka_lykan_c_rouge",
"Mrshounka_lykan_c_violet",
"Mrshounka_a3_308_civ_bleufonce",
"Mrshounka_a3_308_civ_grise",
"Mrshounka_a3_308_civ_jaune",
"Mrshounka_a3_308_civ_noir",
"Mrshounka_a3_308_civ_orange",
"Mrshounka_a3_308_civ_rose",
"Mrshounka_a3_308_civ_rouge",
"Mrshounka_a3_308_civ_violet",
"Mr_Own_buggy_bleufonce",
"Mr_Own_buggy_grise",
"Mr_Own_buggy_jaune",
"Mr_Own_buggy_noir",
"Mr_Own_buggy_orange",
"Mr_Own_buggy_rose",
"Mr_Own_buggy_rouge",
"Mr_Own_buggy_violet",
"Mr_Own_dodge15_civ",
"Mr_Own_dodge15_civ_bleufonce",
"Mr_Own_dodge15_civ_grise",
"Mr_Own_dodge15_civ_jaune",
"Mr_Own_dodge15_civ_noir",
"Mr_Own_dodge15_civ_orange",
"Mr_Own_dodge15_civ_rose",
"Mr_Own_dodge15_civ_rouge",
"Mr_Own_dodge15_civ_violet",
"Mr_Own_hummer_civ_noir",
"Mr_Own_hummer_civ_bleufonce",
"Mr_Own_hummer_civ_grise",
"Mr_Own_hummer_civ_jaune",
"Mr_Own_hummer_civ_orange",
"Mr_Own_hummer_civ_rose",
"Mr_Own_hummer_civ_violet",
"Mr_Own_hummer_civ_rouge",
"shounka_buggy_bleufonce",
"shounka_buggy_grise",
"shounka_buggy_jaune",
"shounka_buggy_noir",
"shounka_buggy_orange",
"shounka_buggy_rose",
"shounka_buggy_rouge",
"shounka_buggy_violet",
"shounka_avalanche_bleufonce",
"shounka_avalanche_grise",
"shounka_avalanche_jaune",
"shounka_avalanche_noir",
"shounka_avalanche_orange",
"shounka_avalanche_rose",
"shounka_avalanche_rouge",
"shounka_avalanche_violet",
"shounka_monsteur_bleufonce",
"shounka_monsteur_grise",
"shounka_monsteur_jaune",
"shounka_monsteur_noir",
"shounka_monsteur_orange",
"shounka_monsteur_rose",
"shounka_monsteur_rouge",
"shounka_monsteur_violet",
"Mrshounka_Vandura_civ",
"Mrshounka_Vandura_civ_bleufonce",
"Mrshounka_Vandura_civ_grise",
"Mrshounka_Vandura_civ_jaune",
"Mrshounka_Vandura_civ_noir",
"Mrshounka_Vandura_civ_orange",
"Mrshounka_Vandura_civ_rose",
"Mrshounka_Vandura_civ_rouge",
"Mrshounka_Vandura_civ_violet",
"Mrshounka_yamaha_p_bf",
"Mrshounka_yamaha_p_g",
"Mrshounka_yamaha_p_j",
"Mrshounka_yamaha_p_noir",
"Mrshounka_yamaha_p_o",
"Mrshounka_yamaha_p_rose",
"Mrshounka_yamaha_p_r",
"Mrshounka_yamaha_p_v",
"SIG_Roadrunner",
"SIG_Hubcaps",
"SIG_Magnums",
"SIG_Hcode",
"SIG_Superbee",
"SIG_SuperbeeY",
"SIG_SuperbeeB",
"SIG_SuperbeeL",
"SIG_SuperbeeM",
"SIG_SuperbeeG"					
];


/****** LIFT WITH VEHICLE / HELIPORTER AVEC VEHICULE ******/

/**
 * List of class names of helicopters which can lift objects.
 * Liste des noms de classes des hélicoptères pouvant héliporter des objets.
 */
R3F_LOG_CFG_can_lift = R3F_LOG_CFG_can_lift +
[
	// e.g. : "MyLifterVehicleClassName1", "MyLifterVehicleClassName2"
	// Here comes the Classname for the Chopper can Lift
	
];

/**
 * List of class names of objects which can be lifted.
 * Liste des noms de classes des objets héliportables.
 */
R3F_LOG_CFG_can_be_lifted = R3F_LOG_CFG_can_be_lifted +
[
	// e.g. : "MyLiftableObjectClassName1", "MyLiftableObjectClassName2"
	// Here comes the Classname for the Vehicle which can be Lifted
	
];


/****** LOAD IN VEHICLE / CHARGER DANS LE VEHICULE ******/

/*
* (EN)
 * This section uses a numeric quantification of capacity and cost of the objets.
 * For example, in a vehicle has a capacity of 100, we will be able to load in 5 objects costing 20 capacity units.
 * The capacity doesn't represent a real volume or weight, but a choice made for gameplay.
 * 
 * (FR)
 * Cette section utilise une quantification numérique de la capacité et du coût des objets.
 * Par exemple, dans un véhicule d'une capacité de 100, nous pouvons charger 5 objets coûtant 20 unités de capacité.
 * La capacité ne représente ni un poids, ni un volume, mais un choix fait pour la jouabilité.
 */

/**
 * List of class names of vehicles or cargo objects which can transport objects.
 * The second element of the nested arrays is the load capacity (in relation with the capacity cost of the objects).
 * 
 * Liste des noms de classes des véhicules ou "objets contenant" pouvant transporter des objets.
 * Le deuxième élément des sous-tableaux est la capacité de chargement (en relation avec le coût de capacité des objets).
 */
R3F_LOG_CFG_can_transport_cargo = R3F_LOG_CFG_can_transport_cargo +
[
	// e.g. : ["MyTransporterClassName1", itsCapacity], ["MyTransporterClassName2", itsCapacity]
	// Here Comes the Vehicle which can Load Stuff 	
];

/**
 * List of class names of objects which can be loaded in transport vehicle/cargo.
 * The second element of the nested arrays is the cost capacity (in relation with the capacity of the vehicles).
 * 
 * Liste des noms de classes des objets transportables.
 * Le deuxième élément des sous-tableaux est le coût de capacité (en relation avec la capacité des véhicules).
 */
R3F_LOG_CFG_can_be_transported_cargo = R3F_LOG_CFG_can_be_transported_cargo +
[
	// e.g. : ["MyTransportableObjectClassName1", itsCost], ["MyTransportableObjectClassName2", itsCost]
	// Here Comes the Stuff what you want to load in the Vehicle  example: ["IG_supplyCrate_F", 40]
	
];

/****** MOVABLE-BY-PLAYER OBJECTS / OBJETS DEPLACABLES PAR LE JOUEUR ******/

/**
 * List of class names of objects which can be carried and moved by a player.
 * Liste des noms de classes des objets qui peuvent être portés et déplacés par le joueur.
 */
R3F_LOG_CFG_can_be_moved_by_player = R3F_LOG_CFG_can_be_moved_by_player +
[
	// Here Comes that stuff in what a player can Move 
	// e.g. : "MyMovableObjectClassName1", "MyMovableObjectClassName2"
	"CargoNet_01_box_F",
	"I_CargoNet_01_ammo_F",
	"Box_NATO_AmmoVeh_F",
	"B_supplyCrate_F",
	"I_CargoNET_01_F",
	"Box_NATO_Wps_F",
	"C_supplyCrate_F",
	"IG_supplyCrate_F",
	"Box_IND_AmmoVeh_F",
	"B_Slingload_01_Cargo_F",
	"B_Slingload_01_Fuel_F",
	"B_Slingload_01_Ammo_F",
	"B_Slingload_01_Medevac_F",
	"B_Slingload_01_Repair_F",
	"Land_Pod_Heli_Transport_04_covered_F",
	"Land_Pod_Heli_Transport_04_fuel_F",
	"Land_Pod_Heli_Transport_04_box_F",
	"Land_Pod_Heli_Transport_04_repair_F",
	"Land_Pod_Heli_Transport_04_medevac_F",
	"Land_Pod_Heli_Transport_04_bench_F",
	"Land_Pod_Heli_Transport_04_covered_black_F",
	"Land_Pod_Heli_Transport_04_fuel_black_F",
	"Land_Pod_Heli_Transport_04_box_black_F",
	"Land_Pod_Heli_Transport_04_repair_black_F",
	"Land_Pod_Heli_Transport_04_medevac_black_F",
	"Land_Pod_Heli_Transport_04_bench_black_F"
	
];
