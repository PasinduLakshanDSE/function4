#include<stdio.h>
float basic_salary;
int ot;
int ot_amount;
float final_salary;

void get_input(){
	char employee_name[20];
	printf("Enter the employee name:");
	scanf("%s",employee_name);
	printf("Enter the basic salary:");
	scanf("%f",&basic_salary);
	printf("Enter the ot hours:");
	scanf("%d",&ot);
	printf("Employee name is:%s",employee_name);
}
void OT_amount(){
	ot_amount=ot*1500;
}
void Final_salary(){
	final_salary=basic_salary+ot_amount;
}
void Display_detail(){
	
	printf("OT amount is:%d\n",ot_amount);
	printf("Final salary is:%f\n",final_salary);
}
int main(){
	get_input();
	OT_amount();
	Final_salary();
	Display_detail();
	return 0;
}
