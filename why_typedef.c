/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   why_typedef.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 13:06:33 by krahnama          #+#    #+#             */
/*   Updated: 2026/06/02 13:07:45 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
we show why to use typedef in C. typedef is a keyword in C that allows us to create new data types or aliases
 for existing data types.
 */

#include<stdio.h>
#include<string.h>

int main()
{
    // with arrays
 /* char name[50];
    char family[50];
    char address[200];
    int age;
    long salary; */

    // with a struct 
    struct employees 
    {
        char name[50];
        char family[50];
        char address[200];
        int age;
        int salary;
    };

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
    printf(" Name: %s \n", e1.name);
    printf("Family: %s \n", e1.family);
    printf("Address: %s \n", e1.address);
    printf("Age: %d \n", e1.age);
    printf("Salary: %d \n\n\n", e1.salary);

    printf("Name: %s \n", e2.name);
    printf("Family: %s \n", e2.family);
    printf("Address: %s \n", e2.address);
    printf("Age: %d \n", e2.age);
    printf("Salary: %d \n", e2.salary);
}
