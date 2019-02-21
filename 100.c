#include <stdio.h>

int main()
{

int n;
scanf("%d", &n);
int arr[n][n];

for(int i = 0; i<n; i++){
for(int j = 0; j<n; j++){
scanf("%d", &arr[i][j]);
printf("%3d ",arr[i][j]);
}
printf("\n");
}

int i=n-1,j=0;
int pr =1;
int m =-1;
int ci =1;
int counter =1;

printf("%d ", arr[i][j]);

while((i!=0) || (j!=n-1)){

if(pr==1)j++;
if(pr==-1)i--;

if(counter != n-1)pr = -pr;

printf("%d ", arr[i][j]);

for(int k = 0; k<counter;k++){
i+=m;
j+=m;
printf("%d ", arr[i][j]);
}
if(counter == n-1){
ci=-1;
}

counter+=ci;
if(counter<0) break;
m=-m;

}
printf("\n");
return 0;
}

