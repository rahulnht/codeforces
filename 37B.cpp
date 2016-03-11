#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265359
#define zero(a) (abb(a)<=1e-7)
#define lowbit(a) ((a)&(-(a)))
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) a%b
#define abb(a) ((a)>0?(a):(-(a)))
#define F(n) scanf("%d",&n);
#define G(n) printf("%d",n);
#define newnewnew printf("\n");

using namespace std;

#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++)

int N,H,reg,power[1000],damage[1000];
bool used[1000];
int ans[1000];

int func(void){
	int t,i,sumdmg=0;

	int h = H;
	REP(t,1005){
		int next = -1;

		REP(i,N) if(!used[i]){
			if(h*100 > H * power[i]) continue;
			if(next == -1 || damage[i] > damage[next]) next = i;
		}
		if(next != -1){
			used[next] = true;
			ans[t] = next;
			sumdmg += damage[next];
		}
		h -= sumdmg;
		h = min(H,h+reg);
		if(h <= 0) return t+1;
	}
	return -1;
}

int main(void){
	int i;
	F(N);
    F(H);
    F(reg);
	REP(i,N) 
	{
		F(power[i]);
		F(damage[i]);
	}

	REP(i,1005) ans[i] = -1;

	int T = func();
	if(T != -1){
		printf("YES\n");
        int cnt = 0;
		REP(i,1005) if(ans[i] != -1) cnt++;
		G(T);	
		printf(" ");
		G(cnt);
		newnewnew;

		REP(i,1005) if(ans[i] != -1){  G(i); printf(" "); G(ans[i]+1); newnewnew; }
	} else {
		printf("NO\n");
	}
	return 0;
}