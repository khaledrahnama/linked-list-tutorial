/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   why_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 11:14:59 by krahnama          #+#    #+#             */
/*   Updated: 2026/06/02 11:49:17 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>

int main()
{
    // without a struct
    char name[50];
    char family[50];
    char address[200];
    int age;
    long salary;

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
        "name of employee",
        "family of employee ",
        "address of employee ",
        23,
        2000
    };

    //Accessing members : 
    printf("%s \n", e1.name);
    printf("%s \n", e1.family);
    printf("%s \n", e1.family);
    printf("%d \n", e1.age);
    printf("%d \n", e1.salary);

}