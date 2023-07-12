#include<stdio.h>
int main(){
	int c,z,z1,p1,p2,p3,p4,z2,z3,z4,r2,r1,r3,r4;
	printf("press 1 for pakistan \n");
	printf("press 2 for india\n");
	printf("press 3 for england\n");
	scanf("%d",&c);
	if(c==1){
			printf("\nWe have the following book\n");
			printf("press 1 Alchemist (15) \n"); 
			printf("press 2 Sapiens(20) \n"); 
			printf("press 3 for Atomic habits(5) \n"); 
			printf("press 4 for the power of your subconscious mind(7)\n ");
		scanf("%d",&z);
		if(z==1){
			printf("ALCHEMIST PRICE IS RS=300\n");
			printf("enter how many books you purchased:");
			scanf("%d",&p1);
			r1=15-p1;
			printf("BOOKS LEFT %d",r1);
		}
		else if(z==2){
			printf("THE PRICE OF  Sapiens is RS=500 \n HOW MANY BOOK YOU WANT TO PARCHESED:");
			scanf("%d",&p2);
				 r2=15-p2;
					printf("BOOKS LEFT %d",r2);
		}
		else if(z==3){	
				printf("THE PRICE OF  Atomic habits is RS=500 \n HOW MANY BOOK YOU WANT TO PARCHESED:");
				scanf("%d",&p3);
					 r3=15-p3;
							printf("BOOKS LEFT %d",r3);
		}
		else if(z==4){
				printf("THE PRICE OF  the power of your subconscious mind is RS=500 \n HOW MANY BOOK YOU WANT TO PARCHESED:");
				scanf("%d",&p4);
					r4=15-p4;
						printf("BOOKS LEFT %d",r4);
		}
	}
	else if(c==2){
			printf("we have the following book \n press 1 Alchemist (15) \n press 2 Sapiens(20) \n press3 for Atomic habits(5) \n press 4 for the power of your subconscious mind(7)");
			scanf("%d",&z1);
				
			printf("we have the following book \n press 1 Alchemist (15) \n press 2 Sapiens(20) \n press3 for Atomic habits(5) \n press 4 for the power of your subconscious mind(7)");
		scanf("%d",&z1);
		if(z1==1){	
			printf("ALCHEMIST PRICE IS RS=300\n enter HOW MANY BOOK YO PRCHACES");
			scanf("%d",&p1);
			 r1=15-p1;
			printf("BOOKS LEFT %d",r1);
		}
		else if(z1==2){
			printf("THE PRICE OF  Sapiens is RS=500 \n HOW MANY BOOK YOU WANT TO PARCHESED");
			scanf("%d",&p2);
				r2=15-p2;
					printf("BOOKS LEAFT%d",r2);
		}
		else if(z1==3){
				printf("THE PRICE OF  Atomic habits is RS=500 \n HOW MANY BOOK YOU WANT TO PARCHESED");
				scanf("%d",&p3);
						 r3=15-p3;
							printf("BOOKS LEAFT%d",r3);
		}
		else if(z1==4){
				printf("THE PRICE OF  the power of your subconscious mind is RS=500 \n HOW MANY BOOK YOU WANT TO PARCHESED");
				scanf("%d",&p4);
					r4=15-p4;
						printf("BOOKS LEAFT%d",r4);
		}		
	}
	else if(c==3){
			printf("we have the followi book \n press 1 Alchemist (15) \n press 2 Sapiens(20) \n press3 for Atomic habits(5) \n press 4 for the power of your subconscious mind(7)");
		scanf("%d",&z2);
			if(z1==1){	
			printf("ALCHEMIST PRICE IS RS=300\n enter HOW MANY BOOK YO PRCHACES");
			scanf("%d",&p1);
			 r1=15-p1;
			printf("BOOKS LEAFT%d",r1);
		}
		else if(z1==2){
			printf("THE PRICE OF  Sapiens is RS=500 \n HOW MANY BOOK YOU WANT TO PARCHESED");
			scanf("%d",&p2);
				 r2=15-p2;
					printf("BOOKS LEAFT%d",r2);
		}
		else if(z1==3){
				printf("THE PRICE OF  Atomic habits is RS=500 \n HOW MANY BOOK YOU WANT TO PARCHESED");
				scanf("%d",&p3);
						 r3=15-p3;
							printf("BOOKS LEAFT%d",r3);
		}
		else if(z1==4){
				printf("THE PRICE OF  the power of your subconscious mind is RS=500 \n HOW MANY BOOK YOU WANT TO PARCHESED");
				scanf("%d",&p4);
					 r4=15-p4;
						printf("BOOKS LEAFT%d",r4);
		}
	}
}
