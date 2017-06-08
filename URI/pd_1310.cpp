#include <iostream>
#include <vector>

using namespace std;

vector<int> max_crossing_subarray(vector<int> vec, int low, int mid, int high)
{
    int max_right, max_left, total = 0;
    int left_sum = -9999;
    int right_sum = -9999;
    vector<int> results;

    for (int i = mid; i >= low; i--)
    {
        total += vec[i];
        if (total > left_sum)
        {
            left_sum = total;
            max_left = i;
        }
    }

    total = 0;

    for (int i = mid; i <= high; i++)
    {
        total += vec[i];
        if (total > right_sum)
        {
            right_sum = total;
            max_right = i;
        }
    }

    results.push_back(max_left);
    results.push_back(max_right);
    results.push_back((left_sum + right_sum));

    return results;
}

vector<int> find_maximun_subarray(vector<int> vec, int low, int high)
{
    vector<int> results, left_sub, right_sub, mid_sub;
    int mid;

    if (high == low)
    {
        results.push_back(low);
        results.push_back(high);
        results.push_back(vec[low]);
    }
    else
    {
        mid = (low + high) / 2;

        left_sub = find_maximun_subarray(vec, low, mid);
        right_sub = find_maximun_subarray(vec, (mid+1), high);
        mid_sub = max_crossing_subarray(vec, low, mid, high);

        if (left_sub[2] > right_sub[2] and left_sub[2] > mid_sub[2])
        {
            results = left_sub;
        }
        else if(right_sub[2] > left_sub[2] and right_sub[2] > mid_sub[2])
        {
            results = right_sub;
        }
        else
        {
            results = mid_sub;
        }
    }

    return results;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    // d == days
    // c == cost
    // p == profit

    int d, c, aux;
    vector<int> p, r;

    while (cin >> d)
    {
        cin >> c;

        c = c * d;

        for (int i = 0; i < d; i++)
        {
            cin >> aux;
            p.push_back(aux);
        }

        r = find_maximun_subarray(p, 0, (p.size()-1));

        if (r[2] > c)
        {
            cout << (r[2] - c) << endl;
        }
        else
        {
            cout << 0 << endl;
        }

        p.clear();

    }

    return 0;
}
