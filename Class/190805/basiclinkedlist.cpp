#include <iostream>
using namespace std;

struct node{
  int data;
  struct node *next;
};

void traverse(struct node* head){
  struct node* current = head;
  int count = 0;
  cout << "traversing the list" << "\n";

  while(current != NULL){
    count++;
    cout <<  current -> data << " ";
    current = current -> next;
  }
  cout << "\n";
}

struct node* creatnode(int d){
  struct node* temp = (struct node*) malloc(sizeof(struct node));
  temp -> data = d;
  temp -> next = NULL;
  return temp;
}

int main() {
  cout << "creating & traversing linked list" << "\n";

  struct node* head = creatnode(5);

  head -> next = creatnode(12);
  head -> next -> next = creatnode(13);
  head -> next -> next -> next = creatnode(91);

  traverse(head);
  return 0;
}
