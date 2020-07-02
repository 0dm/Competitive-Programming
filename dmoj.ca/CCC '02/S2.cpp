#include<iostream>
#include<algorithm>

/**
 *  CCC '02 S2 - Fraction Action
 *  saucy
 *  4/9/2020
 *  compact haha
**/


void reduce(int a,int b){if(a==0){std::cout<<0;}
else if(a%b==0){std::cout<<a/b;}
else{int whole=0;while(true){if(a-b<0){break;}
else{a-=b;whole++;}}
int gcd=std::__gcd(a,b);a/=gcd;b/=gcd;if(whole){std::cout<<whole<<" "<<a<<"/"<<b;}
else{std::cout<<a<<"/"<<b;}}}
int main(){int a,b;std::cin>>a>>b;reduce(a,b);}