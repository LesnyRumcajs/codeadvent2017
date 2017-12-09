#include <iostream>
#include "Navigation.h"

void Navigation::display_theme() const {
    std::cout << " ** ADVENT OF CODE **\n"
                 "http://adventofcode.com\n";
}

int Navigation::select_day() {
    int day{0};
    std::cout << "Please select day: ";
    std::cin >> day; std::cin.ignore();

    if (day < 1 || day > 25) {
        std::cout << "Incorrect day number. The application will close";
        std::exit(1);
    }

    return day;
}
