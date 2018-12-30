#include<iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

typedef struct Node {
        int data;
        struct Node* next;
}Node;

void push(int data, struct Node** top) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = *top;
        *top = newNode;
}

void pop(Node** top) {
        struct Node* temp = *top;
        *top = temp->next;
        free(temp);
        temp = NULL;
}

int peek(Node* top) {
        return top->data;
}

bool isEmpty(Node* top) {
        if (top == NULL)
                return 1;
        return 0;
}
//////////////////**stub**/////////////////////////
int evaluatePostfix(Node *node, char *exp) {
  char currentChar;
  int len;
  int count=0;
  for(int i=0;exp[i]!='\0';i++)
    count++;
  len = count;
  int i=0,result;
  while(len--){
   currentChar = exp[i]; 
    if(isdigit(currentChar)){
     //node->data = currentChar;
      push(currentChar-'0',&node);
    }
    else{
     if(currentChar=='+' || currentChar == '-' || currentChar == '*' || currentChar == '/'){
       int a = peek(node);
       pop(&node);
       int b = peek(node);
       pop(&node);
       switch(currentChar){
         case '+':{
           result = a+b;
           break;
         }
         case '-':{
          result = b-a;
           break;
         }
         case '*':{
          result = b*a;
           break;
         }
         case '/':{
          result = b/a;
           break;
         }
       }
     }
      push(result,&node);
    }
    i++;
  }
int temp = peek(node);
  pop(&node);
  return temp;
}
//////////////////**stub**/////////////////////////  
int main() {
        Node *top = NULL;

        char exp[50]; // For storing input postfix expression
        cin.getline(exp, sizeof(exp)); // Note: expression has spaces in b/w operands and operators
        cout << evaluatePostfix(top, exp);

        return 0;
}