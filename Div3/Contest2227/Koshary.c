#include <stdio.h>
int main() {
    int test_cases;
    scanf("%d",&test_cases);
    for (int i = 0; i < test_cases; i++) {
        int x,y;
        scanf("%d %d",&x,&y);
        if (!(x%2 == 1 && y%2 == 1))    printf("Yes\n");
        else                            printf("No\n");
    }
}