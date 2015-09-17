/*
	data[] = {
		{{Item_1, count item},{Item_2,count item}, ...}, output, time, isWorkbench
	};
	
	{{Item_1, count item},{Item_2,count item}, ...} - Список предметов и их кол-во необходимое для крафтинга
	output											- Класс объекта получаемого после крафтинга
	time											- Время необходимое для крафтинга, в секундах
	isWorkbench										- Нужно ли находиться рядом с верстаком, 0 - нет, 1 - да
	
	Created by SteelRat ( ProjectTeam )

*/
class CfgCrafting {
	class CraftingList {
		class Survival {
		
			name = $STR_CRAFTING_ITEMS_FILTER_SURVIVAL;

			class CampFire {
//				name = $STR_ITEMS_LIST_CAMPFIRE;
				data[] = {
					{{"itemWood",5}},"Land_FirePlace_F",10,0
				};
			};
			class SleepingBag {
//				name = $STR_ITEMS_LIST_SLEEPINGBAG;
				data[] = {
					{{"itemCloth",15}},"itemSleepingBag",30,0
				};
			};
			class WoodStorageBox {
//				name = $STR_ITEMS_LIST_WOODSTORAGEBOX;
				data[] = {
					{{"itemWood",30}},"Land_WoodStorageBox",60,0
				};
			};
			class LowGradeFuel {
				name = $STR_ITEMS_LIST_LOWGRADEFUEL;
				data[] = {{"itemAnimalFat",2},{"itemCloth",1}};
			};
			class Workbench {
				name = $STR_ITEMS_LIST_WORKBENCH;
				data[] = {{"itemStones",8},{"itemWood",50}};
			};
			class Furnace {
				name = $STR_ITEMS_LIST_FURNACE;
				data[] = {{"itemStones",15},{"itemWood",20},{"itemLowGradeFuel",10}};
				output = "itemFurnace";
			};
			class LowQualityMetal {
				name = $STR_ITEMS_LIST_LOWQUALITYMETAL;
				data[] = {{"itemMetalFragments",15}};
				output = "itemLowQualityMetal";
				isWorkbench = 1;
			};
		};
		
		class Resource {
		
			name = $STR_CRAFTING_ITEMS_FILTER_RESOURCE;
			
			class Resource_base {
				isWorkbench = 0;
			};
			class Gunpowder {
//				name = $STR_ITEMS_LIST_GUNPOWDER;
				data[] = {{"itemCharcoal",2},{"itemSulfur",2}};
				output = "itemGunpowder";
			};
			class WoodPlanks {
//				name = $STR_ITEMS_LIST_WOODPLANKS;
				data[] = {{"itemWood",10}};
				output = "itemWoodPlanks";
			};
		};
	};
};