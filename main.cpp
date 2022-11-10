#include <iostream>
#include <math.h>
#include <typeinfo>

void task1() {
    int a; //объявляем переменные
    int b;
    int h;
    std::cout << "b1" << std::endl; //просим ввести значения трапеции
    std::cin >> a;
    std::cout << "b2" << std::endl;
    std::cin >> b;
    std::cout << "h" << std::endl;
    std::cin >> h;
    std::cout << "S = " << (a+b)*h/2 << std::endl; //находим площадь, подставляя значения в формулу
}

void task2(){
    int r;
    double s;
    double d;
    std::cout << "r: ";
    std::cin >> r;
    s = 2*3.14*r;
    d = 3.14*r*r;
    std::cout << "S = " << s << std::endl;
    std::cout << "D = " << d << std::endl;
}

void task3() {
    int a;
    int b;
    std::cout << "k1" << std::endl;
    std::cout << "k2" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cout << "S = " << a*b/2 << std::endl;
    std::cout << "D = " << sqrt(a*a + b*b) << std::endl;
}

void task4() {
    int chislo; // объявляем переменную int, обозначающую десятичное число
    int sum;

    std::cout << "Enter integer four-digit decimal number: " << std::endl; // просим пользователя ввести четырехзначное десятичное число
    std::cin >> chislo; // получаем число от пользователя и сохраняем в переменную сhislo

    int cifra4 = chislo % 10; // находим остаток от деления четырехзначного числа на 10, тем самым находим четвертую цифру
    int ostatok1 = chislo / 10; // находим целую часть от деления, тем самым оставшееся трехзначное число
    int cifra3 = ostatok1 % 10;
    int ostatok2 = ostatok1 / 10;
    int cifra2 = ostatok2 % 10;
    int ostatok3 = ostatok2 / 10;
    int cifra1 = ostatok3 % 10;

    sum = cifra1 + cifra2 + cifra3 + cifra4;

    std::cout << "sum = " << sum << std::endl; // выводим сумму 4 цифр числа
}

void task6 () {
    double r; // объявляем перменную r - расстояние от точки до начала координат
    double fi; // угол между лучом из начала координат к точке и положительной осью абсцисс

    std::cout << "Enter distance from the desired point to origin: " << std::endl; // просим пользователя ввести значение r
    std::cin >> r; // получаем число от пользователя и сохраняем в переменную r

    std::cout << "Enter angle: " << std::endl; // просим пользователя значение fi
    std::cin >> fi; // получаем число от пользователя и сохраняем в переменную fi

    double x = r*cos(fi); // находим значение x в декартовой системе
    double y = r*sin(fi); // находим значение y в декартовой системе

    std::cout << "Cartesian coordinates: " << "x = " << x << "y = " << y; // выводим значения x и y
}

void task7() {
    int a; //объявляем переменные
    int b;
    int c;
    double d;
    std::cout << "a" << std::endl;
    std::cin >> a;
    std::cout << "b" << std::endl;
    std::cin >> b;
    std::cout << "c" << std::endl;
    std::cin >> c;
    d = b*b-4*a*c;
    std::cout << "x1 = " << (-b+sqrt(d))*a/2 << std::endl;
    std::cout << "x2 = " << (-b+sqrt(d))*a/2 << std::endl;
}

void task8() {
    int a; // объявляем перменную а, сторону треугольника
    int b;
    int c;

    std::cout << "Enter a side length: " << std::endl; // просим пользователя ввести длину стороны a
    std::cin >> a; // получаем число от пользователя и сохраняем в переменную a

    std::cout << "Enter b side length: " << std::endl; // просим пользователя ввести длину стороны b
    std::cin >> b; // получаем число от пользователя и сохраняем в переменную b

    std::cout << "Enter c side length: " << std::endl; // просим пользователя ввести длину стороны c
    std::cin >> c; // получаем число от пользователя и сохраняем в переменную c

    double ma = sqrt(2*b*b+2*c*c-a*a)/2; // длина медианы из вершины а в исходном треугольнике
    double mb = sqrt(2*a*a+2*c*c-b*b)/2;
    double mc = sqrt(2*a*a+2*b*b-c*c)/2;

    double a2 = ma; // сторона а нового треугольника
    double b2 = mb;
    double c2 = mc;

    double ma2 = sqrt(2*b2*b2+2*c2*c2-a2*a2)/2; // длина медианы из вершины а в новом треугольнике
    double mb2 = sqrt(2*a2*a2+2*c2*c2-b2*b2)/2;
    double mc2 = sqrt(2*a2*a2+2*b2*b2-c2*c2)/2;

    std::cout << "Medians of the new triangle: " << "ma = " << ma2 << "mb = " << mb2 << "mc = " << mc2; // выводим значения медиан
}

void task9() {
    int k;
    std::cout << "секунда: " << std::endl;
    std::cin >> k;
    int v = k/60;
    int v1 = v/60;
    std::cout << "целых минут прошло " << v << std::endl;
    std::cout << "целых часов прошло " << v1 << std::endl;
}

