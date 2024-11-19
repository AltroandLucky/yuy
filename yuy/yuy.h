#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>

class MyString {
private:
    char* data;     // ��������� �� ������
    size_t length;  // ����� ������

public:
    // ������������
    MyString();                              // ������ �����������
    MyString(const char* str);               // ����������� �� C-style ������
    MyString(const MyString& other);         // ����������� �����������

    // ����������
    ~MyString();

    // ������
    size_t getLength() const;                // �������� ����� ������
    const char* getData() const;             // �������� ������
    void append(const char* str);            // �������� ������

    // ���������� ����������
    MyString& operator=(const MyString& other); // �������� ������������
    MyString operator+(const MyString& other) const; // ������������
    char& operator[](size_t index);          // �������� ������� � ��������
    const char& operator[](size_t index) const; // �������� ������� (�����������)

    // ���� � �����
    friend std::ostream& operator<<(std::ostream& os, const MyString& str);
    friend std::istream& operator>>(std::istream& is, MyString& str);
};

#endif // MYSTRING_H