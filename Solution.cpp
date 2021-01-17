class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> correct_indices;
        
        for (int i = 0; i < nums.size(); i++) {
            
            for (int j = 0; j < nums.size(); j++) {
                
                if (i != j) {
                    
                    if (nums[i] + nums[j] == target) {
                        
                        correct_indices.push_back(i);
                        correct_indices.push_back(j);
                        break;
                        
                    }
                    else {
                        
                        ;
                        
                    }
                }
                else{
                    
                    ;
                    
                }
            }
            
            if (correct_indices.size() == 2) {
                
                break;
                
            }
            
        }
        
        return correct_indices;
    }
};
