#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

  int movie(){
   	int f,e;
   	char c[20];
   	char a[3][20]={"ab","cd","ef"};
   	char b[3][20]={"10","11","12"};
   	printf("choose the film :");
   	scanf("%d",&f);
   	printf("%s\n",a[f]);
   	if(f==0)
   		c[20]=a[0];
	   
	else if(f==1)
		c[20]=a[1];
	   
	else
		c[20]=a[2];
		
	printf("choose the hour :");
   	scanf("%d",&e);
   	printf("%s\n",b[e]);
   	if(e==0)
   		c[20]=b[0];
	   
	else if(e==1)
		c[20]=b[1];
	   
	else
		c[20]=b[2];
		
		
	
  
   	printf("%s %s\n",a[f],b[e]);
   	corn();
   	
   	
   }
   
   int corn(){
   	int ppcrn;
   	printf("do you wanna eat popcorn ?\n");
   	scanf("%d",&ppcrn);
   	
   	if(ppcrn==1)
   	  printf("i wanna eat\n");
   	else
   	  printf("i dont wanna eat\n");
	   
   
   
main();
}


int main(int argc, char *argv[]) {
	
	int film,misir,choise;
	
	printf("choose ur choise :");
	scanf("%d",& choise);
	

		switch(choise){
			case 2:
				movie();
				break;
			case 1:
				corn();
				break;
			default :
			    printf("isleminiz sona ermistir");
				break;	
				
			 
		}

	
	
	return 0;
}
