//
//  ProcessorCompressor.cpp
//  VAESynth
//
//  Created by Fares Schulz on 17.03.23.
//

#include "ProcessorCompressor.h"

ProcessorCompressor::ProcessorCompressor(juce::AudioProcessorValueTreeState &apvts): compressor(){
#if JUCE7
    compressor.setThreshold(apvts.getRawParameterValue(PluginParameters::COMP_THRESHOLD_ID.getParamID())->load());
    compressor.setRatio(apvts.getRawParameterValue(PluginParameters::COMP_RATIO_ID.getParamID())->load());
    compressor.setMakeUpGain(apvts.getRawParameterValue(PluginParameters::COMP_MAKEUPGAIN_ID.getParamID())->load());
#else
    compressor.setThreshold(apvts.getRawParameterValue(PluginParameters::COMP_THRESHOLD_ID_STR)->load());
    compressor.setRatio(apvts.getRawParameterValue(PluginParameters::COMP_RATIO_ID_STR)->load());
    compressor.setMakeUpGain(apvts.getRawParameterValue(PluginParameters::COMP_MAKEUPGAIN_ID_STR)->load());
#endif
}

ProcessorCompressor::~ProcessorCompressor() = default;

void ProcessorCompressor::prepare(const juce::dsp::ProcessSpec &spec){
    compressor.prepare(spec);
}

void ProcessorCompressor::processBlock(juce::AudioBuffer<float>& buffer){
    compressor.processBlock(buffer);
}

void ProcessorCompressor::parameterChanged(const juce::String &parameterID, float newValue){
#if JUCE7
    if (parameterID == PluginParameters::COMP_THRESHOLD_ID.getParamID()) {
        compressor.setThreshold(newValue);
    } else if (parameterID == PluginParameters::COMP_RATIO_ID.getParamID()) {
        compressor.setRatio(newValue);
    } else if (parameterID == PluginParameters::COMP_MAKEUPGAIN_ID.getParamID()) {
#else
    if (parameterID == PluginParameters::COMP_THRESHOLD_ID_STR) {
        compressor.setThreshold(newValue);
    } else if (parameterID == PluginParameters::COMP_RATIO_ID_STR) {
        compressor.setRatio(newValue);
    } else if (parameterID == PluginParameters::COMP_MAKEUPGAIN_ID_STR) {
#endif
        if (newValue == -0.1f){
            compressor.setAutoMakeUpGain(true);
        }
        else {
            compressor.setAutoMakeUpGain(false);
            compressor.setMakeUpGain(newValue);
        }
    }
}
