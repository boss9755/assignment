#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char input[64] = "";
	char output[64] = "";
	char out[64][64];
	char temp[20];
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int numInput;

	scanf("%d",&numInput);
	for (int i = 0; i < numInput+1; i++)
	{
		fgets(input,64,stdin);
		for (int j = 0; j < strlen(input); j++)
		{
			if (isupper(input[j]))
			{
				output[k] = input[j];
				k++;
			}
		}

		strncpy(out[l],output,16);

		//reset
		memset(input,0,strlen(input));
		memset(output,0,strlen(output));
		k = 0;
		l++;
		
	}
	//arrange result
	for ( i = 0; i < l-1; i++)
	{
      	for (j = i+1; j < l; j++) 
      	{
      		if (strlen(out[i]) < strlen(out[j]))
      		{
      			strcpy(temp,out[i]);
            	strcpy(out[i],out[j]);
            	strcpy(out[j],temp);
      		}
      		else if (strlen(out[i]) == strlen(out[j]))
      		{
      			if (strcmp(out[i],out[j]) >0)
       			{
      				strcpy(temp,out[i]);
            		strcpy(out[i],out[j]);
            		strcpy(out[j],temp);
         		}
      		}
       	}
	}

	//print result
	printf("\nResult:\n");
	for (int a = 0; a < l; a++)
	{
		printf("%s\n",out[a]);
	}
	return 0;
}