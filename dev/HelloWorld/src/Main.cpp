#include <iostream>

class  Log{
public:
    int LogLevelError = 0;
    int LogLevelWarning = 1;
    int LogLevelInfo = 2;
private:
    int m_LogLevel;
public:
    void SetLogLevel(int level)
    {
        m_LogLevel = level;
    }
    void Error(const char* message)
    {
        if (m_LogLevel >= LogLevelError)
            std::cout<< "[ERROR]:" << message << std::endl;
    }
    void Warn(const char* message)
    {
        if (m_LogLevel >= LogLevelWarning)
            std::cout<< "[WARNING]:"<< message << std::endl;
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= LogLevelInfo)
            std::cout<< "[INFO]:" << message << std::endl;
    }

};

struct Entitty
{
    static int x ,y ;

    void Print()
    {
        std::cout<<x<<','<<y<<std::endl;
    }
};

int Entitty::x;
int Entitty::y;

int main()
{
    Log log;
    log.SetLogLevel(log.LogLevelInfo);
    log.Warn("WARNINGGGG!!!!");
    log.Error("ERRRORRRR!!!!");
    log.Info("Info :)");
    Entitty E;
    E.x = 5;
    E.y = 10;
    Entitty E2;
    E2.x = 55;
    E2.y = 100;
    E.Print();
    E2.Print();

}