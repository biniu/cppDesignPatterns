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
