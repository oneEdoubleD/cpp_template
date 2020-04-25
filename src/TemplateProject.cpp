#include "TemplateProject.h"

int Temp::factorial(int num) 
{
	return num <= 1 ? num : factorial(num - 1) * num;
}
