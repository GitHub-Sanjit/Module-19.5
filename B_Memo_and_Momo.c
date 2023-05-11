#include<stdio.h>

int main()
{
    long long unsigned int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);
    long double ad, bd;
    ad = a % k;
    bd = b % k;
    // printf("%.2f %.2f\n", ad, bd);
    if(ad==0.0 && bd==0.0){
        printf("Both");
    }else if(ad==0.0 && bd!=0.0){
        printf("Memo");
    }else if(ad!=0.0 && bd==0.0){
        printf("Momo");
    }else{
        printf("No One");
    }
    return 0;
}