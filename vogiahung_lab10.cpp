#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* TaoNode(int x) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = x;
    p->left = p->right = NULL;
    return p;
}

struct Node* Chen(struct Node* root, int x) {
    if (root == NULL) return TaoNode(x);
    if (x < root->data)
        root->left = Chen(root->left, x);
    else if (x > root->data)
        root->right = Chen(root->right, x);
    return root;
}

struct Node* NHAP(int n) {
    struct Node* T = NULL;
    int x;
    for (int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &x);
        T = Chen(T, x);
    }
    return T;
}

void TIENTU(struct Node* T) {
    if (T != NULL) {
        printf("%d ", T->data);
        TIENTU(T->left);
        TIENTU(T->right);
    }
}

int TONG(struct Node* T) {
    if (T == NULL) return 0;
    return T->data + TONG(T->left) + TONG(T->right);
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    struct Node* T = NHAP(n);

    printf("\nDuyet Tien Tu (NLR): ");
    TIENTU(T);

    printf("\nTong gia tri cac node = %d\n", TONG(T));

    return 0;
}
