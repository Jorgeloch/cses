#include <bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;

typedef struct {
  ll start;
  ll finish;
} range;

using namespace std;

int main (void) {
  ll t;
  cin >> t;

  range ranges[t];
  ll contains[t] = {0};
  ll is_contained[t] = {0};

  for (ll i = 0; i < t; i++) {
    cin >> ranges[i].start >> ranges[i].finish;
  }

  for (ll i = 0; i < t - 1; i++) {
    for (ll j = i + 1; j < t; j++) {
      if (ranges[i].start <= ranges[j].start) {
        if (ranges[i].finish >= ranges[j].finish) {
          contains[i]++;
          is_contained[j]++;
        }
      }
      else if (ranges[i].start >= ranges[j].start){
        if (ranges[i].finish <= ranges[j].finish) {
          is_contained[i]++;
          contains[j]++;
        }
      }
    }
  }

  for (ll i = 0; i < t; i++) {
    cout << contains[i] << " ";
  }
  cout << endl;

  for (ll i = 0; i < t; i++) {
    cout << is_contained[i] << " ";
  }
  cout << endl;

  return 0;
}
