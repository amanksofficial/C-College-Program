

int main() {
    // Write C code here
int year;
    printf("enter year:->");
    scanf("%d", &year);
    if (year%100==0){
        if (year%400==0){
            printf("leap year");
        }
        else{
            printf("not leap year");
           \\by aman singh  
         }
    } else{
        if(year%4==0){
        printf("leap year");
        }
        else{
            printf("not leap year");
            }
       }
    return 0;
}
