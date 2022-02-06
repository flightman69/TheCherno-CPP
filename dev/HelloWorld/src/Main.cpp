#include<iostream>
#include "Log.h"
using namespace std;

void StarPyramid(char ch, int n);

int main()
{
    int x = 5;
    char str = '*';
    bool Compare = x == 5;
    if(Compare)
    {
        for (int i = 0; i<x ; i++)
        {
            //Log("Hello World!!!");
        }
    }
    cout<<string(str,3);
    StarPyramid(str,9);
    std::cin.get();
    return 0;
}
