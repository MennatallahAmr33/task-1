void setup() {
  // put your setup code here, to run once:
int arr[4]={3,6,2,5};
    for(int i=0;i<4;i++){
            printf("Row %d (%d): ",i+1,arr[i]);
       for(int j=0;j<arr[i];j++){
        printf("*");
       }
   printf("\n");
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
