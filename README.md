# Tasks-Scheduling

A C++ project to find a way of completing each of 'n' tasks within its deadline using Graph Data structure and Topological Sorting.

# Table of Contents
* [Introduction](#Introduction)
* [Algorithm](#Algorithm)
* [Setup](#setup)

### Introduction

* Given 'n' tasks / assignments each having its own deadline. 
* It is required to find an order of execution of tasks such that each task is completed within its own deadline.

 #### tasks_deadline.txt
 
 * This file contains information about the task along with its deadline.
 * The task name and its corresponding deadline is written on each line separated by :
 * Each line in the file contains a single task along with its deadline.
 * The deadline has to be provided in a specific format : Month/Date/Time(PM/AM)
 * Example : if the task name is "Object Oriented Design" and the deadline is 1PM 17th March, 2022, the tasks_deadline.txt will contain :
 ![Alt text](https://github.com/JasonHrangkhol/Tasks-Scheduling/blob/main/tasks_deadline.png?raw=true "Optional Title")

 #### node.h
 
 * A node consists of taskname along with its deadline and is declared in node.h

 #### graph.h
 
 * A graph along with its fucionalities is declared in graph.h . 
 
 #### utils.h
 
 * All funcionalites are declared and defined in utlis.h.

### Algorithm

* The taskname along with its deadline is read from tasks_deadline.txt.
* The nodes are built using each taskname and its corresponding deadline.
* After the nodes are built, the edges are constructed between the nodes.
* After building the graph, topological sorting is applied on the graph.
