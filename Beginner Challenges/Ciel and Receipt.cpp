/*
Tomya is a girl. She loves Chef Ciel very much.

Tomya like a positive integer p, and now she wants to get a receipt of Ciel's restaurant whose total price is exactly p.
 Note that the i-th menu has the price 2i-1 (1 ≤ i ≤ 12).

 Since Tomya is a pretty girl, she cannot eat a lot. So please find the minimum number of menus whose total price is exactly p. Note that if she orders the same menu twice, then it is considered as two menus are ordered.
 */

#include<iostream>
using namespace std;
int main()
{
    int t,i,count,a,r;
    cin>>t;
    int p[t];
    for(i=0;i<t;i++)
    {
        cin>>p[i];
        a=0;
        count=0;
        if(p[i]<4096)
        {
            while(p[i])
            {
                if(p[i]%2==1)
                {
                    count++;
                }
                p[i]=p[i]/2;
            }
        }
        else
        {
            r=p[i]%2048;
            a=p[i]/2048;
            while(r)
            {
                if(r%2==1)
                {
                    count++;
                }
                r=r/2;
            }
            count=count+a;
        }
        p[i]=count;

    }
    for(i=0;i<t;i++)
    {
        cout<<p[i]<<endl;
    }
}
