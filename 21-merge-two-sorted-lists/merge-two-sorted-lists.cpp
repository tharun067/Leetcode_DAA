#include <iostream>
#include <vector>
  // Include the ListNode header
using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);  // Create a dummy node to start the merged list
        ListNode* current = dummy;  // Pointer to build the new list

        // Traverse both lists
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                current->next = list1;  // Attach list1 node to merged list
                list1 = list1->next;     // Move the list1 pointer forward
            } else {
                current->next = list2;  // Attach list2 node to merged list
                list2 = list2->next;     // Move the list2 pointer forward
            }
            current = current->next;  // Move the current pointer forward in the merged list
        }

        // If there are remaining nodes in list1 or list2, attach them
        if (list1 != nullptr) {
            current->next = list1;
        } else if (list2 != nullptr) {
            current->next = list2;
        }

        return dummy->next;  // Return the merged list starting from the first node
    }
};