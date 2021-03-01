// OnlyC++ Account by miten

#include <iostream>
#include <fstream>
#include "main.h"
#include "signin.h"

void SignIN(std::string name, std::string pass)
{
    check(encrypt(name), encrypt(pass));
}

void check(std::string name, std::string pass)
{
    nlohmann::json accountIN;
    std::ifstream readfile("data.json");
    readfile >> accountIN;
    readfile.close();

    if (accountIN[name] == pass)
    {
        std::cout << "Successfully Signed In." << std::endl;
    }
    else {
        std::cout << "Incorrect Username or Password." << std::endl;
    };
}


