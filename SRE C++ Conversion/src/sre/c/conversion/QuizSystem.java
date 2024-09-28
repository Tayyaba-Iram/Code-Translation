/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package sre.c.conversion;

import java.util.Scanner;

/**
 *
 * @author SSS
 */
public class QuizSystem {
    static Student student = new Student();
    static Scanner sc = new Scanner(System.in);

    public static void welcome() {
        System.out.println("\t\t\t**        ***WELCOME TO ONLINE QUIZ SYSTEM***     **");
        System.out.print("\n\t\t\tEnter your Name:  ");
        student.name = sc.nextLine();

    }

    public static void selection() {
        System.out.println("\t\t\t**             ***SUBJECT SELECTION MENU***      **");
        System.out.println("\t\t\t1. Introduction to Information and Communication Technology");
        System.out.println("\t\t\t2. Programming Fundamentals");
        System.out.print("\n\t\t\tSelect: ");
    }

    public static void ictQuiz() {
        student.marks = 0;
        char answer;

        System.out.println("\n\n\t\t\t***WELCOME TO ICT QUIZ***");
        System.out.println("\n\n\t\t\tAnswer the following questions:");

        System.out.println("\n\t\t\t=> Question 1: Monitor is a ______ device?");
        System.out.println("\t\t\ta) Input device");
        System.out.println("\t\t\tb) Output device");
        System.out.println("\t\t\tc) Storage device");
        System.out.println("\t\t\td) Communication device");
        System.out.print("\t\t\tEnter your answer: ");
        answer = sc.next().charAt(0);
        if (answer == 'b' || answer == 'B') {
            System.out.println("\t\t\tCorrect!");
            student.marks++;
        } else {
            System.out.println("\t\t\tWrong! Correct answer is 'b'.");
        }

        // Continue for other questions
        System.out.println("\n\t\t\t=> Question 2: Fastest, most expensive, and powerful type of computer?");
        System.out.println("\t\t\ta) Supercomputer");
        System.out.println("\t\t\tb) Embedded computer");
        System.out.println("\t\t\tc) Mainframe computer");
        System.out.println("\t\t\td) Personal computer");
        System.out.print("\t\t\tEnter your answer: ");
        answer = sc.next().charAt(0);
        if (answer == 'a' || answer == 'A') {
            System.out.println("\t\t\tCorrect!");
            student.marks++;
        } else {
            System.out.println("\t\t\tWrong! Correct answer is 'a'.");
        }

         System.out.println("\n\t\t\t=> Question 3: Fourth generation of computer?");
        System.out.println("\t\t\ta) 1946 - 1958");
        System.out.println("\t\t\tb) 1959 - 1964");
        System.out.println("\t\t\tc) 1965 - 1970");
        System.out.println("\t\t\td) 1971 - today");
        System.out.print("\t\t\tEnter your answer: ");
        answer = sc.next().charAt(0);
        if (answer == 'd' || answer == 'D') {
            System.out.println("\t\t\tCorrect!");
            student.marks++;
        } else {
            System.out.println("\t\t\tWrong! Correct answer is 'd'.");
        }
 System.out.println("\n\t\t\t=> Question 3: Fourth generation of computer?");
        System.out.println("\t\t\ta) 1946 - 1958");
        System.out.println("\t\t\tb) 1959 - 1964");
        System.out.println("\t\t\tc) 1965 - 1970");
        System.out.println("\t\t\td) 1971 - today");
        System.out.print("\t\t\tEnter your answer: ");
        answer = sc.next().charAt(0);
        if (answer == 'd' || answer == 'D') {
            System.out.println("\t\t\tCorrect!");
            student.marks++;
        } else {
            System.out.println("\t\t\tWrong! Correct answer is 'd'.");
        }

        // Add more questions here...
        System.out.println("\n\t\t\t=> Question 3: Fourth generation of computer?");
        System.out.println("\t\t\ta) 1946 - 1958");
        System.out.println("\t\t\tb) 1959 - 1964");
        System.out.println("\t\t\tc) 1965 - 1970");
        System.out.println("\t\t\td) 1971 - today");
        System.out.print("\t\t\tEnter your answer: ");
        answer = sc.next().charAt(0);
        if (answer == 'd' || answer == 'D') {
            System.out.println("\t\t\tCorrect!");
            student.marks++;
        } else {
            System.out.println("\t\t\tWrong! Correct answer is 'd'.");
        }

        // Result display
        result();
    }

