#pragma once

#include "ModuleBase.hpp"

namespace Modules
{
	class ModuleGame : public Utils::Singleton<ModuleGame>, public ModuleBase
	{
	public:
		Command* VarLanguage;
		Command* VarSkipTitleSplash;
		Command* VarSkipIntroVideos;
		Command* VarLogName;
		Command* VarMenuURL;
		Command* VarRconPort;
		Command* VarMedalPack;
		Command* VarFirstRun;
		Command* VarExpandedScoreboard;
		Command* VarHideChat;
		Command* VarSuppressJuggling;
		Command* VarIconSet;
		Command* VarHideH3UI;
		Command* VarScreenshotsFolder;

		int DebugFlags;

		std::vector<std::string> CustomMapList;
		std::vector<std::string> MapList;
		std::vector<std::string> MedalPackList;
		std::vector<std::string> FiltersExclude;
		std::vector<std::string> FiltersInclude;

		std::vector<BYTE> forge_map;
		std::wstring map_name;

		ModuleGame();
		void UpdateMapList();
		void UpdateCustomMapList();
		void onVKeyboardInput(std::wstring input);
	};
}