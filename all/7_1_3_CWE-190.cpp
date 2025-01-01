#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <stack>
#include <queue>
#include <list>
#include <sstream>
#include <map>
#include <set>
#include <bitset>

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

#define MAXN 100010
#define MAXM 100010
#define MAXS 100010
#define MAXE 100010

int n, m, s, e;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m >> s >> e;
    
    int a[MAXN], b[MAXN];
    
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    for(int i=0; i<m; i++) {
        cin >> b[i];
    }
    
    int ans = 0;
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i] == b[j]) {
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}