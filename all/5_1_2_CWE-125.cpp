#include <iostream>
#include <string>
#include <cstdlib>
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
#include <list>
#include <bitset>
#include <utility>
#include <numeric>
#include <ctime>
#include <cassert>
#include <ctype.h>
#include <limits.h>
#include <string.h>

using namespace std;

#define print(Z,a,b) cout<<#Z<<" "<<a<<" "<<b<<endl;
#define scan(Z) cin>>Z;
#define sz(Z) int(Z.size())
#define ps(Z) cerr<<" "<<Z<<endl;
#define ms(Z) cerr<<" "<<Z.size()<<endl;

const int MAXN = 1000005;

int main() {
        int n, m;
        scan(n);
        scan(m);
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
                scan(v[i]);
        }
        int ans = 0;
        for (int i = 0; i < m; i++) {
                int x, y;
                scan(x);
                scan(y);
                ans += min(x, y);
        }
        cout << ans << endl;
        return 0;
}