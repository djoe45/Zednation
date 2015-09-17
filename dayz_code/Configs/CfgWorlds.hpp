class CfgWorlds {
	class DefaultWorld {
		class Weather {
			class Overcast;
		};
	};
 
	class CAWorld : DefaultWorld {
		class Grid {};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
  
		class Weather : Weather {
			class Lighting;
			
			class Overcast : Overcast {
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class DefaultLighting;

	class Stratis : CAWorld {
		cutscenes[] = {"Dayz_Stratis_intro1"};
		description = "Dayz Stratis"; // Имя мира
		pictureMap = "z\addons\dayz_code\gui\sss.paa"; // Карта (задний фон)
		pictureShot = "z\addons\dayz_code\gui\dayz_logo_ca.paa"; // Стандартная картинка для обзора
	};
	
	class Altis : CAWorld {
		cutscenes[] = {"Dayz_Altis_intro1"};
		description = "Dayz Altis";
		pictureShot = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
	};
};