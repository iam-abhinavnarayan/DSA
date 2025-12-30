#include <iostream>
#include <vector>

using namespace std;

int pushZerosToEnd(vector<int>& arr) {
        
        int count=0;
        
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]!=0){
                
                swap(arr[i],arr[count]);
                
                count++;
            
            }
        }
    }

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};

    pushZerosToEnd(arr);   

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
