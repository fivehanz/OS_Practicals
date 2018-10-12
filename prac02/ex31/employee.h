#ifndef EMPLOYEE_H
#define EMPLOYEE_H

typedef struct {
  int id_number;
  int age;
  float salary;
} DataEntry;

void initialize ( DataEntry * ) ;

#endif
