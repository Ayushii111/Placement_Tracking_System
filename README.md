# Placement_Tracking_System
## Description
This is a *console-based C++ project* that allows alumni to upload placement and meetup information, and students to access this information.  
The project demonstrates *file handling, object-oriented programming (OOP), and simple login functionality* using C++.

---

## Features
- Alumni can upload information about:
  - Company vacancies
  - Meetups and events
  - Job details (package, location, role)
- Students can login and access information uploaded by alumni.
- Validates login based on existing alumni data.
- Data is stored in text files (Alumni.txt, Event.txt, NewJob.txt), so it persists between program runs.

---

## Files
- project.cpp : Code for alumni to upload info.  
- alumini.cpp : Code for students
- Alumni.txt : Stores alumni details (sample records can be added).  
- Event.txt : Stores meetup/event details.  
- NewJob.txt : Stores job information (package, location, role).  
- README.md : Project description and instructions.
-  
## How to Run
1. *Clone the repository*
```bash
git clone https://github.com/Ayushii111/Placement-Tracking-System.git

2.Compile the C++ files
g++ project.cpp -o project
g++ alumini.cpp -o alumini

3.Run the programs
./project    # Alumni can upload info
./alumini    # Students can access info
