#include<iostream>
#include<algorithm>
#define Q(R,TR,C)(R+C*TR)
using namespace std;int X=64,Y=32,S=Y*X,g[64*32];int main(){generate_n(g,S,[]{return 0;});g[S>>1]=1;for(int i=0;i<S-1;i++){int a=i-1<0?--S:i-1,b=i+1>S-1?0:i+1;g[Q(i/X+1,Y,i%X)]=g[Q(a/X,Y,a%X)]^g[Q(b/X,Y,b%X)];}for(int i=0;i<S;i++)i%X==0?cout<<'\n':cout<<g[i];;return 0;}