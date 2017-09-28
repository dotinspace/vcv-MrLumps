#include "rack.hpp"


using namespace rack;


extern Plugin *plugin;

////////////////////
// module widgets
////////////////////

struct VCOWidget : ModuleWidget {
	VCOWidget();
};

struct VCFWidget : ModuleWidget {
	VCFWidget();
};

struct VCAWidget : ModuleWidget {
	VCAWidget();
};

struct DelayWidget : ModuleWidget {
	DelayWidget();
};

struct ADSRWidget : ModuleWidget {
	ADSRWidget();
};

struct VCMixerWidget : ModuleWidget {
	VCMixerWidget();
};

struct ScopeWidget : ModuleWidget {
	ScopeWidget();
};

struct SEQ3Widget : ModuleWidget {
	SEQ3Widget();
	Menu *createContextMenu();
};
