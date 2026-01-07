#include<bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node* next;
    Node(int x) {
        val = x;
        next = NULL;
    }
};
int main(){
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Node* head = NULL;
    Node* tail = NULL;
    for(int i = 0; i < n; i++){
        Node* newNode = new Node(arr[i]);
        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        Node* temp = head;
        Node* prev = NULL;
        int count = 1;
        while(temp){
            if(temp->val == x){
                cout << count << " ";
                if(prev != NULL){
                    prev->next = temp->next;
                    temp->next = head;
                    head = temp;
                }
                break;
            }
            prev = temp;
            temp = temp->next;
            count++;
        }
    }
    cout << endl;
    return 0;
}
