// JOS Faust modules - started 2021-10-28

/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.md file.
*******************************************************************************/

#pragma once

#if 0

 BEGIN_JUCE_MODULE_DECLARATION

  ID:                 jos_faust
  vendor:             jos
  version:            0.0.1
  name:               JOS Faust Modules for JUCE
  description:        C++ Modules for use with the JUCE Framework, based on jos functions from the Faust Libraries
  website:            https://ccrma.stanford.edu/~jos/jos_faust
  license:            MIT
  minimumCppStandard: 14
  dependencies:       juce_core, juce_audio_basics, juce_audio_utils, juce_audio_processors, juce_gui_basics
  OSXFrameworks:      Accelerate
  iOSFrameworks:      Accelerate

 END_JUCE_MODULE_DECLARATION

#endif
   
/*******************************************************************************/

#include <juce_core/juce_core.h>
#include <juce_audio_basics/juce_audio_basics.h>
#include <juce_audio_devices/juce_audio_devices.h>
#include <juce_audio_formats/juce_audio_formats.h>
#include <juce_audio_processors/juce_audio_processors.h>
#include <juce_audio_plugin_client/juce_audio_plugin_client.h>
#include <juce_audio_utils/juce_audio_utils.h>
#include <juce_gui_extra/juce_gui_extra.h>
   //#include <juce_data_structures/juce_data_structures.h>
   //#include <juce_gui_basics/juce_gui_basics.h>
   //#include <juce_events/juce_events.h>
   //#include <juce_graphics/juce_graphics.h>
// FIXME: Find dependencies and make a tight list here (maybe easier in CMake)

//==============================================================================

/** Config: JOS_FAUST_PARAM_LOG

    When this flag is enabled, every setting of a Faust DSP parameter will
    be logged in the console.
*/
#ifndef JOS_FAUST_PARAM_LOG
#define JOS_FAUST_PARAM_LOG 1
#endif

#include <complex>

namespace jos
{
  static const float PI = atanf(1.0f) * 4.0f;
  static const float PI2 = atanf(1.0f) * 8.0f;
#undef Complex
  template <typename Type>
    using Complex = std::complex<Type>;
};

//==============================================================================
#include "jos_faust/oscillators/oscillators.h"
#include "jos_faust/filters/filters.h"
#include "jos_faust/effects/effects.h"