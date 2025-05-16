class Solution {
    squareWall(num) {
        let i, j;
        for (i = 1; i <= num; i++) {
            let row = "";
            for (j = 1; j <= num; j++) {
                row += "* ";
            }
            console.log(row);
        }
    }
}