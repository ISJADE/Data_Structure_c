#include<cstdio>
#define Maxsize 10

typedef struct {
    int data[Maxsize];
    int front, rear;        //rear队尾指针指向下一个入队的位置
}SqQueue;

void InitQueue(SqQueue &Q){
    Q.front = Q.rear = 0;
}

bool IsEmpty(SqQueue Q){                //此为方案1
    if(Q.front==Q.rear){                //方案2：增加size或者tag变量
        return true;
    }else{
        return false;
    }
}

bool EnQueue(SqQueue &Q,int x){
    if((Q.rear+1)%Maxsize==Q.front){    //循环队列判满条件
        return false;
    }
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % Maxsize;    //循环队列
    return true;
}

bool DeQueue(SqQueue &Q){
    if(Q.rear==Q.front){                //队空返回false
        return false;
    }
    Q.front = (Q.front + 1) % Maxsize;  //对头指针后移
    return true;
}

int GetHead(SqQueue Q){
    return Q.data[Q.front];
}

void PrintQueue(SqQueue Q){
    if(Q.rear==Q.front){
        printf("队列为空\n");
        return;
    }
    while (Q.rear!=Q.front){
        printf("|%d| ", Q.data[Q.front]);
        Q.front = (Q.front + 1) % Maxsize;
    }
    printf("\n");
    return;
}

int main(){
    SqQueue Q;
    InitQueue(Q);
    PrintQueue(Q);
    EnQueue(Q, 2);
    EnQueue(Q, 3);
    EnQueue(Q, 4);
    PrintQueue(Q);
    DeQueue(Q);
    printf("此时队首元素为：%d\n", GetHead(Q));
    PrintQueue(Q);
}
