//
//  main.c
//  secret_map_2.c
//
//  Created by Sujeong Oh on 2022/12/13.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int arr1[16] = {};
    int arr2[16] = {};
    char d[16][16] = {};
    scanf("%d",&n);

    //배열 입력
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &arr2[i]);
    }
    
    //비트연산
    for(int i=0; i<n; i++){
        d[i][0] = arr1[i] | arr2[i];
    }
    
    //2진수 변환.. 해야하나..
    for(int i=0; i<n; i++){
        for(int k=n-1; k>=0; k--){
            d[i][k] = d[i][0]%2;
            if (k!=0)
                d[i][0] = d[i][0]/2;
        }
        
    }
    
    //출력
    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            if(d[i][k]==1)
                printf("%c", '#');
            else
                printf(" ");
        }
        puts("");
    }
    
    return 0;
}
//5 9 20 28 18 11 30 1 21 17 28
