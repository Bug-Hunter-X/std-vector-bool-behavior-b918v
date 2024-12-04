# Unexpected Behavior with std::vector<bool>

This repository demonstrates a potential issue with using `std::vector<bool>` in C++.  `std::vector<bool>` is specialized to optimize memory usage, but this specialization can lead to unexpected behavior when accessing elements.

The `bug.cpp` file showcases a scenario where accessing elements of `std::vector<bool>` doesn't behave as expected, potentially resulting in logical errors.

The `bugSolution.cpp` file demonstrates a solution using a `std::vector<char>` or a `std::vector<bool>` with explicit casting.