#include <iostream>
#include <vector>

#include "BinarySearch.h"
#include "ListPrinting.h"
#include "MergeSort.h"
using namespace std;

int main() {
    srand(time(0));
    vector<int> test;
    for (int i = 0; i < 100; i++) {
        int  randNum = rand() % 101;
        test.push_back(randNum);
    }
    cout << "Before:" << endl;
    ListPrinting::printList(test);
    cout << endl;
    test = MergeSort::sort(test);
    cout << "After:" << endl;
    ListPrinting::printList(test);
    int size = test.size();
    cout << endl << size << endl;
    int index = BinarySearch::Search(test,0 , static_cast<int>(test.size()), 10);
    cout << endl << index ;
}