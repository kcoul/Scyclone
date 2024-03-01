//
// Created by valentin.ackva on 10.11.2022.
//

#ifndef AUDIO_PLUGIN_EXAMPLE_PLUGINPARAMETERS_H
#define AUDIO_PLUGIN_EXAMPLE_PLUGINPARAMETERS_H

#include <JuceHeader.h>

class PluginParameters {
public:
    inline static auto INPUT_GAIN_ID_STR = "param_input_gain";

    inline static auto TRAN_ATTACK_TIME_NETWORK1_ID_STR = "param_tran_attack_time_1";
    inline static auto TRAN_ATTACK_TIME_NETWORK2_ID_STR = "param_tran_attack_time_2";

    inline static auto TRAN_SHAPER_NETWORK1_ID_STR = "tran_shaper_network1";
    inline static auto FILTER_NETWORK1_ID_STR = "filter_network1";
    inline static auto TRAN_SHAPER_NETWORK2_ID_STR = "tran_shaper_network2";
    inline static auto FILTER_NETWORK2_ID_STR = "filter_network2";

    inline static auto SELECT_NETWORK1_ID_STR = "select_network1";
    inline static auto GRAIN_ON_OFF_NETWORK1_ID_STR = "grain_on_off_network1";
    inline static auto ON_OFF_NETWORK1_ID_STR = "on_off_network1";
    inline static auto SELECT_NETWORK2_ID_STR = "select_network2";
    inline static auto GRAIN_ON_OFF_NETWORK2_ID_STR = "grain_on_off_network2";
    inline static auto ON_OFF_NETWORK2_ID_STR = "on_off_network2";

    inline static auto GRAIN_NETWORK1_INTERVAL_ID_STR = "interval_grain_network_1";
    inline static auto GRAIN_NETWORK1_SIZE_ID_STR = "size_grain_network_1";
    inline static auto GRAIN_NETWORK1_PITCH_ID_STR = "pitch_grain_network_1";
    inline static auto GRAIN_NETWORK1_MIX_ID_STR = "mix_grain_network_1";
    inline static auto GRAIN_NETWORK2_INTERVAL_ID_STR = "interval_grain_network_2";
    inline static auto GRAIN_NETWORK2_SIZE_ID_STR = "size_grain_network_2";
    inline static auto GRAIN_NETWORK2_PITCH_ID_STR = "pitch_grain_network_2";
    inline static auto GRAIN_NETWORK2_MIX_ID_STR = "mix_grain_network_2";

    inline static auto FADE_ID_STR = "param_fade";

    inline static auto COMP_DRY_WET_ID_STR = "param_dynamic";
    inline static auto COMP_THRESHOLD_ID_STR = "param_comp_threshold";
    inline static auto COMP_RATIO_ID_STR = "param_comp_ratio";
    inline static auto COMP_MAKEUPGAIN_ID_STR = "param_comp_makeup";

    inline static auto OUTPUT_GAIN_ID_STR = "param_output_gain";
    inline static auto DRY_WET_ID_STR = "param_mix";

#if JUCE_7 //Set by CMake depending on which version it is told to build against
    inline static const juce::ParameterID
    
            INPUT_GAIN_ID = {INPUT_GAIN_ID_STR, 1},
    
            TRAN_ATTACK_TIME_NETWORK1_ID = {"param_tran_attack_time_1", 1},
            TRAN_ATTACK_TIME_NETWORK2_ID = {"param_tran_attack_time_2", 1},
    
            TRAN_SHAPER_NETWORK1_ID = {"tran_shaper_network1", 1},
            FILTER_NETWORK1_ID = {"filter_network1", 1},
            TRAN_SHAPER_NETWORK2_ID = {"tran_shaper_network2", 1},
            FILTER_NETWORK2_ID = {"filter_network2", 1},
    
