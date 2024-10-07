#include <iostream>
#include "StringData.h"
#include <chrono>

int linear_search(std::vector<std::string>& container, std::string element)
{
    for (int i = 0; i < container.size(); i++)
    {
        if (container.at(i) == element)
        {
            return i;
        }
    }
    return -1;
}

int binary_search(std::vector<std::string>& container, std::string element)
{
    int low = 0;
    int mid;
    int high = container.size() - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (container.at(mid) == element)
        {
            return mid;
        }
        else if (container.at(mid) > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    std::vector dataset = getStringData();
// Search for not_here
    //Linear
    auto beginTime = std::chrono::system_clock::now();
    int linearSearchResult = linear_search(dataset, "not_here");
    auto endTimeLinearSearch = std::chrono::system_clock::now() - beginTime;
    std::cout << "Linear search result for not_here: " << linearSearchResult << std::endl;

    //Binary
    beginTime = std::chrono::system_clock::now();
    int binarySearchResult = binary_search(dataset, "not_here");
    auto endTimeBinarySearch = std::chrono::system_clock::now() - beginTime;
    std::cout << "Binary search result for not_here: " << binarySearchResult << std::endl;

    //Print times
    std::cout << "Linear time to find not_here: " << endTimeLinearSearch << std::endl;
    std::cout << "Binary time to find not_here: " << endTimeBinarySearch << std::endl;

// Search for mzzzz
    //Linear
    beginTime = std::chrono::system_clock::now();
    linearSearchResult = linear_search(dataset, "mzzzz");
    endTimeLinearSearch = std::chrono::system_clock::now() - beginTime;
    std::cout << "Linear search result for mzzzz: " << linearSearchResult << std::endl;

    //Binary
    beginTime = std::chrono::system_clock::now();
    binarySearchResult = binary_search(dataset, "mzzzz");
    endTimeBinarySearch = std::chrono::system_clock::now() - beginTime;
    std::cout << "Binary search result for mzzzz: " << binarySearchResult << std::endl;

    //Print times
    std::cout << "Linear time to find mzzzz: " << endTimeLinearSearch << std::endl;
    std::cout << "Binary time to find mzzzz: " << endTimeBinarySearch << std::endl;

// Search for aaaaa
    //Linear
    beginTime = std::chrono::system_clock::now();
    linearSearchResult = linear_search(dataset, "aaaaa");
    endTimeLinearSearch = std::chrono::system_clock::now() - beginTime;
    std::cout << "Linear search result for aaaaa: " << linearSearchResult << std::endl;

    //Binary
    beginTime = std::chrono::system_clock::now();
    binarySearchResult = binary_search(dataset, "aaaaa");
    endTimeBinarySearch = std::chrono::system_clock::now() - beginTime;
    std::cout << "Binary search result for aaaaa: " << binarySearchResult << std::endl;

    //Print times
    std::cout << "Linear time to find aaaaa: " << endTimeLinearSearch << std::endl;
    std::cout << "Binary time to find aaaaa: " << endTimeBinarySearch << std::endl;

    return 0;
}
