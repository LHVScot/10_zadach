﻿#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    //int seconds_passed;
    //int choice;

    //cout << "Введите количество секунд, прошедших с начала дня: ";
    //cin >> seconds_passed;

    //cout << "Выберите действие:\n";
    //cout << "1. Вычислить время до полуночи\n";
    //cout << "2. Выйти из программы\n";
    //cout << "Введите номер действия: ";
    //cin >> choice;

    //if (choice == 1) {
    //    // Вычисление времени до полуночи
    //    int seconds_left = 86400 - seconds_passed; // 86400 секунд в сутках

    //    int hours_left = seconds_left / 3600; // 3600 секунд в часе
    //    seconds_left %= 3600; // Остаток от деления на 3600

    //    int minutes_left = seconds_left / 60; // 60 секунд в минуте
    //    seconds_left %= 60; // Остаток от деления на 60

    //    cout << "До полуночи осталось: " << hours_left << " часов, "
    //        << minutes_left << " минут, " << seconds_left << " секунд.\n";
    //}
    //else if (choice == 2) {
    //    cout << "Выход из программы.\n";
    //}
    //else {
    //    cout << "Неверный выбор.\n";
    //}
     
     
    
    // задание 2
    


    //double diameter;
    //int choice;
    //const int PI = 3.14;

    //cout << "Введите диаметр окружности: ";
    //cin >> diameter;

    //cout << "Выберите действие:\n";
    //cout << "1. Вычислить площадь\n";
    //cout << "2. Вычислить периметр\n";
    //cout << "Введите номер действия: ";
    //cin >> choice;

    //if (choice == 1) {
    //    // Вычисление площади
    //    double radius = diameter / 2;
    //    double area = PI * pow(radius, 2); // PI - константа PI 
    //    cout << "Площадь окружности: " << area << endl;
    //}
    //else if (choice == 2) {
    //    // Вычисление периметра
    //    double perimeter = PI * diameter;
    //    cout << "Периметр окружности: " << perimeter << endl;
    //}
    //else {
    //    cout << "Неверный выбор.\n";
    //}
    
    
    //задание 3




    //double a;
    //int quantity;
    //double b;
    //int choice;

    //cout << "Введите стоимость одной игровой приставки: ";
    //cin >> a;

    //cout << "Введите количество приставки: ";
    //cin >> quantity;

    //cout << "Введите процент скидки: ";
    //cin >> b;

    //cout << "Выберите действие:\n";
    //cout << "1. Вычислить общую сумму заказа\n";
    //cout << "2. Вычислить стоимость одной приставки с учетом скидки\n";
    //cout << "Введите номер действия: ";
    //cin >> choice;

    //if (choice == 1) {
    //    // Вычисление общей суммы заказа
    //    double total = a * quantity;
    //    cout << "Общая сумма заказа: " << total << endl;
    //}
    //else if (choice == 2) {
    //    // Вычисление стоимости одной приставки с учетом скидки
    //    double c = a * (b / 100);
    //    double f = a - c;
    //    cout << "Стоимость одной приставки с учетом скидки: " << f << endl;
    //}
    //else {
    //    cout << "Неверный выбор.\n";
    //}


//задание 4
    //double file_size_gb;
    //double download_speed_bps;
    //int choice;

    //cout << "Введите размер файла в гигабайтах: ";
    //cin >> file_size_gb;

    //cout << "Введите скорость интернет-соединения в битах в секунду: ";
    //cin >> download_speed_bps;

    //cout << "Выберите единицу времени:\n";
    //cout << "1. Часы\n";
    //cout << "2. Минуты\n";
    //cout << "3. Секунды\n";
    //cout << "Введите номер действия: ";
    //cin >> choice;

    //// Преобразование гигабайт в биты
    //double file_size_bits = file_size_gb * 1024 * 1024 * 1024 * 8;

    //// Вычисление времени загрузки
    //double download_time_seconds = file_size_bits / download_speed_bps;

    //if (choice == 1) {
    //    // Вычисление времени в часах
    //    double download_time_hours = download_time_seconds / 3600;
    //    cout << "Время загрузки: " << download_time_hours << " часов.\n";
    //}
    //else if (choice == 2) {
    //    // Вычисление времени в минутах
    //    double download_time_minutes = download_time_seconds / 60;
    //    cout << "Время загрузки: " << download_time_minutes << " минут.\n";
    //}
    //else if (choice == 3) {
    //    // Вычисление времени в секундах
    //    cout << "Время загрузки: " << download_time_seconds << " секунд.\n";
    //}
    //else {
    //    cout << "Неверный выбор.\n";
    //}
    
    
    //задание 5

    //int number;

    //cout << "Введите шестизначное число: ";
    //cin >> number;

    //if (number >= 100000 && number <= 999999) {
    //    // Извлечение цифр
    //    int digit1 = number / 100000;
    //    int digit2 = (number / 10000) % 10;
    //    int digit3 = (number / 1000) % 10;
    //    int digit4 = (number / 100) % 10;
    //    int digit5 = (number / 10) % 10;
    //    int digit6 = number % 10;

    //    // Суммирование цифр
    //    int sum1 = digit1 + digit2 + digit3;
    //    int sum2 = digit4 + digit5 + digit6;

    //    // Проверка на счастливое число
    //    if (sum1 == sum2) {
    //        cout << "Число счастливое!" << endl;
    //    }
    //    else {
    //        cout << "Число несчастливое!" << endl;
    //    }
    //}
    //else {
    //    cout << "Ошибка! Введено не шестизначное число." << endl;
    //}

    //задание 6
    
    //int number;

    //cout << "Введите шестизначное число: ";
    //cin >> number;

    //if (number >= 100000 && number <= 999999) {
    //    // Извлечение цифр
    //    int digit1 = number / 100000;
    //    int digit2 = (number / 10000) % 10;
    //    int digit3 = (number / 1000) % 10;
    //    int digit4 = (number / 100) % 10;
    //    int digit5 = (number / 10) % 10;
    //    int digit6 = number % 10;

    //    // Обмен цифрами
    //    int temp = digit1;
    //    digit1 = digit6;
    //    digit6 = temp;

    //    temp = digit2;
    //    digit2 = digit5;
    //    digit5 = temp;

    //    // Создание нового числа
    //    int new_number = digit1 * 100000 + digit2 * 10000 + digit3 * 1000 + digit4 * 100 + digit5 * 10 + digit6;

    //    cout << "Преобразованное число: " << new_number << endl;
    //}
    //else {
    //    cout << "Ошибка! Введено не шестизначное число." << endl;
    //}
//задание 7
    int month;

    cout << "Введите номер месяца (от 1 до 12): ";
    cin >> month;

    if (month >= 1 && month <= 12) {
        switch (month) {
        case 1:
        case 2:
        case 12:
            cout << "Winter" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "Spring" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "Summer" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "Autumn" << endl;
            break;
        }
    }
    else {
        cout << "Ошибка! Введен неверный номер месяца." << endl;
    }


    //return 0;

}


    


