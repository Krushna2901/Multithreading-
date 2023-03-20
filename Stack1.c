#include<stdio.h>
#include<stdlib.h>
#define size 5
int top =-1;
int p[size];

void Push()
{
    int n=0;
    if(top==size-1)
    {
        printf("\nSize of stack is full");
    }
    else{
        printf("\nInput a element :: ");
        scanf("%d",&n);
        top++;
        p[top]=n;
    }
}
void Pop()
{
    if(top==-1)
    {
        printf("\nEmpty stack ");
    }
    top--;
}
void Display()
{
    if(top==-1)
    {
        printf("\nunderflow");
    }
    for(int i= top-1;i>=0;i--)
    {
        printf("%d\t",p[i]);
    }
}

int main()
{
    int choice =0;
    
    while(1)
    {
        printf("\n1 : Insert element :: ");
        printf("\n2 : Delete element :: ");
        printf("\n3 : Display element :: ");
        printf("\n4 : exit.");
        printf("\nEnter your choice :: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(0);
            break;
        
        default:
            break;
        }
    }
    return 0;
}