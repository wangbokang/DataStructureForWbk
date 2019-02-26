class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        int n = heights.size();
        int result = 0;
        int j1 , j2;
        for(int i = 0; i < n; i++)
        {
            for(j1 = i-1; j1 >= 0; j1--)
            {
                if(heights[i] > heights[j1])
                    break;
            }
            for(j2 = i+1; j2 <= n-1; j2++)
            {
                if(heights[i] > heights[j2])
                    break;
            }
            result = max(result , (j2 - j1-1 ) * heights[i]);
        }
        return result;
    }
};
