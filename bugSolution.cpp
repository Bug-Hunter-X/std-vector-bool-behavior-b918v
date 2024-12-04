#include <iostream>
#include <vector>

int main() {
  // Solution using std::vector<char>:
  std::vector<char> vec_char;
  vec_char.push_back(1); // true
  vec_char.push_back(0); // false
  bool b = vec_char[0];
  bool c = vec_char[1];
  std::cout << "Solution using vector<char>:\n";
  std::cout << "b: " << b << std::endl; // Output: true
  std::cout << "c: " << c << std::endl; // Output: false

  // Solution using explicit casting with std::vector<bool> (less efficient but safer):
  std::vector<bool> vec_bool;
  vec_bool.push_back(true);
  vec_bool.push_back(false);
  bool d = static_cast<bool>(vec_bool[0]);
  bool e = static_cast<bool>(vec_bool[1]);
  std::cout << "\nSolution using vector<bool> with casting:\n";
  std::cout << "d: " << d << std::endl; // Output: true
  std::cout << "e: " << e << std::endl; // Output: false

  return 0;
}
