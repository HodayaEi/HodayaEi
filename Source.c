#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


typedef struct 
{
	char* Education, * PersonalStatus, * JobSelectionArea, * WorkExperience, * JobType, * language;
}EditProfile;


bool Editpro(EditProfile* e)
{
	bool allocate = true, succees = false;
	int choice,j,k, i = 1, count = 1, size = 100;
	char str1[100], str2[100];
	printf("\nFill in the following data:\n1. Education\n2. Personal status\n3. Job selection area\n4. Work Experience\n5. language\n6. job type\n");
	printf("***********************************\n ");
	printf("Education:\n1. Professional certificate\n2. 12 years of schooling\n3. Bachelor's degree\n4. Master's degree\n5. Doctorate");
	scanf("%d", &choice);
		if (choice < 1 || choice>5)
		{
			printf("Invalid value Try again");
			scanf("%d", &choice);
		}
		else
		if (choice == 1)
		{
			char str[] = "Professional certificate";
			e->Education = (char*)malloc(strlen(str) + 1);
			if (e->Education)strcpy(e->Education, str);
			else return 0;
		}
		if (choice == 2)
		{
			char str[] = "12 years of schooling";
			e->Education = (char*)malloc(strlen(str) + 1);
			if (e->Education)strcpy(e->Education, str);
			else return 0;
		}
		if (choice == 3)
		{
			char str[] = "Bachelor's degree";
			e->Education = (char*)malloc(strlen(str) + 1);
			if (e->Education)strcpy(e->Education, str);
			else return 0;
		}
		if (choice == 4)
		{
			char str[] = "Master's degree";
			e->Education = (char*)malloc(strlen(str) + 1);
			if (e->Education)strcpy(e->Education, str);
			else return 0;
		}
		if (choice == 5)
		{
			char str[] = "Doctorate";
			e->Education = (char*)malloc(strlen(str) + 1);
			if (e->Education)strcpy(e->Education, str);
			else return 0;
		}
	
		printf("enter only one number suitable for your Personal status:\n ");
		printf("Personal status:\n1. Single\n2. Married\n3. Divorced\n4. Children");
		scanf("%d", &choice);
		if (choice < 1 || choice>4)
		{
			printf("Invalid value Try again");
			scanf("%d", &choice);
		}
		else
		if (choice == 1)
		{
			char str[] = "Single";
			e->PersonalStatus = (char*)malloc(strlen(str) + 1);
			if (e->PersonalStatus)strcpy(e->PersonalStatus, str);
			else return 0;
		}
		if (choice == 2)
		{
			char str[] = "Married";
			e->PersonalStatus = (char*)malloc(strlen(str) + 1);
			if (e->PersonalStatus)strcpy(e->PersonalStatus, str);
			else return 0;
		}
		if (choice == 3)
		{
			char str[] = "Divorced";
			e->PersonalStatus = (char*)malloc(strlen(str) + 1);
			if (e->PersonalStatus)strcpy(e->PersonalStatus, str);
			else return 0;
		}
		if (choice == 4)
		{
			char str[] = "Children";
			e->PersonalStatus = (char*)malloc(strlen(str) + 1);
			if (e->PersonalStatus)strcpy(e->PersonalStatus, str);
			else return 0;
		}

	
		printf("Job selection area:\n1. South\n2. North\n3. Center");
		printf("enter only one number suitable for the desired job selection area for you:\n ");
		scanf("%d", &choice);
		if (choice < 1 || choice>3)
		{
			printf("Invalid value Try again");
			scanf("%d", &choice);
		}
		else
		if (choice == 1)
		{
			char str[] = "South";
			e->JobSelectionArea = (char*)malloc(strlen(str) + 1);
			if (e->JobSelectionArea)strcpy(e->JobSelectionArea, str);
			else return 0;
		}
		if (choice == 2)
		{
			char str[] = "North";
			e->JobSelectionArea = (char*)malloc(strlen(str) + 1);
			if (e->JobSelectionArea)strcpy(e->JobSelectionArea, str);
			else return 0;
		}
		if (choice == 3)
		{
			char str[] = "Center";
			e->JobSelectionArea = (char*)malloc(strlen(str) + 1);
			if (e->JobSelectionArea)strcpy(e->JobSelectionArea, str);
			else return 0;
		}

	
		printf("Enter the details of your employment experience:\n ");
		scanf("%s", str1);
		e->WorkExperience = (char*)malloc(strlen(str1) + 1);
		if (e->WorkExperience)strcpy(e->WorkExperience, str1);
		else return 0;

	
		printf("language:\n1. Hebrew\n2. English\n3. Arabic\n4. French");
		printf("Enter the languages you speak:\n ");
		scanf("%s", str2);
		e->language = (char*)malloc(strlen(str2) + 1);
		if (e->language)strcpy(e->language, str2);
		else return 0;
	
		printf(" job type:\n1. Full time\n2. Part time");
		printf("enter only one number suitable for the desired job type for you:\n ");
		scanf("%d", &choice);
		if (choice < 1 || choice>2)
		{
			 printf("Invalid value Try again");
			scanf("%d", &choice);
		}
		else
		if (choice == 1)
		{
			char str[] = "Full time";
			e->JobType = (char*)malloc(strlen(str) + 1);
			if (e->JobType)strcpy(e->JobType, str);
			else return 0;
		}
		if (choice == 2)
		{
			char str[] = "Part time";
			e->JobType = (char*)malloc(strlen(str) + 1);
			if (e->JobType)strcpy(e->JobType, str);
			else return 0;

			
		}
	
	
	
}

//int get_size() {
//	int size = 0;
//	FILE* f = fopen("Book11.csv", "r");
//	char c;
//	while ((c = fgetc(f)) != EOF) { if(c == "\n")size++; }
//	fclose(f);
//	return size;
//}

bool Edit_Pro(EditProfile* e)
{
			bool s = Editpro(e);
			char line[512];
			//int i = get_size(), j = 0;
			if (s)
			{   ///////////////NAME OF FILE, MODE
				FILE* a = fopen("testtt.txt", "w+");
				/*PersonalStatus, * JobSelectionArea, * WorkExperience, * JobType, * language*/
				if (a) {
					fprintf(a, "Education: ", e->Education);
					fputs(a, "PersonalStatus: ", e->PersonalStatus);
					fputs(a, "PersonalStatus: ", e->JobSelectionArea);
					fputs(a, "PersonalStatus: ", e->WorkExperience);
					fputs(a, "PersonalStatus: ", e->JobType);
					fputs(a, "PersonalStatus: ", e->language);
					fclose(a);

					/*
					fprintf

					*/
				}
				else { printf("Can't open the file\n"); }
			}
			return false;
		}

int main()
{
	EditProfile* e = malloc(sizeof(EditProfile));
	bool a = Edit_Pro(e);
	printf(Edit_Pro);

}