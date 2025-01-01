#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <climits>
#include <cassert>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <bitset>
#include <algorithm>
#include <utility>
#include <sstream>
#include <iostream>
#include <fstream>
#include <functional>
#include <ctime>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstddef>
#include <cstdint>
#include <cfenv>
#include <csetjmp>
#include <cstdarg>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    for (int i = 0; i < input.size(); i++) {
        if (isalpha(input[i])) {
            cout << input[i];
        }
    }
    return 0;
}