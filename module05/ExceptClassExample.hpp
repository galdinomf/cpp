#include <stdexcept>

class MyClass {
public:
  class InvalidValue : public std::exception {
  public:
    InvalidValue() {}
    const char* what() const noexcept override {
      return "Invalid value";
    }
  };
  
  MyClass(int value) {
    if (value < 0) {
      throw InvalidValue();
    }
    // Constructor logic goes here.
  }
  
  // Other class methods go here.
};
