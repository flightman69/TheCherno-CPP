#include <iostream>
void Log(const char* message);
int Multiply(int a, int b)
{
    Log("Multiply");
    return a+b;
}
int MultiplyAndLog(int a, int b)
{
    int result = a*b;
    std::cout<<result<<std::endl;
}