#include<iostream>
using namespace std;
struct point
{
    float x1;
    float x2;
    float x3;
    float desired;


};
main()
{
    float w1,w2,w3,e=0.5;
    point s[100];
    w1=1;
    w2=1;
    w3=1;
    e=0.5;
    int n;
    cout<<" Enter n:";
    cout<<endl;
    cin>>n;

    for(int i=1; i<=n; i++)
    {

        cout<<"step:"<<i<<endl;
        cin>>s[i].x1>>s[i].x2>>s[i].x3>>s[i].desired;

    }

    int i=1;
    while(i<=n)
    {
        float r,out;
        r=s[i].x1*w1+s[i].x2*w2+s[i].x3*w3;
        if(r>0)
            out=1;
        else
            out=0;

        if(out!=s[i].desired&&out==0)
        {
            w1=w1+e*s[i].x1;
            w2=w2+e*s[i].x2;
            w3=w3+e*s[i].x3;
            i=1;
        }
        if(out!=s[i].desired&&out==1)
        {
            w1=w1-e*s[i].x1;
            w2=w2-e*s[i].x2;
            w3=w3-e*s[i].x3;
            i=1;
        }
        i++;
    }
    cout<<"output: ";
    cout<<w1<<"  "<<w2<<"  "<<w3<<endl;

    float f1=w1, f2= w2, f3 = w3,ans;
    int p1, p2, p3;
    cin>>p1>>p2>>p3;
    ans= (p1*f1) + (p2*f2) +(p3*f3);
    if(ans>0)
        ans = 1;
    else
        ans = 0;
    cout<<ans;

}
