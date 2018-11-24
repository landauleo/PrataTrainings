#include<stdio.h>
#include<ctype.h>
#define UPTO100 0.05
#define FROM5ANDLESS 3.50
#define FROM5UPTO20FOOT 10
#define MORETHAN20FOOT 8
#define PLUS1FOOTAFTER20 0.10
#define ARTICHOKE 1.25
#define BEET 0.65
#define CARROT 0.89

int main(void)
{
  float aweight = 0,bweight = 0, cweight = 0, delivery = 0, discount = 0, asum = 0, bsum = 0, csum = 0, allsum = 0, allweight = 0;
  char letter;
  letter = tolower(letter);

  printf("Enter your letter:\n");
  printf("a) for artichoke       ");
  printf("b) for beet\n");
  printf("c) for carrot          ");
  printf("q) for exit\n");
  scanf("%c", &letter);

  while (letter != 'q')
  {
    switch (letter)
    {
      case 'a' :
        printf("Enter the weight of artichoke in foots: \n");
        scanf("%f", &aweight);
        asum += aweight * ARTICHOKE;
        aweight += aweight;
        break;
      case 'b' :
        printf("Enter the weight of beet in foots: \n");
        scanf("%f", &bweight);
        bsum += bweight * BEET;
        bweight += bweight;
        break;
      case 'c' :
        printf("Enter the weight of carrot in foots: \n");
        scanf("%f", &cweight);
        csum += cweight * CARROT;
        cweight += cweight;
        break;
      default :
        printf("wrong symbol, try again: \n");
        break;
    }
    if ((letter =='a') || (letter =='b') || (letter =='c'))
    {
      printf("Enter next number or 'q' for completing your order: ");
    }
    scanf("%c", &letter);
    letter = tolower(letter);

  }

  allsum = asum + bsum + csum;
  allweight = aweight + bweight + cweight;

  if (allsum >= 100)
  {
    discount = allsum * UPTO100;
  }
  if (allweight <= 5)
  {
    delivery = FROM5ANDLESS;
  }
  else if (allweight > 5 && allweight <= 20)
  {
    delivery = FROM5UPTO20FOOT;
  }
  else
  {
    delivery = MORETHAN20FOOT + (allweight - 20) * 0.8;
  }

  printf("One foot of artichoke: %.2f$, beet: %.2f$, carrot: %.2f$.\n", ARTICHOKE, BEET, CARROT);
  printf("Your order:            %.2f$        %.2f$          %.2f$\n", asum, bsum, csum);
  printf("Total weight: %.2f foots\n", allweight);
  printf("Sum:          %.2f$\n", allsum);
  if (discount > 0)
  printf("Discount:     %.2f$\n", discount);
  printf("Delivery:     %.2f\n", delivery);
  printf("Total sum:    %.2f$\n", allsum - discount + delivery);

  return 0;
}
