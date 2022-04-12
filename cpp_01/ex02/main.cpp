#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "String address:\nStr = " << &str << "\nStr ptr = " << ptr << "\nStr ref = " << &ref << std::endl;
    std::cout << "String value:\nStr = " << str << "\nStr ptr = " << *ptr << "\nStr ref = " << ref << std::endl;
    return 0;
}