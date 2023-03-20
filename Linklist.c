#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node  *next;
}*p,*tmp,*tmp1;

void Insert_Begining(int no)
{
    tmp = p;
    tmp1 = (struct node *)malloc(sizeof(struct node));
    tmp1->data = no;
    tmp1->next = p;
    p = tmp1;
}
void Insert_end(int no)
{
    tmp = p;
    tmp1 = (struct node *)malloc(sizeof(struct node));
    tmp1->data = no;
    tmp1 ->next = NULL;
    if(p == NULL)
    {
        p = tmp1;
    }
    else{
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = tmp1;
    }
}
void Delete_beg()
{
    tmp = p;
    if(p==NULL)
    {
        printf("\nNo element to be deleted");
    }
    else{
        p = tmp->next;
    }

}
void Delete_end()
{
    tmp = p;
    struct node *prev;
    if(p==NULL)
    {
        printf("\nNo element to be deleted");
    }
    else if(p->next == NULL){
        p = NULL;
    }
    else{
        while(tmp->next != NULL)
        {
            prev = tmp;
            tmp = tmp->next;
        }
        prev->next =NULL;
    }
    
}
void Display()
{
    tmp = p;
    while(tmp != NULL)
    {
        printf("%d ->\t",tmp->data);
        tmp = tmp->next;
    }
}
int main()
{
  int val,n;
  p=NULL;
  while(1)
	{printf("\n************************* MENU ************************");
	 printf("\n1.INSERT AT END");
	 printf("\n2.INSERT AT BEG");
	 printf("\n3.DELETE FROM BEG");
	 printf("\n4.DELETE FROM END");
	 printf("\n5.DISPLAY");
	 printf("\n6.EXIT");
	 printf("\nenter ur choice : ");
	 scanf("%d",&n);
	 switch(n)
		{case 1: printf("\nenter the value ");
			 scanf("%d",&val);
			Insert_end(val);
			 break;
		 case 2: printf("\nenter the value");
			 scanf("%d",&val);
			 Insert_Begining(val);
			 break;
		 case 3: 
			 Delete_beg();
			 break;
		 case 4: 
			 Delete_end();
			 break;
		 case 5: Display();
		 		 break;
		 case 6: exit(0);
		 		 break;
		 default: printf("\n Wrong Choice!");
		 		  break;
		}
	 printf("\n do u want to cont... ");
	};
    return 0;
}