class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
                int low = 0, high = matrix[0].length - 1;
        int i = 0;
        while(low <= high) {
            if(i > matrix.length - 1){
                return false;
            }

            if(matrix[i][matrix[0].length - 1] < target){
                i++;
            } else {
                int mid = low + (high - low) / 2;
                if(matrix[i][mid] == target){
                    return true;
                }
                if(matrix[i][mid] < target){
                    low = mid + 1;
                } else high = mid - 1;
            }
        }
        return false;
    }
}
