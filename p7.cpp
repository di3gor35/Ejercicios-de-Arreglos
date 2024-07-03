#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<float> nums = {1.2, 3.4, 5.6, 7.8, 9.0};
    vector<float> nums2;
    //vector<float>::reverse_iterator it = nums.rbegin();

    for (auto it = nums.rbegin(); it != nums.rend(); it++){
        nums2.push_back(*it);
    }
    for (auto it = nums2.begin(); it != nums2.end(); it++){
        cout << *it << " ";
    }
    return 0;
}