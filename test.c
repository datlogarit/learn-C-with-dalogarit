#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Cấu trúc để lưu thông tin sinh viên
struct Student {
    int id;
    char name[50];
    float gpa;
    struct Student *next;
};
typedef struct Student Student;

// Hàm tạo một sinh viên mới
Student* createStudent(int id, char *name, float gpa) {
    Student *newStudent = (Student*) malloc(sizeof(Student));
    newStudent->id = id;
    strcpy(newStudent->name, name);
    newStudent->gpa = gpa;
    newStudent->next = NULL;
    return newStudent;
}

// Hàm thêm sinh viên vào cuối danh sách
void addStudent(Student **head, int id, char *name, float gpa) {
    Student *temp = *head;
    Student *newStudent = createStudent(id, name, gpa);
    if(*head == NULL) {
        *head = newStudent;
        return;
    }
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newStudent;
}

// Hàm in danh sách sinh viên
void printStudents(Student *head) {
    Student *temp = head;
    printf("id\tname\tgpa\n");
    while (temp != NULL) {
        printf("%d\t%s\t%.2f\n", temp->id, temp->name, temp->gpa);
        temp = temp->next;
    }
}

// Hàm xóa sinh viên khỏi danh sách
void deleteStudent(Student **head, int id) {
    Student *temp = *head, *prev = NULL;
    while (temp != NULL && temp->id != id) {
        prev = temp;//lưu con trỏ trước khi nó duyệt đến con trỏ tiếp theo
        temp = temp->next;// lưu con trỏ tiếp theo
    }
    if (temp != NULL && temp->id == id) {//nếu tìm thấy id
        prev->next = temp->next;//con trỏ *head sẽ trỏ đến con trỏ sau con trỏ đó
        free(temp);// xóa node có id đc tìm thấy
        return;
    }
    if (temp == NULL) return;
}

// Hàm hiển thị menu và xử lý lựa chọn
void menu(Student **head) {//con trỏ thì phải truyền địa chỉ để truyền tham chiếu
    int choice, id;
    char name[50];
    float gpa;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Add student\n");
        printf("2. Delete student\n");
        printf("3. Print list student\n");
        printf("4. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the ID: ");
                scanf("%d", &id);
                printf("Enter the name: ");
                fflush(stdin);
                gets(name);
                printf("Enter the GPA: ");
                scanf("%f", &gpa);
                addStudent(&*head, id, name, gpa);//cũng phải truyền địa chỉ đến cho hàm addStudent
                break;
            case 2:
                printf("Enter the Id of student who you want delete: ");
                scanf("%d", &id);
                deleteStudent(&*head, id);
                break;
            case 3:
                printf("List student:\n");
                printStudents(*head);
                break;
            case 4:
                printf("Exit.\n");
                return;
            default:
                printf("Invalid selection.\n");
        }
    }
}

int main() {
    Student *head = NULL;
    menu(&head);//truyền địa chỉ đến hàm menu
    return 0;
}
