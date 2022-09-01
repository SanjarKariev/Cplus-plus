#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    const double eps = 1e-10;

    cout << "Введите n ";
    size_t n;
    cin >> n;
    vector<double> x(n);
    size_t idx = 0u;
    for (auto &value : x)
    {
        cout << "Введите x[" << idx++ << "] ";
        cin >> value;
    }
    size_t count = 0u;
    double p = 1.;
    for (auto &value : x)
    {
        if (value > eps && sin(value) <= eps)
        {
            ++count;
            p *= value;
        }
    }
    if (count)
    {
        cout << "Количество положительных элементов, удовлетворяющих условию sin(xk)<=0 "
             << count << endl
             << "Их произведение " << p;
    }
    else
    {
        cout << "В векторе нет положительных элементов, удовлетворяющих условию sin(xk)<=0";
    }
    cout << endl;

    return 0;
}