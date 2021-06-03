#include"Init.cpp"

/*p结点后插入s结点*/
bool InsertNextDNode(DNode *p,DNode *s){
    if(p==NULL||s==NULL){
        return false;
    }
    s->next = p->next;
    if(p->next!=NULL){
        p->next->prior = s;
    }
    s->prior = p;
    p->next = s;
    return true;
}
