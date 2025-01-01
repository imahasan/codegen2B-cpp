#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <sstream>
#include <iterator>
#include <utility>
#include <numeric>
#include <iomanip>
#include <ctime>
#include <cassert>
#include <ctype.h>
#include <limits>
#include <bitset>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        int max_profit1 = 0;
        for (int i = 0; i < n; i++) {
            max_profit1 = max(max_profit1, max_profit(prices, i));
        }
        return max_profit1;
    }
    
    int max_profit(vector<int>& prices, int i) {
        int max_profit = 0;
        if (i == 0) {
            return 0;
        }
        int j = i - 1;
        while (j >= 0 && prices[j] > prices[i]) {
            max_profit = max(max_profit, prices[j] - prices[i]);
            j--;
        }
        return max_profit;
    }
};

int main() {
    Solution s;
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << s.maxProfit(prices) << endl;
    return 0;
}