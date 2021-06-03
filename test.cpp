#include<cstdio>
#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#include<set>
#include<utility>
#include<map>
#include<algorithm>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10;i++){
        cout << rand()%10+90 << " ";
    }
    //system("pause");
    return 0;
}