void task10() {
    int a; // объявляем переменную, сторону треугольника
    int b;
    int c;

    std::cout << "Введите длину стороны тр-ка: " << std::endl; // просим пользователя ввести длину стороны a
    std::cin >> a; // получаем число от пользователя и сохраняем в переменную a

    std::cout << "Введите длину стороны тр-ка: " << std::endl; // просим пользователя ввести длину стороны b
    std::cin >> b; // получаем число от пользователя и сохраняем в переменную b

    std::cout << "Введите длину стороны тр-ка: " << std::endl; // просим пользователя ввести длину стороны c
    std::cin >> c; // получаем число от пользователя и сохраняем в переменную c

    if (a == b || b == c || a == c) // вводим условие
        std::cout << "Треугольник равнобедренный" << std::endl; // выыодится, если выполняется условие
    else
        std::cout << "Треугольник не равнобедренный" << std::endl; // выводится, если условие не выполняется
}

void task11() {
    int a;
    std::cout << "price: " << std::endl;
    std::cin >> a;
    if (a > 1000)
        a = a - a/10;
    std::cout << a << std::endl;
}

void task12() {
    int height; // объявляем переменную height
    int weight;

    std::cout << "Enter your height: " << std::endl; // просим пользователя ввести свой рост
    std::cin >> height; // получаем число от пользователя и сохраняем в переменную height

    std::cout << "Enter your weight: " << std::endl; // просим пользователя ввести свой вес
    std::cin >> weight; // получаем число от пользователя и сохраняем в переменную weight

    if (height - 100 == weight) // вводим условие
        std::cout << "Your weight is ideal!" << std::endl; // исполняется, если условие выполняется
    else if (height - 100 > weight) // если не выполняется условие 1, то проверяется новое
        std::cout << "You should increase the weight" << std::endl; // исполняется, если условие выполняется
    else // выполняется, если не выполняется и условие 2
        std::cout << "You should reduce the weight" << std::endl; // выводится на экран
}

void month () {
    int a;
    std::cout << "Введите номер месяца: " << std::endl;
    std::cin >> a;
    if (a==1)
        std::cout << "Январь, зима" << std::endl;
    if (a==2)
        std::cout << "Февраль, зима" << std::endl;
    if (a==3)
        std::cout << "Март, весна" << std::endl;
    if (a==4)
        std::cout << "Апрель, весна" << std::endl;
    if (a==5)
        std::cout << "Май, весна" << std::endl;
    if (a==6)
        std::cout << "Июнь, лето" << std::endl;
    if (a==7)
        std::cout << "Июль, лето" << std::endl;
    if (a==8)
        std::cout << "Август, лето" << std::endl;
    if (a==9)
        std::cout << "Сентябрь, осень" << std::endl;
    if (a==10)
        std::cout << "Октябрь, осень" << std::endl;
    if (a==11)
        std::cout << "Ноябрь, осень" << std::endl;
    if (a==12)
        std::cout << "Декабрь, зима" << std::endl;
}

void task19() {
    //Дано трёхзначное число. Определить: 19.1 является ли произведение его цифр больше числа b
    //19.2 кратна ли 7 сумма его цифр
    int a;
    int b;
    std::cout << "Введите трехзначное число" << std::endl;
    std::cin >> a;
    std::cout << "b" << std::endl;
    std::cin >> b;
    double chislo1 = a/10;
    int cifra1 = (a - chislo1)*10;
    double chislo2 = cifra1/10;
    int cifra2 = (chislo1 - chislo2)*10;
    double chislo3 = cifra2/10;
    int cifra3 = (chislo2 - chislo3)*10;
    if (cifra1*cifra2*cifra3 > b)
        std::cout << "Произведение цифр a больше числа b" << std::endl;
    else
        std::cout << "Произведение цифр a меньше числа b" << std::endl;
}

int main() {
    std::cout << "Первое задание" << std::endl;
    task1();

    std::cout << "Второе задание" << std::endl;
    task2();

    std::cout << "Третье задание" << std::endl;
    task3();

    std::cout << "Четвертое задание" << std::endl;
    task4();

    std::cout << "Пятое задание" << std::endl;


    std::cout << "Шестое задание" << std::endl;
    task6();

    std::cout << "Седьмое задание" << std::endl;
    task7();

    std::cout << "Восьмое задание" << std::endl;
    task8();

    std::cout << "Девятое задание" << std::endl;
    task9();

    std::cout << "Десятое задание" << std::endl;
    task10();

    std::cout << "Одиннадцатое задание" << std::endl;
    task11();

    std::cout << "Двенадцатое задание" << std::endl;
    task12();

    std::cout << "Тринадцатое задание" << std::endl;

    std::cout << "Четырнадцатое задание" << std::endl;

    std::cout << "Пятнадцатое задание" << std::endl;
    month();

    std::cout << "Шестнадцатое задание" << std::endl;

    std::cout << "Семнадцатое задание" << std::endl;

    std::cout << "Восемнадцатое задание" << std::endl;

    std::cout << "Девятнадцатое задание" << std::endl;
    task19();

    return 0;
}
