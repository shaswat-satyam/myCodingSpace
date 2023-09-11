/* ---------------------------------------------------------- SOURCE_CODE --------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>

/* ---------------------------------------------------------- snake_game ---------------------------------------------------------*/

int i, j, height = 35, width = 35;
int gameover, score;
int fruitx, fruity, flag;

struct Node
{
    int x, y;
    struct Node *next;
} *head;

void dr_boundary();
void setup();
void add_segment();
void input();
void logic();

/* -------------------------------------------------------  tic-tac-toe_game -------------------------------------------------------*/

const int N = 3;

int playerMove(int matrix[N][N], int player);
int draw(int a[N][N]);
int check_diagonals(int array[N][N], int player);
int check_columns(int array[N][N], int player);
int check_rows(int array[N][N], int player);
int win(int a[N][N], int player);
int set(int a[N][N], int m, int n, int player);
void display(int a[N][N]);

/* ----------------------------------------------------------- driver_code ---------------------------------------------------------*/

int main()
{
    int game, matrix[3][3] = {0};
    char choice;
    while (1)
    {
        printf("\n\n---------------------------------------------------- Welcome to Compiler Gamings ----------------------------------------------------\n\n");
        printf("Press 1 to Play SNAKE\n");
        printf("Press 2 to Play TIC-TAC-TOE\n");
        printf("\nEnter your Choice :: ");

        scanf("%d", &game);
        if (game == 1)
            goto snake;
        else if (game == 2)
            goto tictactoe;
    }

tictactoe:

    while (1)
    {
        if (playerMove(matrix, 1) || playerMove(matrix, 2))
        {
            goto end;
        }
    }

snake:

    setup();

    while (!gameover)
    {
        dr_boundary();
        input();
        logic();
        usleep(100000);
    }

    goto end;

end:

    printf("\nWant to Play Again? (y/n) :: ");
    scanf("%s", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        main();
    }
    printf("\n");
    goto exit;

exit:

    return 0;
}

/* ------------------------------------------------ functions definations for snake_game -------------------------------------------*/

// function to draw the snake game boundary
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
                int is_segment = 0;
                struct Node *curr = head;
                while (curr != NULL)
                {
                    if (curr->x == i && curr->y == j)
                    {
                        printf("-");
                        is_segment = 1;
                        break;
                    }
                    curr = curr->next;
                }
                if (!is_segment && i == fruitx && j == fruity)
                {
                    printf("*");
                }
                else if (!is_segment)
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    // Print the score after the game ends
    printf("\n\nCurrent Score :: %d", score);
    printf("\n\nPress X to QUIT\n\n");
}

// function to generate fruit within the boundary
void setup()
{
    gameover = 0;

    // Stores height and width
    head = (struct Node *)malloc(sizeof(struct Node));
    head->x = height / 2;
    head->y = width / 2;
    head->next = NULL;

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

// function to increase snake length
void add_segment()
{
    struct Node *new_segment = (struct Node *)malloc(sizeof(struct Node));
    new_segment->x = head->x;
    new_segment->y = head->y;
    new_segment->next = head->next;
    head->next = new_segment;
}

// function to input movements of the snake from the user
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
            case 'A': // Up arrow key
                if (flag != 2)
                {
                    flag = 1;
                }
                break;
            case 'B': // Down arrow key
                if (flag != 1)
                {
                    flag = 2;
                }
                break;
            case 'C': // Right arrow key
                if (flag != 4)
                {
                    flag = 3;
                }
                break;
            case 'D': // Left arrow key
                if (flag != 3)
                {
                    flag = 4;
                }
                break;
            }
            break;
        case 'x':
        case 'X':
            gameover = 1;
            break;
        }
    }
}

