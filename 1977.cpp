#include <stdio.h>
#include <cmath>
using namespace std;

int M=scanf("%d");
int N=scanf("%d");

int main(void){
    int PN=0;
    int MN=0;
    int count=0;
    for(int i=1; pow(i,2)<=N&&pow(i,2)>=M; pow(i,2) )
        if(pow(i,2)<=N && pow(i,2)>=M){
            PN+=i;
            count+=1;
                if(count==1){
                    MN=i;
                }
        }

    if(PN!=0){
        printf("%d", &PN);
        printf("%d", &MN);
    }
    else{
        printf("-1");
    }
    return 0;
}