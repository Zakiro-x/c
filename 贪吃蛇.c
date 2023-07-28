# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <time.h>

#define WIDTH 35
#define HEIGHT 20
#define SNAKE_LENGTH 500

int snakeX[SNAKE_LENGTH],snakeY[SNAKE_LENGTH];
int fruitX,fruitY;
int score;
int gameover;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;


void Setup()
{
    gameover = 0;
    dir = STOP;
    snakeX[0] = WIDTH / 2;
    snakeY[0] = HEIGHT / 2;/*蛇头初始位置*/
    srand(time(0));
    fruitX = rand() % WIDTH;
    srand(time(0));
    fruitY = rand() % HEIGHT;/*果实初始位置*/
    score = 0;
}

void Draw()
{
    system("cls");/*清屏*/
    int i = 0, j = 0, k = 0;
    for(i=0;i < WIDTH + 2; i++)
        printf("#");/*首行“墙”*/
    printf("\n");

    i = 0;
    for (i=0;i<HEIGHT;i++)
    {
        for(j=0;j<WIDTH;j++)
        {
            if(j==0)printf("#");/*侧边的“墙”*/
            if(i==snakeY[0] && j==snakeX[0])printf("0");/*蛇头*/
            else if(i==fruitY && j==fruitX)printf("F");/*果实*/
            else{
                int isBody = 0;
                for(k = 1;k<score; k++)
                {
                    if(i == snakeY[k] && j == snakeX[k])
                    {
                        printf("o");/*蛇身位置*/
                        isBody = 1;
                    }
                }
                if(!isBody)printf(" ");/*非蛇头、非蛇身、非蛇尾、则空格实现场地*/
            }
            if (j == WIDTH -1)printf("#");/**/
        }
        printf("\n");
    }
    for(i=0 ; i<WIDTH + 2; i++)printf("#");
    printf("\n");
    printf("Score: %d\n",score);
}

void Input()
{

    if(_kbhit())
    {
        switch(_getch())
        {
            case 'a':
                dir = LEFT;
                break;
            case 'd' :
                dir = RIGHT;
                break;
            case 'w' :
                dir = UP;
                break;
            case 's' :
                dir = DOWN;
                break;
            case 'x' :
                gameover = 1;
                break;
        }
    }
}

void Logic()
{
    int prevX = snakeX[0];
    int prevY = snakeY[0];
    int prev2X,prev2Y;
    snakeX[0] = snakeX[0] + (dir == RIGHT) - (dir == LEFT);
    snakeY[0] = snakeY[0] + (dir == DOWN) - (dir == UP);
    int i=0;
    for (i=1;i<score;i++)
    {
        prev2X = snakeX[i];
        prev2Y = snakeY[i];
        snakeX[i] = prevX;
        snakeY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    if(snakeX[0] == fruitX &&snakeY[0] == fruitY)
    {
        score++;
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;
    }

    if(snakeX[0] >= WIDTH ||snakeX[0] < 0 || snakeY[0] >= HEIGHT || snakeY[0] < 0)
    {
        gameover = 1;
    }

    for (i=1; i< score ;i++)
    {
        if(snakeX[i] == snakeX[0] && snakeY[i] == snakeY[0])
        {
            gameover = 1;
            break;
        }
    }
}

int main()
{
    Setup();

    while (!gameover)
    {
        Draw();
        Input();
        Logic();
        Sleep(200);
    }
    printf("游戏结束，得分：%d\n",score);

    return 0;
}
