#include <iostream>
#include "MyString.h"

int main() {
    
    MyString str1("Hello");
    MyString str2("World");
    MyString str3 = str1 + " " + str2;

    std::cout << "Строка 1: " << str1 << std::endl;
    std::cout << "Строка 2: " << str2 << std::endl;
    std::cout << "Конкатенация: " << str3 << std::endl;

    str3.append("!!!");
    std::cout << "После добавления: " << str3 << std::endl;

    std::cout << "Введите новую строку: ";
    std::cin >> str1;
    std::cout << "Вы ввели: " << str1 << std::endl;

    return 0;
}

