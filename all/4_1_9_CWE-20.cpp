#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <sstream>
#include <complex>
#include <bitset>

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)

using namespace std;

int main() {
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int ans=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i]==b[j])
                ans++;
    pf("%d\n",ans);
    return 0;
}