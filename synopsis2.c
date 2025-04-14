# include<stdio.h>
# include<conio.h>
# include<time.h>
# include<string.h>
void welcome()
{
    printf("**********************************************************************************************************\n");
    printf("**********************************************************************************************************\n");
    printf("************************************** Welcome to SLICE OF SPICE *****************************************\n");
    printf("**********************************************************************************************************\n");
    printf("**********************************************************************************************************\n\n\n");
}
struct customer
{
    char name[100];
    char mobile[100];
}c1;
struct order
{
    char option[100];
    int price;
    int quantity;
    int length;
    int serial;
}A[1000];
float total_price; float total_price2;float dis3; int pay; int a; int arr[4]; int b; float dis[4];int i;float dis2;
struct card
{
    char card_name[100];
    int card_num;
    int card_cvv;
    int card_expiryM;
    int card_expiryY;
}c;
void entry1()
{
    printf("\nEnter customer's name: ");
    gets(c1.name);
    printf("Enter customer's mobile: ");
    scanf("%s",c1.mobile);
}
void printA()
{

    printf("\n\n**************************************   MENU   *************************************\n");
    printf("STARTERS:\n1) Veg Manchurian\t\t\t150\n2) Veg Spring Roll\t\t\t140\n3) Chilli Paneer\t\t\t210\n4) French fries\t\t\t\t90\n5) Honey chilli potato\t\t\t150\n6) Veg Cutlet\t\t\t\t80\n7) Tomato Soup\t\t\t\t90\n8) Sweet Corn Soup\t\t\t90\n9) Chicken Lollipop(2 pcs.)\t\t55\n10) Chicken cutlet\t\t\t85\n\n");
    printf("BEVERAGES:\n1) Cold coffee with ice cream\t\t140\n2) Milk shake with ice cream\t\t140\n3) Cold Coffee\t\t\t\t105\n4) Chocolate Shake\t\t\t105\n5) Kit-kat Shake\t\t\t130\n6) Oreo Shake\t\t\t\t130\n7) Lassi\t\t\t\t85\n8) Tea(special)\t\t\t\t70\n9) Soft drink(250ml)\t\t\t30\n10) Packaged Drinking Water\t\t20\n\n");
    printf("MAIN COURSE:\n1) Farm House Pizza\t\t\t200\n2) Stuff Grilled Pizza\t\t\t180\n3) Soya Chaap\t\t\t\t250\n4) Afghani Chaap\t\t\t250\n5) Butter Chicken\t\t\t400\n6) Kadai Chicken\t\t\t340\n7) Chicken Tikka\t\t\t360\n8) Shahi Paneer\t\t\t\t240\n9) Dal Makhni\t\t\t\t200\n10) Mix Veg\t\t\t\t180\n\n");
    printf("BREADS:\n1) Rumali Roti\t\t\t\t20\n2) Tandoori Roti\t\t\t30\n3) Naan\t\t\t\t\t25\n4) Butter Naan\t\t\t\t35\n5) Laccha Paratha\t\t\t50\n\n");
    printf("DESSERTS:\n1) Vanilla Ice-cream\t\t\t40\n2) Chocolate Ice-cream\t\t\t45\n3) Sizzling Brownie\t\t\t100\n4) Rasgulla(1 pc.)\t\t\t15\n5) Gulab Jamun(2 pcs.)\t\t\t45\n6) Rajbhog(1 pc.)\t\t\t28\n7) Rasmalai(1 pc.)\t\t\t28\n\n");
    printf("*************************************************************************************\n");
}
//************************************************
void inputA()
{
    printf("*************************************************************************************\n");
    printf("1) Starters\n2) Beverages\n3) Main Course\n4) Breads\n5) Desserts\n0) Review order\n");
    printf("*************************************************************************************\n");
    int a;
    printf("Enter your choice(main): (press 0 to exit) ");
    scanf("%d",&a);
    switch(a)
    {
        case 0:
            break;
        case 1:
            starters();
            inputA();
            break;
        case 2:
            beverages();
            inputA();
            break;
        case 3:
            main_course();
            inputA();
            break;
        case 4:
            roti();
            inputA();
            break;
        case 5:
            desserts();
            inputA();
            break;
        default:
            printf("Wrong Choice. Enter again.\n");
            inputA();
            break;
    }
}
void starters()
{
    printf("*************************************************************************************\n");
    printf("\nSTARTERS:\n1) Veg Manchurian\t\t\t150\n2) Veg Spring Roll\t\t\t140\n3) Chilli Paneer\t\t\t210\n4) French fries\t\t\t\t90\n5) Honey chilli potato\t\t\t150\n6) Veg Cutlet\t\t\t\t80\n7) Tomato Soup\t\t\t\t90\n8) Sweet Corn Soup\t\t\t90\n9) Chicken Lollipop(2 pcs.)\t\t55\n10) Chicken cutlet\t\t\t85\n11) Review order\n0) Exit Starters\n\n");
    printf("*************************************************************************************\n");
    int a;
    printf("Enter your choice(starters): (press 0 to exit) ");
    scanf("%d",&a);
    switch(a)
    {
        case 0:
            break;
        case 1:
            strcpy(A[i].option,"Veg Manchurian");
            A[i].price=150;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            starters();
            break;
        case 2:
            strcpy(A[i].option,"Veg Spring Roll");
            A[i].price=140;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            starters();
            break;
        case 3:
            strcpy(A[i].option,"Chilli Paneer");
            A[i].price=210;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            starters();
            break;
        case 4:
            strcpy(A[i].option,"French fries");
            A[i].price=90;
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            starters();
            break;
        case 5:
            strcpy(A[i].option,"Honey chilli potato");
            A[i].price=150;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            starters();
            break;
        case 6:
            strcpy(A[i].option,"Veg Cutlet");
            A[i].price=80;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            starters();
            break;
        case 7:
            strcpy(A[i].option,"Tomato Soup");
            A[i].price=90;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            starters();
            break;
        case 8:
            strcpy(A[i].option,"Sweet corn soup");
            A[i].price=90;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            starters();
            break;
        case 9:
            strcpy(A[i].option,"Chicken Lollipop(2 pcs.)");
            A[i].price=55;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            starters();
            break;
        case 10:
            strcpy(A[i].option,"Chicken Cutlet");
            A[i].price=85;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            starters();
            break;
        case 11:
            cart();
            starters();
            break;
        default:
            printf("Wrong choice.\n");
            starters();
            break;
    }

}
void beverages()
{
    printf("*************************************************************************************\n");
    printf("\nBEVERAGES:\n1) Cold coffee with ice cream\t\t140\n2) Milk shake with ice cream\t\t140\n3) Cold Coffee\t\t\t\t105\n4) Chocolate Shake\t\t\t105\n5) Kit-kat Shake\t\t\t130\n6) Oreo Shake\t\t\t\t130\n7) Lassi\t\t\t\t85\n8) Tea(special)\t\t\t\t70\n9) Soft drink(250ml)\t\t\t30\n10) Packaged Drinking Water\t\t20\n11) Review order\n0) Exit Beverages\n\n");
    printf("*************************************************************************************\n");
    int a;
    printf("Enter your choice (Beverages): (Enter 0 to exit) ");
    scanf("%d",&a);
    switch(a)
    {
        case 0:
            break;
        case 1:
            strcpy(A[i].option,"Cold Coffee with ice cream");
            A[i].price=140;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            beverages();
            break;
        case 2:
            strcpy(A[i].option,"Milk shake with ice cream");
            A[i].price=140;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            beverages();
            break;
        case 3:
            strcpy(A[i].option,"Cold Coffee");
            A[i].price=105;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            beverages();
            break;
        case 4:
            strcpy(A[i].option,"Chocolate Shake");
            A[i].price=105;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            beverages();
            break;
        case 5:
            strcpy(A[i].option,"Kit-Kat Shake");
            A[i].price=130;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            beverages();
            break;
        case 6:
            strcpy(A[i].option,"Oreo Shake");
            A[i].price=130;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            beverages();
            break;
        case 7:
            strcpy(A[i].option,"Lassi");
            A[i].price=85;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            beverages();
            break;
        case 8:
            strcpy(A[i].option,"Tea(special)");
            A[i].price=70;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            beverages();
            break;
        case 9:
            strcpy(A[i].option,"Soft drink(250ml)");
            A[i].price=30;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            beverages();
            break;
        case 10:
            strcpy(A[i].option,"Packaged Drinking Water");
            A[i].price=20;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            beverages();
            break;
        case 11:
            cart();
            beverages();
            break;
        default:
            printf("Wrong choice.\n");
            beverages();
            break;

    }
}
void main_course()
{
    printf("*************************************************************************************\n");
    printf("\nMAIN COURSE:\n1) Farm House Pizza\t\t\t200\n2) Stuff Grilled Pizaa\t\t\t180\n3) Soya Chaap\t\t\t\t250\n4) Afghani Chaap\t\t\t250\n5) Butter Chicken\t\t\t400\n6) Kadai Chicken\t\t\t340\n7) Chicken Tikka\t\t\t360\n8) Shahi Paneer\t\t\t\t240\n9) Dal Makhni\t\t\t\t200\n10) Mix Veg\t\t\t\t180\n11) Review order\n0) Exit Main Course\n\n");
    printf("*************************************************************************************\n");
    int a;
    printf("Enter your choice (main_course): (Enter 0 to exit)");
    scanf("%d",&a);
    switch(a)
    {
        case 0:
            break;
        case 1:
            strcpy(A[i].option,"Farm House Pizza");
            A[i].price=200;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            main_course();
            break;
        case 2:
            strcpy(A[i].option,"Stuff Grilled Pizza");
            A[i].price=180;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            main_course();
            break;
        case 3:
            strcpy(A[i].option,"Soya Chaap");
            A[i].price=250;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            main_course();
            break;
        case 4:
            strcpy(A[i].option,"Afghani Chaap");
            A[i].price=250;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            main_course();
            break;
        case 5:
            strcpy(A[i].option,"Butter Chicken");
            A[i].price=400;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            main_course();
            break;
        case 6:
            strcpy(A[i].option,"Kadai Chicken");
            A[i].price=340;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            main_course();
            break;
        case 7:
            strcpy(A[i].option,"Chicken Tikka");
            A[i].price=360;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            main_course();
            break;
        case 8:
            strcpy(A[i].option,"Shahi Panner");
            A[i].price=240;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            main_course();
            break;
        case 9:
            strcpy(A[i].option,"Dal Makhni");
            A[i].price=200;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            main_course();
            break;
        case 10:
            strcpy(A[i].option,"Mix Veg");
            A[i].price=180;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            main_course();
            break;
        case 11:
            cart();
            main_course();
            break;
        default:
            printf("Wrong choice.\n");
            main_course();
            break;
    }
}
void roti()
{
    printf("*************************************************************************************\n");
    printf("\nBREADS:\n1) Rumali Roti\t\t\t\t20\n2) Tandoori Roti\t\t\t30\n3) Naan\t\t\t\t\t25\n4) Butter Naan\t\t\t\t35\n5) Laccha Paratha\t\t\t50\n6) Review order\n0) Exit Roti's\n\n");
    printf("*************************************************************************************\n");
    int a;
    printf("Enter your choice (Roti's): (Enter 0 to exit)");
    scanf("%d",&a);
    switch(a)
    {
        case 0:
            break;
        case 1:
            strcpy(A[i].option,"Rumali Roti");
            A[i].price=20;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            roti();
            break;
        case 2:
            strcpy(A[i].option,"Tandoori Roti");
            A[i].price=30;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            roti();
            break;
        case 3:
            strcpy(A[i].option,"Naan");
            A[i].price=25;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            roti();
            break;
        case 4:
            strcpy(A[i].option,"Butter Naan");
            A[i].price=35;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            roti();
            break;
        case 5:
            strcpy(A[i].option,"Laccha Paratha");
            A[i].price=50;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            roti();
            break;
        case 6:
            cart();
            roti();
            break;
        default:
            printf("Wrong choice.\n");
            roti();
            break;
    }
}
void desserts()
{
    printf("*************************************************************************************\n");
    printf("\nDESSERTS:\n1) Vanilla Ice-cream\t\t\t40\n2) Chocolate Ice-cream\t\t\t45\n3) Sizzling Brownie\t\t\t100\n4) Rasgulla(1 pc.)\t\t\t15\n5) Gulab Jamun(2 pcs.)\t\t\t45\n6) Rajbhog(1 pc.)\t\t\t28\n7) Rasmalai(1 pc.)\t\t\t28\n8) Review order\n0) Exit Desserts\n\n");
    printf("*************************************************************************************\n");
    int a;
    printf("Enter your choice (desserts): (Enter 0 to exit)");
    scanf("%d",&a);
    switch(a)
    {
        case 0:
            break;
        case 1:
            strcpy(A[i].option,"Vanilla Ice-cream");
            A[i].price=40;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            desserts();
            break;
        case 2:
            strcpy(A[i].option,"Chocolate Ice-cream");
            A[i].price=45;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            desserts();
            break;
        case 3:
            strcpy(A[i].option,"Sizzling Brownie");
            A[i].price=100;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            desserts();
            break;
        case 4:
            strcpy(A[i].option,"Rasgulla(1 pc.)");
            A[i].price=15;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            desserts();
            break;
        case 5:
            strcpy(A[i].option,"Gulab Jamun(2 pcs.)");
            A[i].price=45;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            desserts();
            break;
        case 6:
            strcpy(A[i].option,"Rajbhog(1 pc.)");
            A[i].price=28;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            desserts();
            break;
        case 7:
            strcpy(A[i].option,"Rasmalai(1 pc.)");
            A[i].price=28;
            A[i].length=strlen(A[i].option);
            printf("Enter quantity: ");
            scanf("%d",&A[i].quantity);
            if(A[i].quantity<=0)
                printf("Wrong Input\n");
            i++;
            desserts();
            break;
        case 8:
            cart();
            desserts();
            break;
        default:
            printf("Wrong choice.\n");
            desserts();
            break;
    }
}

