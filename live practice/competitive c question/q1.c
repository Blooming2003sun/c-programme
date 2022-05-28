#include <stdio.h>
#include <string.h>
int main(void)
{
    int test, flag = 0, length = 0;
    int j, count[26] = {0};
    char arr[400];
    scanf("%d", &test);
    while (test)
    {
        scanf("%s", arr);
        length = strlen(arr);

        for (j = 0; arr[j] != '\0'; j++)
            count[(arr[j] - 97)]++;
        for (j = 0; j < 26; j++)
        {
            if (count[j] != 0)
                if (count[j] != j + 1)
                {
                    flag++;
                    break;
                }
        }
        if (flag)
            printf("No\n");
        else
            printf("Yes\n");

        for (j = 0; j < 26; j++)
            count[j] = 0;
        flag = 0;
        test--;
    }
    return 0;
}