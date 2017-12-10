#include <iostream>
#include <boost/algorithm/string.hpp>
#include "Navigation.h"
#include "InverseCaptchaSolver.h"
#include "CorruptionChecksumSolver.h"

void first_day();
void second_day();

int main() {
    Navigation navigation;
    navigation.display_theme();

    auto day = navigation.select_day();

    switch (day) {
        case 1:
            first_day();
            break;
        case 2:
            second_day();
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

void second_day() {

    std::cout << "Enter input: ";

    std::string input, line;
    while(std::getline(std::cin, line)) {
        if (line.size() <= 1) break;
        input += line + "\n";
    }

    CorruptionChecksumSolver checksumSolver;
    auto result = checksumSolver.solve(input);
    std::cout << "Result: " << result << ".\n";
}