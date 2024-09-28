/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package sre.c.conversion;

import static sre.c.conversion.QuizSystem.ictQuiz;
import static sre.c.conversion.QuizSystem.pfQuiz;
import static sre.c.conversion.QuizSystem.sc;
import static sre.c.conversion.QuizSystem.selection;
import static sre.c.conversion.QuizSystem.visit;
import static sre.c.conversion.QuizSystem.welcome;

/**
 *
 * @author SSS
 */
public class SRECConversion {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         char press;
        welcome();
        do {
            int option;
            selection();
            option = sc.nextInt();

            switch (option) {
                case 1:
                    ictQuiz();
                    break;
                case 2:
                    pfQuiz();
                    break;
                default:
                    System.out.println("\n\n\t\t\tInvalid Selection!");
            }

            System.out.print("\n\t\t\tDo you want to continue (Y/N)? ");
            press = sc.next().charAt(0);
        } while (press == 'Y' || press == 'y');

        if (press == 'N' || press == 'n') {
            visit();
        }
    }
}
    
    

