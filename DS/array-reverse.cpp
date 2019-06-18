//
// Created by ialom on 6/18/19.
//

#include <bits/stdc++.h>

using namespace std;

void printArray (int ara[], int len) {
    printf("The array: \n{");
    for(int i=0; i<len; i++) {
        cout << ara[i] << ",";
    }
    printf("} \n");
}

void reverseArray(int ara[], int len) {
    int start = 0, end = len - 1;
    while(start < end){
        int temp = ara[start];
        ara[start] = ara[end];
        ara[end] = temp;
        end--;
        start++;
    }
}

int main() {
    int ara[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(ara)/ sizeof(ara[0]);

    cout << "Initial Array: " << endl;
    printArray(ara, len);

    reverseArray(ara, len);
    cout << "Reversed Array: " << endl;
    printArray(ara, len);
    return 0;
}