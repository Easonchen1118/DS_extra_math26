#include <stdio.h>
//輸出 1*1、2*2、...、N*N之結果
int main(){
    int num;
    scanf("%d", &num);
    for (int i=1; i<num+1; i++) {
        printf("%d*%d=%d\n", i, i, i*i);
    }
    return 0;
}
