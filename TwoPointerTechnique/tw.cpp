#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 int countPairs(vector<int> &arr, int target) {
    
    int sum = 0;
    int i=0,j=arr.size()-1;
    int count = 0;
    
        while(i < j){
            sum=arr[i] + arr[j];
            
            if(sum == target){
                
                int ele1 = arr[i];
                int ele2 = arr[j];
                int cnt1 = 0, cnt2 = 0;
                
                while (i <= j and arr[i] == ele1) {
                                i++;
                                cnt1++;
                            }
                while (i <= j and arr[j] == ele2) {
                                j--;
                                cnt2++;
                
                }
                if(ele1 == ele2){
                    count+=(cnt1*(cnt1 - 1))/2;
                }
                else{
                    count+=cnt1 * cnt2;
                }
            }
            else if(sum > target){
                j--;
            }
            else if(sum < target){
                i++;
            }
        }
        return count;
    }
int main() {
    vector<int> arr = {-1, 1, 5, 5, 7};
    int target = 6;

    cout << countPairs(arr, target);

    return 0;
}