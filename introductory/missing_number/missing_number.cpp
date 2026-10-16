#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef uint64_t ull;
typedef int64_t ll;

using namespace std;

int main(void) { _
  ull n;
  cin >> n;
  ull result = n;

  for (ull i = 0; i < n - 1; i++) {
    ull temp;
    cin >> temp;
    result ^= temp;
    result ^= i + 1;
  }

  cout << result << endl;

  return 0;
}
