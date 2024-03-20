#include<iostream>
using namespace std;

void updateArr (int *arr, int i, int a) {
arr[i] = a;
}

int main () {
int arr[5] = {1, 2, 3, 4, 5};


int n = sizeof(arr)/sizeof(int);

updateArr (arr, 0, 10);

for (int i=0; i<n; i++) {
cout << arr[i] << " ";
}
cout << endl;

return 0;
}
