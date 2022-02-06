#include<iostream>
#include "Log.h"
//using namespace std;



int main()
{
    int x = 5;
    bool Compare = x == 5;
    if(Compare)
    {
        for (int i = 0; i<5 ; i++)
        {
            Log("Hello World!!!");
        }
    }
    std::cin.get();
    return 0;
}