// function to implement the logic of the game
void logic()
{
    int prevx = head->x;
    int prevy = head->y;
    int nextx, nexty;
    struct Node *curr = head->next;
    head->x += (flag == 1) ? -1 : (flag == 2) ? 1
                                              : 0;
    head->y += (flag == 3) ? 1 : (flag == 4) ? -1
                                             : 0;
    while (curr != NULL)
    {
        nextx = curr->x;
        nexty = curr->y;
        curr->x = prevx;
        curr->y = prevy;
        prevx = nextx;
        prevy = nexty;
        curr = curr->next;
    }

    if (head->x == 0 || head->x == width - 1 || head->y == 0 || head->y == height - 1)
    {
        gameover = 1;
    }

    curr = head->next;
    while (curr != NULL)
    {
        if (curr->x == head->x && curr->y == head->y)
        {
            gameover = 1;
            break;
        }
        curr = curr->next;
    }

    if (head->x == fruitx && head->y == fruity)
    {
        add_segment();
        score += 10;
    label3:
        fruitx = rand() % 35;
        if (fruitx == 0)
            goto label3;
    label4:
        fruity = rand() % 35;
        if (fruity == 0)
            goto label4;
    }
}

/* ----------------------------------------------- functions definations for tic-tac-toe_game ----------------------------------------*/

// function to create a 2-D matrix to store tic-tac-toe
int draw(int a[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

// function to display tic-tac-toe in each turn
void display(int a[N][N])
{
    system("clear");
    for (int j = 0; j < N; j++)
    {
        printf(" %d ", j);
    }
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] == 0)
            {
                printf("  |");
            }
            else if (a[i][j] == 1)
            {
                printf("X |");
            }
            else
            {
                printf("O |");
            }
        }
        printf(" %d\n", i);

        for (int j = 0; j < N; j++)
        {
            if (i == 0 || i == 1)
            {
                if (j == 0)
                {
                    printf("  -");
                }
                else
                {
                    printf("---");
                }
            }
        }
        printf("\n");
    }
}

// function to check win in each row
int check_rows(int array[N][N], int player)
{
    for (int i = 0; i < N; i++)
    {
        if (array[i][0] == array[i][1] && array[i][1] == array[i][2] && array[i][1] == player)
        {
            printf("\nRow %d Win! ", i);
            return 1;
        }
    }
    return 0;
}

// function to check win in each column
int check_columns(int array[N][N], int player)
{
    for (int i = 0; i < N; i++)
    {
        if (array[0][i] == array[1][i] && array[1][i] == array[2][i] && array[1][i] == player)
        {
            printf("\nColumn %d Win! ", i);
            return 1;
        }
    }
    return 0;
}

// function to check win in each diagonal
int check_diagonals(int array[N][N], int player)
{
    if (array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[1][1] == player)
    {
        printf("\nDiagonal 1 win! ");
        return 1;
    }
    else if (array[2][0] == array[1][1] && array[1][1] == array[0][2] && array[1][1] == player)
    {
        printf("\nDiagonal 2 Win! ");
        return 1;
    }
    else
    {
        return 0;
    }
}

// function to check win in either row, column or diagonal
int win(int a[N][N], int player)
{
    if (check_rows(a, player) || check_columns(a, player) || check_diagonals(a, player))
    {
        printf("\n\nCongratulations! Player %d wins!", player);
        return 1;
    }
    return 0;
}

// function to set move according to player number
int set(int a[N][N], int m, int n, int player)
{
    a[m][n] = player;
    return 0;
}

// function to take moves from player turn-wise
int playerMove(int matrix[N][N], int player)
{
    int m, n;
    char choice = 'c';

    display(matrix);
    if (draw(matrix))
    {
        printf("\n\nNo one Wins!\n\nThank you for playing. \n");
        return 1;
    }
    printf("\nPlayer %d Move (x,y) :: ", player);

    while (1)
    {
        scanf("%d %d", &m, &n);
        if (matrix[n][m] != 0 || m > 2 || n > 2)
        {
            printf("\nInCorrect Move\nRe-Enter the Move(x,y) :: ");
            continue;
        }
        set(matrix, n, m, player);
        break;
    }

    display(matrix);

    if (win(matrix, player))
    {
        printf("\n\nMatch Over!\n\nThank you for Playing. \n");
        return player;
    }
    return 0;
}

/* -------------------------------------------------------------------------------------------------------------------------------------*/