class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int n = height.size();
        int maxlt = 0;
        int maxrt = 0;

        int left = 0;
        int right = n-1;

        while(left < right){
            if(height[left] < height[right]){
                if(height[left] >= maxlt){
                    maxlt = height[left];
                }else{
                    water+= maxlt - height[left];
                }
                left++;
            }else{
                if(height[right] >= maxrt){
                    maxrt = height[right];
                }else{
                    water += maxrt - height[right];
                }
                right--;
            }
        }

        return water;
    }
};