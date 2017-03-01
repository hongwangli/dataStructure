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
            if (nums[i] != nums[index] ){
                // ++index = index + 1 ; index = index +1
                nums[++index] = nums[i];
            }
        }
        for (int j=0 ; j < nums.size() ; j++){
            cout << "nums: " << nums[j] << endl; 
        }
        return index + 1;
    }
};


class solution2 {
public:
    int removeDuplicates(vector<int>& nums, int &hit) {
        if (nums.size() <= hit) return nums.size();
        int index = hit;
        for (int i = hit; i < nums.size(); i++){
            if (nums[i] != nums[index - hit])
            nums[index++] = nums[i];
        }
        return index;
    }
};

int main(){
    int a[] = {1,1,1,2,3,4,5,5};
    vector<int> ns(a,a+8);
    solution2 s;
    int t = 3;
    int r = s.removeDuplicates(ns,t);
    cout << "result: " << r << endl;
}           
