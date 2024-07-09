#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// struct sinhVien
// {
//     char ten[20];
//     char msv[20];
//     char queQuan[20];
// };
// typedef sinhVien sinhVien;
struct node
{
    int data;
    struct node *next;
};

typedef struct node node;
void browser(node* head){
    while (head!=NULL)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
}
int count(node* head){
    int count;
    while (head!=NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
node* makeNode(int x){
    node* newNode = (node*)malloc(sizeof(node));
    newNode -> data = x;
    newNode -> next = NULL;
    return newNode;
}
void pushFront(node* *head, int x){
    node *newNode = makeNode(x);
    newNode -> next = *head;
    *head = newNode;
}
int main(){
    node *head = NULL;
    for (int i = 1;i<10;i++){
        pushFront(&head, i);
    }
    browser(head);
}
