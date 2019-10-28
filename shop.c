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

void printProduct(struct Product p)
{
	printf("PRODUCT NAME: %s \nPRODUCT PRICE: %.2f\n", p.name, p.price);
	printf("-------------\n");
}

void printItemOrder(struct ItemOrder i)
{
	printf("PRODUCT NAME: %s \nPRODUCT QUANTITY: %d\n", i.name, i.quantity);
	printf("-------------\n");
}

void printCustomer(struct Customer c)
{
	printf("CUSTOMER NAME: %s \nCUSTOMER BUDGET: %.2f\n", c.name, c.budget);
	printf("-------------\n");
	for(int i = 0; i < c.index; i++)
	{
		printProduct(c.shoppingList[i].product);
		printf("%s ORDERS %d OF ABOVE PRODUCT\n", c.name, c.shoppingList[i].quantity);
		double cost = c.shoppingList[i].quantity * c.shoppingList[i].product.price; 
		printf("The cost to %s will be €%.2f\n", c.name, cost);
	}
}

struct Shop createAndStockShop()
{
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("stock.csv", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);
	
	getline(&line, &len, fp);
	double cashInShop = atof(line);
	struct Shop shop = { cashInShop };

    while ((read = getline(&line, &len, fp)) != -1) {
        // printf("Retrieved line of length %zu:\n", read);
        // printf("%s IS A LINE", line);
		char *n = strtok(line, ",");
		char *p = strtok(NULL, ",");
		char *q = strtok(NULL, ",");
		int quantity = atoi(q);
		double price = atof(p);
		char *name = malloc(sizeof(char) * 50);
		strcpy(name, n);
		struct Product product = { name, price };
		struct ProductStock stockItem = { product, quantity };
		shop.stock[shop.index++] = stockItem;
		// printf("NAME OF PRODUCT %s PRICE %.2f QUANTITY %d\n", name, price, quantity);
    }
	
	return shop;
}

void printShop(struct Shop s)
{
	printf("Shop has %.2f in cash\n", s.cash);
	for (int i = 0; i < s.index; i++)
	{
		struct Product product = s.stock[i].product;
		printProduct(product);
		printf("The shop has %d of the above\n", s.stock[i].quantity);
	}
}

struct Order readOrder(char* fileName){
	// open csv file
	FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
	int numberLine = 0;

    fp = fopen(fileName, "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);
	
	struct Order order;
	order.index = 0;
	
	//read everyline
	while ((read = getline(&line, &len, fp)) != -1) {
        // printf("Retrieved line of length %zu:\n", read);
        // prinf("%s IS A LINE", line);
		if (numberLine == 0){
			// store customer name and budget
			char* n = strtok(line,",");
			char *name = malloc(sizeof(char) * 50);
			strcpy(name, n);
			//printf("Customer data %s\n",a);
			order.name = name;
			char* b = strtok(NULL, ",");

			double budget = atof(b);
			order.budget = budget;

		}else {
			//store ItemsOrders 
			char *n = strtok(line,",");
			char *name = malloc(sizeof(char) * 50);
			strcpy(name, n);
			//ItemOrder.name = name;
			char* q = strtok(NULL, ",");

			int quantity = atoi(q);
			//ItemOrder.quantity = quantity;
			//printf("Prouct Name: %s Quantity: %d \n",name, quantity);

			struct ItemOrder itemOrder = { name, quantity };
			order.items[order.index++] = itemOrder;
			
			
		}

		numberLine++;
    }



	return order;
}

void printOrder(struct Order order){
	printf("Name: %s\n", order.name);
	printf("Budget: %.2f\n", order.budget);
	printf("Products\n");
	for (int i = 0; i < order.index; i++)
	{
		printItemOrder(order.items[i]);
	}

}

void reduceBudget(struct Orders allorders, char *name, double budget){

}

void increaseCashShop(struct Shop shop, double cash ){

}

void reduceStock(struct Shop shop, struct ItemOrder item){

}

int checkQuantity(struct Shop shop, struct ItemOrder item){

}

int findProduct(struct Shop shop, struct ItemOrder item ){

}

double findProductPrice(struct Shop s, char *n)
{
	for(int i = 0; i < s.index; i++)
	{
		struct Product product = s.stock[i].product;
		char *name = product.name;
		if(strcmp(name, n) == 0)
		{
			return product.price;
		}
	}
	return -1;
}


int main(void) 
{
	// struct Customer dominic = { "Dominic", 100.0 };
	//
	// struct Product coke = { "Can Coke", 1.10 };
	// struct Product bread = { "Bread", 0.7 };
	// // printProduct(coke);
	//
	// struct ProductStock cokeStock = { coke, 20 };
	// struct ProductStock breadStock = { bread, 2 };
	//9
	// dominic9.shoppingList[dominic.index++] = cokeStock;
	// dominic.shoppingList[dominic.index++] = breadStock;
	//
	// printCustomer(dominic);
	
	struct Shop shop = createAndStockShop();
	printShop(shop);

	struct Orders allOrders;
	allOrders.orders[0] = readOrder("orders.csv");
	allOrders.index++;
	allOrders.orders[1] = readOrder("orders-rebecca.csv");
	allOrders.index++;
	//printf("Name: %s Budget: %.2f", myOrder.name, myOrder.budget);
	printOrder(allOrders.orders[0]);
	//reduceBudget(allOrders, "Rebecca", 30)

	double price = findProductPrice(shop, "Coke Can");
	printf("%.2f\n", price);

	
// printf("The shop has %d of the product %s\n", cokeStock.quantity, cokeStock.product.name);
	
    return 0;
}