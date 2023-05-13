#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int strStr(string haystack, string needle) {
    int _size_n = needle.size();
    int _size_h = haystack.size();

    for (size_t i = 0; i < _size_h; i++) {
      if (haystack[i] == needle[0]) {
        if (haystack.compare(i, _size_n, needle) == 0) {
          return i;
        }
      }
        }
    return -1;
  }
};