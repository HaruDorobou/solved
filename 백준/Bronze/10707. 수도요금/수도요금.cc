#include <iostream>

using namespace std;

int main()
{
    int x_cost_per_liter, y_basic_cost, y_basic_cost_limit, y_additional_cost, joi_usage;

    cin >> x_cost_per_liter >> y_basic_cost >> y_basic_cost_limit >> y_additional_cost >> joi_usage;

    int x_cost, y_cost;
    x_cost = x_cost_per_liter * joi_usage;

    if (y_basic_cost_limit >= joi_usage)
    {
        y_cost = y_basic_cost;
    }
    else
    {
        y_cost = y_basic_cost + (y_additional_cost * (joi_usage - y_basic_cost_limit));
    }

    cout << (x_cost > y_cost ? y_cost : x_cost);
}
