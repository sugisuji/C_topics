#include <stdio.h>
#include <stdlib.h>


struct sub_mark{
	int mark;
	char *sub_name;
	char *remark;

};

int main()
{
	int num_of_sub = 0;
	int i = 0;
	
	printf("Enter number of subjects\n ");
	scanf("%d", &num_of_sub);
	
	struct sub_mark *subjects[num_of_sub];
	
	for(i = 0 ; i < num_of_sub ; i++)
	{
		struct sub_mark *temp_buf = (struct sub_mark *)malloc(sizeof(struct sub_mark));
		
		subjects[i] = temp_buf;
		subjects[i] -> sub_name=malloc(sizeof(subjects[i] -> sub_name));
		
		printf(" Subject Name \n");
		scanf("%s ", subjects[i] -> sub_name);
		printf(" Subject Marks \n");
		scanf("%d", &subjects[i] -> mark);
		
		
		if((temp_buf -> mark) < 60)
		{
			temp_buf -> remark = "Non Prime";	
		} else {
			temp_buf -> remark = "Prime";
		}
		
			
	}

	for(i = 0 ; i < num_of_sub ; i++)
	{
		printf("%s %d(%s)\n", subjects[i] -> sub_name, subjects[i] -> mark, subjects[i] -> remark);
	}
	
	

}
