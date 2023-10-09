#include <iostream>
using namespace std;

int main() {
    int n, a[10], count = 0;
    cout<<"Enter size of array(<10): ";
    cin>>n;

    cout<<"Enter "<<n<<" elements: ";

    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int x;
    cout<<"Enter element: ";
    cin>>x;

    for(int i=0; i<n; i++) {
        if(a[i] > x) {
            count++;
        }
    }

    cout<<"Elements > "<<x<<" are: "<<count<<endl;

    return 0;
  
}