#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
  float valueOne;
  float valueTwo;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &valueOne, &operator, & valueTwo);

  switch(operator)
    {
    case '/': answer = valueOne/valueTwo;
    printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, answer);
      break;
    case '*': answer = valueOne*valueTwo;
    printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, answer);
      break;
    case '+': answer = valueOne+valueTwo;
    printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, answer);
      break;
    case '-': answer = valueOne-valueTwo;
    printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, answer);
      break;
    case '^': answer = pow(valueOne,valueTwo);
    printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, answer);
      break;
    default: 
    printf("Fail.\n");
      break;
    }
  return 0;
}