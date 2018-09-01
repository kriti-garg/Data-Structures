#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
stack <char> bracket;
int length;
void check(char brac[]){
  char currentChar;
  int i=0,j=0,flag=0;
  char temp = brac[0];
  while(length--){
    flag=0;
  currentChar = brac[i];
  if(brac[0]==')' || brac[0]=='}' || brac[0] == ']')
  {cout<<"not equal";
  break;}
  else{
    flag=1;
   if(currentChar=='(' || currentChar=='[' ||currentChar == '{'){
    bracket.push(currentChar);
  }
  else if(currentChar==')'){
    if(bracket.top()=='(')
    bracket.pop();
    else
    bracket.push(currentChar);
  }
  else if(currentChar==']'){
    if(bracket.top()=='[')
    bracket.pop();
    else
    bracket.push(currentChar);
  }
  else if(currentChar=='}'){
    if(bracket.top()=='{')
    bracket.pop();
    else
    bracket.push(currentChar);
  }
}
  i++;
}
if(flag==1){
if(bracket.empty())
cout<<"parenthesis equal";
else
cout<<"not equal";
}}
int main(){
  char brac[4000];
  cout<<"enter the bracket expression";
  cin>>brac;
  length = strlen(brac);
  check(brac);
}
