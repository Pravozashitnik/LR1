#include "lr1.h"
#include <unordered_map>

int findMostFrequentNumber(const std::vector<int>& arr) {
    if (arr.empty()) {
        return 0; // Возвращаем 0 для пустого массива
    }

    std::unordered_map<int, int> freqMap;

    for (int num : arr) {
        freqMap[num]++;
    }

    int mostFrequentNum = arr[0];
    int maxFreq = 0;

    for (const auto& pair : freqMap) {
        if (pair.second > maxFreq) {
            mostFrequentNum = pair.first;
            maxFreq = pair.second;
        }
    }

    return mostFrequentNum;
}