### main.cpp
- map + 贪心算法

### main2.cpp
- unordered_set + 贪心算法
- 时间复杂度：O(n)，其中 n 是数组candies 的长度。
- 空间复杂度：O(n)。哈希表需要O(n) 的空间。
- unordered_set  无序
- set 有序 
```C++
vector<int> vec{1,7,2,6,4};
unordered_set<int> uset(vec.begin(), vec.end());
for(auto val : uset)
    cout << val << " "; // 4 2 7 6 1 
cout << endl;
```