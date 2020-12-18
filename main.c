#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char* name;
    int number;
    struct node* next;
    
}node;

//gezinme
void traverse(node* pNode){
    printf("3 \n");
    node* temp = pNode;
    while(temp != NULL)
    {
        printf("Name: %s, Number: %d \n",temp->name , temp->number);
        temp = temp->next;
    }
    
}
//öne ekleme
void push(node* root, node* pNode){
    pNode->next = root;

}

//ekleme
void append(node* root, node* pNode){
    printf("2 \n");
    node* temp = root;
    while (temp->next != NULL){
        temp = temp->next;
    }

    temp->next = pNode;
    
}

node* createNode(char* name, int number){
    printf("1 \n");
    node* pNode = malloc(sizeof(node));
    pNode->name = name;
    pNode->number = number;
    pNode->next = NULL;
    return pNode;
}





int main(){
    
    node* a = createNode("Sev",1);
    node* b = createNode("Sevgi",2);
    node* c = createNode("Sevgili",3);
    node* d = createNode("Sevilmek",4);
    node* e = createNode("Saymak",5);
   

    append(a, b);
    append(a, c);
    append(a, d);
    push(a,e);


    traverse(e);

    return 0;
}
