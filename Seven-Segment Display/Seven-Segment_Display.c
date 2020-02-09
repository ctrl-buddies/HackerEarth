//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/
//complete solved !!
//Time (sec) 1.05111
#include<stdio.h>
int main()
{
    int t,i;
    char n[101];
    scanf("%d",&t);
    while(t>0){
        short c=0;
        scanf("%s",n);
        for(short i=0;n[i]!='\0';i++)
        {
            switch(n[i]){
                case '0':
                case '6':
                case '9':c+=6;break;
                case '1':c+=2;break;
                case '2':
                case '3':
                case '5':c+=5;break;
                case '4':c+=4;break;
                case '7':c+=3;break;
                case '8':c+=7;break;
            }
        }
       // printf("\nsum is %d\n",c);
        if(c%2==0){
            for(i=0;i<c/2;i++)
    	        printf("1");
    	}
    	else{
    	    c=(c-3)/2;
    	    printf("7");
    	    for(i=0;i<c;i++)
    	        printf("1");
        }
    	printf("\n");
    t--;
    }
}