            SELECT_NETWORK1_ID = {"select_network1", 1},
            GRAIN_ON_OFF_NETWORK1_ID = {"grain_on_off_network1", 1},
            ON_OFF_NETWORK1_ID = {"on_off_network1", 1},
            SELECT_NETWORK2_ID = {"select_network2", 1},
            GRAIN_ON_OFF_NETWORK2_ID = {"grain_on_off_network2", 1},
            ON_OFF_NETWORK2_ID = {"on_off_network2", 1},
    
            GRAIN_NETWORK1_INTERVAL_ID = {"interval_grain_network_1", 1},
            GRAIN_NETWORK1_SIZE_ID = {"size_grain_network_1", 1},
            GRAIN_NETWORK1_PITCH_ID = {"pitch_grain_network_1", 1},
            GRAIN_NETWORK1_MIX_ID = {"mix_grain_network_1", 1},
            GRAIN_NETWORK2_INTERVAL_ID = {"interval_grain_network_2", 1},
            GRAIN_NETWORK2_SIZE_ID = {"size_grain_network_2", 1},
            GRAIN_NETWORK2_PITCH_ID = {"pitch_grain_network_2", 1},
            GRAIN_NETWORK2_MIX_ID = {"mix_grain_network_2", 1},
    
            FADE_ID = {"param_fade", 1},
    
            COMP_DRY_WET_ID = {"param_dynamic", 1},
            COMP_THRESHOLD_ID = {"param_comp_threshold", 1},
            COMP_RATIO_ID = {"param_comp_ratio", 1},
            COMP_MAKEUPGAIN_ID = {"param_comp_makeup", 1},
    
            OUTPUT_GAIN_ID = {"param_output_gain", 1},
            DRY_WET_ID = {"param_mix", 1}
            ;
#endif
    inline static const juce::String
    
            INPUT_GAIN_NAME = "Input Gain",

            TRAN_ATTACK_TIME_NETWORK1_NAME = "Transient Attack Time Network 1",
            TRAN_ATTACK_TIME_NETWORK2_NAME = "Transient Attack Time Network 2",

            TRAN_SHAPER_NETWORK1_NAME = "Transient Shaper Network 1",
            FILTER_NETWORK1_NAME = "Filter Network 1",
            TRAN_SHAPER_NETWORK2_NAME = "Transient Shaper Network 2",
            FILTER_NETWORK2_NAME = "Filter Network 2",

            SELECT_NETWORK1_NAME = "Select Network 1",
            GRAIN_ON_OFF_NETWORK1_NAME = "Grain On Off Network 1",
            ON_OFF_NETWORK1_NAME = "On Off Network 1",
            SELECT_NETWORK2_NAME = "Select Network 2",
            GRAIN_ON_OFF_NETWORK2_NAME = "Grain On Off Network 2",
            ON_OFF_NETWORK2_NAME = "On Off Network 2",

            GRAIN_NETWORK1_INTERVAL_NAME = "Grain Interval Network 1",
            GRAIN_NETWORK1_SIZE_NAME = "Grain Size Network 1",
            GRAIN_NETWORK1_PITCH_NAME = "Grain Pitch Network 1",
            GRAIN_NETWORK1_MIX_NAME = "Grain Mix Network 1",

            GRAIN_NETWORK2_INTERVAL_NAME = "Grain Interval Network 2",
            GRAIN_NETWORK2_SIZE_NAME = "Grain Size Network 2",
            GRAIN_NETWORK2_PITCH_NAME = "Grain Pitch Network 2",
            GRAIN_NETWORK2_MIX_NAME = "Grain Mix Network 2",

            FADE_NAME = "Fade",
            
            COMP_DRY_WET_NAME = "Dynamic",
            COMP_THRESHOLD_NAME = "Comp Threshold",
            COMP_RATIO_NAME = "Comp Ratio",
            COMP_MAKEUPGAIN_NAME = "Comp Makeup",

            OUTPUT_GAIN_NAME = "Output Gain",

            DRY_WET_NAME = "Global Mix",
    
