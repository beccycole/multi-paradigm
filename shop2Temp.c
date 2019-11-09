#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Product {
	char* name;
	double price;
};

struct ProductStock {
	struct Product product;
	int quantity;
};

struct ItemOrder {
	char* name;
	int quantity;
};

struct Order {
	char* name;
	double budget;
	struct ItemOrder items[10];
	int index;
};

struct Orders {
	struct Order orders[50];
	int index;
};

struct Shop {
	double cash;
	struct ProductStock stock[20];
	int index;
};

struct Customer {
	char* name;
	double budget;
	struct ProductStock shoppingList[10];
	int index;
};

int main()
{

    //work on customer
	// this is the customers budget
	double budget = 100.0;
	// instead of this, read that from file
    //also read customer shopping list and put them in your customer object
    // These are two products
	//struct Product a = { "Coke Can", 1.10 };
	//struct Product b = { "Mirror", 20.40 };

    // finish customer here, all above



    //work on shop here

    // this is how much money the shop has
	double shopCash = 2000.0;
	// for simplicity we are saying the customer always wants 1 of each item
	

    
    //this should be read from customers shopping list
    int quantity = 1;
	
	
	
	// create an array to store the products
	struct Product cp[] = { a, b };
	
	double cost = 0;
	// We will loop over the array to find out how much it will cost the customer to buy all these items
	for(int i=0; i < 2; i++)
	{
		cost += cp[i].price * quantity;
	} 
	// in this simple example the customer either can afford it all or nothing, you will want to be able to let them buy what they can afford
	if (cost <= budget)
	{
		// we reduce the customers cash
		budget -= cost;
		// the shop gets the money
		shopCash += cost;
		printf("\nThe customer can buy everything they wanted and now the shop has %.2f and the customer has %.2f remaining\n", shopCash, budget);
	} 
}