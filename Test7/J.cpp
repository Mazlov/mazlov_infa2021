#include <iostream>
#include<vector>

int main() {
    int n, m = 0;
    std::vector <int> v;
    while (std::cin >> n) {
        if (n > m)
            m = n;
        v.push_back(n);
    }
    int p = 1;
    bool b = false;
    while (p <= m) {
        int h = 0;
        for (int i = 0; i < v.size(); i++) {
            if ((v[i] / p) % 10 == 0) {
                int r = v[i];
                v.erase(v.begin() + i);
                v.insert(v.begin() + h, r);
                h++;
            }
        }
        for (int i = 0; i < v.size(); i++)
            std::cout << v[i] << " ";
        p *= 10;
        std::cout << std::endl;
    }
    return 0;
}
