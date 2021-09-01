#include<stdio.h>
#define SIZE 10
int ar[SIZE];
int top1=-1;
int top2=SIZE;

void push_stack1(int data);
void push_stack2(int data);
void pop_stack1();
void pop_stack2();
void print_stack1();
void print_stack2();

int main()
    {
      int ar[SIZE],n,i=0,l=0;
      int j;
      printf("We can push a total of 10 values\n");
      
      //Number of elements pushed in stack 1 is 6
      //Number of elements pushed in stack 2 is 4
      for(j=1;j<=6;++j)
      {
      	printf("Enter a value in stack 1:");
      	scanf("%d",&n);
        push_stack1(n);
        printf("Value Pushed in Stack 1 is %d\n",n);
      }
      
      for(j=1;j<=4;++j)
      {
      	printf("Enter a value in stack 2:");
      	scanf("%d",&n);
        push_stack2(n);
        printf("Value Pushed in Stack 2 is %d\n",n);
      }
      
      //Print Both Stacks
      printf("\nStack 1:");
      print_stack1();
      printf("Stack 2:");
      print_stack2();
      
      //Pushing on Stack Full
      printf("\nPushing Value in Stack 1 is %d\n",11);
      push_stack1(11);
      
      //Popping All Elements From Stack 1
      while(l<=6)
      {
        pop_stack1();
        l++;
      }
      while(i<=4)
      {
        pop_stack2();
        i++;
      }
      return 0;
    }
    
/********************************** START FUNCTION ***********************************************/
/********************************** START FUNCTION ***********************************************/
/********************************** START FUNCTION ***********************************************/

//Functions to push data
void push_stack1(int data)
    {
      if(top1<top2-1)
      {
        ar[++top1]=data;
      }
      else
      {
        printf("Stack Full! Cannot Push\n");
      }
    }
void push_stack2(int data)
    {
      if(top1<top2-1)
      {
        ar[--top2]=data;
      }
      else
      {
        printf("Stack Full! Cannot Push\n");
      }
    }
    //Functions to pop data
void pop_stack1()
    {
      if(top1>=0)
      {
        int popped_value=ar[top1--];
        printf("%d is being popped from Stack 1\n",popped_value);
      }
      else
      {
        printf("Stack Empty! Cannot Pop\n");
      }
    }
void pop_stack2()
    {
      if(top2<SIZE)
      {
        int popped_value=ar[top2++];
        printf("%d is being popped from Stack 2\n",popped_value);
      }
      else
      {
        printf("Stack Empty! Cannot Pop\n");
      }
    }
//Functions to Print Stack 1 and Stack 2
void print_stack1()
    {
      int j;
      for(j=top1;j>=0;--j)
      {
        printf("%d ",ar[j]);
      }
      printf("\n");
    }
void print_stack2()
    {
      int j;
      for(j=top2;j<SIZE;++j)
      {
        printf("%d ",ar[j]);
      }
      printf("\n");
    }
