#include<Stdio.h>
int main(){
	int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("Enter the element of first matrix\n");
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);   	    
    	}
	}
	printf("\n The element of first matrix is\n");
	for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
    }
	printf("\n Enter the element of second matrix \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n The element of second matrix is \n");
   	for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=0;
            for(k=0;k<3;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
    	}
    }
    printf("\n The Resultant matrix is\n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
    	}
    }
}