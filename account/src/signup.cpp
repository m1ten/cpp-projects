// OnlyC++ Account by miten

#include <iostream>
#include <fstream>
#include "main.h"
#include "signup.h"

void SignUP(std::string name, std::string pass)
{
    account(encrypt(name), encrypt(pass));
}

void account(std::string name, std::string pass)
{
    nlohmann::json accountUP;

    std::ifstream readfile("data.json");
    readfile >> accountUP;
    readfile.close();

    if (accountUP[name] == nlohmann::detail::value_t::null)
    {
        accountUP[name] = pass;
        std::cout << "Successfully Signed Up." << std::endl;
    }
    else {
        std::cout << "User Already Signed Up." << std::endl;
    };

    std::ofstream writefile("data.json");
    writefile << accountUP;
    writefile.close();
}
