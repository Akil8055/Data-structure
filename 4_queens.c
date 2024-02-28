#include<stdio.h>
char board[20][20];
int n,i,j,count=0;
int is_safe(int row, int col) {
    for (i = 0; i < row; i++) {
        if (board[i][col] == 'Q')
            return 0;
    }
    for (i = 0; i < n; i++) {
        if (board[i][col] == 'Q')
            return 0;
    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q')
            return 0;
    }
    for (i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q')
            return 0;
    }
    return 1;
}
void printsolution() {
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}
int solve_til(int row) {
	int j;
	if(row==n){
	    printsolution();
	    printf("\n");
	    count++;
	}
	 
    for (j = 0; j < n; j++) {
        if (is_safe(row, j) == 1) {
            board[row][j] = 'Q';
             solve_til(row + 1);
                board[row][j] = '-';
        }
       }
    return 0;
}
int main() {
    printf("Number of queens: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            board[i][j] = '-';
        }
    }
    solve_til(0);
    if(count==0)
    printf("Solution does not exist");
    return 0;
}

