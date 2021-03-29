#include <iostream>
#include <vector>
#include <string>

int main()
{
    int n, m;
    int tof;
    std::cin >> n;
    std::cin >> tof;
    std::vector < std::string > people;
    for (int i = 0; i < n + 1; i++) {
        std::string s;
        getline(std::cin, s);
        people.push_back(s);
    }
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        if (people[i % n + 1][(people[i % n + 1]).length() - 1] == '1') {
            if (tof == 0)
                people[i % n + 1] = '0';
        }
        else {
            if (tof == 1)
                tof = 0;
            else
                tof = 1;
            if (tof == 1) {
                people[i + 1].erase((people[i % n + 1]).length() - 1, 1);
                people[i + 1].insert((people[i % n + 1]).length(), std::string("1"));
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (people[i % n + 1][0] != '0')
            std::cout << people[i + 1] << std::endl;
    }
}
