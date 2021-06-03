#include<iostream>

#define MaxSize 10
typedef struct{
    int data[MaxSize];
    int top;    //栈顶指针
}SqStack;

void InitStack(SqStack &s){
    s.top = -1;
}

bool IsEmpty(SqStack s){
    if(s.top==-1)
        return true;
    else
        return false;
}

bool push(SqStack &s,int x){
    if(s.top==MaxSize-1){
        return false;
    }
    s.top = s.top + 1;
    s.data[s.top] = x; //s.data[++s.top] = x;
    return true;
}

bool pop(SqStack &s){
    if(s.top==-1){
        return false;
    }
    s.top = s.top - 1;
    return true;
}

bool Gettop(SqStack &s,int &x){
    if(s.top==-1){
        return false;
    }
    x = s.data[s.top];
    return true;
}

void PrintStcak(SqStack s){
    if(s.top==-1){
        printf("栈为空\n");
    }else{
        for (int i = s.top; i > -1;i--){
            printf("|%d|\n", s.data[i]);
        }
    }
}

int main(){
    // SqStack s;
    // InitStack(s);
    // push(s, 5);
    // push(s, 6);
    // push(s, 7);
    // PrintStcak(s);
    // int a;
    // Gettop(s, a);
    // printf("%d",a);
}
