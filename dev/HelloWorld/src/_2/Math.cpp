#include <iostream>
void Log(const char* message);
int Multiply(int a, int b)
{
    Log("Multiply");
    return a+b;
}

/*int main()
{
    Multiply(5,7);
}*/