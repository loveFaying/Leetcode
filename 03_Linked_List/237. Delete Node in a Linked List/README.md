### main.cpp
4 1 5 9    delete 5
```
4 1 9 9
4 1 9
```
### main2.cpp
- 注意内存管理，释放待删除的节点
### main3.cpp
- 评论区中大佬的方法
- node = node->next;  与   *node = *(node->next); 的 区别
```C++
struct Node{
     int data;
     Node* next;
};

Node* node;

node = node->next; 
*node = *(node->next);
```
- 原版解释

The first code snippet, `node = node->next;` is a pointer assignment. That is, the address value that is currently in `node` will be replaced with the address that is in `node->next·.

The second snippet, `*node = *(node->next);`, dereferences the pointers, and copies the actual data of the structure that the RHS points to into the structure that the LHS points to. This will be equivalent to the following:
```
node->data = node->next->data;
node->next = node->next->next;
```
Note: In this second case, the address that `node` contains does not change; that is, it still points to the same location in memory, but the contents of that memory will be changed. In the first case, `node` will point to a different (probably) memory location, and the contents of the old location will be left untouched.
