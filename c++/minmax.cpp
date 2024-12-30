#include <stdio.h>

int main(void) {
    int n, i;
    scanf("%d", &n);
    
    int si[n], ti[n], pi[n];
    
    for(i = 0; i < n; i++) {
        scanf("%d %d", &si[i], &ti[i]);
        if(si[i] > ti[i]) {
            pi[i] = si[i] - ti[i];
        } else {
            pi[i] = ti[i] - si[i];
        }
    }
    
    int max = pi[0];
    int min = pi[0];
    
    for(i = 1; i < n; i++) {
        if(pi[i] > max) {
            max = pi[i];
        }
        if(pi[i] < min) {
            min = pi[i];
        }
    }
    
    printf("\n%d %d", min, max);
    
    return 0;
}

