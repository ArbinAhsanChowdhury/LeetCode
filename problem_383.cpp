#include <bits/stdc++.h>
using namespace std;
int main(){
        string ransomNote = "A", string magazine = "B";
        unordered_map<char, int> magaHash;
        for(char c : magazine){
            magaHash[c]++;
        }
        for(char c: ransomNote){
            if(magaHash[c] <= 0){
                return false;
            }
            magaHash[c]--;
        }
        return true;
    }
