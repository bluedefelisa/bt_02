#include <bits/stdc++.h>

using namespace std;

string trans(int x)
{
    string s = to_string(x);
    if (s.length()<2) s = '0' + s;
    else return s;

}
int main(){
    int d,m,y;
    int month[12]={31,0,31,30,31,30,31,31,30,31,30,31};
    int month_inv[12]={31,30,31,30,31,31,30,31,30,31,0,31};
    int a[1000];
    char c;
    cin>>d>>c>>m>>c>>y;
    int n=0,i;

    while (true){
        cin>>a[n];
        if (a[n]==0) break;
        else n++;
    }
    n--;

    if (y%100==0){
        if (y%400==0) month[1]=29;
        else month[1]=28;
    }else{
        if (y%4==0) month[1]=29;
        else month[1]=28;
    }
    month_inv[10]=month[1];

    for (i=0; i<=n; i++){
        if (a[i]>0){
            int day = d + a[i];
            int count=0, k =m-1;

            while (day>month[k]){
                day -= month[k];
                k++;
                count++;
                if (k == 12) k=0;
            }

            int y2 = y + (m + count)/12;
             int m2 = k + 1;
            cout<<trans(day)<<'-'<<trans(m2)<<'-'<<y2<<endl;
        }
        else{
            int day = d + a[i];
            if (day<=0){
                int count=0, k=12-m+1;
                while (day <= 0){
                    if (k == 12) k=0;
                    day += month_inv[k];
                    k++;
                    count++;
                }

                int y2 = y - (12-m+count)/12;
                int m2=12-k+1;
                cout<< trans(day)<<'-'<< trans(m2)<<'-'<<y2<<endl;
            }else cout<< trans(day)<<'-'<< trans(m)<<'-'<<y<<endl;
        }
    }
    return 0;
}
