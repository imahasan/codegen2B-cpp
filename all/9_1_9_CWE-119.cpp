#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <stack>
#include <ctime>
#include <memory.h>
#include <ctime>
#include <fstream>
#include <assert.h>
#include <bitset>
#include <deque>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
