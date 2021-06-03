#include"Delete.cpp"

int length(LinkList L){
    LNode *p = L;
    int len = 0;
    while(p!=NULL){
        len++;
    }
    return len;
}