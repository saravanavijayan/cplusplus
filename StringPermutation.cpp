#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

char *swap(char *x,char *y){
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void printCombin(char *str,int start,int end)
{
    int i;
    if( start==end )
       cout<<*str<<endl;
       else
       {
            for( i=start;i<=end;i++ )
            {
               swap( (str+start),(str+i) );
               printCombin( str+start,start+1,end );
               swap( (str+start),(str+i) );
            }
        }
}

int main()
{
    cout<<"Test";
    char str[]={"ABCD"};
    int n=strlen(str);
    printCombin(str,0,n-1);
    return 0;
}
