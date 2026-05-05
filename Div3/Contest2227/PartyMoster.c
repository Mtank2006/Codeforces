#include <stdio.h>
int main() {
    int test_cases;
    scanf("%d",&test_cases);
    for (int i = 0; i < test_cases; i++) {
        int intputs;
        scanf("%d",&intputs);
        char sequence[intputs+1];
        scanf("%s",sequence);
        int balance=0;
        for (int j = 0; j < intputs; j++) {
            if (sequence[j]=='(')   balance++;
            if (sequence[j]==')')   balance--;
        }
        if (balance==0) printf("Yes\n");
        else            printf("No\n");
    }
}