#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

/*
*    A summary of the rules follows:

*    1. Print operands as they arrive.

*    2. If the stack is empty or contains a left parenthesis on top, push the incoming operator onto the stack.
 
*    3. If the incoming symbol is a left parenthesis, push it on the stack.
 
*    4. If the incoming symbol is a right parenthesis, pop the stack and print the operators
        until you see a left parenthesis. Discard the pair of parentheses.

*    5. If the incoming symbol has higher precedence than the top of the stack, push it on the stack.
 
*    6. If the incoming symbol has equal precedence with the top of the stack, use association. 
  If the association is left to right, pop and print the top of the stack and then push the incoming operator
  If the association is right to left, push the incoming operator.

*    7. If the incoming symbol has lower precedence than the symbol on the top of the stack, pop the stack 
       and print the top operator. Then test the incoming operator against the new top of stack.

*    8. At the end of the expression, pop and print all operators on the stack. (No parentheses should remain.)                                        */



int priorityNumber(char Operator)
{
  if (Operator == '^')
    return 3;
  if (Operator == '*' || Operator == '/')
    return 2;
  if (Operator == '+' || Operator == '-')
    return 1;
  return -1;
}
stack <char> operatorStack;

bool isOperand(char currentChar)
{
  return ((currentChar>=65 && currentChar<=90) || (currentChar>=97 && currentChar<=122)); 
} 
int length;
void infix2Postfix(char infix[])
{
    char postfix[10000] = {0};
  int i=0,j=0;
  char currentChar;
  
    while(length--)
  { 
    //  char g;
    //    g= operatorStack.top();
    //cout << g << endl;
    currentChar = infix[i];
 
    // character is an operand
    if ( isOperand(currentChar) )
      postfix[j++]=currentChar;
     
    // if character  is an operator
    else
    {
      if (currentChar=='(')
      {
        //If the incoming symbol is a left parenthesis, push it on the stack.
        operatorStack.push(currentChar);
      }
 
      //If stack is empty and operator is not â��)â��, then push the operator on the stack
      else if(operatorStack.empty() && currentChar!=')')
      {
        operatorStack.push(currentChar);
      }
 
      else if(currentChar == ')')
      {
        while (!operatorStack.empty())
          {
            if(operatorStack.top() =='(')
            {
              operatorStack.pop();
              break;
            }
            else
            {
              postfix[j++]=operatorStack.top();
              operatorStack.pop();
            }
          } //End of while
      }
      //If stack is not empty, then compare the current operator with the one which is present on top of the stack.
      else
      {
        if(priorityNumber(currentChar) > priorityNumber(operatorStack.top()))
          operatorStack.push(currentChar);
         else
        {
          while (!operatorStack.empty())
          {
            if(operatorStack.top() =='(')
            {
              operatorStack.pop();
              break;
            }
            else
            {
              postfix[j++]=operatorStack.top();
              operatorStack.pop();
            }
          } //End of while
            operatorStack.push(currentChar);
        } //End of else
      } //End of else
    }//End of else
    i++;
    //cout << i << postfix << endl;
  }//End of while
  //Transfer remaining items in stack
  while(!operatorStack.empty())
  {
    postfix[j++]=operatorStack.top();
    operatorStack.pop();
  }
  postfix[j] =='\0';
  cout <<  postfix << endl;
}



int main() 
{
  char infix[4000];
  int t;
  cin >> t;
  while(t--)
  {
  //  cout << "Enter an infix expression without space. Use parentheses to indicate priority. Only +, -, *, /, ^ symbols are allowed\n";
    cin >> infix;
    length = strlen(infix);
  //  cout << "Infix expression : " << infix << endl;
    infix2Postfix(infix);
  }
  return 0; 
}
