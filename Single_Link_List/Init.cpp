#include"LNode.h"
#include<iostream>
bool InitList1(LinkList &L){    //无头结点
    L = NULL;
    return true;    
}
bool InitList(LinkList &L){
    L = (LNode *)malloc(sizeof(LNode));
    if(L==NULL){
        return false;   //内存不足
    }
    L->next = NULL;
    return true;
}
