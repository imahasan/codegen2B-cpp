#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
#include <iterator>
#include <utility>
#include <list>
#include <bitset>
#include <iomanip>
#include <functional>
#include <numeric>
#include <limits>
#include <assert.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            cout << ' ';
        } else {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}