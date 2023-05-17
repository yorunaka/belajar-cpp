#include <bits/stdc++.h>
#define ll long long
#define pii pair <int,int>
#define frt first
#define snd second
#define kyaa push_back
#define onichan pop_back

using namespace std;

struct tree {
    int data;
    tree* left;
    tree* right;
};

tree* createNode(int data) {
    tree* newNode = new tree();
    if (!newNode) {
        cout << "Gagal membuat node baru." << endl;
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}


tree* insertNode(tree* root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return root;
    }
    if (data < root->data)
        root->left = insertNode(root->left, data);
    else if (data > root->data)
        root->right = insertNode(root->right, data);
    return root;
}


tree* findNode(tree* root, int data) {
    if (root == NULL || root->data == data)
        return root;
    if (data < root->data)
        return findNode(root->left, data);
    return findNode(root->right, data);
}


tree* findMinNode(tree* node) {
    tree* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}


tree* deleteNode(tree* root, int data) {
    if (root == NULL)
        return root;
    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else {
        if (root->left == NULL) {
            tree* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            tree* temp = root->left;
            delete root;
            return temp;
        }
        tree* temp = findMinNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}


void inorderTraversal(tree* root) {
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}


void postorderTraversal(tree* root) {
    if (root == NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}


void preorderTraversal(tree* root) {
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}


void deleteTree(tree* root) {
    if (root == NULL){
        return;
    }
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

signed main() {
tree* root = NULL;
int choice, data, n;

do {
    cout << "1. Insert Data" << endl;
    cout << "2. Search Data" << endl;
    cout << "3. Delete Data" << endl;
    cout << "4. Inorder Traversal" << endl;
    cout << "5. Postorder Traversal" << endl;
    cout << "6. Preorder Traversal" << endl;
    cout << "7. Exit" << endl;
    cout << "Pilih operasi yang diinginkan: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Berapa banyak data yang akan dimasukkan?" << endl;
            cout << "Masukan :";
            cin >> n;
            for (int i = 0; i < n; i++){
                cout << "Masukkan data: ";
                cin >> data;
                root = insertNode(root, data);
            }
            break;
        case 2:
            cout << "Masukkan data yang akan dicari: ";
            cin >> data;
            if (findNode(root, data) != NULL)
                cout << "Data ditemukan." << endl;
            else
                cout << "Data tidak ditemukan." << endl;
            break;
        case 3:
            cout << "Masukkan data yang akan dihapus: ";
            cin >> data;
            cout << "Data berhasil dihapus." << endl;
            root = deleteNode(root, data);
            break;
        case 4:
            cout << "Inorder Traversal: ";
            inorderTraversal(root);
            cout << endl;
            break;
        case 5:
            cout << "Postorder Traversal: ";
            postorderTraversal(root);
            cout << endl;
            break;
        case 6:
            cout << "Preorder Traversal: ";
            preorderTraversal(root);
            cout << endl;
            break;
        case 7:
            deleteTree(root);
            cout << "Terima kasih!" << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
    cout << endl;
} while (choice != 7);

return 0;

}