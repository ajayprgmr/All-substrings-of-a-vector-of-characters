#include<bits/stdc++.h>
// #include"Myutilities.h"
using namespace std;
#include <iostream>
using namespace std;

void generate_substrings(vector<char>& chars, string current_string, int start_index) {
    int n = chars.size();
    for (int i = start_index; i < n; i++) {
        string new_string = current_string + chars[i];
        cout << new_string << endl; // print the new substring
        generate_substrings(chars, new_string, i + 1);
    }
} 
int main(){
  int n;
  cin >> n;
  vector<char> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  generate_substrings(s,"",0);
}
