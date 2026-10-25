  #include<iostream>
using namespace std;
int fact(int p)
{   int res;
    res=1;
    for(int i = p;i>1;i--)
    res*=i;
return res;
}
int Binocoef( int n, int r)
{
    int coef;
    coef=(fact(n)/(fact(r)*fact(n-r)));
    return coef;
}
void printTriangle(int n)
{
    for (int l=0;l<n;l++)
        {
            for(int m=0;m<=l;m++){
                cout<<"\t"<<Binocoef(l,m);
            }
            cout<<"\n";
        }
}
int main()
{
    int n;
    cout<<"Enter the no. of rows=";
    cin>>n;
    printTriangle(n);
    return 0;
}
