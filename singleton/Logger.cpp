//
// Created by biniu on 7/26/20.
//

#include "Logger.h"

Logger &Logger::getInstance() {
  static Logger instance;
  return instance;
}
