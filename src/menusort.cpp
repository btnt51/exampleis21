#include "../headers/includes.h"

void menusort(int rangeOfArray,int *Array)
{
    cout << "Unsorted array" << endl;
    for(int i = 0; i < rangeOfArray;i++)
        cout << "element[" << i << "] -->" << Array[i] << endl;
    int *sortedArray = new int[rangeOfArray];
    sortedArray = sort(rangeOfArray,Array);
    cout << "Sorted Array" << endl;
    for(int i = 0; i < rangeOfArray;i++)
        cout << "element[" << i << "] -->" << sortedArray[i] << endl;
    delete[] sortedArray;
    sortedArray = NULL;
}
