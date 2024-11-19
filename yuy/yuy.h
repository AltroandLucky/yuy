#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>

class MyString {
private:
    char* data;     // Указатель на строку
    size_t length;  // Длина строки

public:
    // Конструкторы
    MyString();                              // Пустой конструктор
    MyString(const char* str);               // Конструктор из C-style строки
    MyString(const MyString& other);         // Конструктор копирования

    // Деструктор
    ~MyString();

    // Методы
    size_t getLength() const;                // Получить длину строки
    const char* getData() const;             // Получить строку
    void append(const char* str);            // Добавить строку

    // Перегрузка операторов
    MyString& operator=(const MyString& other); // Оператор присваивания
    MyString operator+(const MyString& other) const; // Конкатенация
    char& operator[](size_t index);          // Оператор доступа к элементу
    const char& operator[](size_t index) const; // Оператор доступа (константный)

    // Ввод и вывод
    friend std::ostream& operator<<(std::ostream& os, const MyString& str);
    friend std::istream& operator>>(std::istream& is, MyString& str);
};

#endif // MYSTRING_H