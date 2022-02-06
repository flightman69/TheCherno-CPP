#include <iostream>
using namespace std;
void StarPyramid(char ch, int n)
{
    char space = ' ';
    int j = n;
    for (int i = 0; i < n; i++)
    {
        cout<<string(j,' ')<<string(i,ch)<<string(i,ch);
        j--;
        cout<<"\n";
    }
}