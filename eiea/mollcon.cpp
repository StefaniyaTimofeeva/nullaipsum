#include <iostream>
#include <vector>

std::vector<int> mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> mergedArray;
    int n0 = arr1.size();
    int n1 = arr2.size();
    int i0 = 0, i1 = 0;

    while (i0 < n0 && i1 < n1) {
        if (arr1[i0] < arr2[i1]) {
            mergedArray.push_back(arr1[i0]);
            ++i0;
        } else {
            mergedArray.push_back(arr2[i1]);
            ++i1;
        }
    }

    // Append the remaining elements of arr1 if any
    while (i0 < n0) {
        mergedArray.push_back(arr1[i0]);
        ++i0;
    }

    // Append the remaining elements of arr2 if any
    while (i1 < n1) {
        mergedArray.push_back(arr2[i1]);
        ++i1;
    }

    return mergedArray;
}

int main() {
    std::vector<int> arr1 = {1, 3, 5, 7};
    std::vector<int> arr2 = {2, 4, 6, 8};

    std::vector<int> result = mergeSortedArrays(arr1, arr2);

    for (const auto& val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
