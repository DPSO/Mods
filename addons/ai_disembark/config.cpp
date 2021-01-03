#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "dpso_afm_common"
        };
        author = "DPSO";
        authors[] = {"Madin", "veteran29"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
