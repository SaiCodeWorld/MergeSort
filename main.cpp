/*********************
Name: Sai Sivakumar
Merge Sort With Arrays C++
Purpose: 1-3 sentences about your program.
**********************/

#include "main.h"

int main (int argc, char** argv)
{
    MergeSort mergeTest;
    int testThis[argc-1];
    for (int i = 0; i < argc - 1; i++)
    {
        testThis[i] = atoi(argv[i+1]);
    }
    mergeTest.sorter(argc -1, testThis);
    mergeTest.displaySortedArr();
}