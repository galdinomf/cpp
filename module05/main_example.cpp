int main() {
  try {
    MyClass obj(-1); // This will throw an exception.
  } catch (const MyClass::InvalidValue& e) {
    // Handle the exception here.
    std::cerr << "Error: " << e.what() << std::endl;
  }
  
  return 0;
}
