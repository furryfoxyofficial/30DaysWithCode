#ifndef RW_H
#define RW_H

#include <string>
#include <fstream>

struct M_Result
{
    bool isSuccess;
    std::string messageToUser;
    M_Result() : isSuccess(false), messageToUser("") {}
    M_Result(bool s, const std::string m) : isSuccess(s), messageToUser(m) {}
    friend std::ostream& operator <<(std::ostream& os, const M_Result& res)
    {
        os << (res.isSuccess ? "Success: " : "Error: ") << res.messageToUser;
        return os;
    }
};

class RW
{
public:
    M_Result Read();
    M_Result Write();
};

#endif // RW_H
