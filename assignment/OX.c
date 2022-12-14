#include <stdio.h>

int main(void){
    int n;
    char arr[80] = {0} ;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%s", arr);
        int correct = 1;
        int score = 0;
        for(int i=0;arr[i]!=0;i++){
            if (arr[i] == 'O'){
                score += correct;
                correct++;
            } else {
                correct = 1;
            }
        }
        printf("%d\n", score);
    }
    
    return 0;
}
