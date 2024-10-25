#include<iostream>
#define Q(R,TR,C)(R+C*TR)
using namespace std;int X=64,Y=32,S=Y*X,g[2048];int main(){for(int _=-1;_<S;g[++_]=0);g[S>>1]=1;for(int i=0;i<S-1;++i){int a=i-1<0?--S:i-1,b=i+1>S-1?0:i+1;g[Q(i/X+1,Y,i%X)]=g[Q(a/X,Y,a%X)]^g[Q(b/X,Y,b%X)];}for(int _=0;_<S;putchar(++_%X==0?'\n':g[_]));return 0;}
