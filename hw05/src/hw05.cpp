#include <hw05.h>

using VecOfStr = std::vector<std::string>;

void preprocessString(const std::string& original, std::string& cleaned) {
    cleaned.clear();
    for (char c : original) {
        if (!std::isspace(c) && c != ',' && c != '.' && c != '?' && c != '!' && c != '\'') {
            cleaned.push_back(std::tolower(c));
        }
    }
}

bool isPalindrome(const std::string& str) {
    auto left = str.begin();
    auto right = str.rbegin();

    while (left != str.end() && right != str.rend()) {
        if (*left != *right) {
            return false;
        }
        ++left;
        ++right;
    }
    return true;
}

VecOfStr hw05(const VecOfStr& strings) {
    VecOfStr result;

    for (const auto& original : strings) {
        std::string cleaned;
        preprocessString(original, cleaned);

        if (!cleaned.empty() && isPalindrome(cleaned)) {
            result.push_back(original);
        }
    }

    return result;
}
