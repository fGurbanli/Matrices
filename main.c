#include <stdio.h>

int GetIntInput();
int ProcessMatrix(int row, int column);

int main(void)
{


}

int GetIntInput()
{
    int input;
    while (1)
    {
        if (scanf("%d", &input) == 1 && input > 0)
        {
            break;
        }
        printf("Enter a valid value!\n");
    }
    return input;
}

