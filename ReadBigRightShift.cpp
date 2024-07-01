#include<bits/stdc++.h>
using namespace std;

void shiftRight(int *arr, int n, int k) {
for( int a=0; a<k; a++) {
    for( int i=n-1; i>0; i--) {
        arr[i] = arr[i-1];

    }
}
for( int j=0; j<k; j++) {
    arr[j]=0;

}

for( int i=0; i<n; i++) {
    cout<< arr[i]<< " ";
}
}
int main () {

int n=10000;
int *a= new int[n];
ifstream fin ("BigShift.txt");
for( int i=0; i<n; i++)  {
    fin >> a[i];
}
shiftRight(a,n,9000);

}

