#include<stdio.h>
int main()
{   printf("I am Arpit sharma and I am learning github");
    printf("MY FIRST PROGRAM TO LEARN GITHUB");
    printf("THANKYOU");
    
    int key;
    int flage=0;
    int arr[]={1,2,3,4,6,7,8,9,10};
    scanf("%d",&key);
    if (key<arr[0] || key>arr[8]){printf("key is not found");}
    else{
    for(int i=0;i<9;i++){
        if (arr[i]==key){
            printf("key is fount at index %d",i);
            flage=1;
            break;

        }
    }
	}
    if (flage==0){
    	printf("key is not found");
	}
return 0;

}