#include <iostream>
#include <vector>

#include <lib/lr1.h>


int main() {
    std::vector<int> arr = { 1, 2, 27, 4, 2, 2, 27, 3, 3, 2, 4 };

    int mostFrequentNum = findMostFrequentNumber(arr);
    std::cout << "Most frequent number: " << mostFrequentNum << std::endl;

    return 0;
}