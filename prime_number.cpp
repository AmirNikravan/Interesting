#include <iostream>
#include <vector>
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> aval;
    aval.push_back(2);
    int j = 0;
    bool flag = true;
    for (size_t j = 3, z = 0; j <= n; j++)
    {
        flag = false;
        int i = 0;
        for (; i <= z; i++)
        {
            if (j % aval[i] != 0)
            {
                flag = true;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            aval.push_back(j);
            z++;
        }
    }
    for (const auto &i : aval)
    {
        std::cout << i << '\n';
    }
}
