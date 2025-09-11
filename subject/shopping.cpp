#include <stdio.h>

int main()
{
    int type, id;
    scanf_s("%d", &type);
    if (type < 1 || type > 100)
    {
        printf("wrong number");
        return 0;
    }

    int input_b[100], output_b[100]; 

    for (int i = 0; i < type; i++)
    {
        scanf_s("%d", &input_b[i]);
    }
    for (int i = 0; i < type; i++)
    {
        scanf_s("%d", &output_b[i]);
    }
    scanf_s("%d", &id);

    printf("%d\n", input_b[id - 1] - output_b[id - 1]);
    for (int i = 0; i < type; i++)
    {
        printf("%d ", input_b[i] - output_b[i]);
    }
    return 0;
}
