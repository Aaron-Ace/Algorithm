#include <iostream>
#include <string>

int t, T;
std::string str;

void init() {
    std::cin >> T;
    t = 0;
    std::getline(std::cin, str);
}

bool input() {
    if (t++ == T)
        return false;
    std::getline(std::cin, str);
    return true;
}

int DP[1000][1000];
// DP[row][col] => the length of longest palindrome
// of substring from row to col

void run() {
    // input string is empty
    // longest palindrome would be empty
    if (str.length() == 0) {
        std::cout << 0 << std::endl;
        return;
    }

    // all length-1 string is a length-1 palindrome
    for (int i = 0; i < str.length(); i++) {
        DP[i][i] = 1;
    }
    // for length-2 string AB
    // A != B -> remove A or B to a length-1 palindrome
    // A = B -> a length-2 palindrome
    for (int i = 1; i < str.length(); i++) {
        if (str[i-1] == str[i])
            DP[i-1][i] = 2;
        else
            DP[i-1][i] = 1;
    }

    for (int len = 3; len <= str.length(); len++) {
        for (int l = 0, t = len - 1; t < str.length(); l++, t++) {
            // Assume leading and trailing characters are part of palindrome
            DP[l][t] = (str[l] == str[t])?(2 + DP[l+1][t-1]):(DP[l+1][t-1]);
            // Assume leading character is not part of palindrome
            if (DP[l][t] < DP[l+1][t])
                DP[l][t] = DP[l+1][t];
            // Assume trailing character is not part of palindrome
            if (DP[l][t] < DP[l][t-1])
                DP[l][t] = DP[l][t-1];
        }
    }

    std::cout << DP[0][str.length()-1] << std::endl;
}

int main() {
    init();
    while(input())
        run();
    return 0;
}