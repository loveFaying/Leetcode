#include <bits/stdc++.h>
using namespace std;

void MyPrint(int val){
    cout << val << " ";
}

int main(){

    int arr[]= {4,10,11,30,69,70,96,100};
    int n = sizeof(arr)/sizeof(int);
    vector<int> vec(arr, arr+n);
    for_each(vec.begin(), vec.end(), MyPrint);

    return 0;
}