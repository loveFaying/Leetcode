#include <bits/stdc++.h>
using namespace std;

void MyPrint(int val){
    cout << val << " ";
}

int main(){
    vector<int> vec{1,7,2,6,4};
    unordered_set<int> uset(vec.begin(), vec.end());
    for(auto val : uset)
        cout << val << " "; // 4 2 7 6 1 
    cout << endl;

    return 0;
}