
# Cartesian Product Calculator

This C++ program calculates the Cartesian product of two sets and prints the resulting ordered pairs. 

## Introduction

The Cartesian product of two sets \( A \) and \( B \) is a fundamental concept in set theory. It represents all possible ordered pairs that can be formed by taking one element from each set. Mathematically, it is denoted as \( A \times B \).

### Example:
Consider two sets:
- Set \( A = \{1, 2, 3\} \)
- Set \( B = \{'a', 'b', 'c'\} \)

The Cartesian product \( A \times B \) would be:
\[ A \times B = \{(1, 'a'), (1, 'b'), (1, 'c'), (2, 'a'), (2, 'b'), (2, 'c'), (3, 'a'), (3, 'b'), (3, 'c')\} \]

## Code Explanation

The C++ program consists of two main functions:

1. `cartesian_product`: This function calculates the Cartesian product of two sets and returns a vector of pairs representing the ordered pairs.
   
   ```cpp
   std::vector<std::pair<T, U>> cartesian_product(const std::vector<T>& setA, const std::vector<U>& setB) {
       std::vector<std::pair<T, U>> result;
       for (typename std::vector<T>::const_iterator itA = setA.begin(); itA != setA.end(); ++itA) {
           for (typename std::vector<U>::const_iterator itB = setB.begin(); itB != setB.end(); ++itB) {
               result.push_back(std::make_pair(*itA, *itB));
           }
       }
       return result;
   }
   ```

2. `print_pairs`: This function prints the ordered pairs stored in a vector.
   
   ```cpp
   template<typename T, typename U>
   void print_pairs(const std::vector<std::pair<T, U>>& pairs) {
       std::cout << "Cartesian product:\n";
       for (typename std::vector<std::pair<T, U>>::const_iterator it = pairs.begin(); it != pairs.end(); ++it) {
           std::cout << "(" << it->first << ", " << it->second << ") ";
       }
       std::cout << std::endl;
   }
   ```

## Usage

To use the program, simply define two sets of any data type and call the `cartesian_product` function with the sets as arguments. Then, print the resulting pairs using the `print_pairs` function.

```cpp
std::vector<int> setA = {1, 2, 3};
std::vector<char> setB = {'a', 'b', 'c'};
std::vector<std::pair<int, char>> result_pairs = cartesian_product(setA, setB);
print_pairs(result_pairs);
```

---

This README provides a brief overview of the Cartesian product code and its mathematical significance. It explains the implementation and usage of the code in a clear and concise manner.
