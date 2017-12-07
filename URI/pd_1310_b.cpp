#include <iostream>
#include <vector>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    // d == days
    // c == cost
    // p == profit

    int d, c, aux;
    vector<int> p;

    while (cin >> d)
    {
        int atual = 0, mx = 0;
        cin >> c;

        for (int i = 0; i < d; i++)
        {
            cin >> aux;
            p.push_back(aux - c);
        }

        for (int i = 0; i < p.size(); i ++)
        {
            atual += p[i];
            mx = max(atual, mx);
            atual = atual * (atual >= 0);
        }

        cout << mx << endl;
        p.clear();

    }

    return 0;
}