    public static void pfQuiz() {
        student.marks = 0;
        char answer;

        System.out.println("\n\n\t\t\t***WELCOME TO PROGRAMMING FUNDAMENTALS QUIZ***");
        System.out.println("\n\n\t\t\tAnswer the following questions:");

        System.out.println("\n\t\t\t=> Question 1: To store a value inside a computer _______ is used?");
        System.out.println("\t\t\ta) Variable");
        System.out.println("\t\t\tb) Class");
        System.out.println("\t\t\tc) Pointers");
        System.out.println("\t\t\td) Structure");
        System.out.print("\t\t\tEnter your answer: ");
        answer = sc.next().charAt(0);
        if (answer == 'a' || answer == 'A') {
            System.out.println("\t\t\tCorrect!");
            student.marks++;
        } else {
            System.out.println("\t\t\tWrong! Correct answer is 'a'.");
        }

        // Continue for other questions
        System.out.println("\n\t\t\t=> Question 2: Keyword used in the declaration of text-type data?");
        System.out.println("\t\t\ta) int");
        System.out.println("\t\t\tb) float");
        System.out.println("\t\t\tc) double");
        System.out.println("\t\t\td) char");
        System.out.print("\t\t\tEnter your answer: ");
        answer = sc.next().charAt(0);
        if (answer == 'd' || answer == 'D') {
            System.out.println("\t\t\tCorrect!");
            student.marks++;
        } else {
            System.out.println("\t\t\tWrong! Correct answer is 'd'.");
        }
         System.out.println("\n\t\t\t=> Question 2: Keyword used in the declaration of text-type data?");
        System.out.println("\t\t\ta) int");
        System.out.println("\t\t\tb) float");
        System.out.println("\t\t\tc) double");
        System.out.println("\t\t\td) char");
        System.out.print("\t\t\tEnter your answer: ");
        answer = sc.next().charAt(0);
        if (answer == 'd' || answer == 'D') {
            System.out.println("\t\t\tCorrect!");
            student.marks++;
        } else {
            System.out.println("\t\t\tWrong! Correct answer is 'd'.");
        }
         System.out.println("\n\t\t\t=> Question 2: Keyword used in the declaration of text-type data?");
        System.out.println("\t\t\ta) int");
        System.out.println("\t\t\tb) float");
        System.out.println("\t\t\tc) double");
        System.out.println("\t\t\td) char");
        System.out.print("\t\t\tEnter your answer: ");
        answer = sc.next().charAt(0);
        if (answer == 'd' || answer == 'D') {
            System.out.println("\t\t\tCorrect!");
            student.marks++;
        } else {
            System.out.println("\t\t\tWrong! Correct answer is 'd'.");
        }
         System.out.println("\n\t\t\t=> Question 2: Keyword used in the declaration of text-type data?");
        System.out.println("\t\t\ta) int");
        System.out.println("\t\t\tb) float");
        System.out.println("\t\t\tc) double");
        System.out.println("\t\t\td) char");
        System.out.print("\t\t\tEnter your answer: ");
        answer = sc.next().charAt(0);
        if (answer == 'd' || answer == 'D') {
            System.out.println("\t\t\tCorrect!");
            student.marks++;
        } else {
            System.out.println("\t\t\tWrong! Correct answer is 'd'.");
        }

        // Result display
        result();
    }

    public static void result() {
        System.out.println("\n\n\t\t\t***RESULT MENU***");
        System.out.println("\t\t\tTotal Marks: 5");
        System.out.println("\t\t\tMarks Obtained: " + student.marks);
        int percentage = (student.marks * 100) / 5;
        System.out.println("\t\t\tPercentage: " + percentage + "%");

       
    }

    public static void visit() {
        System.out.println("\n\n\t\t\t***THANK YOU FOR USING ONLINE QUIZ SYSTEM***");
    }
}
