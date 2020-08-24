#include<stdio.h>

int main(){
	int N , Q , i , j , L , R;

scanf("%d%d",&N,&Q);
int a[N] , b[Q] , bit , value;

for( i = 1 ; i <= N ; i++)
   scanf("%d",&a[i]);

while(Q--)
{
 scanf("%d",&value);
if( value == 1)
    {
        scanf("%d",&bit);
            if(a[bit] == 0)
                a[bit] = 1;
            else
                a[bit] = 0 ;
    }
else
    {
        // value is 0
        scanf("%d%d",&L,&R); /// if last bit  in array is 1 i.e suppose 1 1 0 1 in array i.e last number will be odd..see the last bit of array  
        if(a[R] == 1)
            printf("ODD\n");
        else
            printf("EVEN\n");
    }
}
return 0;

}
