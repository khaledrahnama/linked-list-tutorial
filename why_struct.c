/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   why_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 11:14:59 by krahnama          #+#    #+#             */
/*   Updated: 2026/06/02 12:50:40 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* In this code, we have defined a struct called "employees" 
 which contains several members such as name, family, address, age, and salary. 
 We then create two instances of the struct, e1 and e2, and assign values to their members.
 Finally, we access and print the values of the members for both instances.
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
