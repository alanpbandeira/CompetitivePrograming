
#include <iostream>

using namespace std;

int ks(int m_peso[], int value[], int array_size, int max_weight)
{
    int t[51][101], a, b;

    for (int col = 0; col <= max_weight; col++)
    {
        t[0][col] = 0;

        for (int i = 1; i <= array_size; i++)
        {
            a = t[i - 1][col];

            if (m_peso[i] > col)
            {
                b = 0;
            }
            else
            {
                b = t[i - 1][col - m_peso[i]] + value[i];
            }

            if (a > b)
            {
                t[i][col] = a;
            }
            else
            {
                t[i][col] = b;
            }
        }
    }

    return t[array_size][max_weight];
}

int main()
{
    int cases, capacity, n;

    cin >> cases;

    while (cases--)
    {
        cin >> n;

        int weight[n + 1];
        int value [n + 1];

        for (int i = 1; i <= n; i++)
        {
            cin >> value[i] >> weight[i];
        }

        int max_capacity, hp;

        cin >> max_capacity >> hp;

        int ans = ks(weight, value, n, max_capacity);

        if (ans >= hp)
        {
            cout << "Missao completada com sucesso\n";
        }
        else
        {
            cout << "Falha na missao\n";
        }
    }
}
