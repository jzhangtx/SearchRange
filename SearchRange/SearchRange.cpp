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
        else if (firstFound)
            break;
    }

    return result;
}

int main()
{
    std::vector<int> vec{ 1, 2, 3, 3, 3, 4, 4, 5 };
    std::vector<int> v = SearchRange(vec, 3);
    std::cout << "The search range: {" << v[0] << ", " << v[1] << "}" << std::endl;
}
