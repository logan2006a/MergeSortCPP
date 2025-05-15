//
// Created by logan on 5/14/2025.
//

#include "MergeSort.h"

#include <iostream>
#include <stdio.h>
#include <bits/ostream.tcc>
using  namespace  std;

vector<int> MergeSort::sort(vector<int> listToSort) {
    vector<int> sortedList;
    deque<vector<int>> brokenList;
    brokenList = MergeSort::breaking(listToSort);
    sortedList = MergeSort::merging(brokenList);
    return sortedList;
}


vector<int> MergeSort::merging(deque<vector<int>> brokenList) {

    vector<int> tempBrokenListOne;
    vector<int> tempBrokenListTwo;

    while (brokenList.size() > 1) {
        tempBrokenListOne = brokenList.back();
        brokenList.pop_back();
        tempBrokenListTwo = brokenList.back();
        brokenList.pop_back();
        vector<int> tempMergedList;

        while (!(tempBrokenListOne.empty() && tempBrokenListTwo.empty())) {
            if (tempBrokenListOne.empty()) {
                tempMergedList.push_back(tempBrokenListTwo.front());
                tempBrokenListTwo.erase(tempBrokenListTwo.begin());
            } else if (tempBrokenListTwo.empty()) {
                tempMergedList.push_back(tempBrokenListOne.front());
                tempBrokenListOne.erase(tempBrokenListOne.begin());
            } else if (tempBrokenListOne.front() < tempBrokenListTwo.front()) {
                tempMergedList.push_back(tempBrokenListOne.front());
                tempBrokenListOne.erase(tempBrokenListOne.begin());
            } else {
                tempMergedList.push_back(tempBrokenListTwo.front());
                tempBrokenListTwo.erase(tempBrokenListTwo.begin());
            }
        }

        brokenList.push_front(tempMergedList);

    }

    vector<int> merged = brokenList.front();
    return merged;
}

deque<vector<int> > MergeSort::breaking(vector<int>listToBreak) {
    deque<vector<int> >broken;
    for (int item: listToBreak) {
        vector<int> temp = {item};
        broken.push_back(temp);
    }
    return broken;
}

