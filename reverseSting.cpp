#include<cstring>
#include<iostream>
using namespace std;
int reverse(char *str){
    
    int length=strlen(str);
    int left=0;
    while(length>left){
        {
            swap(str[length-1],str[left]);
             left++;
            length--;
        }
    }
}
int main()
{
    char str[]="This is a Sample string ";
    reverse(str);   
    cout<<str;
}
