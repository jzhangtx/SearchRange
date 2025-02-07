// SearchRange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::vector<int> SearchRange(std::vector<int>& arr, int key)
{
    std::vector<int> result{ -1, -1 };
    bool firstFound = false;
    for (int i = 0; static_cast<size_t>(i) < arr.size(); ++i)
    {
        if (arr[i] == key)
        {
            if (!firstFound)
            {
                firstFound = true;
                result[0] = i--;
            }
            else
                result[1] = i;
        }
    }

    return result;
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count == 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The number array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        int key = 0;
        std::cout << "The search key: ";
        std::cin >> key;

        std::vector<int> v = SearchRange(vec, key);
        std::cout << "The search range is: {" << v[0] << ", " << v[1] << "}" << std::endl;
    }
}
