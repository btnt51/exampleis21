#include "../headers/includes.h"
int *sort(int rangeOfArray, int *Array)
{
    int *SortedArray = new int[rangeOfArray];
    int temp = 0, j = 0;
    for(int i = 0; i < rangeOfArray;i++)
        SortedArray[i] = Array[i];
    for(int i = 1; i < rangeOfArray;i++)
    {

        temp = SortedArray[i];  
        j = i - 1;  
        while (j >= 0 && SortedArray[j] > temp) 
        {  
            SortedArray[j + 1] = SortedArray[j];  
            j--;  
            
        }  
         SortedArray[j + 1] = temp; 
    }  
    return SortedArray;
}