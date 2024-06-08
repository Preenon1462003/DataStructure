#include <iostream>
using namespace std;
int main(){
int n;
printf("Enter the size of the array.\n");
scanf("%d",&n);
int a[n];
printf("Enter value: \n");
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Values are: \n");
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;

}