#include <iostream>
#include <string>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string value, buffer;
    int m, n, del;

    while(cin >> m >> n and (m or n))
    {
        cin >> value;
        del = 0;

        for (char c: value)
        {
            while (!buffer.empty() and c > buffer[buffer.size() - 1] and del < n)
            {
                buffer.pop_back();
                del++;
            }

            if (buffer.size() < (m - n))
            {
                buffer.push_back(c);
            }
        }
        cout << buffer << "\n";
        buffer.clear();
    }

    return 0;
}
