#include<iostream>
#include"Log.h"
//using namespace std;
void Log(const char* message);
int Multiply(int a, int b);
int MultiplyAndLog(int a, int b)
{
	int result = a*b;
	std::cout<<result<<std::endl;
}
int main()
{
    int variable = 8;
    MultiplyAndLog(69,420);
    Log("Hello World");
    std::cout<<Multiply(7,5)<<std::endl;
    std::cin.get();
    return 0;
}
