#include <iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < size; ++j) {
            if(arr[j]%2 == 0){
                arr[j] -= 2;
            }
            else{
                arr[j] += 2;
            }
        }
    }
}

int main(){
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    int arr[size];
    
    for (int i = 0; i < size; ++i) {
        cout << "Enter Element "<<i+1<<": ";
        std::cin >> arr[i];
    }

    int n;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;

    evenOddTransform(arr, size, n);

    cout << "[";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }

    cout << "]\n";

    return 0;
}
