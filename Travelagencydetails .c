#include<stdio.h>

#include<string.h>
   struct driver
    {
        char Name[50];
        char dl [50];
        char Route[50];
        int kms;
    };
    
  
int main()
{  
        struct driver d1,d2,d3;
         
         printf("Enter the details of the 1st Driver\n");
         printf("Enter the first driver name\n");
         scanf("%s",&d1.Name); 
         printf("Enter the first driver driving license no.\n");
         scanf("%s",&d1.dl);
         printf("Enter the first driver route\n");
         scanf("%s",&d1.Route);
         printf("Enter the first drivers kms\n");
         scanf("%d",&d1.kms);

 
         printf("\nEnter the details of the 2nd Driver\n");
         printf("Enter the Second driver name\n");
         scanf("%s",&d2.Name);
         printf("Enter the Second driver driving license no.\n");
         scanf("%s",&d2.dl);
         printf("Enter the Second driver route\n");
         scanf("%s",&d2.Route);
         printf("Enter the Second drivers kms\n");
         scanf("%d",&d2.kms);


         printf("\nEnter the details of the 3rd Driver\n");
         printf("Enter the third driver name\n");
         scanf("%s",&d3.Name);
         printf("Enter the third driver driving license no.\n");
         scanf("%s",&d3.dl);
         printf("Enter the third driver route\n");
         scanf("%s",&d3.Route);
         printf("Enter the third drivers kms\n");
         scanf("%d",&d3.kms);

       printf("\n******The First driver information is*******\n");
       printf("\nFor driver no. 1:\nName is = %s",d1.Name);
       printf("\nDriving license no. is = %s",d1.dl);
       printf("\nDriver Route is = %s",d1.Route);
       printf("\nDriving Kms is = %d",d1.kms);

       printf("\n******The Second driver information is*******\n");
       printf("\nFor driver no. 2:\nName is = %s",d2.Name);
       printf("\nDriving license no. is = %s",d2.dl);
       printf("\nDriver Route is = %s",d2.Route);
       printf("\nDriving Kms is = %d",d2.kms);

       printf("\n******The Thirs driver information is*******\n");
       printf("\nFor driver no. 3:\nName is = %s",d3.Name);
       printf("\nDriving license no. is = %s",d3.dl);
       printf("\nDriver Route is = %s",d3.Route);
       printf("\nDriving Kms is = %d",d3.kms);


    
     return 0;
}