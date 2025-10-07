typedef struct {
    int roll;
    char name[50];
    float marks;
    char grade[3];
} Student;

void addStudent(Student students[], int *count);
void displayStudents(Student students[], int count);
void calculateGrade(Student *s);
void searchStudent(Student students[], int count, int roll);
void updateStudent(Student students[], int count, int roll);
