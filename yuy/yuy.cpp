#include <iostream>
#include "MyString.h"

int main() {
    
    MyString str1("Hello");
    MyString str2("World");
    MyString str3 = str1 + " " + str2;

    std::cout << "������ 1: " << str1 << std::endl;
    std::cout << "������ 2: " << str2 << std::endl;
    std::cout << "������������: " << str3 << std::endl;

    str3.append("!!!");
    std::cout << "����� ����������: " << str3 << std::endl;

    std::cout << "������� ����� ������: ";
    std::cin >> str1;
    std::cout << "�� �����: " << str1 << std::endl;

    return 0;
}

