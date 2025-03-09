// Effects based on Faust's effects.lib
// Started 2021-10-28

/**
   \file jos_effects.h

   Includes classes created from Faust modules in effects.lib in the faustlibraries distribution.
   Effects are essentially well known filters.
   Current effects include Freeverb and Zitarev.

   @see josm::Freeverb, josm::Zitarev

   @tags{Effects}
*/

#pragma once
#define JOS_EFFECTS_H_INCLUDED
#pragma message("JOS_EFFECTS_H_INCLUDED")

/* [NOTE DISABLED DOXYGEN COMMENT] \defgroup effects Effects
 *  @{
 */
#include "jos_freeverb.h"
#include "jos_zitarev.h"
/* @} */

namespace josm {

  /**
     Class for testing only
  */
  class TestClassEffects {
  public:
    TestClassEffects() {
      std::cout << "We have at least one class\n";
    }
  };

}
