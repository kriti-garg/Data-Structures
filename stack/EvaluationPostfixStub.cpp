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
    int len = strlen(exp);
    char currentChar;
    int i=0,j=0;
    while(len--){
        currentChar = exp[i]->data;
    }






}
//////////////////**stub**/////////////////////////  
int main() {
        Node *top = NULL;

        char exp[50]; // For storing input postfix expression
        cin.getline(exp, sizeof(exp)); // Note: expression has spaces in b/w operands and operators
        cout << evaluatePostfix(top, exp);

        return 0;
}