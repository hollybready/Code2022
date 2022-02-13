#include <stdio.h>
#include <cmath>
using namespace std;

int main(void) {
    int M, N;;
    scanf_s("%d", &M);
    scanf_s("%d", &N);
    int PN = 0;
    int MN = 0;
    int count = 0;
    for (int i = 1; (int)pow(i, 2) <= N && (int)pow(i, 2); i++) {
        if ((int)pow(i, 2) <= N && (int)pow(i, 2) >= M) {
            PN += (int)pow(i, 2);
            count += 1;
            if (count == 1) {
                MN += (int)pow(i, 2);
            }
        }
    }

    if (PN != 0) {
        printf("%d\n", PN);
        printf("%d\n", MN);
    }
    else {
        printf("-1");
    }
    return 0;
}