#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <climits>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <deque>
#include <vector>
#include <tuple>
#include <stdint.h> //uint32_t
#include <functional>
#include <bitset>
#include <unordered_map>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    for (; i < n; i++) {
        if (s[i] == '0') {
            break;
        }
    }
    if (i == n) {
        cout << "0" << endl;
        return 0;
    }
    int j = n - 1;
    for (; j >= 0; j--) {
        if (s[j] == '0') {
            break;
        }
    }
    if (j == -1) {
        cout << "0" << endl;
        return 0;
    }
    stringstream ss;
    ss << s.substr(i, j - i + 1);
    ss >> n;
    cout << n << endl;
    return 0;
}
