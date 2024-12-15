#include<stdio.h>
void swap(int *a, int *b){
	int temp= *a;
	*a =*b;
	*b= temp; 
}  
int main(){
	int x,y; 
	printf("nhap so thu nhat: ");
	scanf("%d",&x);
	printf("nhap so thu hai: ");
	scanf("%d",&y);
	printf("so thu nhat la %d va so thu hai la %d\n", x,y);
	swap(&x, &y);
	printf("sau khi sua so thu nhat la %d va so thu hai la %d", x,y);
	return 0; 
} 
