#include <stdio.h>

int nextSyr(int u){
    if(u%2==0){
        return u/2;
    }else{
        return 3*u+1;
    }
}

int volSyr(){
    scanf( "%d", &u);
    c=0;
    while(u!=1){
        u=nextSyr(u);
        c++;
    }
    return c;
}

int main(){
    printf("%d",volSyr());
}