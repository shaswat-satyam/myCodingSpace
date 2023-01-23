#include <stdio.h>
#include <stdlib.h>

const int N = 3;

void display(int a[N][N]);
int draw(int a[N][N]);
int set(int a[N][N], int m, int n, int player);
int playerMove(int matrix[N][N],int player);
int win(int a[N][N],int player);

int main(){
    char choice;
    int matrix[N][N] = {0};
    while(1){
        if(playerMove(matrix,1)||playerMove(matrix,2)){
            goto end;
        };
    }
    end:
    printf("Want to have a reMatch ? (y/n)");
    scanf("%s",&choice);
    if(choice == 'y'){
        main();
    }
    return 0;
    }


int playerMove(int matrix[N][N],int player){
    int m,n;
    char choice = 'c';

    display(matrix);
    if(draw(matrix)){
        printf("No one Wins!\nThank you for playing. ");
        return 1;
    }
    printf("Player %d move (x,y):",player);

    while(1){
        scanf("%d %d",&m,&n);
        if(matrix[n][m] != 0 || m > 2 || n > 2){
            printf("Incorrect Move \nReenter the move(x,y): ");
            continue;
        }
        set(matrix,n,m,player);
        break;
    }

    display(matrix);

    if(win(matrix,player)){
        printf("\nMatch Over!\nThank you for Playing. ");
        return player;
    }
    return 0;
}

int draw(int a[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N ; j++){
            if(a[i][j] == 0){
                return 0;
            }
        }
    }
    return 1;
}

int check_diagonals(int array[N][N],int player){
    if(array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[1][1] == player){
        printf("Diagonal 1 win! ");
            return 1;
    }
    else if(array[2][0] == array[1][1] && array[1][1] == array[0][2] && array[1][1] == player){
        printf("Diagonal 2 Win! ");
        return 1;
    }
    else{return 0;}
}

int check_columns(int array[N][N], int player){
    for(int i = 0; i < N; i++){
        if(array[0][i] == array[1][i] && array[1][i] == array[2][i] && array[1][i] == player){
            printf("Column Win %d! ",i);
            return 1;
        }
    }
    return 0;
}

int check_rows(int array[N][N],int player){
    for(int i = 0; i < N;i++){
        if(array[i][0] == array[i][1] && array[i][1] == array[i][2] && array[i][1] == player){
            printf("Row Win %d! ",i);
            return 1;
        }
    }
    return 0;
}

int win(int a[N][N], int player){
    if(check_rows(a,player)||check_columns(a,player)||check_diagonals(a,player)){
        printf("Congratulations! Player %d wins!",player);
        return 1;
    }
    return 0;
}

int set(int a[N][N], int m, int n, int player){
    a[m][n] = player;
    return 0;
}

void display(int a[N][N]){
    system("clear");
    for(int j = 0;j<N;j++){printf("%d  ",j);}
    printf("\n");

    for(int j =0; j < N; j++){
            printf("---");
        }
        printf("\n");

    for(int i = 0 ; i < N; i++){
        for(int j =0; j < N; j++){
            if(a[i][j]==0){
                printf("  |");
            }
            else if(a[i][j]==1){
                printf("X |");
            }
            else{
                printf("O |");
            }
        }
        printf("%d\n",i);
        for(int j =0; j < N; j++){
            printf("---");
        }
        printf("\n");
    }
}
