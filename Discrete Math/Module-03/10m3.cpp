#include <bits/stdc++.h>
using namespace std;
int bubble_sort(int a[], int n) {
    int num_of_comparison = 0;
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                num_of_comparison++;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return num_of_comparison;
}
int insertion_sort(int a[], int n) {
    int num_of_comparison = 0;
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && temp < a[j]) {
            num_of_comparison++;
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    return num_of_comparison;
}
int main() {
    int n, x;
    cin >> n;
    int a[n], b[n], i;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }
    ofstream outFile("file10.txt");
    if (outFile.is_open()) {
        for (i = 0; i < n; i++) {
            outFile << a[i] << " ";
        }
        for (i = 0; i < n; i++) {
            outFile << b[i] << " ";
        }
        outFile.close();
    } else {
        cout << "Unable to open file" << endl;
    }
    int comparison_insertion = insertion_sort(a, n);
    int comparison_bubble = bubble_sort(b, n);
    cout << "Number of Comparisons in insertion sort: " << comparison_insertion << endl;
    cout << "Number of Comparisons in bubble sort: " << comparison_bubble << endl;
    return 0;
}
// 10
// 2 3  4 1 9 6 7 12 58 11
// 10
// 2 3  4 1 9 6 7 12 58 11
// Number of Comparisons in insertion sort: 7
// Number of Comparisons in bubble sort: 12
