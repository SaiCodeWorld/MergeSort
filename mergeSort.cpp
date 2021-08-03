/*********************
Name: Sai Sivakumar
Merge Sort With Arrays C++
Purpose: 1-3 sentences about your program.
**********************/

#include "mergeSort.h"

//Public Methods
MergeSort::MergeSort()
{
    arraySize = 0;
}

MergeSort::~MergeSort() {}

bool MergeSort::sorter(int size, int fixItUp[])
{   
    arraySize = size;
    locOrigArr = fixItUp;
    mergeSort(0, arraySize - 1);
    return true;
}

void MergeSort::displaySortedArr()
{
    for(int i = 0; i < arraySize; i++) 
    {
        cout<<locOrigArr[i]<<endl;
    }
}

//Private Methods
void MergeSort::mergeSort(int first, int last)
{
    if (first < last) {
        int middle = (first + last)/2;
        mergeSort(first, middle);
        mergeSort(middle+1, last);
        merge(first, middle, last);
    }
}

void MergeSort::merge(int first, int middle, int last)
{   
    int temp[arraySize];
    int begin1, tempIndex, begin2;

    begin1 = tempIndex = first;
    begin2 = middle + 1;
    
    while(begin1 <= middle && begin2 <= last) {
        if(locOrigArr[begin1] <= locOrigArr[begin2]) {
            temp[tempIndex] = locOrigArr[begin1];
            begin1++;
        } else {
            temp[tempIndex] = locOrigArr[begin2];
            begin2++;
        }
        tempIndex++;
    }

    finishFillingArray(&begin1, &middle, &tempIndex, temp);
    finishFillingArray(&begin2, &last, &tempIndex, temp);

    for (int i = first; i <= last; i ++)
    {
        locOrigArr[i] = temp[i];
    }
}

void MergeSort::finishFillingArray(int *first, int *last, int *tempIndex, int temp[])
{
    while(*first <= *last) 
    {
        temp[*tempIndex] = locOrigArr[*first];
        (*first)++;
        (*tempIndex)++;
    }
}
