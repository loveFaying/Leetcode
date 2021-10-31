### main.cpp
```
自己写的方法，主要利用了string.find\(\) 以及 tolower()函数
flag: 判断当前word是否已经放入res中
flag1-3: 判断当前word是否满足条件
```
- find
```C++
string str1;
int pos = str1.find("de");
if(pos == -1)
	cout << "未找到" << endl;
else
	cout << pos << endl;
```
- tolower
```C++
cout << char(tolower('A')) << endl; // a
cout << tolower('a') << endl; // 97
```

### main2.cpp
```
大体思路：
为每一个英文字母标记其对应键盘上的行号，然后检测字符串中所有字符对应的行号是否相同。
先预处理计算出每个字符对应的行号 rowIdx
遍历字符串时，统一将大写字母转化为小写字母方便计算 tolower

时间复杂度：O(L)，其中 L 表示 words 中所有字符串的长度之和。
空间复杂度：O(C)，其中 C 表示英文字母的个数，在本题中英文字母的个数为 26。注意返回值不计入空间复杂度。
```
- emplace_back 与 push_back
```C++
vector<string> res;
res.push_back(word);
res.emplace_back(word);
```
简而言之，emplace_back()是C11标准中的函数，用法和功能与push_back一样，执行效率比push_back高。
