#include <iostream>
#define MAX 100

using namespace std;

void lerInteiro(int a[MAX],int n);

int main()
{
    int a[] = {2,4,3,5,6};

    int n = 5;

    lerInteiro(a,n);

    return 0;
}

void lerInteiro(int a[MAX],int n){

    for (int i=0; i<n ;i++ ){

        cout << a[i]<< " ";

    }
    cout << endl;
}
