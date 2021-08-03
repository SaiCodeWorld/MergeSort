/*********************
Name: Sai Sivakumar
Merge Sort With Arrays C++
Purpose: 1-3 sentences about your program.
**********************/
#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#define MAX_SIZE 8

#include <iostream>
using std::cout;
using std::endl;

class MergeSort
{
    public:
        MergeSort();
        ~MergeSort();

        bool sorter(const int []);

    private:
        int origArr[MAX_SIZE];
        int *locOrigArr;

        void mergeSort(int, int);
        void merge(int, int, int);
};
#endif //MERGE_SORT_H