/*********************
Name: Sai Sivakumar
Merge Sort With Arrays C++
Purpose: 1-3 sentences about your program.
**********************/

#include "mergeSort.h"

//Public Methods
MergeSort::MergeSort()
{   
    locOrigArr = origArr;
}

MergeSort::~MergeSort() {}

bool MergeSort::sorter(const int fixItUp[])
{
    for(int i = 0; i < MAX_SIZE; i++) 
    {
        origArr[i] = fixItUp[i];
    }
    for(int i = 0; i < MAX_SIZE; i++) 
    {
        cout<<locOrigArr[i]<<endl;
    }
    //mergeSort(0, MAX_SIZE);
    return true;
}

// //Private Methods
// void MergeSort::mergeSort(int first, int last)
// {
//     if (first < last) {
//         int middle = (first + last)/2;
//         mergeSort(first, middle);
//         mergeSort(middle+1, last);
//     }
// }
