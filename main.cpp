#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    {

        std::vector<string> products;

        string entered_value;

        while (products.size() < 12)
        {
            cin >> entered_value;
            products.push_back(entered_value);
        }
        for (int i = 0; i < 12; i++)
        {
            if (i <= 12)
            {
                sort(products.begin(), products.end());
                cout << "\n"
                     << products[i] << "\t";
                cout << "\n";
            }
        }
    }
    return 0;
}
