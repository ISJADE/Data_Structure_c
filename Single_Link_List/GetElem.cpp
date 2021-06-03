#include"init.cpp"

/*按位查找*/
LNode *GetElem(LinkList L,int i){
    if(i<0){
        return NULL;
    }
    LNode *p;   //当前扫描到的节点
    int j = 0;  //当前p指向的是第几个节点
    p = L;
    while(p!=NULL&&j<i){
        p = p->next;
        j++;
    }
    return p;
}

/*按值查找*/
LNode *LocateElemp(LinkList L,int e){
    LNode *p = L->next;
    while(p!=NULL&&p->data!=e){
        p = p->next;
    }
    return p;
}