#include "../headers/includes.h"


void mainMenu(int rangeOfArray,int *Array)
{
    char action = ' ';
    while (true)
    {
        cout << "Enter 1 to sort" << endl;
        cin >> action;
        while(true)
        {
            if( action > '0' && action < '1')
            {
                cout << "Plz reenter 1" << endl;
                cin >> action;
            }
            else
            {
                break;
            }
            
        }
        switch(action)
        {
            case '1':
                menusort(rangeOfArray,Array);
                break;
            default:
                break;
        }
        cout << "Enter E if u want to stay in seminar";
        cin >> action;
        if(action == 'e' || action == 'E')
        {

        }

        else
        {
            break;
        }
    }
}