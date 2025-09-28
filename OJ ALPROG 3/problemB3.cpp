#include <stdio.h>

// int main()
// {
//     int a;
//     int m[50], n[50], o[50];

//     scanf("%d", &a);

//     for(int i = 1; i <= a; i++)
//     {
//         scanf("%d %d %d", &m[i], &n[i], &o[i]);
//         if(n[i] + o[i] >= m[i])
//         {
//             printf("Case #%d: yes\n", i);
//         }
//         else
//         {
//             printf("Case #%d: no\n", i);
//         }
//     }

//     return 0;
// }

int main()
{
    int a;
    int k, m, n;

    scanf("%d", &a);

    for(int i = 1; i <= a; i++)
    {
        scanf("%d %d %d", &k, &m, &n);
        printf("Case #%d: ", i);
        if(m + n >= k)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}