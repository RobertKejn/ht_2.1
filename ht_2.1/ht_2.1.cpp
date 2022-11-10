#include <iostream>

enum class seasons {
    jan = 1,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
};

int main()
{
    std::setlocale(LC_ALL, "Russian");
    int n = -1;
    bool flag = true;
    while (flag){
        std::cout << "Введите номер месяца: ";
        std::cin >> n;
        switch (n) {
        case static_cast<int>(seasons::jan): std::cout << "Январь\n"; break;
        case static_cast<int>(seasons::feb): std::cout << "Февраль\n"; break;
        case static_cast<int>(seasons::mar): std::cout << "Март\n"; break;
        case static_cast<int>(seasons::apr): std::cout << "Апрель\n"; break;
        case static_cast<int>(seasons::may): std::cout << "Май\n"; break;
        case static_cast<int>(seasons::jun): std::cout << "Июнь\n"; break;
        case static_cast<int>(seasons::jul): std::cout << "Июль\n"; break;
        case static_cast<int>(seasons::aug): std::cout << "Август\n"; break;
        case static_cast<int>(seasons::sep): std::cout << "Сентябрь\n"; break;
        case static_cast<int>(seasons::oct): std::cout << "Октябрь\n"; break;
        case static_cast<int>(seasons::nov): std::cout << "Ноябрь\n"; break;
        case static_cast<int>(seasons::dec): std::cout << "Декабрь\n"; break;
        case 0: std::cout<<"До свидания\n"; flag = false; break;
        default: std::cout << "Неверный номер месяца!\n"; break;
        }
   } 
}

