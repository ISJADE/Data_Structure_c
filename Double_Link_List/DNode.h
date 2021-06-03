typedef struct Node{
    int data;
    struct Node *prior,*next;
} DNode, *DLinklist;