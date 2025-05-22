#include<stdio.h>
void numbers(int x){
    if(x==0) return ;
     printf("%d ",x);
     numbers(x-1);
}
void numbersdesc(int x){
    if(x==0) return ;
     numbers(x-1);
     printf("%d ",x);
}
void evennum(int n){
    if(n>10) return;
    printf("%d",n);
    evennum(n+2);
}
void even(int x,int y){
    if(x>y) return;
    printf("%d",x);
    even(x+2,y);
}

int countdigit(int x);
int c=0;
while(x>0){
    c++;
    x/=10;
}
return c ;
int  main()
{
    numbersdesc(10);
    printf("%d ",x);
}
n=10;
int=5;
sum=0;
while(n!=0){
    sum+=n;
    n--;
}
printf("%d",sum);
int sum(int n){
    if(n==0) return 0;
    else return n+sum(n-1);
}
int main(){
    int x=sum(4);
    printf("%d",x);
}