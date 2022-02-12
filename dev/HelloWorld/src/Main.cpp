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

int main()
{
    Log log;
    log.SetLogLevel(log.LogLevelInfo);
    log.Warn("WARNINGGGG!!!!");
    log.Error("ERRRORRRR!!!!");
    log.Info("Info :)");

}