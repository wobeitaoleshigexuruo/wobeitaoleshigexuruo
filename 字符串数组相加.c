#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char add(char*a,char*b,int *carry){
	int c;
	char d;
	c=*a-'0'+*b-'0'+*carry;
	d=c%10+'0';
	*carry=c/10;
	return d;


} 

int main(){
	char A[90];
	char B[90];
	char o='o';
	gets(A);
	gets(B);
	int lena=strlen(A),lenb=strlen(B);
	int len=1+(lena>lenb?lena:lenb);
	int carry=0,i,j,k;
	char*C=(char*)calloc(len+1,sizeof(char));
	for( i=lena-1,j=lenb-1,k=0;i>=0,j>=0;j--,i--){
		C[k++]=add(&A[i],&B[j],&carry);
	}
	while(i>=0){
		C[k++]=add(&A[i],&o,&carry);
		i--;
	}
	while(j>=0){
		C[k++]=add(&B[j],&o,&carry);
		j--;
}
	if(carry){
		C[k++]=carry+'0';
	}
	int q=0,w=0;
	for( q=k-1,w=0;q>=0;w++,q--){
		char temp=C[q];
		C[q]=C[w];
		C[w]=temp;
	}
	int e=0;
	while(k-1>=0){
	printf("%c",C[e]);
	k--;
	w++;
	}
return 0;
} 