//******************************************************
int sorting()
{
    int temp;
    for(int k=0;k<i;k++)
    {
        for(int j=0;j<i-1;j++)
        {
            if(A[j].length<A[j+1].length)
            {
                temp=A[j].length;
                A[j].length=A[j+1].length;
                A[j+1].length=temp;
            }
        }
    }
    return (A[0].length+10);
}
void cart()
{
    for(int j=0;j<i;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            if(strcmp(A[j].option,A[k].option)==0)
            {
                if(A[j].quantity>0&&A[k].quantity>0)
                {
                    A[j].quantity+=A[k].quantity;
                    A[k].quantity=0;
                }
            }
        }
    }
    int a=sorting();
    printf("\n*************************************************************************************************************\n");
    printf("Serial No.\tItems");
    for(int k=0;k<(a-5);k++)
        printf(" ");
    printf("Quantity\t\tPrice\t\t\tTotal Price\n\n");
    int y=1;
    for(int j=0;j<i;j++)
    {
        if(A[j].quantity>0)
          {
              A[j].serial=y;
              y++;
              printf("%d\t\t%s",A[j].serial,A[j].option);
              for(int k=0;k<(a-strlen(A[j].option));k++)
                printf(" ");
              printf("%d\t\t\t%d\t\t\t%d\n",A[j].quantity,A[j].price,(A[j].quantity*A[j].price));
          }
    }
    printf("\n*************************************************************************************************************\n");
    change();
}
void change()
{
    int f;
    printf("Do you wish to make any changes? \n1) Delete an item\n2) Add an item\n3) Change the quantity\n4) No changes \n");
    scanf("%d",&f);
    switch(f)
    {
        case 1:
            deleteitem();
            cart();
            break;
        case 2:
            additem();
            cart();
            break;
        case 3:
            changequantity();
            cart();
            break;
        case 4:
            break;
        default:
            printf("Wrong Choice.");
            cart();
            break;
    }
}
void deleteitem()
{
    int a;
    printf("Enter the serial number to delete from the cart: \n");
    scanf("%d",&a);
    for(int j=0;j<i;j++)
    {
        if(A[j].serial==a)
        {
            A[j].quantity=0;
            for(int x=j;j<i;j++)
            {

                A[x].serial=A[x].serial-1;
            }

        }
    }

}
void additem()
{
    inputA();
}
void changequantity()
{
    int a;int c;
    printf("Enter the serial number to change from the cart: \n");
    scanf("%d",&a);
    printf("Enter the quantity of that item to wish to order: \n");
    scanf("%d",&c);
    for(int j=0;j<i;j++)
    {
        if(A[j].serial==a)
            A[j].quantity=c;
    }
}
//*****************************************************************

