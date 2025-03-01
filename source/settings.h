#ifndef _SETTINGS_H_
#define _SETTINGS_H_

#include <string>
#include <stdio.h>
#include <gctypes.h>

class Settings
{
public:
    // ******** Functions ********

    Settings();
    void LoadSettings(const char *path);
    void SaveSettings(const char *path);
    void SetSetting(const char *setting, const char *value);
    void ResetSettings();

    // ******** Setting Variables ********

    // Path to game config
    char ConfigPath[128];

    // Path to cheat file (.gct)
    char CheatFolder[128];

    // IOS we should boot the game under
    s32 IOS;

protected:
    void parseLine(const char *line);
};

extern "C"
{
    extern Settings AppConfig;
}

#endif