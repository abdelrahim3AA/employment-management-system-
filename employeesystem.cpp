#include <bits/stdc++.h>
using namespace std;
const int MAX=1000;
string name [MAX];
int age[MAX];
float salary[MAX];
char gen[MAX];
int n=0;
///******************
int mineo();
void add();
void print();
void del();
void ubdate();
void information();
///******************
int main()
{
   information();


    return 0;
}
int mineo()
{
    int c=0;

    while(c==0)
    {
        cout<< endl<<"Enter your choise"<<endl;
        cout<< "1) ADD a new employee : ENTER 1 "<<endl;
        cout<< "2) PRINT all employee in your DATABASE : ENTER 2 "<<endl;
        cout<< "3) DELET employee by her/she AGE :  ENTER 3 "<<endl;
        cout<< "4) Ubdate the SALARY for any employee :  ENTER 4 "<<endl;
    cin>> c;
    if(!(c>=1&&c<=4)){
        cout<< "ERROR IN INPUT"<<endl;
        c=0;
    }
    }
    return c;

}

void add()
{

  cout<< "ENTER NAME "<<endl  ;
  cin>> name[n] ;
  cout<< "ENTER AGE "<<endl;
  cin>> age[n];
  cout<< "ENTER SALARY "<<endl;
  cin>> salary[n];
  cout<< "ENTER GENDER "<<endl;
  cin>> gen[n];
  n++;
}

void print()
{
    if(n==0){cout<<"THERE IS NO EMPLOYEE FOR SHOWN !! ";}
    else{
        for(int i=0;i<n;i++)
    {
        if(age[i]!=0){
        cout<< "TEH EMPLOYEE NUMBER  ["<<i+1<<"] "<<" ";
        cout<<"NAME : " <<name[i]<<" "
        <<", AGE : "<<age[i]<<" "
        <<", SALARY : "<<salary[i]<<" "
        <<", GENDER : "<<gen[i]<<endl;
        }
    }
    }
}

void del()
{
    cout<< "you are want DELETE employee by AGE enter the range ? "<<endl ;
    int b=0,e=0;
    cout<< "FROM : "; cin>> b;
    cout<< "TO : "; cin>> e;
    cout<< "OK" <<" : DELETE IS COMPLETE ";
    for(int i=0;i<n;i++)
    {
        if(age[i]>=b&&age[i]<=e){
            age[i]=0;
        }
    }
}
void ubdate()
{
    string s1;
    cout<<"you want UBDATE the salary for employee : ";
    cin>> s1;
    float s;
    cout<< "enter the new salary : ";
    cin>> s;
    bool ch=false;
    for(int i=0;i<n;i++)
    {
        if(age[i]!=0&&s1==name[i])
        {
            ch=true ;
            salary[i]=s;
        }
        if(ch!=true)
        {
            cout<< "THIS EMPLOYEE IF NOT FOUND !!"<<endl ;
        }
    }
}

void information()
{
    int x=0;
    while(true){
        x=mineo();
        if(x==1){
            add();
        }
        else if(x==2){
            print();
        }
        else if(x==3){
            del();
        }
        else if(x==4){
            ubdate();
        }
    }

}
