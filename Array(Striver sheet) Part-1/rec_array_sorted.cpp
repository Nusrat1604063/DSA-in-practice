//
// Created by Tabassum Akter Nusrat on 11/8/25.
//

bool isSorted(int arr[], int start) {
    if (start == arr.size()- 1) {
        return true;
    }

    isSorted(arr, start+1);

    if (start > start+1) {
        return false;
    }
}

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int p[n];
    cout<<isSorted(p, 0);

}