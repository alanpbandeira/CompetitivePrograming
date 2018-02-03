#include <iostream>
#include <string>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    string s1;
    string s2;

    while(getline(cin, s1))
    {
        int max_l = 0;
        getline(cin, s2);
        int sim = -1;
        int curr_len = 0;

        for (int x = 0; x < s1.size(); x++)
        {
            for (int y = 0; y < s2.size(); y ++)
            {
                if (s2[y] == s1[x])
                {
                    if (curr_len == 0)
                    {
                        curr_len += 1;
                        sim = x;
                        break;
                    }
                    else if (x == sim + 1)
                    {
                        curr_len += 1;
                        sim = x;
                        break;
                    }
                    else
                    {
                        curr_len = 1;
                    }
                }
            }
            max_l = max(max_l, curr_len);
        }
        cout << max_l << endl;
    }
    return 0;
}

/*
 * C++ Program to Find Length of Longest Common Substring
 */
// #include<iostream>
// #include<cstring>
// using namespace std;
//
// // A utility function to find maximum of two integers
// int max(int a, int b)
// {
//     return (a > b)? a : b;
// }
//
// /* Returns length of longest common substring of X[0..m-1] and Y[0..n-1] */
// int LCSubStr(char *X, char *Y, int m, int n)
// {
//     int LCSuff[m + 1][n + 1];
//     int result = 0;
//     for (int i = 0; i <= m; i++)
//     {
//         for (int j=0; j<=n; j++)
//         {
//             if (i == 0 || j == 0)
//                 LCSuff[i][j] = 0;
//             else if (X[i-1] == Y[j-1])
//             {
//                 LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
//                 result = max(result, LCSuff[i][j]);
//             }
//             else LCSuff[i][j] = 0;
//         }
//     }
//     return result;
// }
//
// /*Main */
// int main()
// {
//     char X[] = "Sanfoundry";
//     char Y[] = "foundation";
//     int m = strlen(X);
//     int n = strlen(Y);
//     cout << "Length of Longest Common Substring is " << LCSubStr(X, Y, m, n);
//     return 0;
// }
