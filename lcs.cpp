#include<iostream>
#include<cstring>
using namespace std;
#define MAX 1000
int max_(int a,int b)
{
    return a>b?a:b;
}
void lcs(char s1[],char s2[],int n,int m)
{int temp[n+1][m+1];
int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0||j==0)
                temp[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                temp[i][j]=temp[i-1][j-1]+1;
            else
                temp[i][j]=max_(temp[i-1][j],temp[i][j-1]);
        }
    }
    cout<<"THE LENGTH OF LONGEST COMMON SUBSEQUENCE IS "<<temp[n][m];

}
int main()
{int t;
cout<<endl<<"ENTER THE NO OF TEST CASES"<<endl;
cin>>t;
while(t--)
    {int n,m;
    char s1[MAX],s2[MAX];
    cin>>s1>>s2;
    n=strlen(s1);
    m=strlen(s2);
    lcs(s1,s2,n,m);
    }
}
