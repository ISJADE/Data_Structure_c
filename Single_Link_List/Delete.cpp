#include"Insert.cpp"

/*按序删除*/
bool ListDelete1(LinkList L,int i,int &e){
    if(i<1){
        return false;
    }
    LNode *p = GetElem(L, i - 1);
    if(p==NULL){
        return false;
    }
    if(p->next==NULL){  //两种情况均不合法
        return false;
    }
    LNode *q = p->next;
    e = q->data;        //返回e
    p->next = q->next;
    free(q);
    return true;
}

/*删除指定节点*/
bool ListDelete2(LNode *p){    //注:此方法不能解决此节点为尾结点
    if(p==NULL){
        return false;
    }
    LNode *q = p->next;
    p->data = q->data;  //交换数据域
    p->next = q->next;
    free(q);
    return true;
}