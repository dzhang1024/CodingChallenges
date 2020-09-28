#include <vector>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int last = start; 
        vector<int> v;
        for(int i = 0; i < n; i++){
            v.push_back(start + 2*i);                                        
        }
        for(int i = 1; i < v.size(); i++){
            last = last^v[i];
        }
        return last;
    }
};