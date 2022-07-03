#include <iostream>
void leapyear(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        std::cout << year << " is a leap year" << std::endl;
    } else if (year % 100 == 0 && year % 400 == 0) {
        std::cout << year << " is a leap year" << std::endl;
    } else {
        std::cout << year << " is not a leap year" << std::endl;
    }
}
int main() {
    int year;
    std::cout << "Year to check: ";
    std::cin >> year;
    leapyear(year);
    return 0;
}
