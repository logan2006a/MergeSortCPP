#include <iostream>
#include <vector>
#include <mergemod.h>

#include "MergeSort.h"
using namespace std;

int main() {
    vector<int> test;
    for (int i = 0; i < 100; i++) {
        int  randNum = rand() % 101;
        test.push_back(randNum);
    }
    cout << "Before:" << endl;
    MergeSort::printList(test);
    cout << endl;
    test = MergeSort::sort(test);
    cout << "After:" << endl;
    MergeSort::printList(test);
}