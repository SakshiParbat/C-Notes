#include <iostream>
using namespace std;
int strStr(string haystack, string needle);
if(haystack.empty() && needle.empty())return 0;
if(needle.empty())return 0;
int n = haystack.size(), m = needle.size();
if (n < m)return -1;
int i = 0, j = 0;
while (i < n && j < m) {
    if (haystack[i] == needle[j]) {
        i++;
        j++;
    } else {
        i = i - j + 1;
        j = 0;
    }
}
return (j == m) ? i - m : -1;
