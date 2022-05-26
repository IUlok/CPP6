#pragma once
#include <iostream>
using namespace std;
template <int x, typename DataType> // Объявление шаблона
class CArray // Объявление класса (шаблонного)
{
private:
    DataType* array; // Создание массива указанного типа
public:
    CArray() // Конструктор
    {
        cout << "Input" << endl;
        array = new DataType[x]; // Создание массива указателей заданного типа
    }
    ~CArray() // Деструктор
    {
        delete[] array;
    }
// Перегрузка индекса
    DataType& operator[] (int index)
    {
        if ((index < x) or (index >= 0))
        {
            return array[index];
        }
        else
        {
            exit(0);
        }
    }
// Перегрузка вывода
    friend ostream& operator << (ostream& out, CArray<x, DataType>& _array)
    {
        for (int i = 0; i < x; i++)
        {
          out <<_array.array[i] << endl;
        }
        return out;
    }
};
