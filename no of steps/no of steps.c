#include<stdio.h>
int main() {
	int n,a[1000],b[1000],i,j,iteration=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	int min=a[0];
	for(i=0;i<n;i++){
		if(min>a[i])
			min=a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) {
			if(a[j]!=min){
				a[j]-=b[j];
				if(a[j]<min){
				    printf("-1");
				    return 0;
				}
			iteration++;
			}
		}
	}
	printf("%d",iteration);
}
