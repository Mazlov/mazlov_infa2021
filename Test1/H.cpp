#include <iostream>
#include <string>

int main() {
    int S;
    std::string N;
    std::cin >> S >> N;
    int count = 0;
    while (N != "A999AA") {
        if (S  > 60) {
            char f = N[1];
            char s = N[2];
            char t = N[3];
            if (f == s && s == t){
                count += 1000;
            }
            else if ((f == s && s != t) || (f == t && s != t) || (s == t && f != t)){
                count += 500;
            }
            if (f != s && s != t && f != t){
                count += 100;
            }
        }
        std::cin >> S >> N;
    }
    std::cout << count;
    return 0;
}
