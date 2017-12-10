#include <vector>
#include <iostream>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string.hpp>
#include <sstream>
#include "CorruptionChecksumSolver.h"

int CorruptionChecksumSolver::solve(const std::string &matrix) const {
    int result{0};

    std::vector<std::string> tokens;
    std::vector<int> values;

    std::string line;
    std::istringstream iss(matrix);
    while(std::getline(iss, line)) {
        if (line.find('\t') == std::string::npos)
            break;

        values.clear(); tokens.clear();
        boost::split(tokens, line, boost::is_any_of("\t"));

        std::transform(tokens.begin(), tokens.end(), std::back_inserter(values),
                       [](const std::string& str) { return std::stoi(str); });

        auto minmax = std::minmax_element(values.begin(), values.end());
        result += *minmax.second - *minmax.first;
    }

    return result;
}