            // not automatable parameters
            ADVANCED_PARAMETER_CONTROL_VISIBLE_NAME = "advanced_parameter_control_visible",
            NETWORK1_NAME_NAME = "network1_name",
            NETWORK2_NAME_NAME = "network2_name"
            ;

    static juce::StringArray getPluginParameterList();
    static juce::AudioProcessorValueTreeState::ParameterLayout createParameterLayout();
    static juce::ValueTree createNotAutomatableParameterLayout();
    static void removeNotAutomatableParameterLayout(juce::ValueTree notAutomatableParameters);

private:

    inline static juce::StringArray parameterList;
    
    inline static juce::NormalisableRange<float> dryWetRange {0.0f, 1.0f, 0.01f};
    inline static juce::NormalisableRange<float> fadeRange{0.0f, 1.0f, 0.01f};
    inline static juce::NormalisableRange<float> dynamicRange{-80.0, 0.0f, 0.01f};
    inline static juce::NormalisableRange<float> gainRange {-12.0f, 12.0f, 0.1f};
    inline static juce::NormalisableRange<float> raveTempRange {-15.f, 15.f, 0.01f};
    inline static juce::NormalisableRange<float> compThresholdRange {-60.f, 0.0f, 0.1f};
    inline static juce::NormalisableRange<float> compRatioRange {1.0f, 10.f, 0.1f};
    inline static juce::NormalisableRange<float> compMakeupRange {-0.1f, 12.f, 0.1f};
    inline static juce::NormalisableRange<float> filterRange{ -1.0f, 1.0f, 0.001f };
    inline static juce::NormalisableRange<float> tranShaperRange{ -1.0f, 1.0f, 0.001f };
    inline static juce::NormalisableRange<float> tranAttackTimeRange {0.05f, 2.0f, 0.001f};
    inline static juce::NormalisableRange<float> grainPitchRange{-12.f, 12.f, 0.01f};
    inline static juce::NormalisableRange<float> grainIntervalRange{.001f, 2.f, .0001f };
    inline static juce::NormalisableRange<float> grainSizeRange{10.f, 100.f, 0.1f };

    inline static auto gain_attribute_label = "dB";
    inline static auto gain_attribute_sfv = [] (float x, auto) {
        juce::String sign = (x > 0.f) ? "+ " : (x < 0.f) ? "- " : " ";
        juce::String value (std::abs(x), 1);
        return sign + value;
    };
    inline static auto gain_attribute_vfs = [] (const juce::String& x) { return x.getFloatValue(); };

    inline static auto ms_format_sfv = [] (float x, auto) {
        if (x < 100.0f)
            return juce::String(x, 1) + " ms";
        else
            return juce::String(std::roundf(x)) + " ms";
    };

    inline static auto ms_attribute_sfv = [] (float x, auto) {
        if (x < 1.f)
            return juce::String (x * 1000.f, 0) + " ms";
        else
            return juce::String (x, 1) + " sec";
    };
    inline static auto ms_attribute_vfs = [] (const juce::String& x) {
        float value = x.getFloatValue();
        if (value != static_cast<float>((int) value) && value <= 2.f) {
            return value;
        } else {
            return value / 1000.f;
        }
    };

    inline static auto semitones_attribute_label = "st";
    inline static auto semitones_attribute_sfv = [] (float x, auto) { return juce::String(x, 1); };
    inline static auto semitones_attribute_vfs = [] (const juce::String& x){ return x.getFloatValue(); };

    inline static auto dB_attribute_label = "dB";
    inline static auto dB_attribute_sfv = [] (float x, auto) { return juce::String (x, 1); };
    inline static auto dB_attribute_vfs = [] (const juce::String& x) { return x.getFloatValue(); };

    inline static auto makeup_attribute_sfv = [] (float x, auto) {
        if (x < 0.f) return juce::String {"Auto"};
        else {
            juce::String value (x, 1);
            return value + " dB";
        }
    };
    inline static auto makeup_attribute_vfs = [] (const juce::String& x) { return x.getFloatValue(); };

