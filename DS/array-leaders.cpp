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

void getLeaders(int ara[], int len){
    int max = ara[len-1];
    cout << "Leaders: " << max << ",";
    for(int i=len-1; i>=0; i--){
        if(ara[i] > max){
            cout << ara[i] << ",";
            max = ara[i];
        }
    }
    cout << endl;
}

int main() {
    int ara[] = {16, 17, 4, 3, 5, 2};
    int len = sizeof(ara)/ sizeof(ara[0]);

    printArray(ara, len);
    getLeaders(ara, len);
    return 0;
}