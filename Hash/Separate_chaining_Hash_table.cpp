#include <bits/stdc++.h>

using namespace std;

class Node {
public: 
    int data;
    Node* next;
};

int MAX_SIZE = 1e6+7;
vector<Node*> hash_table(MAX_SIZE);

Node* insert(Node* head, int data) {
    auto newnode = new Node();
    newnode->data = data;
    newnode->next = head;
    return newnode;
}

bool find(Node* head, int data) {
    while (head) {
        if (head->data == data) return true;
        head = head->next;
    }
    return false;
}

void free_all(Node* head) {
    while (head) {
        auto next = head->next;
        delete head;
        head = next;
    }
}


int main() {
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        int hash_val = x % MAX_SIZE;
        
        hash_table[hash_val] = insert(hash_table[hash_val], x);
    }
    
    int query; cin >> query;
    
    int hash_val = query % MAX_SIZE;
    if (find(hash_table[hash_val], query)) {
        cout << "found";
    } else cout << "not found";
    
    for (auto i : hash_table) free_all(i);
    
}
