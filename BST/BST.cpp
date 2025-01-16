#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * left, *right;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};
Node *insert(Node *root,int target){
    if(!root){  
        Node *temp = new Node(target);
        return temp;
    }
    if(target<root->data){
        root->left = insert(root->left,target);
    }
    else{
        root->right = insert(root->right,target);
        return root;
    }
}

void inOrder(Node *root){
    if(!root)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

bool Search(Node *root, int target){
    if(!root)
        return 0;

    if(root->data==target)
    return 1;

    if(root->data>target)
    {

    return Search(root->left,target);
    }

    else
    return Search(root->right,target);


}

Node *deleteNode(Node *root,int target){
    if(!root){
        return NULL;
    }

    if(root->data>target){
        root->left = deleteNode(root->left,target);
        return root;
    }

    else if(root->data<target){
        root->right = deleteNode(root->right,target);
        return root;

    }

    else{
        if(!root->left &&! root->right){
            delete root;
            return NULL;
        }
        //1 child Exist
        else if(!root->right){ //Leftt child exist
         Node *temp = root->left;
         delete root;
         return temp;   
        }
        else if(!root->left){ //Right child exist
         Node *temp = root->right;
         delete root;
         return temp;

        }
        // 2 chlid Exist
        else{
            Node *child = root->left;
            Node *parent = root;
            
            //Most Right
            while(child->right){
                parent = child;
                child = child->right;
            }
            if(root!=parent){
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
                delete root;
                return child;

            }
            else{
                child->right = root->right;
                delete root;
                return child;
            }

        }
    }
}

void printTree(Node *root, string indent = "", bool last = true) {
    if (root != nullptr) {
        cout << indent;
        if (last) {
            cout << "R----";
            indent += "   ";
        } else {
            cout << "L----";
            indent += "|  ";
        }
        cout << root->data << endl;
        printTree(root->left, indent, false);
        printTree(root->right, indent, true);
    }
}

int main(){

int arr[] = {6,3,17,5,11,18,2,1,20,14};

Node *root =NULL;

for(int i=0;i<10;i++)
    root = insert(root,arr[i]);

inOrder(root);
cout<<endl;  
printTree(root);
cout<<Search(root,11)<<endl;
deleteNode(root,17);


printTree(root);

}