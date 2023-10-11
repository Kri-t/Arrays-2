#include <iostream>
using namespace std;

int main() {
    int a[] = {1,1,2,4,2,4};

    for(int i=0; i<6; i++) {
        int count = 0;
        for(int j=0; j<6; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }
        if(count == 0) {
            cout<<a[i]<<endl;
            return 0;
        }
    }

    cout<<"No unique element"<<endl;
    return 0;
}