//
// Created by biniu on 7/26/20.
//

#ifndef CPPDESIGNPATTERNS_LOGGER_H
#define CPPDESIGNPATTERNS_LOGGER_H

class Logger {
public:
  Logger(Logger const &) = delete;
  void operator=(Logger const &) = delete;

  static Logger& getInstance();

private:
  Logger() = default;
  ~Logger() = default;
};

#endif // CPPDESIGNPATTERNS_LOGGER_H
