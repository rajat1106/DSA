/*You are given two strings s and t.
String t is generated by random shuffling string s and then 
add one more letter at a random position.
Return the letter that was added to t.*/

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

class Solution {
private:

public:
    char findTheDifference(string s, string t) {
    int n1 = s.length();
    int n2 = t.length();
    int i, j;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (s[i] == t[j]) {
                break;
            }
        }
        if (j == n2) {
            return s[i];
        }
    }
    return (t[n2 - 1]);
    }
};


int main(){
    string a = "abcd"
    string b = "abcde"
    Solution sol(a,b);
    cout<<sol.findTheDifference();
}