    inline static auto ratio_attribute_label = ":1";
    inline static auto ratio_attribute_sfv = [] (float x, auto) { return juce::String (x, 1); };
    inline static auto ratio_attribute_vfs = [] (const juce::String& x) { return x.getFloatValue(); };

    inline static auto percentage_attribute_label = "%";
    inline static auto percentage_attribute_sfv = [] (float x, auto) { return juce::String (x * 100.f, 0); };
    inline static auto percentage_attribute_vfs = [] (const juce::String& x) { return x.getFloatValue() / 100; };

    inline static auto fade_attribute_sfv = [] (float x, auto) {
        float source2 = (1.f - x) * 100.f;
        float source1 = x * 100.f;
        juce::String returnString = juce::String{static_cast<int>(source1)} + " / " + juce::String{static_cast<int>(source2)};
        return returnString; };
    inline static auto fade_attribute_vfs = [] (const juce::String& x) { return x.getFloatValue() / 100; };
#if JUCE_7
    inline static juce::AudioParameterFloatAttributes gain_attributes = juce::AudioParameterFloatAttributes()
        .withStringFromValueFunction (gain_attribute_sfv)
        .withValueFromStringFunction (gain_attribute_vfs)
        .withLabel (gain_attribute_label);

    inline static juce::AudioParameterFloatAttributes ms_format = juce::AudioParameterFloatAttributes()
            .withStringFromValueFunction (ms_format_sfv);

    inline static juce::AudioParameterFloatAttributes ms_attributes = juce::AudioParameterFloatAttributes()
            .withStringFromValueFunction (ms_attribute_sfv)
            .withValueFromStringFunction (ms_attribute_vfs)
            .withLabel ("");

    inline static juce::AudioParameterFloatAttributes semitones_attributes = juce::AudioParameterFloatAttributes()
            .withStringFromValueFunction(semitones_attribute_sfv)
            .withValueFromStringFunction(semitones_attribute_vfs)
            .withLabel(semitones_attribute_label);

    inline static juce::AudioParameterFloatAttributes dB_attributes = juce::AudioParameterFloatAttributes()
            .withStringFromValueFunction (dB_attribute_sfv)
            .withValueFromStringFunction (dB_attribute_vfs)
            .withLabel (dB_attribute_label);

    inline static juce::AudioParameterFloatAttributes makeup_attributes = juce::AudioParameterFloatAttributes()
            .withStringFromValueFunction (makeup_attribute_sfv)
            .withValueFromStringFunction (makeup_attribute_vfs)
            .withLabel ("");

    inline static juce::AudioParameterFloatAttributes ratio_attributes = juce::AudioParameterFloatAttributes()
            .withStringFromValueFunction (ratio_attribute_sfv)
            .withValueFromStringFunction (ratio_attribute_vfs)
            .withLabel (ratio_attribute_label);

    inline static juce::AudioParameterFloatAttributes percentage_attributes = juce::AudioParameterFloatAttributes()
            .withStringFromValueFunction (percentage_attribute_sfv)
            .withValueFromStringFunction (percentage_attribute_vfs)
            .withLabel (percentage_attribute_label);

    inline static juce::AudioParameterFloatAttributes fade_attributes = juce::AudioParameterFloatAttributes()
            .withStringFromValueFunction (fade_attribute_sfv)
            .withValueFromStringFunction (fade_attribute_vfs);

#endif
//    inline static juce::ValueTreePropertyWithDefault network1NameProperty = juce::ValueTreePropertyWithDefault(notAutomatableParameters, NETWORK1_NAME_NAME,
//                                                                                                               nullptr, "Funk");
//
//    inline static juce::ValueTreePropertyWithDefault network2NameProperty = juce::ValueTreePropertyWithDefault(notAutomatableParameters, NETWORK1_NAME_NAME,
//                                                                                                   nullptr, "Djembe");
    
    JUCE_HEAVYWEIGHT_LEAK_DETECTOR (PluginParameters)
};

#endif //AUDIO_PLUGIN_EXAMPLE_PLUGINPARAMETERS_H
