#include<cstring>
void reverseStringWordWise(char input[]) {
     //finding the length of the string 
   int i=0;
    char temp;
    //swapping of whole string
    int start=0, end=strlen(input)-1;
    while(start <= end)
    {
        temp=input[start];
        input[start]=input[end];
        input[end]=temp;
        start++;
        end--;
    }
    //swapping each word now
    i=0;
    start=0;
    while(input[i]!='\0')
    {
        if(input[i]==' ')
        {
            end=i-1;
            while(start<=end)
            {
                temp=input[start];
                input[start]=input[end];
                input[end]=temp;
                start++;
                end--;
            }
            start=i+1;
        }
        if(input[i+1]=='\0')
        {
            end=i;
            while(start<=end)
            {
                temp=input[start];
                input[start]=input[end];
                input[end]=temp;
                start++;
                end--;
            }
        }
        i++;
    }
    
}
