//The Monkey and the Oiled Bamboo
//UVA 12032

#include <iostream>

int rungs[100000], n, t, T;

void init() {
    std::cin >> T;
    t = 0;
}

bool input() {
    if (t++ == T)
        return false;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> rungs[i];
    return true;
}

// satisfy => true
// unsatisfy => false
bool judge(int power) {
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (rungs[i] - pos > power)
            return false;
        else if (rungs[i] - pos == power)
            power--;
        pos = rungs[i];
    }
    return true;
}

int findAns(int maxUnsati, int minSati) {
    if (minSati - maxUnsati == 1)
        return minSati;
    int mid = (maxUnsati + minSati) / 2;
    if (judge(mid))
        return findAns(maxUnsati, mid);
    else
        return findAns(mid, minSati);
}

int main() {
    init();
    while (input()) {
        std::cout << "Case " << t << ": ";
        std::cout << findAns(0, rungs[n-1]) << std::endl;
    }
    return 0;
}
