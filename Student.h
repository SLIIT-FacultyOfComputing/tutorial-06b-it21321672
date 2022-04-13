class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
  private:
    int studentID;
    char studentName[20];
  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
  public:
    void assignDetails(int id , char name[]);
    void display();
};