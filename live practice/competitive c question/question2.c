#include <stdio.h>
#include <string.h>
int main(void)
{
    char I[101000];
    char P[101000];
    int k, test, l, flag, remove,i_index,p_index;
    scanf("%d", &test);
    for (int j = 1; j <= test; j++)
    {
        scanf("%s", &I);
        scanf("%s", &P);
        flag = remove = 0;
        i_index=p_index=0;
        for (k = 0; k < strlen(P); k++)
        {
            if (P[k]!=I[p_index])
            {
                remove++;
            }
            else
                p_index++;
        }
        // output

        if (strlen(I) > strlen(P) - remove)
            printf("Case#%d: IMPOSSIBLE\n", j);
        else if(strlen(I) == (strlen(P) - remove))
            printf("Case#%d: %d\n", j, remove);
    }
    return 0;
}
