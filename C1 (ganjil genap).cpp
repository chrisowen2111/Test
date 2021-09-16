//#include<stdio.h>
//
//int main(){
//	int t;
//	scanf("%d", &t);
//	
//	int total;
//	total = t*3;
//	
//	printf("%d\n", total);
//	
//	return 0;
//}

#include<stdio.h>

int main(){
	int t,n;
	scanf("%d", &t);
	
	for(int i=0;i<t;i++){
		scanf("%d", &n);
		printf("Case #%d: ", i+1);
		
		if(n%2==0){
			printf("Genap\n");
		}
		else{
			printf("Ganjil\n");
		}
	}
	
	return 0;

}
