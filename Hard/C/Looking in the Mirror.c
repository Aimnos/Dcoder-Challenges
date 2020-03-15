#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
  short int value;
  struct Node *parent;
  struct Node *left;
  struct Node *right;
} Node;

typedef struct Stack {
  char side;
  struct Stack *next;
} Stack;

Node *Search(Node *root, int value) {
  Node *node;
  if(root == NULL)
    return NULL;

  if(root->value == value)
    return root;

  node = Search(root->left, value);
  if(node == NULL)
    node = Search(root->right, value);

  return node;
}

Node *Mirror(Node *node) {
  Node *currentNode = node;
  Stack *aux, *path = NULL;
  while(currentNode->parent != NULL) {
    currentNode = currentNode->parent;
    aux = path;
    path = (Stack*)malloc(sizeof(Stack));
    path->next = aux;
    if(currentNode->left == node)
      path->side = 'R';
    else
      path->side = 'L';

    node = currentNode;
  }
  while(path != NULL) {
    if(currentNode != NULL)
      switch(path->side) {
        case 76:    // L
          currentNode = currentNode->left;
          break;
        case 82:    // R
          currentNode = currentNode->right;
          break;
      }

    aux = path;
    path = path->next;
    free(aux);
  }
  return currentNode;
}

int main() {
  unsigned short int N, Q;
  short int X, value;
  char side;
  Node *node, **child, root = {. parent = NULL, NULL, NULL};
  scanf("%hu %hu %hi", &N, &Q, &X);
  root.value = X;
  child = (Node**)malloc(N*sizeof(Node*));
  for(unsigned short int i = 0; i < N; i++) {
    scanf("%hi %hi %c", &X, &value, &side);
    node = Search(&root, X);
    child[i] = (Node*)malloc(sizeof(Node));
    child[i]->value = value;
    child[i]->parent = node;
    child[i]->left = NULL;
    child[i]->right = NULL;
    switch(side) {
      case 76:    // L
        node->left = child[i];
        break;
      case 82:    // R
        node->right = child[i];
        break;
    }
  }
  for(unsigned short int i = 0; i < Q; i++) {
    scanf("%hi", &value);
    node = Search(&root, value);
    node = Mirror(node);
    if(node != NULL)
      printf("%hi\n", node->value);
    else
      printf("Not Exist\n");
  
  }
  for(unsigned short int i = 0; i < N; i++)
    free(child[i]);

  free(child);
  return 0;
}