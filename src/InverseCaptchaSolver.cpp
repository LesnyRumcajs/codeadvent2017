#include "InverseCaptchaSolver.h"

int InverseCaptchaSolver::solve(const std::string &captcha) const {
    int result{0};
    for (auto it = captcha.begin(); it != captcha.end(); ++it) {
        if (it == captcha.end() -1) {
            if (*it == captcha.front()) {
                result += *it - '0';
            }
        } else {
            if (*it == *(it + 1)) {
                result += *it - '0';
            }
        }
    }

    return result;
}
