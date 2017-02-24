#include<iostream>
#include<vector>
using namespace std;

class solution{
public:
    int removeDuplicates(vector<int> &nums){
        if (nums.empty()) return 0;
        //int index = 1;
        //for (int i =1; i< nums.size(); i++){
        //    if (nums[i] != nums[index-1]){
        //        // index++ = index ; index = index + 1
        //        nums[index++] = nums[i];
        //    }
        //}
        //return index
        int index = 0;
        for (int i = 1; i< nums.size(); i++){
            if (nums[i] != nums[index]){
                // ++index = index + 1 ; index = index +1
                nums[++index] = nums[i];
            }
        }
        //cout nums
        //for (int j=0 ; j < nums.size() ; j++){
        //    cout << "nums: " << nums[j] << endl; 
        //}
        return index + 1;
    }
};
 
int main(){
    int a[] = {1,1,2};
    vector<int> ns(a,a+3);
    solution s;
    int r = s.removeDuplicates(ns);
    cout << "result: " << r << endl;
}
