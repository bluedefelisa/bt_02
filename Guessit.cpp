#include<iostream>
#include<time.h>

using namespace std;

int getnum()
{
return rand() %100+1;
}
void guessnum(int &n)
{
    do
    {
        cin  >> n;
        if(n <=0 || n >=101)
        {
        cout << " Please, make sure your number greater than 0 and less than 100. " << endl;
        }
    }
     while(n <1 || n >100);
}
void result(int n, int ln,int &dem)
{
    dem ++;
    if(n  == ln){
        cout << " YOU WON !!!" << endl;
        cout << " YOUR SCORE: "<< 100 - 2*dem << endl;
        cout << " Do you want to play again? "<<endl;
    } else if(n > ln){
            if(n - ln >= 10){cout << " Your number is too big. "<< endl;}
            else if(n - ln <10){cout << " Your number is slightly greater than the lost number. "<<endl;}
    } else if(n < ln){
            if(ln - n >= 10){cout <<" Your number is too small. "<<endl;}
            else if(ln - n < 10){cout <<" Your number is slightly less than the lost number. "<<endl;}
    }
}
bool again(string &s)
{
    if(s == "yes" || s == "Yes") return true;
    else return false;
}
void repeat()
{
    int n;
    srand(time(0));
    int dem =0;
    int lostnum = getnum();
    do
    {
        cout << " Guess your number: ";
        guessnum(n);
        result(n, lostnum,dem);
    }while(n != lostnum);
    string s;
    cin >> s;
    if (again(s) == true)
    {
        repeat();
    }
    else
    {
     cout << " Bye!!!"<<endl;
     cout << " Have a nice day.";
    }
}
int main()
{

    int n;
    srand(time(0));
    int dem =0;
    int lostnum = getnum();
    do{
        cout << " Guess your number: ";
        guessnum(n);
        result(n, lostnum, dem);
    }while(n != lostnum);
        string s;
        cin >> s;
    if (again(s) == true)
    {
        repeat();
    }
    else
    {
     cout << " Bye!!!"<<endl;
     cout << " Have a nice day.";
    }
    return 0;
}
