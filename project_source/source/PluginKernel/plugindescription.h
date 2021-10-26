// --- CMAKE generated variables for your plugin

#include "pluginstructures.h"

#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- AU Plugin Cocoa View Names (flat namespace) 
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_7FA0734B17B138BCB89AB0EACBD18163
#define AU_COCOA_VIEW_NAME AUCocoaView_7FA0734B17B138BCB89AB0EACBD18163

// --- BUNDLE IDs (MacOS Only) 
const char* kAAXBundleID = "developer.aax.reversedelay.bundleID";
const char* kAUBundleID = "developer.au.reversedelay.bundleID";
const char* kVST3BundleID = "developer.vst3.reversedelay.bundleID";

// --- Plugin Names 
const char* kPluginName = "ReverseDelay";
const char* kShortPluginName = "ReverseDelay";
const char* kAUBundleName = "ReverseDelay";
const char* kAAXBundleName = "ReverseDelay";
const char* kVSTBundleName = "ReverseDelay";

// --- bundle name helper 
inline static const char* getPluginDescBundleName() 
{ 
#ifdef AUPLUGIN 
	return kAUBundleName; 
#endif 

#ifdef AAXPLUGIN 
	return kAAXBundleName; 
#endif 

#ifdef VSTPLUGIN 
	return kVSTBundleName; 
#endif 

	// --- should never get here 
	return kPluginName; 
} 

// --- Plugin Type 
const pluginType kPluginType = pluginType::kFXPlugin;

// --- VST3 UUID 
const char* kVSTFUID = "{7fa0734b-17b1-38bc-b89a-b0eacbd18163}";

// --- 4-char codes 
const int32_t kFourCharCode = '8vyh';
const int32_t kAAXProductID = '8vyh';
const int32_t kManufacturerID = 'VNDR';

// --- Vendor information 
const char* kVendorName = "Johan David";
const char* kVendorURL = "";
const char* kVendorEmail = "johan.dgdv@protonmail.com";

// --- Plugin Options 
const bool kProcessFrames = true;
const uint32_t kBlockSize = DEFAULT_AUDIO_BLOCK_SIZE;
const bool kWantSidechain = false;
const uint32_t kLatencyInSamples = 0;
const double kTailTimeMsec = 0.000000;
const bool kVSTInfiniteTail = false;
const bool kVSTSAA = false;
const uint32_t kVST3SAAGranularity = 1;
const uint32_t kAAXCategory = aaxPlugInCategory_None;

#endif
