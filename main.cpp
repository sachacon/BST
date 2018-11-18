// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    // open and read from text file 
    ifstream inFile;
    inFile.open("test.txt");
    BST_312<string> bst;             
    string s;

    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }
 
    cout << "Postorder Traversal: " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "Preorder Traversal: " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "Inorder Traversal: " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    // Testing countNodes() and deleteItem()
    cout << "Number of Nodes in Tree: " << bst.countNodes() << endl;
    cout << "Removing ... " << s << endl;
    s = "f";
    bst.deleteItem(s);
    cout << "Inorder Traversal: " << endl;
    print(bst.inOrderTraversal());
    cout << endl;
    cout << "Number of Nodes in Tree " << bst.countNodes() << endl;
    cout << endl;

    // Testing isItemInTree()
    cout << "Checking for 'f' in tree: " << endl;
    if(bst.isItemInTree(s)){
	cout << "TRUE" << endl;
    }
    else{
	cout << "FALSE" << endl;
    }
    s = "d";
    cout << "Checking for 'd' in tree: " << endl;
    if(bst.isItemInTree(s)){
	cout << "TRUE" << endl;
    }
    else{ 
        cout << "FALSE" << endl; 
    }

    // Testing makeEmpty() and destructor
    cout << "Testing makeEmpty() and destructor ... " << endl;

}

