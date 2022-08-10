#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int16_t value;
    struct Node* parent;
    struct Node* left;
    struct Node* right;
} Node;

typedef struct Stack {
    char side;
    struct Stack* next;
} Stack;

Node* mirror(Node* node) {
    Node* currentNode = node;
    Stack* path = NULL;
    while (currentNode->parent != NULL) {
        currentNode = currentNode->parent;
        Stack* aux = path;
        path = malloc(sizeof(Stack));
        path->next = aux;
        if (currentNode->left == node)
            path->side = 'R';
        else
            path->side = 'L';

        node = currentNode;
    }
    while (path != NULL) {
        if (currentNode != NULL)
            switch (path->side) {
                case 'L':
                    currentNode = currentNode->left;
                    break;
                case 'R':
                    currentNode = currentNode->right;
                    break;
            }

        Stack* aux = path;
        path = path->next;
        free(aux);
    }
    return currentNode;
}

int main() {
    uint16_t N, Q;
    int16_t X;
    scanf("%" SCNu16 " %" SCNu16 " %" SCNd16, &N, &Q, &X);
    Node root = {X, NULL, NULL, NULL};
    Node* children = calloc(N, sizeof(Node));
    for (uint16_t i = 0; i < N; ++i) {
        int16_t parent, value;
        char side;
        scanf("%" SCNd16 " %" SCNd16 " %c", &parent, &value, &side);
        children[i].value = value;
        if (X == parent) {
            children[i].parent = &root;
            switch (side) {
                case 'L':
                    root.left = &children[i];
                    break;
                case 'R':
                    root.right = &children[i];
                    break;
            }
        } else
            for (uint16_t j = 0; j < i; ++j)
                if (children[j].value == parent) {
                    children[i].parent = &children[j];
                    switch (side) {
                        case 'L':
                            children[j].left = &children[i];
                            break;
                        case 'R':
                            children[j].right = &children[i];
                            break;
                    }
                    break;
                }
    }
    for (uint16_t i = 0; i < Q; ++i) {
        int16_t value;
        scanf("%" SCNd16, &value);
        if (X == value)
            printf("%" PRId16 "\n", X);
        else
            for (uint16_t j = 0; j < N; ++j)
                if (children[j].value == value) {
                    Node* node;
                    if ((node = mirror(&children[j])) != NULL)
                        printf("%" PRId16 "\n", node->value);
                    else
                        printf("Not Exist\n");

                    break;
                }
    }
    free(children);
}
