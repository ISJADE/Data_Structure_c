//#include<iostream>
#include"Length.cpp"

/*尾插法(带头节点)*/
LinkList List_TailInstert(){
    LinkList L=(LNode*)malloc(sizeof(LNode));
    LNode *s, *r=L;   //r为尾指针
    int x;
    scanf("%d", &x);
    while(x!=-1){
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}

/*尾插法(不带头节点)*/
LinkList List_TailInstert2(){
    int x;
    LinkList L=(LNode*)malloc(sizeof(LNode));
    scanf("%d", &x);
    L->data = x;
    LNode *r=L, *s;
    scanf("%d", &x);
    while(x!=-1){
        s=(LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}

/*头插法(带头结点)*/
LinkList List_HeadInsert(){
    LinkList L=(LNode*)malloc(sizeof(LNode));
    L->next=NULL;   //尾部必须置空
    int x;
    LNode *s;
    scanf("%d",&x);
    while(x!=-1){
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);
    }
    return L;
}
/*头插法(不带头结点)*/
LinkList List_HeadInsert2(){
    LinkList L=(LNode*)malloc(sizeof(LNode));
    int x;
    scanf("%d",&x);
    L->data=x;
    L->next=NULL;
    LNode *s;
    scanf("%d",&x);
    while(x!=-1){
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        s->next=L;
        L=s;
        scanf("%d",&x);
    }
    return L;
}

/*带头结点的打印链表*/
bool List_Print(LinkList L){
    if(L==NULL||L->next==NULL){
        return false;
    }
    LNode *p = L->next;
    while(p!=NULL){
        printf("|%d|->", p->data);
        p = p->next;
    }
    return true;
}

/*不带头节点的打印链表*/
bool List_Print2(LinkList L){
    if(L==NULL){
        return false;
    }
    LNode *p = L;
    while(p!=NULL){
        printf("|%d|->", p->data);
        p = p->next;
    }
    return true;
}

int main(){
    LinkList L = List_HeadInsert2();
    List_Print2(L);
    return 0;
}