//
// Created by valentin.ackva on 10.11.2022.
//
#include "PluginParameters.h"

juce::AudioProcessorValueTreeState::ParameterLayout PluginParameters::createParameterLayout() {
    std::vector<std::unique_ptr<juce::RangedAudioParameter>> params;

    params.push_back (std::make_unique<juce::AudioParameterFloat> (
                                                                   #if JUCE7
                                                                   INPUT_GAIN_ID,
                                                                   #else
                                                                   INPUT_GAIN_ID_STR,
                                                                   #endif
                                                                   INPUT_GAIN_NAME,
                                                                   gainRange,
                                                                   0.f,
                                                                   #if JUCE7
                                                                   gain_attributes
                                                                   #else
                                                                   gain_attribute_label,
                                                                   juce::AudioProcessorParameter::genericParameter,
                                                                   gain_attribute_sfv,
                                                                   gain_attribute_vfs
                                                                   #endif
                                                                   ));

    params.push_back(std::make_unique<juce::AudioParameterFloat> (
                                                                  #if JUCE7
                                                                  TRAN_ATTACK_TIME_NETWORK1_ID,
                                                                  #else
                                                                  TRAN_ATTACK_TIME_NETWORK1_ID_STR,
                                                                  #endif
                                                                  TRAN_ATTACK_TIME_NETWORK1_NAME,
                                                                  tranAttackTimeRange,
                                                                  .5f,
                                                                  #if JUCE7
                                                                  ms_attributes
                                                                  #else
                                                                  "",
                                                                  juce::AudioProcessorParameter::genericParameter,
                                                                  ms_attribute_sfv,
                                                                  ms_attribute_vfs
                                                                  #endif
                                                                  ));

    params.push_back(std::make_unique<juce::AudioParameterFloat> (
                                                                  #if JUCE7
                                                                  TRAN_ATTACK_TIME_NETWORK2_ID,
                                                                  #else
                                                                  TRAN_ATTACK_TIME_NETWORK2_ID_STR,
                                                                  #endif
                                                                  TRAN_ATTACK_TIME_NETWORK2_NAME,
                                                                  tranAttackTimeRange,
                                                                  .5f,
                                                                  #if JUCE7
                                                                  ms_attributes
                                                                  #else
                                                                  "",
                                                                  juce::AudioProcessorParameter::genericParameter,
                                                                  ms_attribute_sfv,
                                                                  ms_attribute_vfs
                                                                  #endif
                                                                  ));

    params.push_back(std::make_unique<juce::AudioParameterFloat> (
                                                                  #if JUCE7
                                                                  TRAN_SHAPER_NETWORK1_ID,
                                                                  #else
                                                                  TRAN_SHAPER_NETWORK1_ID_STR,
                                                                  #endif
                                                                  TRAN_SHAPER_NETWORK1_NAME,
                                                                  tranShaperRange,
                                                                  0.3f));

    params.push_back(std::make_unique<juce::AudioParameterFloat> (
                                                                  #if JUCE7
                                                                  FILTER_NETWORK1_ID,
                                                                  #else
                                                                  FILTER_NETWORK1_ID_STR,
                                                                  #endif
                                                                  FILTER_NETWORK1_NAME,
                                                                  filterRange,
                                                                  0.7f,
                                                                  #if JUCE7
                                                                  percentage_attributes
                                                                  #else
                                                                  percentage_attribute_label,
                                                                  juce::AudioProcessorParameter::genericParameter,
                                                                  percentage_attribute_sfv,
                                                                  percentage_attribute_vfs
                                                                  #endif
                                                                  ));

    params.push_back(std::make_unique<juce::AudioParameterFloat> (
                                                                  #if JUCE7
                                                                  TRAN_SHAPER_NETWORK2_ID,
                                                                  #else
                                                                  TRAN_SHAPER_NETWORK2_ID_STR,
                                                                  #endif
                                                                  TRAN_SHAPER_NETWORK2_NAME,
                                                                  tranShaperRange,
                                                                  0.7f));

    params.push_back(std::make_unique<juce::AudioParameterFloat> (
                                                                  #if JUCE7
                                                                  FILTER_NETWORK2_ID,
                                                                  #else
                                                                  FILTER_NETWORK2_ID_STR,
                                                                  #endif
                                                                  FILTER_NETWORK2_NAME,
                                                                  filterRange,
                                                                  0.3f,
                                                                  #if JUCE7
                                                                  percentage_attributes
                                                                  #else
                                                                  percentage_attribute_label,
                                                                  juce::AudioProcessorParameter::genericParameter,
                                                                  percentage_attribute_sfv,
                                                                  percentage_attribute_vfs
                                                                  #endif
                                                                  ));

    params.push_back(std::make_unique<juce::AudioParameterBool>(SELECT_NETWORK1_ID_STR,
                                                                SELECT_NETWORK1_NAME,
                                                                false));

    params.push_back(std::make_unique<juce::AudioParameterBool>(GRAIN_ON_OFF_NETWORK1_ID_STR,
                                                                GRAIN_ON_OFF_NETWORK1_NAME,
                                                                false));

    params.push_back(std::make_unique<juce::AudioParameterBool>(ON_OFF_NETWORK1_ID_STR,
                                                                ON_OFF_NETWORK1_NAME,
                                                                true));

    params.push_back(std::make_unique<juce::AudioParameterBool>(SELECT_NETWORK2_ID_STR,
                                                                SELECT_NETWORK2_NAME,
                                                                false));

    params.push_back(std::make_unique<juce::AudioParameterBool>(GRAIN_ON_OFF_NETWORK2_ID_STR,
                                                                GRAIN_ON_OFF_NETWORK2_NAME,
                                                                false));

    params.push_back(std::make_unique<juce::AudioParameterBool>(ON_OFF_NETWORK2_ID_STR,
                                                                ON_OFF_NETWORK2_NAME,
                                                                false));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 GRAIN_NETWORK1_INTERVAL_ID,
                                                                 #else
                                                                 GRAIN_NETWORK1_INTERVAL_ID_STR,
                                                                 #endif
                                                                 GRAIN_NETWORK1_INTERVAL_NAME,
                                                                 grainIntervalRange,
                                                                 0.5f,
                                                                 #if JUCE7
                                                                 ms_format
                                                                 #else
                                                                 "",
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 ms_format_sfv
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 GRAIN_NETWORK1_SIZE_ID,
                                                                 #else
                                                                 GRAIN_NETWORK1_SIZE_ID_STR,
                                                                 #endif
                                                                 GRAIN_NETWORK1_SIZE_NAME,
                                                                 grainSizeRange,
                                                                 60.f,
                                                                 #if JUCE7
                                                                 ms_format
                                                                 #else
                                                                 "",
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 ms_format_sfv
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 GRAIN_NETWORK1_PITCH_ID,
                                                                 #else
                                                                 GRAIN_NETWORK1_PITCH_ID_STR,
                                                                 #endif
                                                                 GRAIN_NETWORK1_PITCH_NAME,
                                                                 grainPitchRange,
                                                                 0.0f,
                                                                 #if JUCE7
                                                                 semitones_attributes
                                                                 #else
                                                                 semitones_attribute_label,
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 semitones_attribute_sfv,
                                                                 semitones_attribute_vfs
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 GRAIN_NETWORK1_MIX_ID,
                                                                 #else
                                                                 GRAIN_NETWORK1_MIX_ID_STR,
                                                                 #endif
                                                                 GRAIN_NETWORK1_MIX_NAME,
                                                                 dryWetRange,
                                                                 0.25f,
                                                                 #if JUCE7
                                                                 percentage_attributes
                                                                 #else
                                                                 percentage_attribute_label,
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 percentage_attribute_sfv,
                                                                 percentage_attribute_vfs
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 GRAIN_NETWORK2_INTERVAL_ID,
                                                                 #else
                                                                 GRAIN_NETWORK2_INTERVAL_ID_STR,
                                                                 #endif
                                                                 GRAIN_NETWORK2_INTERVAL_NAME,
                                                                 grainIntervalRange,
                                                                 0.5f,
                                                                 #if JUCE7
                                                                 ms_format
                                                                 #else
                                                                 "",
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 ms_format_sfv
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 GRAIN_NETWORK2_SIZE_ID,
                                                                 #else
                                                                 GRAIN_NETWORK2_SIZE_ID_STR,
                                                                 #endif
                                                                 GRAIN_NETWORK2_SIZE_NAME,
                                                                 grainSizeRange,
                                                                 60.0f,
                                                                 #if JUCE7
                                                                 ms_format
                                                                 #else
                                                                 "",
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 ms_format_sfv
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 GRAIN_NETWORK2_PITCH_ID,
                                                                 #else
                                                                 GRAIN_NETWORK2_PITCH_ID_STR,
                                                                 #endif
                                                                 GRAIN_NETWORK2_PITCH_NAME,
                                                                 grainPitchRange,
                                                                 0.0f,
                                                                 #if JUCE7
                                                                 semitones_attributes
                                                                 #else
                                                                 semitones_attribute_label,
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 semitones_attribute_sfv,
                                                                 semitones_attribute_vfs
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 GRAIN_NETWORK2_MIX_ID,
                                                                 #else
                                                                 GRAIN_NETWORK2_MIX_ID_STR,
                                                                 #endif
                                                                 GRAIN_NETWORK2_MIX_NAME,
                                                                 dryWetRange,
                                                                 0.25f,
                                                                 #if JUCE7
                                                                 percentage_attributes
                                                                 #else
                                                                 percentage_attribute_label,
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 percentage_attribute_sfv,
                                                                 percentage_attribute_vfs
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 FADE_ID,
                                                                 #else
                                                                 FADE_ID_STR,
                                                                 #endif
                                                                 FADE_NAME,
                                                                 fadeRange,
                                                                 1.f,
                                                                 #if JUCE7
                                                                 fade_attributes
                                                                 #else
                                                                 "",
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 fade_attribute_sfv,
                                                                 fade_attribute_vfs
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 COMP_DRY_WET_ID,
                                                                 #else
                                                                 COMP_DRY_WET_ID_STR,
                                                                 #endif
                                                                 COMP_DRY_WET_NAME,
                                                                 dryWetRange,
                                                                 1.0f,
                                                                 #if JUCE7
                                                                 percentage_attributes
                                                                 #else
                                                                 percentage_attribute_label,
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 percentage_attribute_sfv,
                                                                 percentage_attribute_vfs
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 COMP_THRESHOLD_ID,
                                                                 #else
                                                                 COMP_THRESHOLD_ID_STR,
                                                                 #endif
                                                                 COMP_THRESHOLD_NAME,
                                                                 compThresholdRange,
                                                                 -20.0f,
                                                                 #if JUCE7
                                                                 dB_attributes
                                                                 #else
                                                                 dB_attribute_label,
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 dB_attribute_sfv,
                                                                 dB_attribute_vfs
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 COMP_RATIO_ID,
                                                                 #else
                                                                 COMP_RATIO_ID_STR,
                                                                 #endif
                                                                 COMP_RATIO_NAME,
                                                                 compRatioRange,
                                                                 4.0f,
                                                                 #if JUCE7
                                                                 ratio_attributes
                                                                 #else
                                                                 ratio_attribute_label,
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 ratio_attribute_sfv,
                                                                 ratio_attribute_vfs
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 COMP_MAKEUPGAIN_ID,
                                                                 #else
                                                                 COMP_MAKEUPGAIN_ID_STR,
                                                                 #endif
                                                                 COMP_MAKEUPGAIN_NAME,
                                                                 compMakeupRange,
                                                                 -0.1f,
                                                                 #if JUCE7
                                                                 makeup_attributes
                                                                 #else
                                                                 "",
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 makeup_attribute_sfv,
                                                                 makeup_attribute_vfs
                                                                 #endif
                                                                 ));

    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 OUTPUT_GAIN_ID,
                                                                 #else
                                                                 OUTPUT_GAIN_ID_STR,
                                                                 #endif
                                                                 OUTPUT_GAIN_NAME,
                                                                 gainRange,
                                                                 0.f,
                                                                 #if JUCE7
                                                                 gain_attributes
                                                                 #else
                                                                 gain_attribute_label,
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 gain_attribute_sfv,
                                                                 gain_attribute_vfs
                                                                 #endif
                                                                 ));


    params.push_back(std::make_unique<juce::AudioParameterFloat>(
                                                                 #if JUCE7
                                                                 DRY_WET_ID,
                                                                 #else
                                                                 DRY_WET_ID_STR,
                                                                 #endif
                                                                 DRY_WET_NAME,
                                                                 dryWetRange,
                                                                 0.7f,
                                                                 #if JUCE7
                                                                 percentage_attributes
                                                                 #else
                                                                 percentage_attribute_label,
                                                                 juce::AudioProcessorParameter::genericParameter,
                                                                 percentage_attribute_sfv,
                                                                 percentage_attribute_vfs
                                                                 #endif
                                                                 ));

    for (const auto & param : params) {
        parameterList.add(param->getParameterID());
    }

    return { params.begin(), params.end() };
}

juce::ValueTree PluginParameters::createNotAutomatableParameterLayout()
{
    juce::ValueTree notAutomatableParameters = juce::ValueTree("Settings");
    notAutomatableParameters.setProperty(ADVANCED_PARAMETER_CONTROL_VISIBLE_NAME, juce::var(false), nullptr);
    notAutomatableParameters.setProperty(NETWORK1_NAME_NAME, juce::var("Funk"), nullptr);
    notAutomatableParameters.setProperty(NETWORK2_NAME_NAME, juce::var("Djembe"), nullptr);
    return notAutomatableParameters;
}

void PluginParameters::removeNotAutomatableParameterLayout(juce::ValueTree notAutomatableParameters) {
    notAutomatableParameters.removeProperty(ADVANCED_PARAMETER_CONTROL_VISIBLE_NAME, nullptr);
    notAutomatableParameters.removeProperty(NETWORK1_NAME_NAME, nullptr);
    notAutomatableParameters.removeProperty(NETWORK2_NAME_NAME, nullptr);
}

juce::StringArray PluginParameters::getPluginParameterList() {
    return parameterList;
}
