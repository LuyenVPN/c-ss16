#include <stdio.h>
void inra(int *arrpr, int n){
	for (int i=0; i< n; i++){
		printf("%d ", *(arrpr + i));
} 
}
int main(){
	int arr[100]; 
	int n;
	printf("nhap so phan tu muon nhap: ");
	scanf("%d", &n);
	for (int i=0; i< n; i++){
		printf("phan tu thu %d la: ", i+1);
		scanf("%d",&arr[i]);
	} 
	printf("cac phan tu trong mang la: "); 
	inra (arr,n);
	return 0; 
} 
