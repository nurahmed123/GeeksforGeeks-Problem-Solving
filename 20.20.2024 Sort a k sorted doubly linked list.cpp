


class Solution {
public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        if (!head) return head;

        // Min-heap to store k+1 elements
        priority_queue<DLLNode*, vector<DLLNode*>, function<bool(DLLNode*, DLLNode*)>> minHeap([](DLLNode* a, DLLNode* b) {
            return a->data > b->data;
        });

        // Initialize the heap with the first k+1 elements
        DLLNode* newHead = nullptr, *last = nullptr;
        DLLNode* curr = head;

        for (int i = 0; curr != nullptr && i <= k; ++i) {
            minHeap.push(curr);
            curr = curr->next;
        }

        // Iterate over the list, popping from the heap and rebuilding the list
        while (!minHeap.empty()) {
            DLLNode* minNode = minHeap.top();
            minHeap.pop();

            // If this is the first node, set it as the new head
            if (newHead == nullptr) {
                newHead = minNode;
                last = newHead;
            } else {
                // Otherwise, link the current node to the sorted list
                last->next = minNode;
                minNode->prev = last;
                last = minNode;
            }

            // Add the next element to the heap
            if (curr != nullptr) {
                minHeap.push(curr);
                curr = curr->next;
            }
        }

        // Set the next of the last node to NULL
        last->next = nullptr;

        return newHead;
    }
};
