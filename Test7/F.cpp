#include <iostream>
#include <vector>
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> queue;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        char change;
        std::cin >> change;
        if (change == '+')
        {
            int number;
            std::cin >> number;
            queue.push_back(number);
        }
        if (change == '*')
        {
            int number;
            std::cin >> number;
            queue.insert(queue.begin() + (queue.size()) / 2 + (queue.size()) % 2, number);
        }
        if (change == '-')
        {
            std::cout << queue[0] << std::endl;
            queue.erase(queue.begin());
        }
    }
    return 0;
}
