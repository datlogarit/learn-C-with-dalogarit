#include<stdio.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node node;
node* makeNode(int x){
    node *newNode = (node*)malloc(sizeof(node));
    newNode ->data = x;
    newNode ->next = NULL;
    return newNode;
}
void duyet(node *head){
    while(head != NULL){
        printf("%d", head->data);
        head = head ->next;
    }
}
int dem(node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head ->next;
    }
    return count;
}
void addHead(node* *head, int x){
    node *newNode = makeNode(x);
    newNode ->next = *head;
    *head = newNode;
}
void addTail(node* *head, int x){
    node *newNode = makeNode(x);
    if(*head == NULL){
        *head = newNode;
        return 0;
    }
    node *temp = *head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void addMid(node* *head, int x, int k){
    node *newNode = makeNode(x);
    int n = dem(*head);
    node *temp = *head;
    if(k<1||k>n+1) return;

    if(k==1){
        addHead(&*head, x);
        return;
    }
    for(int i = 1;i < k-1;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void delHead(node **head){
    node *del = *head;
    *head = (*head) -> next;
    free(del);
}
void delTail(node **head){
    node *temp = *head;
    while(temp->next->next != NULL){
        temp = temp ->next;
    }
    node *del = temp->next;
    temp ->next = NULL;
    free(del);
}
void delMid(node **head, int k){
    int n=dem(*head);
    if(k<1||k>n);
    if(k==1){
        delHead(&*head);
        return;
    }
    node *temp = *head;
    for(int i = 1; i<=k-2;i++){
        temp = temp ->next;
    }
    node *del = temp->next;
    temp->next = del->next;
    free(del);
}
int main(){
    node *head = NULL;
//    for (int i = 0;i<10;i++){
//        addTail(&head, i);
//    }
    //delTail(&head);
    addMid(&head,5,1);
    addMid(&head,4,2);
    delMid(&head,2);
    //delHead(&head);
    duyet(head);

    //printf("%d", dem(head));
}
