#include<bits/stdc++.h>
#include"Myutilities.h"
using namespace std;
#include <iostream>
using namespace std;

void generate_substrings(vector<char> c) {
  for (int i = 0; i < c.size(); i++) {
    for (int j = i; j < c.size(); j++) {
    //   int len = j - i + 1;
      for (int k = i; k <= j; k++) {
        cout << c[k];
      }
      cout <<endl;
    }
  }
}

int main() {
  int n;
  cin >> n;
  std::vector<char> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  generate_substrings(s);
  return 0;
}
