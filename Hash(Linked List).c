#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TABLE_SIZE 10

struct Node{
int key;
int value;
struct Node*next;
};

struct Node* hashtable[TABLE_SIZE];

int hashFunction(int key){
  return key%TABLE_SIZE;
}
void insert(int key,int value){
  int hashIndex=hashFunction(key);

  newNode->key = key;
  newNode->value = value;
  newNode->next = NULL;

  if(hashtable[hashIndex]==NULL){
    hashtable[hashIndex]=newNode;
  }else{
    newNode->next =  hashTable[hashIndex];
    hashTable;
  }
int search(int key){
  int hashIndex=hashFunction(key);
  struct
  while(currentNode != NULL){
    if(currentNode->key == key){
      return currentNode->value;
    }
    currentNode = currentNode->next;
  }
  return -1;
}
  void display(){
    for(int i=0;i<TABLE_SIZE;i++){
      struct Node* currentNode = hashtable[i];
      printf("Index %d:",i);
      while(currentNode != NULL)){
        printf("(%d,%d)",currentNode->key,currentNode->value);
        currentNod = currentNode->next;
      }
        printf("\n");
    }
  }
  int main(){
    for(int i=0;i<TABLE_SIZE;i++){
      hashtable[i]=NULL;
    }
    insert(1,10);
    insert(11,20);
    insert(21,30);
    insert(2,40);
    insert(12,50);
    display();

    int value = search(21);
    if(value != -1){
      printf(" value for key 21: %d\n",value);
    }else{
      printf("key 21 not found\n");
    }
    return 0;
  }
}
