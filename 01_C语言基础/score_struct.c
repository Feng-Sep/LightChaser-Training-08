#include<stdio.h>
struct student
{
	char name[20];
	double score[3];
	double sum;
	double average;
};
int main() 
{
	struct student stu[3];
	for (int i = 0;i < 3;i++)
	{
		scanf("%s %lf %lf %lf", stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
		stu[i].sum = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
		stu[i].average = stu[i].sum / 3;
	}
	for (int i = 0;i < 3;i++)
	{
		printf("%s %.2lf %.2lf %.2lf %.2lf %.2lf\n", stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2],stu[i].sum,stu[i].average);
	}
	return 0;
}
