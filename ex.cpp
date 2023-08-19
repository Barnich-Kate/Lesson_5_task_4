#include <iostream>

using namespace std;


int main()
{
    int n = 10, sum1, sum2; 
    int *ptr1 = &sum1;
    int *ptr2 = &sum2;
    int arr[n] = {2, 3, 4, 5, 6, 7, 8, 8, 9, 10};
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum1 += arr[i];
        } else if (arr[i] % 2 != 0) {
            sum2 += arr[i];
        }
    }
    
    
    
    cout<<"Summa 1 is equal: " << *ptr1 << endl;
    cout <<"Summa 2 is equal: " << *ptr2 << endl;

    return 0;
}
