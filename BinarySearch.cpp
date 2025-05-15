//
// Created by logan on 5/14/2025.
//

#include "BinarySearch.h"

#include <algorithm>

int BinarySearch::Search(vector<int> sortedList, int low, int high, int target) {
    if (high == low) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (sortedList.at(mid) > target) {
        return Search(sortedList, low, mid - 1, target);
    }
    if (sortedList.at(mid) < target) {
        return Search(sortedList, mid + 1, high , target);
    }
    if (sortedList.at(mid) == target) {
        return mid;
    }

}
