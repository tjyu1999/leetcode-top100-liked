class Solution{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        if(matrix.empty()) return {};
        
        vector<int> res;
        const int m = matrix.size();
        const int n = matrix[0].size();
        int r1 = 0;
        int c1 = 0;
        int r2 = m - 1;
        int c2 = n - 1;
        
        while(res.size() < m * n){
            for(int j = c1; j <= c2 && res.size() < m * n; j++) res.push_back(matrix[r1][j]);
            for(int i = r1 + 1; i <= r2 - 1 && res.size() < m * n; i++) res.push_back(matrix[i][c2]);
            for(int j = c2; j >= c1 && res.size() < m * n; j--) res.push_back(matrix[r2][j]);
            for(int i = r2 - 1; i >= r1 + 1 && res.size() < m * n; i--) res.push_back(matrix[i][c1]);
            
            r1++;
            c1++;
            r2--;
            c2--;
        }
        
        return res;
    }
};
