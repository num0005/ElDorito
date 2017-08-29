#pragma once
#include <string>

namespace Patches::ContentItems
{
	void ApplyAll();
	void GetFilePathForMap(std::wstring name, wchar_t *path);
	bool LoadBLF(wchar_t* itemPath);
}
