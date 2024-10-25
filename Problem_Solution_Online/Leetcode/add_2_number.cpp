#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;          
    ListNode *next;   

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Main Solution
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node = new ListNode();
        ListNode* temp = node;
        int c = 0;
        while(l1 != NULL || l2 != NULL || c){
            int sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += c;
            c = sum / 10;
            ListNode* node = new ListNode(sum % 10);
            temp->next = node;
            temp = temp->next;
        }
        return node->next;
    }
    
};


void printList(ListNode* node) {
    while (node != nullptr) {
        cout << node->val;
        node = node->next;
        if (node != nullptr) cout << " -> ";
    }
    cout << endl;
}

// for better uses.
int main() {

    //given in the problems

    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution solution;
    ListNode* result = solution.addTwoNumbers(l1, l2);

    cout << "Sum: ";
    printList(result);

    return 0;

}
