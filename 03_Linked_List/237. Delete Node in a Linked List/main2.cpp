#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

//https://leetcode-cn.com/problems/delete-node-in-a-linked-list/
//Time:O(1)
//Space:O(1)
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        node->val = node->next->val;
        ListNode* deleteNode = node->next;
        node->next = node->next->next; 
        delete deleteNode;
    }
};

int main(){

    return 0;
}