#include<stdio.h>
#include"Book.h"
class Book{
	
//	int id;
//	String name;
//	double price;
	
	Book::Book()
	{
		id=1;
		name="Naruto";
	}
	Book::Book(int id,string name,double price)
	{
		this.id=id;
		this.name=name;
		this.price=price;
	}
	Book::int getId()
	{
		return id; 
	}
	Book::string getName()
	{
		return name;
	}
	Book::double getPrice()
	{
		return price;
	}
	Book::void setId(int id)
	{
		this.id=id; 
	}
    Book::void setName(string name)
	{
		this.name=name;
	}
	Book::void setPrice(double price)
	{
		this.price=price;
	}
	Book::void display(int q)
	{
		int price;
		if(q>1 && q <= 50)
		{
			price=q*200;
			cout<<"Price:"<<price;
		}
		if(q>50 && q < 100)
		{
			price=q*100;
			cout<<"Price:"<<price;
		}
		
	}
	
};
