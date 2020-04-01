import java.util.Scanner;

public class CanadianCalorieCounting {
	public static int a,b,c,d = 0;

public static void main(String[] args){
Scanner input = new Scanner(System.in);
int burger = input.nextInt();
switch(burger){
case 1:
    a = 461;
	break;
case 2:
	a = 431;
	break;
case 3:
	a = 420;
	break;
}
int side = input.nextInt();
switch(side){
case 1:
	b = 100;
	break;
case 2:
	b = 57;
	break;
case 3:
	b = 70;
	break;
}
int drink = input.nextInt();
switch(drink){
case 1:
	c = 130;
	break;
case 2:
	c = 160;
	break;
case 3:
	c = 118;
	break;
}
int dessert = input.nextInt();
switch(dessert){
case 1: 
	d = 167;
	break;
case 2:
	d = 266;
	break;
case 3:
	d = 75;
	break;
}

System.out.println("Your total Calorie count is "+ (a+b+c+d)+".");

}}