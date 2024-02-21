#include<stdio.h>

int main(){
	system("color 3F");
	char ch;
	float num1,num2,result = 0;
	printf("\n Please enter the operation to perform : ");
	scanf("%c",&ch);
	printf("\nPlease enter the numbers : ");
	scanf("%f%f",&num1,&num2);
	switch(ch){
		case '+' :
			result = num1 + num2;
			break;
			
			case '-' :
				result = num1 - num2;
				break;
				
				case '*' :
					result = num1 * num2;
					break;
					
					case '/' :
						result = num1 / num2;
						break;
						
						default:
							printf("Invalid option !!!");
							break;
	}
	printf("Result = %.2f",result);
	return 0;
}
