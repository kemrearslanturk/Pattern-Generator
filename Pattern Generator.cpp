#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.145
void drawEllipse(int hori,int vert,int array[20][20])
{
    int centerX=9;
    int centerY=9;
    int i,j;

    if (hori<7)
    {
        for(i=0; i<20; i++)
        {
            for(j=0; j<20; j++)
            {
                if((i == centerX - ((hori-1)/2) || i == (centerX+8) - ((hori-1)/2)) &&
                    (j >= (centerY-1) - ((hori-1)/2) && j<= (centerY+1) + ((hori-1)/2))&&
                   (i == centerX - ((vert-1)/2) || i == (centerX+8) - ((vert-1)/2))&&
                   (j >= (centerY-1) - ((vert-1)/2) && j<= (centerY+1) + ((vert-1)/2)))
                    array[i][j] = 1;

                else if((i == (centerX+1) - ((hori-1)/2) || i == (centerX+7) - ((hori-1)/2)) &&
                    (j >= (centerY-2) - ((hori-1)/2) && j<= (centerY+2) + ((hori-1)/2))&&
                   (i == (centerX+1) - ((vert-1)/2) || i == (centerX+7) - ((vert-1)/2))&&
                   (j >= (centerY-2) - ((vert-1)/2) && j<= (centerY+2) + ((vert-1)/2)))
                    array[i][j] = 1;

                else if((i == (centerX+0) - ((hori-1)/2) || i == (centerX+4) - ((hori-1)/2)) && //+0 was +2 // +4 was +6
                    (j >= (centerY-3) - ((hori-1)/2) && j<= (centerY+3) + ((hori-1)/2)))
                    array[i][j] = 1;

                else if((i == (centerX+1) - ((hori-1)/2) || i == (centerX+3) - ((hori-1)/2)) && // +1 was +3 // +3 was +5
                    (j >= (centerY-4) - ((hori-1)/2) && j<= (centerY+4) + ((hori-1)/2)))
                    array[i][j] = 1;

                else if(i == (centerX+2) - ((hori-1)/2) &&                                      // +2 was +4
                    (j >= (centerY-5) - ((hori-1)/2) && j<= (centerY+5) + ((hori-1)/2)))
                    array[i][j] = 1;
                else
                    array[i][j]= 0;

            }
        }
    }

    else{

        for(i=0; i<20; i++)
        {
            for(j=0; j<20; j++)
            {
                if((i == centerX - ((hori-1)/2) || i == (centerX+8) - ((hori-1)/2)) &&
                    (j >= (centerY-1) - ((hori-1)/2) && j<= (centerY+1) + ((hori-1)/2))&&
                   (i == centerX - ((vert-1)/2) || i == (centerX+8) - ((vert-1)/2))&&
                   (j >= (centerY-1) - ((vert-1)/2) && j<= (centerY+1) + ((vert-1)/2)))
                    array[i][j] = 1;

                else if((i == (centerX+1) - ((hori-1)/2) || i == (centerX+7) - ((hori-1)/2)) &&
                    (j >= (centerY-2) - ((hori-1)/2) && j<= (centerY+2) + ((hori-1)/2))&&
                   (i == (centerX+1) - ((vert-1)/2) || i == (centerX+7) - ((vert-1)/2))&&
                   (j >= (centerY-2) - ((vert-1)/2) && j<= (centerY+2) + ((vert-1)/2)))
                    array[i][j] = 1;

                else if((i == (centerX+2) - ((hori-1)/2) || i == (centerX+6) - ((hori-1)/2)) &&
                    (j >= (centerY-3) - ((hori-1)/2) && j<= (centerY+3) + ((hori-1)/2)))
                    array[i][j] = 1;

                else if((i == (centerX+3) - ((hori-1)/2) || i == (centerX+5) - ((hori-1)/2)) &&
                    (j >= (centerY-4) - ((hori-1)/2) && j<= (centerY+4) + ((hori-1)/2)))
                    array[i][j] = 1;
                else if(i == (centerX+4) - ((hori-1)/2) &&
                    (j >= (centerY-5) - ((hori-1)/2) && j<= (centerY+5) + ((hori-1)/2)))
                    array[i][j] = 1;
                else
                    array[i][j]= 0;

            }
        }
    }
}
void drawsquare(int hei,int wid,int array[20][20]){
		int i,j;
	for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			array[i][j]=0;
		}
	}
	if(hei%2==0){
		for(j=10-(hei/2); j<10+(hei/2); j++){
	for(i=10-(wid/2); i<10+(wid/2); i++){
		array[i][j]=1;
		}
}
}
else{
	for(j=10-(hei/2)-1; j<10+(hei/2); j++){
	for(i=10-(wid/2)-1; i<10+(wid/2); i++){
		array[i][j]=1;
		}
}
}	
}
void isoscelestriangle(int x,int array[20][20]){
int i,j;
if(x%2==0){
for(i=0;i<20;i++){
	for(j=0;j<20;j++){
	 if(i<11-(x/2)||i>11+(x/2)-1||j<11-(x/2)||j>11+(x/2)-1){
	 		array[i][j]=0;
	 	}
	 	  else if(i==11+(x/2)-1){
	 		array[i][j]=1;
		 }
		 
		else if(j==11-(x/2)||i==j){
			array[i][j]=1;
		}  
		else{
		array[i][j]=0;	
		}	 
	 }	
	}	
}	
else{
for(i=0;i<20;i++){
	for(j=0;j<20;j++){
	 if(i<11-x/2||i>11+x/2||j<11-x/2||j>11+x/2){
	 		array[i][j]=0;
	 	}
	 	  else if(i==11+x/2){
	 		array[i][j]=1;
		 }
		else if(j==11-x/2||i==j){
			array[i][j]=1;
		}  
		else{
		array[i][j]=0;	
		}
	 }	
	}
}
}
void DrawRing(int inr, int outr, int coordinate[20][20])
{

    int i,j;

    for(i=0; i<20; i++)
    {
        for(j=0; j<20; j++)
        {
            if(sqrt((j-(20)/2)*(j-(20)/2) + (i-(20)/2)*(i-(20)/2))<=(outr) && sqrt((j-(20)/2)*(j-(20)/2) + (i-(20)/2)*(i-(20)/2))>=(inr))
            {
                coordinate[i][j]=1;
            }
            else
            {
                coordinate[i][j]=0;
            }
        }
    }
}
void frame(int h, int w, int t,int array[20][20]){
	int i,j,z,l,arb=0,ars=0,tt=0;
	arb=10-(w/2);
	ars=10-(h/2);
	tt=arb;
	for(i=1;i<=h;i++){
		if(i==1 || i==h){
			for(z=0;z<t;z++){
				for(j=1;j<=w;j++){
				array[ars][arb]=1;
				arb++;
			}
		//	printf("\n");
			ars++;
			//tt++;
			arb=tt;
			}
		}
		else if(i>=t && i<h-t){
				for(l=1;l<=t;l++){
					array[ars][arb]=1;
					arb++;
				    //printf("1");	
				}
				l=1;
				for(l=1;l<=w-2*t;l++){
					array[ars][arb]=0;
					arb++;
					//printf("0");
				}
				l=1;
				for(l=1;l<=t;l++){
					array[ars][arb]=1;
					arb++;
				    //printf("1");	
				}
				l=1;
			//printf("\n");
			ars++;
			//tt++;
			arb=tt;
		}
		

	}
}
void PlusSign(int row,int collum,int array[20][20]){
int i,j;
for(i=0;i<20;i++){
	for(j=0;j<20;j++){
		if(j<(20-collum)/2||j>(20+collum)/2||i>(20+row)/2||i<(20-row)/2)
		array[i][j]=0;
		else if(j==10||i==10)
		array[i][j]=1;
		else{
			array[i][j]=0;
		}	
	}
}	
}
void DrawT(int vert,int hori,int array[20][20])
{
    int i,j;

    for(i=0; i<20; i++)
    {
        for(j=0; j<20; j++)
        {
            array[i][j]=0;
        }
    }
    if(vert%2==0 && hori%2==0)
    {

        for(i=10-((hori)/2); i<10+((hori)/2); i++)
        {
            array[i][9]=1;
        }
        for(j=10-((vert)/2); j<10+((vert)/2); j++)
        {
            array[20-i][j]=1;
        }
    }
    else if(vert%2==0)
    {

        for(i=9-((hori-1)/2); i<9+((hori+1)/2); i++)
        {
            array[i][9]=1;
        }
        for(j=10-((vert)/2); j<10+((vert)/2); j++)
        {
            array[20-i][j]=1;
        }
    }
    else if(hori%2==0)
    {

        for(i=10-((hori)/2); i<10+((hori)/2); i++)
        {
            array[i][9]=1;
        }
        for(j=9-((vert-1)/2); j<9+((vert+1)/2); j++)
        {
            array[20-i][j]=1;
        }
    }
    
    else
    {
        for(i=9-((hori-1)/2); i<9+((hori+1)/2); i++)
        {
            array[i][9]=1;
        }
        for(j=9-((vert-1)/2); j<9+((vert+1)/2); j++)
        {
            array[19-i][j]=1;
        }
    }
}
void draw_X(double angle,int a,int array[20][20]){
	int i,j,temp;
	float x,y;
	double radyan;
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			array[i][j]=0;
		}
	}
	radyan=(angle/180)*pi;
	x=(a*cos(radyan/2));
	x=round(x);	
	for(i=0;i<=x;i++){
		y=tan(radyan/2)*i;
		y=round(y);
		y=10-y;
		temp=i;
		i=i+10;
		array[(int)y][i]=1;
		i=temp;		
	}
	for(i=-x;i<=0;i++){
		y=-tan(radyan/2)*i;
		y=round(y);
		y=10-y;
		temp=i;
		i=i+10;
		array[(int)y][i]=1;
		i=temp;	
	}
	for(i=-x;i<=0;i++){
		y=-tan(radyan/2)*i;
		y=round(y);
		y=10+y;
		temp=i;
		i=i+10;
		array[(int)y][i]=1;
		i=temp;
	}
	for(i=0;i<=x;i++){
		y=tan(radyan/2)*i;
		y=round(y);
		y=10+y;
		temp=i;
		i=i+10;
		array[(int)y][i]=1;
		i=temp;
	}	
}
void DrawH(int row,int collum,int array[20][20]){
int i,j;

for(i=0;i<20;i++){
	for(j=0;j<20;j++){
		if(j<(20-row)/2||j>(20+row)/2||i<(20-collum)/2||i>(20+collum)/2)
		array[i][j]=0;
		else if(j==(20-row)/2||j==(20+row)/2||i==10)
		array[i][j]=1;
		else{
			array[i][j]=0;
		}
	}
}		
}
int main(){
	printf("Please select level 1-2 or 3 : ");
	int level;
	int pat;
	scanf("%d",&level);
	
	if(level==1){
		printf("1-Elipse\n2-Rectangle\n3-IsoscelesTriangle\n4-Ring\n5-RectangularFrame\n6-PlusSign\n7-X\n8-T\n9-H\n");
		printf("Please enter a pattern: ");
		scanf("%d",&pat);
		int arrayp1[20][20];
		if(pat==1){
			int hori, vert;
    int array1[20][20];
    int i,j;

    printf("\nEnter horizantal coordinate:");
    scanf("%d",&hori);
    printf("\nEnter vertical coordinate:");
    scanf("%d",&vert);
    drawEllipse(hori,vert,array1);
    for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i][j]=array1[i][j];
	}
}
	for(j=0; j<20; j++){
		for(i=0; i<20; i++){
			printf("%d ",arrayp1[i][j]);
		}
			printf("\n");
	}
			
		}
		else if(pat==2){
			int heigth,width;
	printf("Enter the height value: ");
	scanf("%d",&heigth);
	printf("Enter the width value: ");
	scanf("%d",&width);
	  int array1[20][20];
	int i,j;
	drawsquare(heigth,width,array1);
	for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i][j]=array1[i][j];
	}
}
	for(j=0; j<20; j++){
		for(i=0; i<20; i++){
			printf("%d ",arrayp1[i][j]);
		}
			printf("\n");
	}
			
		}
		else if(pat==3){
				int x,i,j;
		int array1[20][20];
printf("Enter the side length:");
scanf("%d",&x);
isoscelestriangle(x,array1);	
 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i][j]=array1[j][i];
	}
}
	for(j=0; j<20; j++){
		for(i=0; i<20; i++){
			printf("%d ",arrayp1[i][j]);
		}
			printf("\n");
	}
			
		}
		else if(pat==4){
				 int i,j;
    int inr,outr;
    int array1[20][20];
    printf("Enter inner radius: ");
    scanf("%d",&inr);
    printf("\nEnter outer radius: ");
    scanf("%d",&outr);
    printf("\n");
    DrawRing(inr,outr,array1);
   for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i][j]=array1[j][i];
	}
}
	for(j=0; j<20; j++){
		for(i=0; i<20; i++){
			printf("%d ",arrayp1[i][j]);
		}
			printf("\n");
	}
			
		}
		else if(pat==5){
					int a,b,c;
	int i,j;
	
	printf("Enter the height:");
	scanf("%d",&a);
	printf("\nEnter the width:");
	scanf("%d",&b);
	printf("\nEnter the thickness:");
	scanf("%d",&c);
		int array1[20][20];
		for(int k=0; k<20; k++){
		for(int m=0; m<20; m++){
			array1[k][m]=0;
		}
	}
		frame(a,b,c,array1);
	 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i][j]=array1[j][i];
	}
}
	for(j=0; j<20; j++){
		for(i=0; i<20; i++){
			printf("%d ",arrayp1[i][j]);
		}
			printf("\n");
	}
			
		}
		else if(pat==6){
				int collum,row;
printf("Enter row:");
scanf("%d",&row);	
printf("Enter collum:");
scanf("%d",&collum);		
row=row-1;
collum=collum-1;
	int i,j;
	int array1[20][20];
	
PlusSign(row,collum,array1);
 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i][j]=array1[j][i];
	}
}
for(j=0; j<20; j++){
		for(i=0; i<20; i++){
			printf("%d ",arrayp1[i][j]);
		}
			printf("\n");
	}
			
		}
		else if(pat==7){
				int angle,a,i,j;
	printf("Enter the length:");
	scanf("%d",&a);
	int array1[20][20];
	printf("Enter the angle:");
	scanf("%d",&angle);
	draw_X(angle,a,array1);
	for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i][j]=array1[j][i];
	}
}
	for(j=0; j<20; j++){
		for(i=0; i<20; i++){
			printf("%d ",arrayp1[i][j]);
		}
			printf("\n");
	}
			
		}
		else if(pat==8){
			int i,j;
    int vert,hori;
    int array1[20][20];

    printf("\nEnter heigth:");
    scanf("%d",&hori);
    printf("\nEnter width:");
    scanf("%d",&vert);
    printf("\n");

    DrawT(vert,hori,array1);


     for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i][j]=array1[j][i];
	}
}
for(j=0; j<20; j++){
		for(i=0; i<20; i++){
			printf("%d ",arrayp1[i][j]);
		}
			printf("\n");
	}
			
		}
		else if(pat==9){
				int row,collum;
				int array1[20][20];
printf("Enter the row:");
scanf("%d",&row);	
printf("Enter the collum:");
scanf("%d",&collum);		
row=row-1;
collum=collum-1;	
DrawH(row,collum,array1);
int i,j;
 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i][j]=array1[j][i];
	}
}
for(j=0; j<20; j++){
		for(i=0; i<20; i++){
			printf("%d ",arrayp1[i][j]);
		}
			printf("\n");
	}
			
		}
		
	}
	else if(level==2){
		
		int satir;
	int tekrar;
	int sutun;
	printf("Please enter how many pattern you want:");
	scanf("%d",&satir);
	printf("Enter how many time you want:");
	scanf("%d",&tekrar);
	int p1,p2,p3;
	int array1[20][20],arrayp1[20*satir][20],arrayp2[20][20];
	int sayac;
	for( sayac=0; sayac<satir; sayac++){
	zero:
	printf("Please which pattern do you want:\n");
	printf("1-Elipse\n2-Rectangle\n3-IsoscelesTriangle\n4-Ring\n5-RectangularFrame\n6-PlusSign\n7-X\n8-T\n9-H\n");
	scanf("%d",&p1);
	if(p1==0){
		
		goto zero;
	}
else if(p1==1){
		
	int hori, vert, array1[20][20];
    int i,j;


    printf("\nEnter a:");
    scanf("%d",&hori);
    printf("\nEnter b:");
    scanf("%d",&vert);
    drawEllipse(hori,vert,array1);
    for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}


 
		
	}
	else if(p1==2){
			int heigth,width;
	printf("Enter the height value: ");
	scanf("%d",&heigth);
	printf("Enter the width value: ");
	scanf("%d",&width);
	int i,j;
	drawsquare(heigth,width,array1);
 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
}
	else if(p1==3){
		
		int x,i,j;
		int array1[20][20];
printf("Enter the x:");
scanf("%d",&x);
isoscelestriangle(x,array1);	
 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
	}
	else if(p1==4){ 
	 int i,j;
    int inr,outr;
    int array1[20][20];
    printf("Enter inner radius: ");
    scanf("%d",&inr);
    printf("\nEnter outer radius: ");
    scanf("%d",&outr);
    printf("\n");
    DrawRing(inr,outr,array1);
   for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}

	}
	else if(p1==5){ 
		int a,b,c;
	int i,j;
	
	printf("Enter the h:");
	scanf("%d",&a);
	printf("\nEnter the w:");
	scanf("%d",&b);
	printf("\nEnter the t:");
	scanf("%d",&c);
		int array1[20][20];
		for(int k=0; k<20; k++){
		for(int m=0; m<20; m++){
			array1[k][m]=0;
		}
	}
		frame(a,b,c,array1);
	 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
	
	}
	else if(p1==6){ 
	int collum,row;
printf("Enter row:");
scanf("%d",&row);	
printf("Enter collum:");
scanf("%d",&collum);		
row=row-1;
collum=collum-1;
	int i,j;
PlusSign(row,collum,array1);
 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
	}
	
	else if(p1==7){ 
	
	}
	else if(p1==8){ 
	int i,j;
    int vert,hori;
    int array1[20][20];

    printf("\nEnter heigth:");
    scanf("%d",&hori);
    printf("\nEnter width:");
    scanf("%d",&vert);
    printf("\n");

    DrawT(vert,hori,array1);


     for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
}

	
	else if(p1==9){ 
	int row,collum;
printf("Enter the row:");
scanf("%d",&row);	
printf("Enter the collum:");
scanf("%d",&collum);		
row=row-1;
collum=collum-1;	
DrawH(row,collum,array1);
int i,j;

 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}


  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
}
}
int arraypasil[tekrar*satir*20][20];
int m,i,j;
for(m=0; m<tekrar; m++){
	for(i=0; i<20*satir; i++){
		for(j=0; j<20; j++){
		arraypasil[i+(m*20*satir)][j]	=arrayp1[i][j];
		}
	}
}



