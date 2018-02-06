#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

double N_N(double x1, double x2, double y1, double y2);

int main()
{
    int i;
    double class_A_x[10], class_A_y[10], class_B_x[10], class_B_y[10], unknown_x, unknown_y, dis_frm_A[10], dis_frm_B[10], avg_dis_A, avg_dis_B, distance_A=0, distance_B=0;

    cout<<"Input the value of class A:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<"x= ";
        cin>>class_A_x[i];
        cout<<"y= ";
        cin>>class_A_y[i];
    }


    cout<<"Input the value of class B:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<"x= ";
        cin>>class_B_x[i];
        cout<<"y= ";
        cin>>class_B_y[i];
    }

    while(1)
    {
        distance_A=0, distance_B=0;
        cout<<"Input the new value:"<<endl;
        cout<<"x= ";
        cin>>unknown_x;
        cout<<"y= ";
        cin>>unknown_y;

        for(int i=0; i<5; i++)
        {
            dis_frm_A[i]=N_N(class_A_x[i], unknown_x, class_A_y[i], unknown_y);
            distance_A+=dis_frm_A[i];
            dis_frm_B[i]=N_N(class_B_x[i], unknown_x, class_B_y[i], unknown_y);
            distance_B+=dis_frm_B[i];
        }

        avg_dis_A= distance_A/5;
        avg_dis_B= distance_B/5;

        cout<<"Average distance from A= "<<avg_dis_A<<endl;
        cout<<"Average distance from B= "<<avg_dis_B<<endl;

        if(avg_dis_A<avg_dis_B)
            cout<<"( "<<unknown_x<<", "<<unknown_y<<" ) "<<"will be in Class A"<<endl;
        else
            cout<<"( "<<unknown_x<<", "<<unknown_y<<" ) "<<"will be in Class B"<<endl;
    }
    return 0;
}


double N_N(double x1, double x2, double y1, double y2)
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

