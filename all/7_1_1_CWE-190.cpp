#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <ctime>
#include <cctype>
#include <cassert>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <complex>

#define D(x) cout << #x << " = " << (x) << endl;
#define REP(i,a,n) for(int i=(a);i<(int)(n);++i)
#define FOREACH(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();++it)
#define ALL(v) (v).begin(), (v).end()

using namespace std;

typedef long long int64;

const int INF = (int)(1e9);
const int64 INFLL = (int64)(1e18);
const double EPS = 1e-13;

const int MAXN = 1000005;

int n, m, k;
int a[MAXN];
int b[MAXN];
int c[MAXN];

int main()
{
    scanf("%d%d%d", &n, &m, &k);
    REP(i, 0, m)
    {
        scanf("%d%d", &a[i], &b[i]);
    }
    REP(i, 0, k)
    {
        scanf("%d", &c[i]);
    }
    int ans = 0;
    REP(i, 0, m)
    {
        if (c[i] == a[i] + b[i])
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}