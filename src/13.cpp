// C++ Program to check if two strings are anagrams of each other
#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string str1, string str2) {
    // Sort both the strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare the sorted strings
    return (str1 == str2);
}

// Driver Code
int main() {
    string str1 = "listen";
    string str2 = "silent";

    if (areAnagrams(str1, str2))
        cout << "The two strings are anagrams of each other.";
    else
        cout << "The two strings are not anagrams of each other.";

    return 0;
}
