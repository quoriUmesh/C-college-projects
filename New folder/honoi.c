#include <stdio.h>

void hanoi(int n, char f, char m, char t){
    if(n==0) return;
    hanoi(n-1,f,t,m);
    printf("move disk from %c to %c\n",f,t);
    hanoi(n-1,m,f,t);
}

int main(){
    hanoi(3,'A','B','C');
}