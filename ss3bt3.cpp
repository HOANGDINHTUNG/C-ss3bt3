#include<stdio.h>
int main(){
	float bk, chu_vi, dien_tich;
	float pi= 3.14;
	printf("moi nhap vao ban kinh : ");
	scanf("%f",&bk);
	chu_vi=2 * pi * bk;
	dien_tich=bk * bk * pi;
	printf("chu vi hinh tron la: %.2f\n",chu_vi);
	printf("dien tich hinh tron la: %.2f\n",dien_tich);
	return 0;
	
}
