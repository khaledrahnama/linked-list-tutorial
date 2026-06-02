/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_by_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 11:42:41 by krahnama          #+#    #+#             */
/*   Updated: 2026/06/02 12:51:35 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 we passed the values by value, meaning that when we assign values to the members of the struct,
 we are creating a copy of the data. This allows us to have multiple instances of the struct 
 with different values without affecting each other.
*/

#include<stdio.h>
#include<string.h>

  // with a struct 
    struct employees 
    {
        char name[50];
        char family[50];
        char address[200];
        int age;
        int salary;
    };

void print_employees(struct employees e);


#include<stdio.h>

int main()
{
    // without a struct
/*     char name[50];
    char family[50];
    char address[200];
    int age;
    long salary; */

  

    //how use struct 

    struct employees e1 = {
        "sam",
        "samfamily ",
        "No 12, Berlin ",
        23,
        2000
    };

    struct employees e2;
    
    strcpy(e2.name, "ram");
    strcpy(e2.family, "ramfamily");
    strcpy(e2.address, "No 13, London");
    e2.age = 24;
    e2.salary = 3000;

    
    //Accessing members : 
  /*   printf("%s \n", e1.name);
    printf("%s \n", e1.family);
    printf("%s \n", e1.address);
    printf("%d \n", e1.age);
    printf("%d \n", e1.salary);

    printf("%s \n", e2.name);
    printf("%s \n", e2.family);
    printf("%s \n", e2.address);
    printf("%d \n", e2.age);
    printf("%d \n", e2.salary); */

    print_employees(e1);
    printf("\n\n\n");
    print_employees(e2);
    
}

void print_employees(struct employees e)
{
    printf("Name: %s \n", e.name);
    printf("Family: %s \n", e.family);
    printf("Address: %s \n", e.address);
    printf("Age: %d \n", e.age);
    printf("Salary: %d \n", e.salary);
}




