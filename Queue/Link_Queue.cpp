#include<iostream>

typedef struct Node{    //链式队列结点
    int data;
    struct Node *next;
} LNode;

typedef struct{         //链式队列
    LNode *front,*rear;
}LinkQueue;

//带头节点
bool InitQueue(LinkQueue &Q){
    Q.front = Q.rear = (LNode *)malloc(sizeof(LNode));
    Q.front->next = NULL;
    return true;
}

bool IsEmpty(LinkQueue Q){
    if(Q.front==Q.rear){
        return true;
    }else{
        return false;
    }
}

//不带头节点
bool InitQueue1(LinkQueue &Q){
    Q.front = NULL;
    Q.rear = NULL;
    return true;
}

bool IsEmpty1(LinkQueue Q){
    if(Q.front==NULL){
        return true;
    }else{
        return false;
    }
}

//带头结点进队
bool EnQueue(LinkQueue &Q,int x){
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = x;
    s->next = NULL;
    Q.rear->next = s;
    Q.rear = s;
    return true;
}

//不带头节点进队
bool EnQueue1(LinkQueue &Q,int x){
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = x;
    s->next = NULL;
    if(Q.rear==NULL){
        Q.front = s;
        Q.rear = s;
    }else{
        Q.rear->next = s;
        Q.rear = s;
    }
    return true;
}

//带头节点出队
bool DeQueue(LinkQueue &Q){
    if(Q.front==Q.rear){
        return false;
    }
    LNode *p = Q.front->next;
    Q.front->next = p->next;
    if(Q.rear==p){               //最后一个节点特殊处理
        Q.rear = Q.front;
    }
    free(p);
    return true;
}

//不带头节点出队
bool DeQueue1(LinkQueue &Q){
    if(Q.front==NULL){
        return false;
    }
    LNode *p = Q.front;
    Q.front = p->next;
    if(p==Q.rear){              //同样的最后一个节点
        Q.front = NULL;
        Q.rear = NULL;
    }
    free(p);
    return true;
}

//带头节点打印
void PrintQueue(LinkQueue Q){
    LNode *p = Q.front->next;
    if(p==NULL){
        printf("队列为空\n");
        return;
    }else{
        while(p!=NULL){
            printf("|%d| ", p->data);
            p = p->next;
        }
        printf("\n");
        return;
    }
}

int main(){
    LinkQueue Q;
    InitQueue(Q);
    PrintQueue(Q);
    EnQueue(Q, 2);
    EnQueue(Q, 3);
    EnQueue(Q, 4);
    PrintQueue(Q);
    DeQueue(Q);
    PrintQueue(Q);
}
