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
        authors[] = {"Jonpas"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
