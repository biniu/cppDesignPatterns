//
// Created by biniu on 7/21/20.
//

#ifndef CPPDESIGNPATTERNS_SINGLETONEXAMPLE_H
#define CPPDESIGNPATTERNS_SINGLETONEXAMPLE_H

class SingletonExample {
public:
  SingletonExample(SingletonExample const &) = delete;
  void operator=(SingletonExample const &) = delete;

  static SingletonExample& getInstance() {
    static SingletonExample instance;
    return instance;
  };

private:
  SingletonExample() = default;
  ~SingletonExample() = default;
};

#endif // CPPDESIGNPATTERNS_SINGLETONEXAMPLE_H


// NOTEs
// When use:
// when we need only one instance in the system
// example:
// database repository
// object factory
// logger
// constructions is expensive
