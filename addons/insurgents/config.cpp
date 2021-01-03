#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(soldier_i),
            QGVAR(soldier_o),
            QGVAR(soldier_b)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "dpso_afm_common"
        };
        author = "DPSO";
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgGroups.hpp"
#include "CfgInsurgentGear.hpp"
#include "CfgVehicles.hpp"
