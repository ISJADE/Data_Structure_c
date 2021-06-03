#include"DNode.h"
#include<iostream>
bool InitDLinklist(DLinklist &L){
    L = (DNode *)malloc(sizeof(DNode));
    if(L==NULL){
        return false;
    }
    L->prior = NULL;
    L->next = NULL;
    return true;
}