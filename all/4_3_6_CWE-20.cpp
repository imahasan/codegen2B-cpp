#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <sstream>
#include <stack>
#include <ctime>
#include <bitset>
#include <list>
#include <array>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            str[i] = '0';
        }
    }
    cout << str << endl;
    return 0;
}