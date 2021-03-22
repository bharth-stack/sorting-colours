#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *st;

};
void create(struct stack *S)
{
    S->top=-1;
    printf("Enter the size ");
    scanf("%d",&S->size);
    S->st=(int *)malloc(S->size*(sizeof (int)));
}
void insert (struct stack *S){

        scanf("%d",&S->st[++S->top]);



}
void display(struct stack S)
{
    while(S.top!=-1)
    {
        printf("%d",S.st[S.top--]);
    }


}
void isfull(struct stack S)
{
    if(S.top==S.size-1)
    {
        printf("Stack is full");
    }
    else if(S.top >S.size)
    {
        printf("Stack is overflow");
    }
    else{
        printf(" Stack is not full");
    }
}

int main()
{
    struct stack S;
   create(&S);
   insert(&S);
   insert(&S);
   display(S);
   isfull(S);


}
