#include<iostream>
//using namespace std;
void Log(const char* message);
int Multiply(int a, int b);

int MultiplyAndLog(int a, int b)
{
	int result = a*b;
	std::cout<<result<<std::endl;
}
class Player{
public:
    int x,y;
    int speed;
    void move(int xa, int ya){
        x += (xa * speed);
        y += (ya * speed);
    }
};


int main()
{
    Player player;
    player.x = 4;
    player.y = 8;
    player.speed = 33;
    player.move(4 ,5);
    return 0;
}
