#include <stdio.h>
#include <string.h>
float calc (float a, int b)
{
	return a/b;
}
int main() {
	float x;
	int i;
	int n;
	int c;
	int y = 0;
	float gp[25];
    char g[3];
	printf("This is a GPA calculator. to calculate your GPA follow these steps.\n1: Enter the number of subjects you got\n2: enter the credit amount of 1st subject.\n3: Enter the Grade you got for that subject as Capital letter(ex:- A+,A,A-).\n4: Repeat above steps until all the subjects Entered.\n");
	printf("Enter your subject count: ");
	scanf("%d", &n);
	for (i = 1; i <= n;)
	{
		printf("\nEnter credit amount for your %d subject: ",i);
		scanf("%d", &c);
		if(4>= c && c>=0){
			printf("Enter the grade you got for that subject: ");
			scanf(" %2s", &g);
			if (strcmp (g, "A+")==0)
			{
				gp[i]= c* 4.0;
				y += c;
				i++;
			}	
			else if (strcmp(g, "A")==0)
			{
				gp[i]= c * 4.0;
				y += c;
				i++;
			}
			else if (strcmp(g, "A-")==0)
			{
				gp[i]= c * 3.7;
				y += c;
				i++;
			}
			else if (strcmp(g, "B+")==0)
			{
				gp[i]= c * 3.3;
				y += c;
				i++;
			}
			else if (strcmp(g, "B")==0)
			{
				gp[i]= c * 3.0;
				y += c;
				i++;
			}
			else if (strcmp(g, "B-")==0)
			{
				gp[i]= c * 2.7;
				y += c;
				i++;
			}
			else if (strcmp(g, "C+")==0)
			{
				gp[i]= c * 2.3;
				y += c;
				i++;
			}
			else if (strcmp(g, "C")==0)
			{
				gp[i]= c * 2.0;
				y += c;
				i++;
			}
			else if (strcmp(g, "C-")==0)
			{
				gp[i]= c * 1.7;
				y += c;
				i++;
			}
			else if (strcmp(g, "D+")==0)
			{
				gp[i]= c * 1.3;
				y += c;
				i++;
			}
			else if (strcmp(g, "D")==0)
			{
				gp[i]= c * 1.0;
				y += c;
				i++;
			}
			else if (strcmp(g, "E")==0)
			{
				gp[i]= c* 0;
				y += c;
			}
			else 
			{
				printf("\aWrong input enter that subject again!\n");
			}
		}
		else 
		{
		printf("\aCredit range is between 4 - 0. You Enter %d as credit amount!\n", c);
		}
	}
	for (i = 0; i <=n; i++)
	{
		x += gp[i];
	}
	printf("\n\nYou have total %d credits and %.2f credit points\n", y, x);
	printf("Your Grade point average(G.P.A) is: %.2f",calc(x, y));
    return 0;
}

