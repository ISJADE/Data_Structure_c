//#include"LNode.h"
#include"GetElem.cpp"

/*在p节点后插元素e*/
bool InserNextNode(LNode *p,int e){
    if(p==NULL){
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;        //顺序不可颠倒
    return true;
}

/*按序插入*/
bool ListInsert1(LinkList L,int i,int e){      
    if(i<1){
        return false;
    }
                /*if(i==1){
                    LNode *s = (LNode *)malloc(sizeof(LNode));
                    s->data = e;
                    s->next = L;
                    L = s;
                    return true;
                }   此为不带头节点，当插入为序为1时需单独考虑*/

    LNode *p = GetElem(L, i - 1);
    return InserNextNode(p, e);
}

/*在p节点前插s节点*/
bool InsertPriorNode(LNode *p,LNode *s){    
    if(p==NULL||s==NULL){
        return false;
    }
    s->next = p->next;
    p->next = s;            //s连到p之后
    int tempt = p->data;
    p->data = s->data;
    s->data = tempt;        //交互数据域部分
    return true;
}

