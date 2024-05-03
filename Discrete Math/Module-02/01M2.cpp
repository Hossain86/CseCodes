#include <bits/stdc++.h>
using namespace std;
void display(bitset<32>& set) {
    for (int i = 0; i < set.size(); i++) {
        if (set[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    int n,i,a;
    cout << "Enter the number of elements in the set: ";
    cin >> n;
    bitset<32> A, B;
    cout << "Enter the elements of set A: ";
    for (i = 0; i < n; ++i) {
        cin >> a;
        A.set(a);
    }
    cout << "Enter the elements of set B: ";
    for (i = 0; i < n; ++i) {
        cin >> a;
        B.set(a);
    }
    cout << "A: ";
    display(A);
    bitset<32> unions = A | B;
    cout << "A U B: ";
    display(unions);
    bitset<32> intersection = A & B;
    cout << "A ∩ B: ";
    display(intersection);
    bitset<32> difference = A & (~B);
    cout << "A - B: ";
    display(difference);
    bitset<32> Set = A ^ B;
    cout << "A ⊕ B: ";
    display(Set);
}
