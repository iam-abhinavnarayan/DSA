// C++ program to find equilibrium index of an array
// using prefix sum and suffix sum variables

#include <iostream>
#include <vector>
using namespace std;

int findEquilibrium(vector<int> &arr) {

        int totalSum=0;
        for(int i=0; i<arr.size(); i++){
            totalSum+=arr[i]; // Calculating Total Sum of the element present in the Array.
        }
        
        int leftSum=0;
        int pivot,rightSum;
        
        for(pivot=1; pivot<arr.size()-1; pivot++){
            leftSum+=arr[pivot-1];
            rightSum=totalSum-leftSum-arr[pivot];
            
            if(leftSum == rightSum){
                return pivot;
            }
        }
        return -1;
    }

int main(){
    vector<int> arr = { 1, 7, 3, 6, 5, 6 };

    cout << findEquilibrium(arr) << endl;
    return 0;
}
