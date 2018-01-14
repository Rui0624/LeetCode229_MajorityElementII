//
//  main.cpp
//  LeetCode229_MajorityElementII
//
//  Created by Rui on 1/13/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> res;
        int n = nums.size() / 3;
        
        for(auto a: nums)
            m[a]++;
        
        for(auto it: m)
        {
            if(it.second > n)
                res.push_back(it.first);
        }
        
        return res;
    }
};
