//
// Created by logan on 5/14/2025.
//

#ifndef MERGESORT_H
#define MERGESORT_H
#include <stack>
#include <vector>
using namespace std;


class MergeSort {
    public:
        static vector<int> sort(vector<int> listToSort);
        static vector<int> merging(deque<vector<int>> brokenList);
        static deque<vector<int>> breaking(vector<int> listToBreak);

};



#endif //MERGESORT_H
