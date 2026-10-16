#include <bits/stdc++.h> 

typedef uint64_t ull;
typedef int64_t ll;

using namespace std;

int main(void) {
  ull n;
  cin >> n;
  cout << n;
  while (n != 1) {
    n = n % 2 == 0 ? n / 2 : 3 * n + 1;
    cout << " " << n;
  }
  cout << "\n";
  return 0;
}
