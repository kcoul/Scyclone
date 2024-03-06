# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

# build with "V=1" for verbose builds
ifeq ($(V), 1)
V_AT =
else
V_AT = @
endif

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef PKG_CONFIG
  PKG_CONFIG=pkg-config
endif

ifndef STRIP
  STRIP=strip
endif

ifndef AR
  AR=ar
endif

ifndef CONFIG
  CONFIG=Debug
endif

JUCE_ARCH_LABEL := $(shell uname -m)

ifeq ($(CONFIG),Debug)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Debug
  JUCE_OUTDIR := build


  JUCE_CPPFLAGS := $(DEPFLAGS) "-DLINUX=1" "-DDEBUG=1" "-D_DEBUG=1" "-DJUCE_DISPLAY_SPLASH_SCREEN=0" "-DJUCE_USE_DARK_SPLASH_SCREEN=1" "-DJUCE_PROJUCER_VERSION=0x7000a" "-DJUCE_MODULE_AVAILABLE_juce_audio_basics=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_devices=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_formats=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_processors=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_utils=1" "-DJUCE_MODULE_AVAILABLE_juce_box2d=1" "-DJUCE_MODULE_AVAILABLE_juce_core=1" "-DJUCE_MODULE_AVAILABLE_juce_cryptography=1" "-DJUCE_MODULE_AVAILABLE_juce_data_structures=1" "-DJUCE_MODULE_AVAILABLE_juce_dsp=1" "-DJUCE_MODULE_AVAILABLE_juce_events=1" "-DJUCE_MODULE_AVAILABLE_juce_graphics=1" "-DJUCE_MODULE_AVAILABLE_juce_gui_basics=1" "-DJUCE_MODULE_AVAILABLE_juce_gui_extra=1" "-DJUCE_MODULE_AVAILABLE_juce_product_unlocking=1" "-DJUCE_GLOBAL_MODULE_SETTINGS_INCLUDED=1" "-DJUCE_USE_MP3AUDIOFORMAT=1" "-DJUCE_ALLOW_STATIC_NULL_VARIABLES=0" "-DJUCE_STRICT_REFCOUNTEDPOINTER=1" "-DJUCE_STANDALONE_APPLICATION=1" "-DJUCE_APP=1" "-DJUCER_LINUX_MAKE_6D53C8B4=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000" -pthread -I../../JuceLibraryCode -I../../modules/JUCE_6.1.6/modules -I../../modules/onnxruntime/include -I../../modules/RnboExport/rnbo -I../../modules/RnboExport/rnbo/common $(CPPFLAGS)
  JUCE_CPPFLAGS_APP :=  "-DJucePlugin_Build_VST=0" "-DJucePlugin_Build_VST3=0" "-DJucePlugin_Build_AU=0" "-DJucePlugin_Build_AUv3=0" "-DJucePlugin_Build_AAX=0" "-DJucePlugin_Build_Standalone=0" "-DJucePlugin_Build_Unity=0" "-DJucePlugin_Build_LV2=0"
  JUCE_TARGET_APP := Scyclone.html

  JUCE_CFLAGS += $(JUCE_CPPFLAGS) $(TARGET_ARCH) -O0 $(CFLAGS)
  JUCE_CXXFLAGS += $(JUCE_CFLAGS) -std=c++17 $(CXXFLAGS) -s USE_PTHREADS=1 -s USE_FREETYPE=1 -s DISABLE_EXCEPTION_CATCHING=0
  JUCE_LDFLAGS += $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) -L../../modules/onnxruntime/lib/wasm -lrt -ldl -lpthread -lonnxruntime -lopenal $(LDFLAGS) -s USE_PTHREADS -s USE_FREETYPE=1 -s DISABLE_EXCEPTION_CATCHING=0 -s TOTAL_MEMORY=256MB -s NO_EXIT_RUNTIME -s EXPORTED_FUNCTIONS="['_main', '_juce_animationFrameCallback', '_juce_mouseCallback', '_juce_keyboardCallback', '_juce_inputCallback']" -s EXPORTED_RUNTIME_METHODS="['cwrap']" -s LLD_REPORT_UNDEFINED \
	--preload-file ../../usr/X11R6/lib/X11/fonts/@/usr/X11R6/lib/X11/fonts/ \
	--preload-file ../../assets/fonts/ \
	--preload-file ../../assets/models/ \
	--preload-file ../../assets/pictures/ \
	--preload-file ../../assets/svg/ --emrun

  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(JUCE_TARGET_APP) $(JUCE_OBJDIR)
endif

