#include <stdio.h> 
struct s_node 
{ 
 int data; 
 struct s_node *next; 
}; 
typedef struct s_node s_list; 
typedef s_list *link; 
link operator=NULL; 
link operand=NULL; 

link push(link stack,int value) 
{ 
 link newnode; 

 newnode=(link) malloc(sizeof(s_list)); 
 if(!newnode) 
 { 
 printf("\nMemory allocation failure!!!"); 
 return NULL; 
 } 
 newnode->data=value; 
 newnode->next=stack; 
 stack=newnode; 
 return stack; 
} 

link pop(link stack,int *value) 
{ 
 link top; 
 if(stack !=NULL) 
 { 
  top=stack; 
  stack=stack->next; 
 *value=top->data; 
 free(top); 
 return stack; 
 } 
 else 
 *value=-1; 
} 

int empty(link stack) 
{ 
 if(stack==NULL) 
 return 1; 
 else 
 return 0; 
} 

int is_operator(char operator) 
{ 
 switch (operator) 
 { 
  case '+': case '-': case '*': case '/': return 1; 
  default:return 0; 
 } 
} 
int priority(char operator) 
{ 
 switch(operator) 
 { 
  case '+': case '-' : return 1; 
  case '*': case '/' : return 2; 
  default: return 0; 
 } 
} 
int two_result(int operator,int operand1,int operand2) 
{ 
 switch(operator) 
 { 
  case '+':return(operand2+operand1); 
  case '-':return(operand2-operand1); 
  case '*':return(operand2*operand1); 
  case '/':return(operand2/operand1); 
 } 
} 
void main() 
{ 
 char expression[50]; 
 int position=0; 
 int op=0; 
 int operand1=0; 
 int operand2=0; 
 int evaluate=0; 
 printf("\nPlease input the inorder expression:"); 
 gets(expression); 
 while(expression[position]!='\0'&&expression[position]!='\n') 
 { 
  if(is_operator(expression[position])) 
 { 
 if(!empty(operator)) 
 while(priority(expression[position])<= priority(operator->data)&& 
 !empty(operator)) 
 { 
  operand=pop(operand,&operand1); 
  operand=pop(operand,&operand2); 
  operator=pop(operator,&op); 
  operand=push(operand,two_result(op,operand1,operand2)); 
 } 
 operator=push(operator,expression[position]); 
 } 
 else 
 operand=push(operand,expression[position]-48); 
 position++; 
 } 
 while(!empty(operator)) 
{ 
 operator=pop(operator,&op); 
 operand=pop(operand,&operand1); 
 operand=pop(operand,&operand2); 
 operand=push(operand,two_result(op,operand1,operand2)); 
} 
 operand=pop(operand,&evaluate); 
 printf("The expression [%s] result is '%d' ",expression,evaluate); 
 getch(); 
}