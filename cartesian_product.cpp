#include <iostream>
#include <vector>
#include <utility> 

template<typename T, typename U>
std::vector<std::pair<T, U>> cartesian_product(const std::vector<T>& setA, const std::vector<U>& setB) {
    std::vector<std::pair<T, U>> result; 

    for (typename std::vector<T>::const_iterator itA = setA.begin(); itA != setA.end(); ++itA) {
        for (typename std::vector<U>::const_iterator itB = setB.begin(); itB != setB.end(); ++itB) {
            result.push_back(std::make_pair(*itA, *itB));
        }
    }
    return result;
}

template<typename T, typename U>
void print_pairs(const std::vector<std::pair<T, U>>& pairs) {
    std::cout << "Cartesian product:\n";
    for (typename std::vector<std::pair<T, U>>::const_iterator it = pairs.begin(); it != pairs.end(); ++it) {
        std::cout << "(" << it->first << ", " << it->second << ") ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> setA = {1, 2, 3};
    std::vector<char> setB = {'a', 'b', 'c'};

    std::vector<std::pair<int, char>> result_pairs = cartesian_product(setA, setB);

    print_pairs(result_pairs);

    return 0;
}