void offers()
{
    printf("\n\nThere are some great offers for you:\n");
    printf("1)  Flat 20 percent off on order above 3999Rs.\n");
    printf("2)  Flat 150Rs off on order above 1999Rs.\n");
    printf("3)  20 percent off upto 100Rs. on order above 999Rs.\n");
    printf("4)  30 percent off upto 250Rs. on order above 1499Rs.\n\n");
    printf("SPECIAL OFFERS: (Additional discounts)\n");
    printf("5)  50Rs. cash back if payment is done by Paytm wallet on order above 500.\n");
    printf("6)  Flat 15 percent off if payment is done by CRED app.\n");
    printf("7)  Flat 10 percent off if payment is done using HDFC card (credit/debit).\n");
    printf("8)  Flat 20 percent off if payment is done using AU small finance bank card (credit/debit).\n\n");

}

void discount()
{

    for(int j=0;j<i;j++)
    {
        if(A[j].quantity>0)
            total_price+=A[j].price*A[j].quantity;
    }
    printf("Total price: %f",total_price);
    printf("\n\nEnter your payment method: \n1. Paytm Wallet\n2. HDFC card\n3. AU small finance bank card\n4. CRED app\n5. Cash\n");
    scanf("%d",&pay);
    printf("\n\n");

    if(pay==2||pay==3)
    {

        printf("Enter the card number: ");
        scanf("%d",&c.card_num);
        printf("Enter the expiry month and year: ");
        scanf("%d,%d",&c.card_expiryM,&c.card_expiryY);
        printf("Enter CVV: ");
        scanf("%d",&c.card_cvv);
        printf("Enter the name on the card: ");
        scanf("%s",c.card_name);
    }
    printf("\nAvailable offers for your order: \n");
    if(total_price>=3999)
    {
        arr[0]=1;arr[1]=2;arr[2]=3;arr[3]=4;
        printf("1)  Flat 20 percent off on order above 3999Rs.\n");
        printf("2)  Flat 150Rs off on order above 1999Rs.\n");
        printf("3)  20 percent off upto 50Rs. on order above 159Rs.\n");
        printf("4)  40 percent off upto 120Rs. on order above 200Rs.\n");
    }
    else if(total_price<3999&&total_price>=1999)
    {
        arr[0]=2;arr[1]=3;arr[2]=4;
        printf("2)  Flat 150Rs off on order above 1999Rs.\n");
        printf("3)  20 percent off upto 100Rs. on order above 999Rs.\n");
        printf("4)  30 percent off upto 250Rs. on order above 1499Rs.\n");
    }
    else if(total_price>=1499&&total_price<1999)
    {
        arr[0]=3;arr[1]=4;
        printf("3)  20 percent off upto 100Rs. on order above 999Rs.\n");
        printf("4)  30 percent off upto 250Rs. on order above 1499Rs.\n");
    }
    else if(total_price>=999&&total_price<1499)
    {
        arr[0]=3;
        printf("3)  20 percent off upto 100Rs. on order above 999Rs.\n");
    }

    if(pay==1)
    {
        b=5;
        printf("5)  50Rs. cash back if payment is done by Paytm wallet on order above 500.\n");
    }

    else if(pay==2)
        {
            b=7;
            printf("7)  Flat 10 percent off if payment is done using HDFC card (credit/debit).\n");
        }
    else if(pay==3)
        {
            b=8;
            printf("8)  Flat 20 percent off if payment is done using AU small finance bank card (credit/debit).\n");
        }
    else if(pay==4)
        {
            b=6;
            printf("6)  Flat 15 percent off if payment is done by CRED app.\n");
        }
    else
    {
        b=0;
    }
}
float calculate2(int a)
{
    float dis2;
    if(a==1)
        {
            dis2=.2*total_price;
        }
        else if(a==2)
        {
            dis2=150;
        }
        else if(a==3)
        {
            if(.2*total_price>=100)
                {
                    dis2=100;
                }
            else
                {
                    dis2=.2*total_price;
                }
        }
        else if(a==4)
        {
            if(.3*total_price>=250)
                {
                    dis2=250;
                }
            else
                {
                    dis2=.3*total_price;
                }
        }
        else if(a==5)
        {
            dis2=50;
        }
        else if(a==6)
        {
            dis3=total_price-dis[0];
            dis2=.15*dis3;
        }
        else if(a==7)
        {
            dis3=total_price-dis[0];
            dis2=.1*dis3;
        }
        else if(a==8)
        {
            dis3=total_price-dis[0];
            dis2=.2*dis3;
        }
        else
            return 0;
        return dis2;
}
void calculate()
{

    for(int i=0;i<4;i++)
        dis[i]=calculate2(arr[i]);
    float temp;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(dis[j]<dis[j+1])
            {
                temp=dis[j];
                dis[j]=dis[j+1];
                dis[j+1]=temp;
            }

        }
    }
    dis2=calculate2(b);
    total_price2=total_price-(dis2+dis[0]);
    printf("\nTotal discount: %f\n",(dis[0]+dis2));
    printf("Total price: %f",total_price2);
}
void print()
{
    printf("\n----------------------------------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tSLICE OF SPICE");
    printf("\n\n\t\t\t\t     Connaught Plaza Restaurants Pvt Ltd.\n\t\t\t\t\tPlot no. H224/I, Sector 63\n\t\t\t\t\t\tNoida-201309\n");
    printf("\t\t\t\t----------------TAX INVOICE----------------");
    time_t t;
    time(&t);
    printf("\n\t\t\t\tDate and time: %s\n",ctime(&t));
    printf("\t\t\t\t%s\t\t%s\n",c1.name,c1.mobile);
    printf("\t\t\t\t-------------------------------------------");
    cart2();
    printf("Amount: \t\t\t%f\n",total_price);
    printf("Discount: \t\t\t%f\n",(dis[0]+dis2));
    printf("Total Amount: \t\t\t%f\n",total_price2);
    printf("SGST @2.5%: \t\t\t%f\n",.025*total_price2);
    printf("CGST @2.5%: \t\t\t%f\n",.025*total_price2);
    printf("\n----------------------------------------------------------------------------------------------------------------------\n");
    printf("GRAND TOTAL: \t\t\t%f\n",total_price2+(.05*total_price2));
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\tTHANK YOU\n");
    printf("\t\t\t\t\t    PLEASE VISIT AGAIN\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");

}
void cart2()
{
    for(int j=0;j<i;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            if(strcmp(A[j].option,A[k].option)==0)
            {
                A[j].quantity+=A[k].quantity;
                A[k].quantity=0;
            }
        }
    }
    int a=sorting();
    printf("\n*************************************************************************************************************\n");
    printf("Serial No.\tItems");
    for(int k=0;k<(a-5);k++)
        printf(" ");
    printf("Quantity\t\tPrice\t\t\tTotal Price\n\n");
    int y=1;
    for(int j=0;j<i;j++)
    {
        if(A[j].quantity>0)
          {
              A[j].serial=y;
              y++;
              printf("%d\t\t%s",A[j].serial,A[j].option);
              for(int k=0;k<(a-strlen(A[j].option));k++)
                printf(" ");
              printf("%d\t\t\t%d\t\t\t%d\n",A[j].quantity,A[j].price,(A[j].quantity*A[j].price));
          }
    }
    printf("\n*************************************************************************************************************\n");

}
int main()
{
    welcome();
    entry1();
    printA();
    inputA();
    cart();
    offers();
    discount();
    calculate();
    print();
}


