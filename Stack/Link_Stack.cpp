#include<iostream>
typedef struct LinkNode{
    int data;
    struct LinkNode *next;
} *LiStack;

void InitStack(LiStack &shead){     
    shead = NULL;                   //不带头指针
}

bool isEmpty(LiStack shead){        
    if(shead==NULL)                 
        return true;
    else
        return false;
}

bool push(LiStack &shead,int x){                    
    LiStack p = (LiStack)malloc(sizeof(LinkNode));  //头插法
    p->data = x;
    p->next = shead;
    shead = p;
    return true;
}

bool pop(LiStack &shead){
    if(shead==NULL){                //栈空
        return false;
    }
    LiStack p = shead;
    shead = p->next;
    free(p);
    return true;
}

LiStack GetTop(LiStack shead){
    return shead;
}


void PrintStack(LiStack shead){
    if(isEmpty(shead)){
        printf("栈为空\n");
        return;
    }
    LiStack p = shead;
    while (p != NULL){
        printf("|%d|\n", p->data);
        p = p->next;
    }
    return;
}


int main(){
    LiStack shead;
    InitStack(shead);
    push(shead, 5);
    push(shead, 6);
    push(shead, 7);
    if(isEmpty(shead))
        printf("栈为空\n");
    else
        printf("栈不为空\n");
    PrintStack(shead);
    pop(shead);
    printf("弹出栈顶元素后\n");
    PrintStack(shead);
    LiStack p = GetTop(shead);
    printf("栈顶元素为:|%d|\n", p->data);
}
