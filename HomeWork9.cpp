﻿#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <malloc.h>
#include <array>
#include <vector> 
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int task1();
int task2();
int task3();
int task4();
int task5();
int task6();

int main()
{


    int num_task = 0;
    setlocale(LC_ALL, "RU");
    cout << "Введите номер задачи: \n";
    cin >> num_task;
    switch (num_task)
    {
    case 1:
        task1();

        break;
    case 2:
        task2();

        break;
    case 3:
        task3();

        break;
    case 4:
        task4();

        break;
    case 5:
        task5();

        break;
    case 6:
        task6();

        break;


    default:
        cout << "Нет такого задания !";

    }


}


int task1()

{
    cout << "Задача № 1 " << endl;
    cout << "Запросите ввод с клавиатуры количество элементов массива." << endl;
    cout << "Объявите целочисленный массив и выделите необходимый объем памяти для хранения элементов массива." << endl;
    cout << "Запросите ввод значений элементов массива с клавиатуры." << endl;
    cout << "Найдите сумму элементов массива и выведите на экран" << endl << endl;

    int i;
    int size;
    // Создаем указатель 
    int sum = 0;
    cout << "Введите количество элементов массива size = ";
    cin >> size;
    int* arr;
    arr = (int*)malloc(size * sizeof(int));                     // Выделяем место в динамической памяти под массив с помощью фкнкции malloc

    cout << "Введите значение элементов массива: \n";
    for (i = 0; i < size; i++)
    {
        cout << i + 1 << "\\" << size << " : ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Сумма элементов массива =  "//<< setprecision(1)<< setw(8)
        << sum << endl;
    free(arr);                                                  //Очищаем выделенное место под массив в динамической памяти.

    return 0;
}

int task2()
{
    cout << "Задача № 2 " << endl;
    cout << "Запросите ввод с клавиатуры количество элементов массива." << endl;
    cout << "Объявите целочисленный массив и выделите необходимый объем памяти для хранения элементов массива." << endl;
    cout << "Запросите ввод значений элементов массива с клавиатуры." << endl;
    cout << "Найдите среднее арифметическое значение элементов массива и выведите на экран в формате 8 знакомест под число и 2 знакоместа под дробную часть." << endl << endl;
    int i;
    int size;
    int sum = 0;
    cout << "Введите количество элементов массива size = ";
    cin >> size;
    int* arr = (int*)calloc(size, sizeof(int));                   // Выделяем место в динамической памяти под массив                            

    cout << "Введите значение элементов массива: \n";
    for (i = 0; i < size; i++)
    {
        cout << i + 1 << "\\" << size << " : ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum / size;              // Находим среднее арифметическое значение
    std::cout << "Среднее арифметическое значение элементов массива =  " << setw(8) << setprecision(2) << sum << endl; //<< setw(8) << setprecision(2) <
    free(arr);                                                   //Очищаем выделенное место под массив в динамической памяти.


    return 0;
}

int task3()
{
    cout << "Задача № 3 " << endl;
    cout << "Запросите ввод с клавиатуры количество элементов массива. " << endl;
    cout << "Объявите целочисленный массив и выделите необходимый объем памяти для хранения элементов массива." << endl;
    cout << "Запросите ввод значений элементов массива с клавиатуры." << endl;
    cout << "Найдите максимальный и минимальный элемент массива и выведите на экран в отдельных строках" << endl << endl;
    int i;
    int size;
    int num_max = 0;
    int num_min = 0;
    cout << "Введите количество элементов массива size = ";
    cin >> size;
    int* arr = new int[size];                                 // Создаем указатель и выделяем место в динамической памяти под массив
    cout << "Введите значение элементов массива: \n";
    for (i = 0; i < size; i++)
    {
        cout << i + 1 << "\\" << size << " : ";
        cin >> arr[i];
        if (num_max < arr[i]) num_max = arr[i];
        if (num_max > arr[i]) num_min = arr[i];
    }
    cout << "Максимальное число элемента массива = " << num_max << endl;
    cout << "Максимальное число элемента массива = " << num_min << endl;

    delete[] arr;                      //Очищаем выделенное место под массив в динамической памяти. Если объявляли nev то обязательно объявляем delet. 

    return 0;

}

int task4()
{
    cout << "Задача № 4 " << endl;
    cout << "Запросите ввод с клавиатуры количество элементов массива. " << endl;
    cout << "Объявите целочисленный массив и выделите необходимый объем памяти для хранения элементов массива." << endl;
    cout << "Запросите ввод значений элементов массива с клавиатуры." << endl;
    cout << "Отсортируйте массив по убыванию и выведите элементы отсортированного массива на экран через пробел" << endl << endl;
    int i;
    int size;

    cout << "Введите количество элементов массива size = ";
    cin >> size;
    int* arr = new int[size];                                 // Создаем указатель и выделяем место в динамической памяти под массив
    int min_arr = arr[0];
    cout << "Введите значение элементов массива: \n";
    for (i = 0; i < size; i++)
    {
        cout << i + 1 << "\\" << size << " : ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)                            // Производим сортировку по убыванию двумя циклами
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] < arr[j + 1])

            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Отсортированный  массив по убыванию: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;                      //Очищаем выделенное место под массив в динамической памяти. Если объявляли nev то обязательно объявляем delet. 

    return 0;
}

int task5()
{
    cout << "Объявите целочисленный массив, количество элементов заранее не известно." << endl;
    cout << "Организуйте ввод элементов массива, пока не будет введен 0." << endl;
    cout << "Подсчитайте и выведите на экран количество элементов массива больших чем среднее арифметическое значение всех элементов массива." << endl;
    cout << endl;


    int input;
    int counter = 0;                                     // счетчик введенных чисел
    int count = 0;
    int* values = NULL;
    int* arr;
    int sum = 0;
    double sum1 = 0;
    int i = 0;
    do {
        std::cout << "Введите целое значение (0 - выход): ";
        std::cin >> input;
        counter++;

        arr = (int*)realloc(values, counter * sizeof(int)); // При добавлении нового числа, увеличиваем массив на 1

        if (arr != NULL)
        {
            values = arr;
            values[counter - 1] = input;                      // Добавляем к массиву только что введённое число
            sum += input;

        }

        else
        {
            free(values);                                     // Удаляем массив
            std::cout << "Ошибка перевыделения памяти!";
            exit(1);                                          // При ошибке завершаем работу программы
        }

    } while (input != 0);                                     // Цикл идет пока не введен 0
    sum1 = double(sum) / (counter - 1);
    cout << "Cумма всех элементов массива = " << sum << endl;
    cout << "Количество элементов массива - " << counter - 1 << endl;
    cout << "Cреднее арифметическое значение всех элементов массива = " << sum1 << endl;
    cout << "Введенные числа: " << endl;

    for (int i = 0; i < counter - 1; i++)
    {
        if (values[i] > sum1)
        {
            count++;
        }
        cout << values[i] << " " << endl;
    }







    cout << "Количество элементов массива больших чем среднее арифметическое значение всех элементов массива = " << count;
    free(values);  // Удаляем массив
    return 0;

}


int task6()
{
    cout << "Объявите целочисленный массив, количество элементов заранее не известно.";
    cout << "Организуйте ввод элементов массива, после каждого введенного элемента необходимо спрашивать “добавить элемент(y / n) ? ”, ";
    cout << "пока пользователь не введет “n” продолжать ввод элементов массива, вывести количество элементов массива и их сумму в отдельных строках." << endl;
    vector<int> arr;
    char simbol = 'y';
    int num;
    int sum = 0;
    while (simbol == 'y')

    {
        cout << "Введите целое значение :";
        cin >> num;
        arr.push_back(num);
        sum += num;
        cout << "Продолжить ввод (y/n)? ";
        cin >> simbol;
    }


    cout << "Количество элементов в массиве: " << arr.size() << endl;
    cout << "Сумма элементов в массиве: " << sum << endl;
    cout << "Массив на экране - ";
    for (int i = 0; i < arr.size(); i++)
    {
        
        cout << arr[i] << " ";
    }
    return 0;
}
