// Classes shared by multiple module categories
// Started 2021-10-30

/** \file
  jos_shared.h

  Includes classes shared among multiple modules.

  @see jos::FaustModule

  @tags{Shared}
*/

#pragma once

/* \defgroup shared Shared
 *  @{
 */

namespace jos {

  class TestClassShared {

    /** integer */
    int i;

    /** Constructor */
    TestClassShared() {}

    /** Destructor */
    ~TestClassShared() = default;
  };

}
  
#include "jos_faust_module.h"

/* @}*/