for(int j=0; j<20; j++){
	for(int i=0; i<20*satir*m; i++){
	printf("%d ",arraypasil[i][j]);
}
printf("\n");
}
	}
	
	else if(level==3){
	
	int satir;
	int sutun;
	printf("Please enter row of matrice: ");
	scanf("%d",&sutun);
	printf("Please enter column of matrice: ");
	scanf("%d",&satir);
	int arrayson[20*satir][20*sutun];
	int p1,p2,p3;
	int array1[20][20],arrayp1[20*satir][20],arrayp2[20][20];
	int sayac;
	int sayac2;
	for(sayac2=0; sayac2<sutun; sayac2++)
	{
	
	for( sayac=0; sayac<satir; sayac++){
		
	
	printf("1-Elipse\n2-Rectangle\n3-IsoscelesTriangle\n4-Ring\n5-RectangularFrame\n6-PlusSign\n7-X\n8-T\n9-H\n");
	printf("Please enter a pattern for %d.row and %d.column :",sayac2+1,sayac+1);
	scanf("%d",&p1);
	if(p1==1){
		
int hori, vert;
    int array1[20][20];
    int i,j;

    printf("\nEnter horizantal coordinate:");
    scanf("%d",&hori);
    printf("\nEnter vertical coordinate:");
    scanf("%d",&vert);
    drawEllipse(hori,vert,array1);
    for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}


 
		
	}
	else if(p1==2){
			int heigth,width;
	printf("Enter the height value: ");
	scanf("%d",&heigth);
	printf("Enter the width value: ");
	scanf("%d",&width);
	int i,j;
	drawsquare(heigth,width,array1);
 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
}
	else if(p1==3){
		
		int x,i,j;
		int array1[20][20];
printf("Enter the side length:");
scanf("%d",&x);
isoscelestriangle(x,array1);	
 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
	}
	else if(p1==4){ 
	 int i,j;
    int inr,outr;
    int array1[20][20];
    printf("Enter inner radius: ");
    scanf("%d",&inr);
    printf("\nEnter outer radius: ");
    scanf("%d",&outr);
    printf("\n");
    DrawRing(inr,outr,array1);
   for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}

	}
	else if(p1==5){ 
		int a,b,c;
	int i,j;
	
	printf("Enter the height:");
	scanf("%d",&a);
	printf("\nEnter the width:");
	scanf("%d",&b);
	printf("\nEnter the thickness:");
	scanf("%d",&c);
		int array1[20][20];
		for(int k=0; k<20; k++){
		for(int m=0; m<20; m++){
			array1[k][m]=0;
		}
	}
		frame(a,b,c,array1);
	 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
	
	}
	else if(p1==6){ 
	int collum,row;
printf("Enter row:");
scanf("%d",&row);	
printf("Enter collum:");
scanf("%d",&collum);		
row=row-1;
collum=collum-1;
	int i,j;
PlusSign(row,collum,array1);
 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
	}
	
	else if(p1==7){ 
		int angle,a,i,j;
	printf("Enter the length:");
	scanf("%d",&a);
	
	printf("Enter the angle:");
	scanf("%d",&angle);
	draw_X(angle,a,array1);
	for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
	}
	else if(p1==8){ 
	int i,j;
    int vert,hori;
    int array1[20][20];

    printf("\nEnter heigth:");
    scanf("%d",&hori);
    printf("\nEnter width:");
    scanf("%d",&vert);
    printf("\n");

    DrawT(vert,hori,array1);


     for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}
  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
				arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
}

	
	else if(p1==9){ 
	int row,collum;
printf("Enter the row:");
scanf("%d",&row);	
printf("Enter the collum:");
scanf("%d",&collum);		
row=row-1;
collum=collum-1;	
DrawH(row,collum,array1);
int i,j;
 for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp2[i][j]=array1[j][i];
	}
}


  for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			arrayp1[i+(20*sayac)][j]=arrayp2[i][j];
	}
}
}
}
 
  for(int i=0; i<20*satir; i++){
		for(int j=0; j<20; j++){
			arrayson[i][j+(sayac2*20)]=arrayp1[i][j];
	}
}
}

for(int j=0; j<20*sutun; j++){
	for(int i=0; i<20*satir; i++){
	if(arrayson[i][j]==1){
	printf("%c",219);
	printf("%c",219);
		}
	else
	printf("%c ",0);
}
printf("\n");
}

}
else{
	printf("Wrong! Please try again!");
}

	}
