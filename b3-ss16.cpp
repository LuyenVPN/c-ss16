#include<stdio.h>
void tong(int *a, int *b, int *sum){
	*sum= *a + *b; 
}  
int main(){
	int x,y;  
	printf("nhap so thu nhat: ");
	scanf("%d",&x);
	printf("nhap so thu hai: ");
	scanf("%d",&y);
	int ketqua; 
	tong(&x, &y, &ketqua);
	printf("tong la: %d", ketqua);
	return 0; 
} 
