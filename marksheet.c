#include <stdio.h>
int main()
{
	float m[5]={78,99,58,74,63};
	float tot,avg;
	printf("\t\t\t BCA-A\n");
	printf("--------------------------------------------------------------------------------");
	printf("\n\t\tName:GOKUL\t\t\t Reg no:13576\n");
	printf("--------------------------------------------------------------------------------");
	printf("\nTamil\t\t\t\t=%5.2f \n",m[0]);
	printf("English\t\t\t\t=%5.2f \n",m[1]);
	printf("Maths\t\t\t\t=%5.2f \n",m[2]);
	printf("science\t\t\t\t=%5.2f \n",m[3]);
	printf("social\t\t\t\t=%5.2f \n",m[4]);
	tot=m[0]+m[1]+m[2]+m[3]+m[4];
	avg=tot/5;
	printf("--------------------------------------------------------------------------------");
	printf("\ntot\t\t\t\t=%5.2f \t avg=%5.2f",tot,avg);
	printf("\n--------------------------------------------------------------------------------");
	if("average>=50")
	printf("\nresult:pass");
	else
	printf("\nresult:fail");
	getch();
	return 0;
}
