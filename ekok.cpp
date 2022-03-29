#include <stdio.h>
int main(){
int a,b,c,d , enk ;
printf("Enter four integer aq\n");
scanf("%d %d %d %d",&a,&b,&c,&d);
int e ;
if((a<b)&&(a<c)&&(a<d)){
	  enk=a;
}

if((b<a)&&(b<c)&&(b<d)){
	 enk=b;
}
	
if((c<a)&&(c<b)&&(c<d)){
	 enk=c;
}
   
if((d<a)&&(d<b)&&(d<c)){
	enk=d;
}
	
for (enk=1;enk<=a*b*c*d;enk++)
if ((enk%a==0) && (enk%b==0) && (enk%c==0) && (enk%d==0)){
	printf("EKOK:%d",enk);
	break;
}	
}