ifeq ($(CONFIG),Release)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Release
  JUCE_OUTDIR := build


  JUCE_CPPFLAGS := $(DEPFLAGS) "-DLINUX=1" "-DDEBUG=1" "-D_DEBUG=1" "-DJUCE_DISPLAY_SPLASH_SCREEN=0" "-DJUCE_USE_DARK_SPLASH_SCREEN=1" "-DJUCE_PROJUCER_VERSION=0x7000a" "-DJUCE_MODULE_AVAILABLE_juce_audio_basics=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_devices=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_formats=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_processors=1" "-DJUCE_MODULE_AVAILABLE_juce_audio_utils=1" "-DJUCE_MODULE_AVAILABLE_juce_box2d=1" "-DJUCE_MODULE_AVAILABLE_juce_core=1" "-DJUCE_MODULE_AVAILABLE_juce_cryptography=1" "-DJUCE_MODULE_AVAILABLE_juce_data_structures=1" "-DJUCE_MODULE_AVAILABLE_juce_dsp=1" "-DJUCE_MODULE_AVAILABLE_juce_events=1" "-DJUCE_MODULE_AVAILABLE_juce_graphics=1" "-DJUCE_MODULE_AVAILABLE_juce_gui_basics=1" "-DJUCE_MODULE_AVAILABLE_juce_gui_extra=1" "-DJUCE_MODULE_AVAILABLE_juce_product_unlocking=1" "-DJUCE_GLOBAL_MODULE_SETTINGS_INCLUDED=1" "-DJUCE_USE_MP3AUDIOFORMAT=1" "-DJUCE_ALLOW_STATIC_NULL_VARIABLES=0" "-DJUCE_STRICT_REFCOUNTEDPOINTER=1" "-DJUCE_STANDALONE_APPLICATION=1" "-DJUCE_APP=1" "-DJUCER_LINUX_MAKE_6D53C8B4=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000" -pthread -I../../JuceLibraryCode -I../../modules/JUCE_6.1.6/modules -I../../modules/onnxruntime/include -I../../modules/RnboExport/rnbo -I../../modules/RnboExport/rnbo/common $(CPPFLAGS)
  JUCE_CPPFLAGS_APP :=  "-DJucePlugin_Build_VST=0" "-DJucePlugin_Build_VST3=0" "-DJucePlugin_Build_AU=0" "-DJucePlugin_Build_AUv3=0" "-DJucePlugin_Build_AAX=0" "-DJucePlugin_Build_Standalone=0" "-DJucePlugin_Build_Unity=0" "-DJucePlugin_Build_LV2=0"
  JUCE_TARGET_APP := Scyclone.html

  JUCE_CFLAGS += $(JUCE_CPPFLAGS) $(TARGET_ARCH) -O3 $(CFLAGS)
  JUCE_CXXFLAGS += $(JUCE_CFLAGS) -std=c++17 $(CXXFLAGS) -s USE_PTHREADS=1 -s USE_FREETYPE=1 -s DISABLE_EXCEPTION_CATCHING=0
  JUCE_LDFLAGS += $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) -L../../modules/onnxruntime/lib/wasm -lrt -ldl -lpthread -lonnxruntime -lopenal $(LDFLAGS) -s USE_PTHREADS -s USE_FREETYPE=1 -s DISABLE_EXCEPTION_CATCHING=0 -s TOTAL_MEMORY=128MB -s NO_EXIT_RUNTIME -s EXPORTED_FUNCTIONS="['_main', '_juce_animationFrameCallback', '_juce_mouseCallback', '_juce_keyboardCallback', '_juce_inputCallback']" -s EXPORTED_RUNTIME_METHODS="['cwrap']" \ 
	--preload-file ../../usr/X11R6/lib/X11/fonts/@/usr/X11R6/lib/X11/fonts/ \
	--preload-file ../../assets/fonts/ \
	--preload-file ../../assets/models/ \
	--preload-file ../../assets/pictures/ \
	--preload-file ../../assets/svg/ --emrun
  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(JUCE_TARGET_APP) $(JUCE_OBJDIR)
endif

