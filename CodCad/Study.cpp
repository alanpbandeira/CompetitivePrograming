#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, e, f;

    cin >> a >> b;
    cin >> c >> d;

    e = a * b;
    f = c * d;

    if (e > f)
    {
        cout << "Primeiro";
    }
    else if (e < f)
    {
        cout << "Segundo";
    }
    else
    {
        cout << "Empate";
    }

    return 0;
}
