#include <bits/stdc++.h>
using namespace std;

// https://leetcode-cn.com/problems/keyboard-row/
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;

        for(auto word: words){
            bool flag1 = true; 
            bool flag2 = true;
            bool flag3 = true;
            bool flag = false; // if word valid

            for(auto w: word){
                if( str1.find(w) == -1 && str1.find(tolower(w)) == -1 ){
                    flag1 = false;
                    break;
                }
            }
            if(flag1){
                res.push_back(word);
                flag = true;
            }

            for(auto w: word){
                if( flag == false &&  str2.find(w) == -1 && str2.find(tolower(w)) == -1 ){
                    flag2 = false;
                    break;
                }
            }
            if(flag2 && flag == false){
                res.push_back(word);
                flag = true;
            }

            for(auto w: word){
                if(flag == false && str3.find(w) == -1 && str3.find(tolower(w)) == -1 ){
                    flag3 = false;
                    break;
                }
            }
            if(flag3 && flag == false)
                res.push_back(word);

        }

        return res;
    }
private:
    string str1 = "qwertyuiop";
    string str2 = "asdfghjkl";
    string str3 = "zxcvbnm";
};

int main(){
    // string array[] = {"Hello","Alaska","Dad","Peace"};
    string array[] = {"omk"};
    // string array[] = {"adsdf","sfd"};
    int n = sizeof(array)/sizeof(string);
    vector<string> words(array, array+n); 
    vector<string> results = Solution().findWords(words);

    for(auto res: results)
        cout << res << " ";
    cout << endl;
    return 0;
}