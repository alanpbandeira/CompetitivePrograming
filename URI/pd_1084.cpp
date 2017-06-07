#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void m_sum(string v, int k, vector<string> &s)
{
    string tmp;
    vector<string>::iterator it;


    if (v.size() == k)
    {
        it = find(s.begin(), s.end(), v);

        if (it == s.end())
        {
            s.push_back(v);
        }
    }
    else
    {
        for (int j = 0; j < v.size(); j++)
        {
            copy(v.begin(), v.end(), back_inserter(tmp));
            tmp.erase(tmp.begin()+j);
            m_sum(tmp, k, s);
        }
    }
}


int main()
{
    vector<int> v_input;
    vector<string> s;
    vector<int> r;
    int n;
    int m;

    while (cin >> n)
    {
        v_input.push_back(n);
    }

    // for (i = 0; i < v_input.size(), i+=3)
    // {
    m_sum(to_string(v_input[(2)]), (v_input[0] - v_input[1]), s);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    // empty s afterwards
    // }

    return 0;
}
