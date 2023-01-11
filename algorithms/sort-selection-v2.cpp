#include <bits/stdc++.h>
using namespace std;
/*
    find the max value, and its location
    swap it to the nth value
    iterate n-1
*/
void selectionSort(int v[], int len){
    if(len < 1){
        return;
    }
    int mimax = *max_element(v,v+len);
    for(int i=0; i<len; i++){
        if(mimax == v[i]){
            swap(v[len-1], v[i]);
        }
    }
    selectionSort(v, len-1);
}

int main(){
    int len;
    cout << "Number of elements :: ";
    cin >> len;
    int v[len];
    cout << "Given :: ";
    for(int i=0; i<len; i++){
        cin >> v[i];
    }
    selectionSort(v, len);
    cout << "Printing sorted :: ";
    for(auto x : v){
        cout << x << " ";
    }
    
    return 0;
}