
#include<iostream>
#include<vector>
#include<map>
using namespace std;

class solution{
public:
    vector<int> twosum(vector<int> &nums, int target){
        map<int,int> map_temp;
        for (int i=0; i < nums.size(); i++){
            map_temp[nums[i]] = i;
        }
        map<int,int>::iterator it;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++){
            it = map_temp.find(target - nums[i]);
            if (it != map_temp.end() && i != it->second){
                result.push_back(min(i+1, it->second +1));
                result.push_back(max(i+1, it->second + 1));
                return result;
            }
        }
    }
};

int main(){
    int n[] = {1,2,3,4,5};
    int t = 6;
    vector<int> a (n,n+5) ;
    solution s;
    vector<int> r;
    r = s.twosum(a,t);

    cout << "index1= " << r[0] << endl;
    cout << "index2= " << r[1] << endl;
}


