#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <time.h>

const int N = 3;

int hour = 0;
int minute = 0;
int second = 0;
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

void display(int a[3][3])
{
    system("clear");
    printf("%02d : %02d : %02d \n", hour, minute, second);
    fflush(stdout);
    second++;
    if (second == 60)
    {
        minute += 1;
        second = 0;
    }

    if (minute == 60)
    {
        hour += 1;
        minute = 0;
    }

    if (hour == 24)
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    for(int j = 0; j < 3; j++)
        printf("%d  ",j);
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

int playerMove(int matrix[N][N],int player){
    int m,n;
    char choice = 'c';

    if(draw(matrix)){
        printf("No one Wins!\nThank you for playing. ");
        return 1;
    }
    printf("Player %d move (x,y):",player);

    while(1){
        display(matrix);
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



int i, j, height = 35, width = 35;
int gameover, score;
int x, y, fruitx, fruity, flag;

// Function to generate the fruit within the boundary
void setup()
{
    gameover = 0;

    // Stores height and width
    x = height / 2;
    y = width / 2;
label1:
    fruitx = rand() % 35;
    if (fruitx == 0)
        goto label1;
label2:
    fruity = rand() % 35;
    if (fruity == 0)
        goto label2;
    score = 0;
}

// Function to draw the boundaries
void dr_boundary()
{
    system("clear");
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1)
            {
                printf("_");
            }
            else
            {
                if (i == x && j == y)
                    printf("-");
                else if (i == fruitx && j == fruity)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    // Print the score after the game ends
    printf("Current Score = %d", score);
    printf("\n");
    printf("press X to quit the game\n");
}

void input()
{
    int ch;
    struct termios oldt, newt;

    // Save the terminal settings
    tcgetattr(STDIN_FILENO, &oldt);

    // Disable canonical mode, and local echo
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);

    // Set the new terminal settings
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    // Get the input character
    ch = getchar();

    // Restore the terminal settings
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

    if (ch != EOF)
    {
        switch (ch)
        {
        case '\033':   // ASCII value for escape key
            getchar(); // consume the [ character
            ch = getchar();
            switch (ch)
            {
            case 'A': // up arrow key
                flag = 4;
                break;
            case 'B': // down arrow key
                flag = 2;
                break;
            case 'C': // right arrow key
                flag = 3;
                break;
            case 'D': // left arrow key
                flag = 1;
                break;
            }
            break;
        case 'x':
            gameover = 1;
            break;
        case 'X':
            gameover = 1;
            break;
        }
    }
}

// Function for the logic behind each movement
void logic()
{
    sleep(0.001);
    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y++;
        break;
    case 4:
        x--;
        break;
    default:
        break;
    }

    // If the game is over
    if (x < 0 || x > height || y < 0 || y > width)
        gameover = 1;

    if (x == fruitx && y == fruity)
    {
    // After eating the above fruit generate new fruit
    label3:
        fruitx = rand() % 35;
        if (fruitx == 0)
            goto label3;

    label4:
        fruity = rand() % 35;
        if (fruity == 0)
            goto label4;
        // If snake reaches the fruit then update the score
        score += 10;
    }
}

int main(){
    int game;
    while(1){    
        printf("Do you want to play Snake(1),TicTacToe(2):");
        scanf("%d",&game);
        if(game == 1)
            goto snake;
        else if(game == 2)
            goto tictactoe;
    }

    tictactoe:
        printf("TicTacToe Begin");
        char choice;
        int matrix[3][3] = {0};
        

        while(1){
            

            sleep(1);
            if(playerMove(matrix,1)||playerMove(matrix,2)){
                goto end;
            };
        }
        end:
        printf("Want to rerun Program?(y/n)");
        scanf("%s",&choice);
        if(choice == 'y'){
            main();
        }
        goto exit;

    

    snake:

    // Generate boundary
    setup();

    // Until the game is over
    while (!gameover)
    {

        // Function Call
        dr_boundary();
        input();
        logic();
    }
    
    goto exit;

    exit:
        return 0;
    
}