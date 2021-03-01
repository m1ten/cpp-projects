// OnlyC++ Account by miten

#include <iostream>
#include <fstream>

#include "main.h"
#include "signup.h"
#include "signin.h"

int main()
{
    datafile();

    std::string username;
    std::string password;
    std::string sign;

    std::cout << "OnlyC++ Account" << std::endl;

    std::cout << "Sign[in] or Sign[up]: ";
    std::cin >> sign;

    if (sign == "up")
    {
        std::cout << "Username: ";
        std::cin >> username;

        std::cout << "Password: ";
        std::cin >> password;

        SignUP(username, password);
    }
    else if (sign == "in")
    {
        std::cout << "Username: ";
        std::cin >> username;

        std::cout << "Password: ";
        std::cin >> password;

        SignIN(username, password);
    }
    else { return 0; }

    return 0;
}

std::string encrypt(std::string value)
{
    int i;
    for (i = 0; (i < 75 && value[i] != '\0'); i++)
        value[i] = value[i] + 2;
    return value;
}

void datafile()
{
    std::ifstream readdata("data.json");
    if ((bool)readdata)
        readdata.close();
    else if ((bool)!readdata)
    {
        readdata.close();
        std::cout << "Data File Not Found Error: Creating \"data.json\"." << std::endl;
        std::ofstream writedata("data.json");
        writedata << "{ }";
        writedata.close();
    }
}