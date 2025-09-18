#include<bits/stdc++.h>
using namespace std ;

struct Node {
    int data ;
    Node* next ;
    Node(int val) {
        data = val ;
        next = NULL ;
    }
} ;

void printList(Node* head) {
    Node* temp = head ;
    while (temp) {
        cout << temp->data << "->" ;
        temp = temp->next ;
    }
    cout << "NULL" << endl ;
}

int main() {
    int n, x, key ;
    cout << "Enter no of elements: " ;
    cin >> n ;

    Node* head = NULL ;
    Node* tail = NULL ;

    cout << "Enter elements: " ;
    for (int i = 0 ; i < n ; i++) {
        cin >> x ;
        Node* newNode = new Node(x) ;
        if (head == NULL) {
            head = newNode ;
            tail = newNode ;
        } else {
            tail->next = newNode ;
            tail = newNode ;
        }
    }

    cout << "Enter key to delete: " ;
    cin >> key ;

    int count = 0 ;

    while (head && head->data == key) {
        Node* del = head ;
        head = head->next ;
        delete del ;
        count++ ;
    }

    Node* curr = head ;
    while (curr && curr->next!=NULL) {
        if (curr->next->data == key) {
            Node* del = curr->next ;
            curr->next = curr->next->next ;
            delete del ;
            count++ ;
        } else {
            curr = curr->next ;
        }
    }

    cout << "Count: " << count << endl ;
    cout << "Updated List: " ;
    printList(head) ;

    return 0 ;
}
