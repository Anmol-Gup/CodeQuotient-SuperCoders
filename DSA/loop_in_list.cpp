// Approach-1 (Hashing)
Node* findLoop(Node* head){
    unordered_set<Node*> set;
    Node* curr = head;
    while (curr != NULL)
    {
        if (set.find(curr) != set.end())
            return curr;
 
        set.insert(curr);
        curr = curr->next;
    }
    return NULL;
}

// Approach-2 (Two Pointers)
Node* findLoop(Node* head)
{
    if (head == NULL)
       return NULL;
   Node *slow = head, *fast = head;
 
   slow = slow->next;
   if (fast && fast->next)
       fast = fast->next->next;
 
   while (fast != NULL && fast->next != NULL) {
       if (slow == fast)
           break;
       slow = slow->next;
       fast = fast->next->next;
   }
   if (fast == NULL || fast->next == NULL)
       return NULL;
   slow = head;
   while (slow != fast) {
       slow = slow->next;
       fast = fast->next;
   }
   return slow;
}
