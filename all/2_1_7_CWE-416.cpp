#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
        string s;
        getline(cin, s);
        int n = s.size();
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
                a[i] = s[i] - '0';
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
                cout << a[i];
        }
        delete[] a;
        return 0;
}