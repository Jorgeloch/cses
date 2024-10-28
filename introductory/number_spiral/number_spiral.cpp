#include<bits/stdc++.h>

typedef uint64_t ull;
typedef int64_t ll;

using namespace std;

ll count_asc(ll x, ll y) {
  return (x * x) + y - 1;
}

ll count_desc(ll x, ll y) {
  return (x * x) - y + 1;
}

int main (void) {
  ll t;
  cin >> t;

  while (t--) {
    ll row, column;
    cin >> row >> column;

    ll result = 0;

    if (row >= column) {
      if (row % 2) result = count_asc(row - 1, column + 1);
      else result = count_desc(row, column);
    }
    else {
      if (column % 2) result = count_desc(column, row);
      else result = count_asc(column - 1, row + 1);
    }

    cout << result << endl;
  }

  return 0;
}
