#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,o;
    float sum=0,sum1=0,sum2=0;
    float w_i[10],w_j[10],w_k[10];
    float o_i[10],o_j[10],o_k[10];
    cout<<"How many input:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>o_i[i]>>w_i[i];
        sum+=(o_i[i]*w_i[i]);
    }
    float acivity= sum+0.5;
    //float
    cout<<"How many middle stage:";
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>o_j[i]>>w_j[i];
        sum1+=(o_j[i]*w_j[i]);
    }
    float activity1=sum1+0.5;
    cout<<"How many output stage:";
    cin>>o;
    for(int i=0;i<o;i++)
    {
        cin>>o_k[i]>>w_k[i];
        sum2+=(o_k[i]+w_k[i]);
    }
    return 0;
}
