/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_by_reference.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 12:59:49 by krahnama          #+#    #+#             */
/*   Updated: 2026/06/02 14:21:41 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 we passed the values by reference, meaning that when we assign values to the members of the struct,
 we are creating a reference to the original data. This allows us to modify the original data 
 through the reference, and any changes made to the reference will affect the original data.
 if modifying the original data is not desired, we can use pass by value instead,
  which creates a copy of the data and does not affect the original data.
  However, if we use const keyword, we can prevent modification of the original data while 
  still passing by reference.
  passying by reference is more efficient than pass by value, especially for large data structures,
 as it avoids the overhead of copying the data. It also allows for more flexible and powerful
 programming techniques, such as dynamic memory allocation and data structures like linked lists and trees.
*/

#include<stdio.h>
#include<string.h>

  // with a struct 
    typedef struct employee
    {
        char name[50];
        char family[50];
        char address[200];
        int age;
        int salary;
    }employee;

void print_employees_by_reference(employee *e);


#include<stdio.h>

int main()
{
 
    struct employee e1 = {
        "sam",
        "samfamily ",
        "No 12, Berlin ",
        23,
        2000
    };

    struct employee e2;
    
    strcpy(e2.name, "ram");
    strcpy(e2.family, "ramfamily");
    strcpy(e2.address, "No 13, London");
    e2.age = 24;
    e2.salary = 3000;

    
    print_employees_by_reference(&e1);
    printf("\n\n\n");
    print_employees_by_reference(&e2);
    
}
/*
the arrow operator (->) is used to access members of a struct through a pointer. 
It is a shorthand for dereferencing the pointer and then accessing the member. 
For example, e->name is equivalent to (*e).name. 
The arrow operator is used when we have a pointer to a struct and 
we want to access its members directly without having to dereference it first.
*/

void print_employees_by_reference(employee *e)
{
    printf("Name: %s \n", e->name);
    printf("Family: %s \n", e->family);
    printf("Address: %s \n", e->address);
    printf("Age: %d \n", e->age);
    printf("Salary: %d \n", e->salary);
}

