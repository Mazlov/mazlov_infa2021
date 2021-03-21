#include <iostream>
#include <vector>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector <std::vector <int>> v;
    for (int i = 0; i < n; i++) {
        std::vector <int> a;
        for (int j = 0; j < m; j++) {
            a.push_back(0);
        }
        v.push_back(a);
    }
    for (int i = 0; i < k; i++){
        int b, c;
        std::cin >> b >> c;
        v[b - 1][c - 1] = -1;

    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] != -1) {
                if (i > 0 && j > 0 && v[i - 1][j - 1] == -1)
                    v[i][j] = v[i][j] + 1;
                if (i > 0 && v[i - 1][j] == -1)
                    v[i][j] = v[i][j] + 1;
                if (i > 0 && j < m - 1 && v[i - 1][j + 1] == -1)
                    v[i][j] = v[i][j] + 1;
                if (j > 0 && v[i][j - 1] == -1)
                    v[i][j] = v[i][j] + 1;
                if (j < m - 1 && v[i][j + 1] == -1)
                    v[i][j] = v[i][j] + 1;
                if (i < n - 1 && j > 0 && v[i + 1][j - 1] == -1)
                    v[i][j] = v[i][j] + 1;
                if (i < n - 1 && v[i + 1][j] == -1)
                    v[i][j] = v[i][j] + 1;
                if (i < n - 1 && j < m - 1 && v[i + 1][j + 1] == -1)
                    v[i][j] = v[i][j] + 1;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
