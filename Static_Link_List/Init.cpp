#include<iostream>

#define MaxSize 50
typedef struct {
    int data;
    int next;
}SLinkList[MaxSize];

bool InitList(SLinkList &a){
    a[0].next = -1;     //表示头结点指向空
    for (int i = 1; i <= MaxSize;i++){
        a[i].next = -2; //表示可用的空结点
    }
    return true;
}

/*其他操作类似，待完善*/