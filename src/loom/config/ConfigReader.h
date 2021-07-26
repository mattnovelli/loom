// Copyright 2016, University of Freiburg,
// Chair of Algorithms and Data Structures.
// Authors: Patrick Brosi <brosi@informatik.uni-freiburg.de>

#ifndef LOOM_CONFIG_CONFIGREADER_H_
#define LOOM_CONFIG_CONFIGREADER_H_

#include <boost/program_options.hpp>
#include <vector>
#include "loom/config/TransitMapConfig.h"

namespace transitmapper {
namespace config {

class ConfigReader {
 public:
  ConfigReader();
  void read(Config* targetConfig, int argc, char** argv) const;
};
}
}
#endif  // LOOM_CONFIG_CONFIGREADER_H_
