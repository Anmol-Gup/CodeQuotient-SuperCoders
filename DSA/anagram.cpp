#include <bits/stdc++.h>
using namespace std;

// Approach-1 (Sorting)
bool areAnagram(string str1, string str2) {
    int n1 = str1.length();
    int n2 = str2.length();

    if (n1 != n2)
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}

// Approach-2 (Count Characters)
bool areAnagram(char * str1, char * str2) {
  if (strlen(str1) != strlen(str2))
    return false;
    
  int count1[256] = { 0 };
  int count2[256] = { 0 };
  int i;

  for (i = 0; str1[i] && str2[i]; i++) {
    count1[str1[i]]++;
    count2[str2[i]]++;
  }

  for (i = 0; i < 256; i++)
    if (count1[i] != count2[i])
      return false;

  return true;
}

// Approach-3
bool areAnagram(char * str1, char * str2) {
    if (strlen(str1) != strlen(str2))
        return false;

    int count[256] = { 0 };
    int i;

    for (i = 0; str1[i] && str2[i]; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (i = 0; i < 256; i++)
        if (count[i])
            return false;
    return true;
}

int main() {
    string str1 = "LISTEN";
    string str2 = "SILENT";

    if (areAnagram(str1, str2))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
