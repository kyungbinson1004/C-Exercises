#include <stdio.h>
void show_menu();
void class_grade();
int main() {

	
	char menu = '0';
	
	
	do {
		show_menu();
		printf("Choose a menu (press 'e' to exit)" );
		scanf(" %c", &menu);
		
		switch (menu) {
			
			case '1': 
				class_grade();
				break;
				
			case '2':
				break;
				
			default: 
				printf("\n Menu %c is INVALID \n", menu);
		}
	}while (menu != 'e');
		
	return 0;
	
}


void show_menu(){
	
	printf("\n- My Program C - \n");
	printf(" 1) Class Grade \n");
	printf(" 2) Calculator \n");
	printf(" 3) Temperature Conversion\n"); 
	printf(" \n----------------------------\n\n");	
	
}

int classGrade() {
	int math[5] = {0,0,0,0,0}; 
	int science[5]= {0,0,0,0,0}; 
	int i;
	printf("enter math marks of the class > "); 
	
	for (i = 0; i<5; i++) {
		printf("%d", &math[i] );
		
	for (i = 0; i<5; i++) {
		
		printf("math[%d]= %d\n", i,&math[i] );	
	}
		
	

//enter science and 
	
return 0;

int average_class(int[a], intb[]( {
 math science array give it to them and find the average of it 
 

}



int average_person(int a[
