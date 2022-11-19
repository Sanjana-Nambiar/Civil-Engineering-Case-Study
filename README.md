Civil Engineering Water Pressure Exerted on a Dam

Step 1: Problem Identification and Statement
The objective is to develop a software that will calculate force on the dam at specific locations depending on the depth of the channel (D), width of the channel base (b), elevation of water above channel bottom (d), distance from edge to bank of the channel (a), and knowing that g=9.81 N/kg and density of the water is 1000kg/m3.

Step 2: Gathering of Information and Input/output Description
Relevant information:
Water exerts pressure on the upstream face of a dam as shown in figure 1. The pressure can be characterized by:
where p(z) = pressure in Pascal’s (or N/m2) exerted at an elevation z meters above the reservoir bottom; ρ is the density of water, which for this problem is assumed to be a constant 1000 kg/m3; g is the acceleration due to gravity (9.81 m/s2); and D is the elevation (in m) of the water surface above the reservoir bottom.
According to equation (1), pressure increases linearly with depth, as depicted in Figure 1-a. Omitting atmospheric pressure (because it works against both sides of the dam face and essentially cancels out), the total force ft. can be determined by multiplying pressure times the area of the dam face (as shown in Figure 1-b). Because both pressure and area vary with elevation, the total force is obtained by evaluating
     Figure 1: Water exerting pressure on the upstream face of a dam: (a) side view showing force increasing linearly with depth; (b) front view showing width of dam in meters. Where w(z) = width of the dam face (m) at elevation z (Figure 1-b).
   Assume that the width of the channel is modeled to be a second order polynomial as shown here:
Where a is distance from edge of the channel to the bank of the channel, z is distance from channel bottom, D is depth of the channel, b is width of the channel base, and w(z) is width of water.
Combining equations (1), (2), and (3), we get:
This integration yields the following equation:
This equation will calculate force on the dam at specific locations depending on D, b, d and a
Input/output Description:
The input / output information can be presented as follows;
The inputs are:
 Choice
 the depth of the channel (D)
 width of the channel base (b)
 elevation of water above channel bottom (d)
 distance from edge to bank of the channel (a)
The outputs are:
 Menu
 Message to input the values
 Force relate to the choice
 Message to ask the user for another choice
 Invalid option
       3|Page
 
   Alternatively, the inputs and output could be represented using the I-O diagram:
 Choice
The depth of the channel (D)
width of the channel base (b) elevation of water above channel bottom (d) distance from edge to bank of the channel (a)
The following explains how the program executes:
The force exerted on the dam
      THIS PROGRAM COMPUTES THE FORCE EXERTED ON A DAM AT SPECIFIC LOCATIONS
Please enter your selection for determining the force exerted
Enter 1 for determining the force on the dam
Enter 2 for determining the forces for a range of water elevations Enter 3 for exiting the program
1
TO DETERMINE THE FORCE ON THE DAM
Enter the depth of the channel (D)
1
Enter the width of the channel base (b)
1
Enter the elevation of water above the channel bottom (d)
1
Enter the distance from edge to bank of the channel (a)
1
The force exerted on the dam = 6540N
Please enter your selection for determining the force exerted
Enter 1 for determining the force on the dam
Enter 2 for determining the forces for a range of water elevations Enter 3 for exiting the program
(When the user enters ‘3’, the program exits)
   4|Page
 
Step 3: Design of the algorithm and hand-solved problems Test Cases:
Test Case 1: Invalid selection input
THIS PROGRAM COMPUTES THE FORCE EXERTED ON A DAM AT SPECIFIC LOCATIONS
Please enter your selection for determining the force exerted
Enter 1 for determining the force on the dam
Enter 2 for determining the forces for a range of water elevations Enter 3 for exiting the program
5 (invalid choice)
(the program must display an error message)
Invalid choice, please enter a valid option (1,2,3).
Test Case 2: Force exerted on the dam
1. The user enters the value D=1, b=1, d=1, a=1 and the output should be: The force exerted on the dam = 6540N
2. The user enters the value D=10, b=2, d=5, a=9 and the output should be: The force exerted on the dam = 337219N
Test Case 3: Force for a range of water elevation
1. The user enters the value D=10, b=4, a=1, d1=2, d2=8, stepsize=2 and the output
        should be:
             water elevation
2 4 6 8
2. The user should be:
              water elevation
              1
              3
              5
Test Case 4: Exit the program
force
 78741.6
 318106
 727510
 1.32265e+06
enters the value D=15, b=2, a=3, d1=1, d2=5, stepsize=2 and the output
Enter 3 to exit the program:
Print the message “Program terminating ...” and exit the program.
force
9831.8
90055.8
258875
