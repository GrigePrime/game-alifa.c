#include <stdio.h>

int main(){
    int j, R, count = 1, table, chanp;
    while(scanf("%d %d", &j, &R), j != 0 && R != 0){
        int palyer[10000] = {0};
    for(int i =0;i < R*j;i++){
            scanf("%d", &table);
            palyer[count] = palyer[count] + table;
            /*printf("%d\n", palyer[count]);*/
            count++;
            if(count > j){
                count = 1;
            }
    }
    int max = 0;
    for(int i =1;i <= j;i++){
        if(max < palyer[i]){
            max = palyer[i];
            chanp = i;
        }else if(max == palyer[i]){
            if(chanp < i){
                chanp = i;
            }
        }
    }
    printf("%d\n", chanp);
    };
    
}
