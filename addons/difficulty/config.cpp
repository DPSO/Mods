#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "dpso_afm_main"
        };
        author = "DPSO";
        authors[] = {"3Mydlo3", "veteran29"};
        VERSION_CONFIG;
    };
};

#include "CfgAILevelPresets.hpp"
#include "CfgDifficultyPresets.hpp"
