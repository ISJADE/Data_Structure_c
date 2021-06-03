#include"Insert.cpp"

/*删除p结点的后继结点*/
bool DeletenextDNode(DNode *p){
    if(p==NULL){
        return false;
    }
    DNode *q = p->next;
    if(q==NULL){
        return false;
    }
    p->next = q->next;
    if(q->next!=NULL){
        q->next->prior = p;
    }
    free(q);
    return true;
}
/*销毁链表*/
void DestoryList(DLinklist L){
    while(L->next!=NULL){
        DeletenextDNode(L);
    }
    free(L);
    L = NULL;
}