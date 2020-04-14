void tatm()
{
	for(i=0;i<n;i++)
	{
		printf("\nTurnAroundTime of the process p%d is:%d",i+1,wait[i]+burst[i]);
		tat[i]=wait[i]+burst[i];
	}
	
}
void avgtat()
{
	int	avg=0;
	for(i=0;i<n;i++)
	{
		avg+=tat[i];
	}
	printf("\nAverage TAT is:%d",avg/n);
	
}
