#include <stdio.h>
void setup() {
  // put your setup code here, to run once:
int arr[4]={2,5,3,4};
    int sum=0;
    int product=1;
printf("the array elements: ");
for(int i=0;i<4;i++){
  printf("%d ",arr[i]);
  sum+=arr[i];
product*=arr[i];
}
printf("sum:%d \n",sum);
printf("product:%d \n",product);
}

void loop() {
  // put your main code here, to run repeatedly:

}
