#include<iostream>
#include<vector>
#include<algorithm>
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

class solution2{
public:
    int removeDuplicates(vector<int>& nums){
        //cout << "num.begins()"<< nums.begin() << endl;
        return distance(nums.begin(),unique(nums.begin(),nums.end()));
    }
};


class solution3{
public:
    int removeDuplicates(vector<int>& nums){
        //cout << "OUTPUT:" << *removeDuplicates(nums.begin(),nums.end(),nums.begin()) <<endl;
        //for (int i =0; i < nums.size();i++){
        //    cout << "nums: " << nums[i] << endl;
        //}
        return distance(nums.begin(),removeDuplicates2(nums.begin(),nums.end(),nums.begin()));
    }

    
    //vector<int>::iterator  removeDuplicates(vector<int>::iterator first,
    //                       vector<int>::iterator last,vector<int>:: iterator output){
    //    while (first != last){
    //        *output++ = *first;
    //        first = upper_bound(first,last,*first);
    //    }
    //    return output;
    //}

    //template<typename InIt, typename OutIt>
    template<class InIt, class OutIt>
    OutIt removeDuplicates2(InIt first, InIt last, OutIt output){
        while (first != last){
            //cout << "first: " << *first << endl;
            //cout << "output: " << *output << endl;
            *output++ = *first;
            first = upper_bound(first,last,*first);
        }
        return output;
    }
};



int main(){
    int a[] = {1,1,2,2,3,4,5,5};
    vector<int> ns(a,a+8);
    solution3 s;
    int r = s.removeDuplicates(ns);
    cout << "result: " << r << endl;
}
