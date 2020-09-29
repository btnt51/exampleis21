#include "../headers/includes.h"

int main()
{
    int rangeOfArray = 15;
    int *Array = new int[rangeOfArray];
    for(int i = 0; i < rangeOfArray; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = rangeOfArray; j > i/2; j--)
            {
                Array[i] = j* rangeOfArray * 37;
            }
        }
        else
        {
            for(int j = rangeOfArray; j > i; j--)
            {
                Array[i] = j* rangeOfArray/5;
            }
        }
    }
    mainMenu(rangeOfArray, Array);
    delete[] Array;
    Array = NULL;
    return 0;
}
