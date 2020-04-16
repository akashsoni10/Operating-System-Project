// 3rd part of code contain claculation of total time and main function contain input from user

void tottime()
{
	int ttime=0,xtra;
	for(i=0;i<n;i++)
	{
		ttime+=burst[i];	
	}
	xtra=2*(n-1);
	ttime+=xtra;
	printf("\nThe total time taken to process the given process's is:%d",ttime);
	
}
 void main()
 {
 	int k;
 	printf("\nEnter the number of requirements:\t");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		printf("Enter the arival time of process p%d: \t",i+1);
		scanf("%d",&k);
		if(k==0)
		{
		printf("zero not allowed\n");
		printf("Re-enter the arrival time:\t");
		scanf("%d",&arv[i]);
		}
		else
			arv[i]=k;
		printf("Enter the burst time of the proecss:\t");
		scanf("%d",&burst[i]);
		
	}
	int j,temp=0;
	wait[0]=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		
		if(burst[i]>burst[j])
		{
			temp=arv[i];
			arv[i]=arv[j];
			arv[j]=temp;
			
			temp=burst[i];
			burst[i]=burst[j];
			burst[j]=temp;
			
		}
		}
	}
	waitingtime();tatm();avgwait();avgtat();tottime();
	
	
}	