OBJECTS_APP := \
  $(JUCE_OBJDIR)/Main_ea31d1dc.o \
  $(JUCE_OBJDIR)/MainComponent_9d3ca5cb.o \
  $(JUCE_OBJDIR)/MainWindow_4089d8ac.o \
  $(JUCE_OBJDIR)/RNBO_f2546ada.o \
  $(JUCE_OBJDIR)/rnbo_granular_efafed61.o \
  $(JUCE_OBJDIR)/AudioVisualiser_a0eb82d4.o \
  $(JUCE_OBJDIR)/LevelAnalyser_a986bf4a.o \
  $(JUCE_OBJDIR)/Compressor_3a73a382.o \
  $(JUCE_OBJDIR)/ProcessorCompressor_2857b8a4.o \
  $(JUCE_OBJDIR)/IIRCutoffFilter_235a3437.o \
  $(JUCE_OBJDIR)/ProcessorGain_657cf98.o \
  $(JUCE_OBJDIR)/GrainDelay_e9b863a2.o \
  $(JUCE_OBJDIR)/DryWetMixer_8d49c77b.o \
  $(JUCE_OBJDIR)/InferenceThread_6eb49d4.o \
  $(JUCE_OBJDIR)/OnnxProcessor_79ea50fa.o \
  $(JUCE_OBJDIR)/RingBuffer_b9543ea9.o \
  $(JUCE_OBJDIR)/ProcessorTransientSplitter_afd14d14.o \
  $(JUCE_OBJDIR)/TransientSplitter_b8d624c6.o \
  $(JUCE_OBJDIR)/Envelope_218fd525.o \
  $(JUCE_OBJDIR)/utils_4a75dc66.o \
  $(JUCE_OBJDIR)/AdvancedParameterControl_a962d23.o \
  $(JUCE_OBJDIR)/HeaderComponent_69d54e84.o \
  $(JUCE_OBJDIR)/ParameterControl_9a2a87e3.o \
  $(JUCE_OBJDIR)/CustomLabel_173bae04.o \
  $(JUCE_OBJDIR)/CustomSlider_7722f81b.o \
  $(JUCE_OBJDIR)/CustomSliderComponent_e0bb258c.o \
  $(JUCE_OBJDIR)/TextureComponent_d6d919ac.o \
  $(JUCE_OBJDIR)/TransientGrid_1e2fa4d1.o \
  $(JUCE_OBJDIR)/TransientViewer_16e0e81d.o \
  $(JUCE_OBJDIR)/Arrow_e616b360.o \
  $(JUCE_OBJDIR)/ArrowButton_8936172.o \
  $(JUCE_OBJDIR)/XYKnob_4193b34a.o \
  $(JUCE_OBJDIR)/XYPad_f3bbd4c9.o \
  $(JUCE_OBJDIR)/SliderLookAndFeel_9c2ea11a.o \
  $(JUCE_OBJDIR)/PluginParameters_8cc121a6.o \
  $(JUCE_OBJDIR)/BinaryData_ce4232d4.o \
  $(JUCE_OBJDIR)/BinaryData2_fa243da8.o \
  $(JUCE_OBJDIR)/BinaryData3_fa325529.o \
  $(JUCE_OBJDIR)/BinaryData4_fa406caa.o \
  $(JUCE_OBJDIR)/BinaryData5_fa4e842b.o \
  $(JUCE_OBJDIR)/BinaryData6_fa5c9bac.o \
  $(JUCE_OBJDIR)/BinaryData7_fa6ab32d.o \
  $(JUCE_OBJDIR)/include_juce_audio_basics_8a4e984a.o \
  $(JUCE_OBJDIR)/include_juce_audio_devices_63111d02.o \
  $(JUCE_OBJDIR)/include_juce_audio_formats_15f82001.o \
  $(JUCE_OBJDIR)/include_juce_audio_processors_10c03666.o \
  $(JUCE_OBJDIR)/include_juce_audio_utils_9f9fb2d6.o \
  $(JUCE_OBJDIR)/include_juce_box2d_b0305d8b.o \
  $(JUCE_OBJDIR)/include_juce_core_f26d17db.o \
  $(JUCE_OBJDIR)/include_juce_cryptography_8cb807a8.o \
  $(JUCE_OBJDIR)/include_juce_data_structures_7471b1e3.o \
  $(JUCE_OBJDIR)/include_juce_dsp_aeb2060f.o \
  $(JUCE_OBJDIR)/include_juce_events_fd7d695.o \
  $(JUCE_OBJDIR)/include_juce_graphics_f817e147.o \
  $(JUCE_OBJDIR)/include_juce_gui_basics_e3f79785.o \
  $(JUCE_OBJDIR)/include_juce_gui_extra_6dee1c1a.o \
  $(JUCE_OBJDIR)/include_juce_product_unlocking_8278fcdc.o \

.PHONY: clean all strip

all : $(JUCE_OUTDIR)/$(JUCE_TARGET_APP)

