#include <stdio.h>
#include <stdlib.h>
#include "ui.h"

void PrintCourseMenu()
{
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                       [ Course ]                       �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                 1.     Register                        ��\n");
	printf("  ��                 2.     Modifiy                         ��\n");
	printf("  ��                 3      Delete                          ��\n");
	printf("  ��                 4.     Manage                          ��\n");
	printf("  ��                 5.     Exit                            ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("                               Select number to execute : ");

}

/* 4.Manage */
void PrintManagementMenu()
{
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                    [ Management ]                      �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                 1.     Score                           ��\n");
	printf("  ��                 2.     Assignment                      ��\n");
	printf("  ��                 3      Student                         ��\n");
	printf("  ��                 4.     Notice                          ��\n");
	printf("  ��                 5.     Read File                       ��\n");
	printf("  ��                 6.     Write File                      ��\n");
	printf("  ��                 ESC.   Back                            ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("                               Select number to execute : ");
}

/* 4.Manage -> 1.Score */
void PrintScoreMenu()
{
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                       [ Score ]                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                 1.     Register                        ��\n");
	printf("  ��                 2.     Modifiy                         ��\n");
	printf("  ��                 3      Delete                          ��\n");
	printf("  ��                 4.     Print                           ��\n");
	printf("  ��                 ESC.   Back                            ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("                               Select number to execute : ");
}

/* 4.Manage -> 2.Assignment */
void PrintAssignmentMenu()
{
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                     [ Assignment ]                     �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                 1.     Register                        ��\n");
	printf("  ��                 2.     Modifiy                         ��\n");
	printf("  ��                 3      Delete                          ��\n");
	printf("  ��                 4.     Print                           ��\n");
	printf("  ��                 ESC.   Back                            ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("                               Select number to execute : ");
}

/* 4.Manage -> 3.Student */
void PrintStudentMenu()
{
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                      [ Student ]                       �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                 1.     Register                        ��\n");
	printf("  ��                 2.     Modifiy                         ��\n");
	printf("  ��                 3      Delete                          ��\n");
	printf("  ��                 4.     Print                           ��\n");
	printf("  ��                 ESC.   Back                            ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("                               Select number to execute : ");
}

/* 4.Manage -> 4.Notice */
void PrintNoticeMenu()
{
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                      [ Notice ]                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                 1.     Register                        ��\n");
	printf("  ��                 2.     Modifiy                         ��\n");
	printf("  ��                 3      Delete                          ��\n");
	printf("  ��                 4.     Print                           ��\n");
	printf("  ��                 ESC.   Back                            ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("                               Select number to execute : ");
}

void PrintSelectCourse() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HPlease select number of a course to manage");
}

void PrintRegisterCourse() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HPlease insert name of new subject");
	printf("\033[11;13H:  ");
}

void PrintModifyCourse() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HPlease insert number what you want to modify");
	printf("\033[11;13H:  ");
}

void PrintModifyCourseName() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HPlease enter the new name of course");
	printf("\033[11;13H:  ");
}

void PrintDeleteCourse() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HPlease insert number what you want to delete");
	printf("\033[11;13H:  ");
}

void PrintRegisterScoreID() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HInput student ID to register score");
	printf("\033[11;13H:  ");
}

void PrintRegisterMidtermScore() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HInput midterm score");
	printf("\033[11;13H:  ");
}

void PrintRegisterFinalScore() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HInput final score");
	printf("\033[11;13H:  ");
}

void PrintModifyScoreID() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HInput student ID to modify score");
	printf("\033[11;13H:  ");
}

void PrintModifyMidtermScore() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HInput midterm score to modify");
	printf("\033[11;13H:  ");
}

void PrintModifyFinalScore() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HInput final score to modify");
	printf("\033[11;13H:  ");
}

void PrintDeleteScoreID() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HInput student ID to Delete Score");
	printf("\033[11;13H:  ");
}

void PrintRegisterAssignment() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HPlease insert comments of a new assignment");
	printf("\033[11;13H:  ");
}

void PrintModifyAssignment() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HWhich assignment do you want to modify?");
	printf("\033[11;13H:  ");
}

void PrintModifyAssignmentComments() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HPlease insert comments about an assignment");
	printf("\033[11;13H:  ");
}

void PrintDeleteAssignment() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HWhich assignment do you want to delete?");
	printf("\033[11;13H:  ");
}

void PrintRegisterStudent() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HID of new student");
	printf("\033[11;13H:  ");
}

void PrintRegisterStudentName() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HName of new student");
	printf("\033[11;13H:  ");
}

void PrintModifyStudentName() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HNew name of the student");
	printf("\033[11;13H:  ");
}

void PrintDeleteStudent() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HDelete the student [y/n]");
	printf("\033[11;13H:  ");
}

void PrintRegisterNotice() {
	system("cls");
	printf("\n\n\n  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        �� \n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��                                                        ��\n");
	printf("  ��������������������������������������������������������������������������������������������������������������������\n");
	printf("\033[9;13HEnter notice");
	printf("\033[11;13H:  ");
}