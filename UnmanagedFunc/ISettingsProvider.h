#pragma once

class ISettingsProvider
{
public:
	virtual ~ISettingsProvider() { }

	virtual std::wstring Get(std::string key) = 0;
};
