public class Solution {
    public boolean isValidSudoku(char[][] board) {
        for (int i = 0; i < 9; i++) {
            boolean[] rows = new boolean[9];
            boolean[] cols = new boolean[9];
            boolean[] cube = new boolean[9];
            for (int j = 0; j < 9; j++) {
                // Check r
                if (board[i][j] != '.') {
                    int num = board[i][j] - '1';
                    if (rows[num]) return false;
                    rows[num] = true;
                }
                // Check c
                if (board[j][i] != '.') {
                    int num = board[j][i] - '1';
                    if (cols[num]) return false;
                    cols[num] = true;
                }
                // Check 3x3
                int rowIndex = 3 * (i / 3) + j / 3;
                int colIndex = 3 * (i % 3) + j % 3;
                if (board[rowIndex][colIndex] != '.') {
                    int num = board[rowIndex][colIndex] - '1';
                    if (cube[num]) return false;
                    cube[num] = true;
                }
            }
        }
        return true;
    }
}
