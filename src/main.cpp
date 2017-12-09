#include <iostream>
#include "Navigation.h"
#include "InverseCaptchaSolver.h"

void first_day();

int main() {
    Navigation navigation;
    navigation.display_theme();

    auto day = navigation.select_day();

    switch (day) {
        case 1:
            first_day();
            break;
        default:
            std::cout << "Not implemented. Yet!\n";
            std::exit(2);
    }

    return 0;
}

void first_day() {
    std::string input;
    std::cout << "Enter input: ";
    std::getline(std::cin, input);

    InverseCaptchaSolver solver;
    auto result = solver.solve(input);

    std::cout << "Result is: " << result;
}
