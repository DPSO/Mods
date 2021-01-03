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
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgRespawnTemplates.hpp"
