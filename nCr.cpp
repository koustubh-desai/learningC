
#include <iostream>

#define BINT unsigned long long int
using namespace std;
BINT Combination(int,int);
int HCF(int,int);
int MOD = 1000000007;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m
    BINT res;
    res = Combination(n,m)
    return 0;
}
BINT Combination(int n, int r){
	int i,j,hcf;
	int num[1000];
	int den;
    BINT res;
	r = (n-r<r)?n-r:r;
	res = 1;
	// build num
	for(i=0;i<r;i++){
		num[i] = n-i;
	}
	//compare denom
	for(i=2;i<=r;i++){
		den = i;
		for(j=0;j<r;j++){
			hcf = HCF(num[j],den);
			num[j] = num[j]/hcf;
			den = den/hcf;
			if(den == 1){break;}
		}
	}
	//print the numbers;
	for(i=0;i<r;i++){
		res = (res * (num[i]%MOD))%MOD;
        //res = res * num[i];
	}
	
	return res;
}
int HCF(int a, int b){
	int max,min;
	if(a==b) return a;
	max = (a>b)?a:b;
	min = (a<b)?a:b;
	
	if(max%min == 0) return min;
	return HCF(min,max%min);
}