$(JUCE_OUTDIR)/$(JUCE_TARGET_APP) : $(OBJECTS_APP) $(JUCE_OBJDIR)/execinfo.cmd $(RESOURCES)
	@command -v $(PKG_CONFIG) >/dev/null 2>&1 || { echo >&2 "pkg-config not installed. Please, install it."; exit 1; }
	@echo Linking "Scyclone - App"
	-$(V_AT)mkdir -p $(JUCE_BINDIR)
	-$(V_AT)mkdir -p $(JUCE_LIBDIR)
	-$(V_AT)mkdir -p $(JUCE_OUTDIR)
	$(V_AT)$(CXX) -o $(JUCE_OUTDIR)/$(JUCE_TARGET_APP) $(OBJECTS_APP) $(JUCE_LDFLAGS) $(shell cat $(JUCE_OBJDIR)/execinfo.cmd) $(JUCE_LDFLAGS_APP) $(RESOURCES) $(TARGET_ARCH)

$(JUCE_OBJDIR)/Main_ea31d1dc.o: ../../app/Main.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling Main.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MainComponent_9d3ca5cb.o: ../../app/MainComponent.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling MainComponent.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MainWindow_4089d8ac.o: ../../app/MainWindow.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling MainWindow.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/RNBO_f2546ada.o: ../../modules/RnboExport/rnbo/RNBO.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling RNBO.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/rnbo_granular_efafed61.o: ../../modules/RnboExport/rnbo_granular.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling rnbo_granular.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/AudioVisualiser_a0eb82d4.o: ../../source/dsp/analyser/AudioVisualiser.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling AudioVisualiser.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/LevelAnalyser_a986bf4a.o: ../../source/dsp/analyser/LevelAnalyser.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling LevelAnalyser.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Compressor_3a73a382.o: ../../source/dsp/compressor/Compressor.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling Compressor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ProcessorCompressor_2857b8a4.o: ../../source/dsp/compressor/ProcessorCompressor.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling ProcessorCompressor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/IIRCutoffFilter_235a3437.o: ../../source/dsp/Filter/IIRCutoffFilter.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling IIRCutoffFilter.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ProcessorGain_657cf98.o: ../../source/dsp/gain/ProcessorGain.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling ProcessorGain.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GrainDelay_e9b863a2.o: ../../source/dsp/grainDelay/GrainDelay.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling GrainDelay.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/DryWetMixer_8d49c77b.o: ../../source/dsp/mixer/DryWetMixer.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling DryWetMixer.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/InferenceThread_6eb49d4.o: ../../source/dsp/onnx/InferenceThread.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling InferenceThread.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/OnnxProcessor_79ea50fa.o: ../../source/dsp/onnx/OnnxProcessor.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling OnnxProcessor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/RingBuffer_b9543ea9.o: ../../source/dsp/onnx/RingBuffer.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling RingBuffer.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ProcessorTransientSplitter_afd14d14.o: ../../source/dsp/transientSplitter/ProcessorTransientSplitter.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling ProcessorTransientSplitter.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TransientSplitter_b8d624c6.o: ../../source/dsp/transientSplitter/TransientSplitter.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling TransientSplitter.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Envelope_218fd525.o: ../../source/dsp/utils/Envelope.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling Envelope.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/utils_4a75dc66.o: ../../source/dsp/utils/utils.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling utils.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/AdvancedParameterControl_a962d23.o: ../../source/ui/CustomComponents/AdvancedParameterControl/AdvancedParameterControl.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling AdvancedParameterControl.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/HeaderComponent_69d54e84.o: ../../source/ui/CustomComponents/Header/HeaderComponent.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling HeaderComponent.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ParameterControl_9a2a87e3.o: ../../source/ui/CustomComponents/ParameterControl/ParameterControl.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling ParameterControl.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CustomLabel_173bae04.o: ../../source/ui/CustomComponents/ParameterControl/Slider/CustomComponents/CustomLabel.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling CustomLabel.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CustomSlider_7722f81b.o: ../../source/ui/CustomComponents/ParameterControl/Slider/CustomComponents/CustomSlider.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling CustomSlider.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CustomSliderComponent_e0bb258c.o: ../../source/ui/CustomComponents/ParameterControl/Slider/CustomSliderComponent.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling CustomSliderComponent.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TextureComponent_d6d919ac.o: ../../source/ui/CustomComponents/Texture/TextureComponent.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling TextureComponent.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TransientGrid_1e2fa4d1.o: ../../source/ui/CustomComponents/TransientViewer/TransientGrid.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling TransientGrid.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TransientViewer_16e0e81d.o: ../../source/ui/CustomComponents/TransientViewer/TransientViewer.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling TransientViewer.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Arrow_e616b360.o: ../../source/ui/CustomComponents/XYPad/Arrow.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling Arrow.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ArrowButton_8936172.o: ../../source/ui/CustomComponents/XYPad/ArrowButton.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling ArrowButton.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/XYKnob_4193b34a.o: ../../source/ui/CustomComponents/XYPad/XYKnob.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling XYKnob.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/XYPad_f3bbd4c9.o: ../../source/ui/CustomComponents/XYPad/XYPad.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling XYPad.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/SliderLookAndFeel_9c2ea11a.o: ../../source/ui/LookAndFeel/SliderLookAndFeel.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling SliderLookAndFeel.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PluginParameters_8cc121a6.o: ../../source/PluginParameters.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling PluginParameters.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData_ce4232d4.o: ../../JuceLibraryCode/BinaryData.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling BinaryData.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData2_fa243da8.o: ../../JuceLibraryCode/BinaryData2.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling BinaryData2.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData3_fa325529.o: ../../JuceLibraryCode/BinaryData3.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling BinaryData3.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData4_fa406caa.o: ../../JuceLibraryCode/BinaryData4.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling BinaryData4.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData5_fa4e842b.o: ../../JuceLibraryCode/BinaryData5.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling BinaryData5.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData6_fa5c9bac.o: ../../JuceLibraryCode/BinaryData6.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling BinaryData6.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData7_fa6ab32d.o: ../../JuceLibraryCode/BinaryData7.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling BinaryData7.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_audio_basics_8a4e984a.o: ../../JuceLibraryCode/include_juce_audio_basics.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_audio_basics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_audio_devices_63111d02.o: ../../JuceLibraryCode/include_juce_audio_devices.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_audio_devices.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_audio_formats_15f82001.o: ../../JuceLibraryCode/include_juce_audio_formats.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_audio_formats.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_audio_processors_10c03666.o: ../../JuceLibraryCode/include_juce_audio_processors.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_audio_processors.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_audio_utils_9f9fb2d6.o: ../../JuceLibraryCode/include_juce_audio_utils.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_audio_utils.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_box2d_b0305d8b.o: ../../JuceLibraryCode/include_juce_box2d.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_box2d.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_core_f26d17db.o: ../../JuceLibraryCode/include_juce_core.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_core.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_cryptography_8cb807a8.o: ../../JuceLibraryCode/include_juce_cryptography.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_cryptography.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_data_structures_7471b1e3.o: ../../JuceLibraryCode/include_juce_data_structures.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_data_structures.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_dsp_aeb2060f.o: ../../JuceLibraryCode/include_juce_dsp.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_dsp.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_events_fd7d695.o: ../../JuceLibraryCode/include_juce_events.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_events.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_graphics_f817e147.o: ../../JuceLibraryCode/include_juce_graphics.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_graphics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_gui_basics_e3f79785.o: ../../JuceLibraryCode/include_juce_gui_basics.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_gui_basics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_gui_extra_6dee1c1a.o: ../../JuceLibraryCode/include_juce_gui_extra.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_gui_extra.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_product_unlocking_8278fcdc.o: ../../JuceLibraryCode/include_juce_product_unlocking.cpp
	-$(V_AT)mkdir -p $(@D)
	@echo "Compiling include_juce_product_unlocking.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/execinfo.cmd:
	-$(V_AT)mkdir -p $(@D)
	-@if [ -z "$(V_AT)" ]; then echo "Checking if we need to link libexecinfo"; fi
	$(V_AT)printf "int main() { return 0; }" | $(CXX) -x c++ -o $(@D)/execinfo.x -lexecinfo - >/dev/null 2>&1 && printf -- "-lexecinfo" > "$@" || touch "$@"

$(JUCE_OBJDIR)/cxxfs.cmd:
	-$(V_AT)mkdir -p $(@D)
	-@if [ -z "$(V_AT)" ]; then echo "Checking if we need to link stdc++fs"; fi
	$(V_AT)printf "int main() { return 0; }" | $(CXX) -x c++ -o $(@D)/cxxfs.x -lstdc++fs - >/dev/null 2>&1 && printf -- "-lstdc++fs" > "$@" || touch "$@"

clean:
	@echo Cleaning Scyclone
	$(V_AT)$(CLEANCMD)

strip:
	@echo Stripping Scyclone
	-$(V_AT)$(STRIP) --strip-unneeded $(JUCE_OUTDIR)/$(JUCE_TARGET_APP)

-include $(OBJECTS_APP:%.o=%.d)
