#include <lib/lr1.h>
#include <gtest/gtest.h>
#include <vector>

// Тестовый класс
class FindMostFrequentNumberTest : public ::testing::Test {
protected:
    void SetUp() override {
        arr = { 1, 2, 3, 4, 2, 2, 3, 3, 3, 4, 4 };
    }

    void TearDown() override {
        arr.clear();
    }

    std::vector<int> arr;
    int result;
};

// Тест1: Базовый тест
TEST_F(FindMostFrequentNumberTest, BasicTest) {
    result = findMostFrequentNumber(arr);
    EXPECT_EQ(result, 3); // Ожидаем, что наиболее часто встречающееся число - 3
}

// Тест2: Тест с одним элементом
TEST_F(FindMostFrequentNumberTest, SingleElementTest) {
    arr = { 1 };
    result = findMostFrequentNumber(arr);
    EXPECT_EQ(result, 1); // Ожидаем, что единственный элемент является наиболее часто встречающимся
}

// Тест3: Тест с несколькими наиболее часто встречающимися числами
TEST_F(FindMostFrequentNumberTest, MultipleMostFrequentNumbersTest) {
    arr = { 1, 2, 2, 3, 3, 3, 4, 4, 4 };
    result = findMostFrequentNumber(arr);
    EXPECT_EQ(result, 3); // Ожидаем, что наиболее часто встречающееся число - 3
}

// Тест4: Тест с пустым массивом
TEST_F(FindMostFrequentNumberTest, EmptyArrayTest) {
    arr = {};
    result = findMostFrequentNumber(arr);
    EXPECT_EQ(result, 0); // Ожидаем, что для пустого массива результат будет 0
}

// Тест5: Тест с отрицательными числами
TEST_F(FindMostFrequentNumberTest, NegativeNumbersTest) {
    arr = { -1, -2, -2, -3, -3, -3, -4, -4, -4 };
    result = findMostFrequentNumber(arr);
    EXPECT_EQ(result, -3); // Ожидаем, что наиболее часто встречающееся число - -3
}

// Тест6: Тест с большим количеством чисел
TEST_F(FindMostFrequentNumberTest, LargeArrayTest) {
    arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    result = findMostFrequentNumber(arr);
    EXPECT_EQ(result, 1); // Ожидаем, что наиболее часто встречающееся число - 1
}