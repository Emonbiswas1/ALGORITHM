#include<bits/stdc++.h>
using namespace std;

void printList(int *arr, int n) {
for( int i=0; i<n; i++) {
    cout<< arr[i] << " ";
}

}
int *bubbleSort(int *a, int n) {
for( int i=0; i<n-1; i++) {
    for( int j=0; j<n-i-1; j++) {
        if ( a[j]> a[j+1] ) {
            int temp;
            temp= a[j];
            a[j]=a[j+1];
            a[j+1]= temp;

        }
    }
}
return a;
}


int main () {

int n=10000;
int *a= new int[n];
ifstream fin ("BigShift.txt");
for( int i=0; i<n; i++)  {
    fin >> a[i];
}
printList(a,n);
cout<<endl;
int *p;
p=bubbleSort(a,n);
printList(p,n);

bubbleSort(a,n);

}

