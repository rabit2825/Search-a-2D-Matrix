class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int Row = matrix.size();
        int Col = matrix[0].size();

        int Start = 0;
        int End = Row*Col-1;    
        int Mid = (Start+End)/2;

        while(Start <= End){
            int Ele = matrix[Mid / Col][Mid % Col];

            if(Ele == target){
                return 1;
            }
            if(Ele < target) {
                Start=Mid+1;
            }
            else{
                End = Mid-1;
            }
            Mid = (Start+End)/2;
        }
        return 0;
    }
};