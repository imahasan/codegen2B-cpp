#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <limits>
#include <cmath>
#include <cctype>
#include <cassert>

using namespace std;

typedef long long ll;

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
      scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int ans = 0;
    for(int i=0; i<n; i++) {
      ans += a[i];
    }
    printf("%d\n", ans);
  }
  return 0;
}
