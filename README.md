# assignment-01
It is a linklist that can handle complex number ADT.

The main.cpp file includes two header files named cnumber.h and linklist.h

CNUMBER.H

	In the header file of cnumber.h a class named cnumber is created.

	Private Part:

		The private part has two variables of double type named real and imaginary.

	Public Part:

		The public part has the followig functions in it:
	
		1-	No Argument Constructor: Initializes real and imaginary with 0.
		2-	Overloaded Constructor: Initializes real and imaginary with input values.
		3-	setter: It takes the values of real and imaginary from user.
		4-	getter: It displays the value of complex number on the screen.
		5-	add: It adds two complex numbers.
		6-	sub: It subtracts two complex numbers.
		7-	mul: It multiplies two complex numbers.
		8-	div: It divides two complex numbers.
		9-	operator +: It includes the support of operator "+" in cnumber class.
		10-	operator -: It includes the support of operator "-" in cnumber class.
		11-	operator *: It includes the support of operator "*" in cnumber class.
		12-	operator /: It includes the support of operator "/" in cnumber class.

LINKLIST.H

	In the header file of linklist.h a struct named node and a class named linklist is created.

	NODE:

		It has a variable named val of cnumber type and a pointer named ptr of node type.

	LINKLIST:

		Private Part:

			The private part has a pointer named head of node type.

		Public Part:

			The public part has the following functions in it:

			1-	No Argument Constructor: It points the head to NULL.
			2-	insert_at_start: It creates a new node and inserts it at the start of the linklist.
			3-	delete_at_start: It deletes the node at the start of the linklist.
			4-	insert_at_end: It creates a new node and inserts it at the end of the linklist.
			5-	delete_at_end: It deletes the node at the end of the linklist.
			6-	insert_at_pos: It creates a new node and inserts it in the linklist after the position entered by the user.
			7-	delete_at_pos: It deletes the node in the linklist at the position entered by the user.
			8-	val_at_pos: It displays the value of the complex number stored in the node at the position entered by the user.
			9-	print: It displays all of the nodes in the linklist in order.
			10-	operator []: It includes the support of operator "[]" in linklist class.
MAIN.CPP

	1-	In the main function I created a linklist l1.
	2-	Then I created three objects named c1, c2 and c3 of cnumber class and initialized them with values of (4, 5), (3, -3) and (4, 3) respectively.
	3-	Then I inserted c1 at start of linklist and c2 and c3 at end of linklist.
	4-	Then I added c1 and c2 and inserted the result at the end of linklist.
	5-	Then I subtracted c1 and c3 and inserted the result at the end of linklist.
	6-	Then I multiplied c2 and c3 and inserted the result at the end of linklist.
	7-	Then I deleted the node at position 4.
	8-	Then I divided c1 and c3 and inserted the result at the end of linklist.
	NOTE:	linklist is printed after each step from step 3 to step 8

	OUTPUT AFTER EACH STEP:

		After step 3:
			1-	4 + 5j
			2-	3 - 3j
			3-	4 + 3j

		After step 4:
			1-	4 + 5j
			2-	3 - 3j
			3-	4 + 3j
			4-	7 + 2j

		After step 5:
			1-	4 + 5j
			2-	3 - 3j
			3-	4 + 3j
			4-	7 + 2j
			5-	0 + 2j

		After step 6:
			1-	4 + 5j
			2-	3 - 3j
			3-	4 + 3j
			4-	7 + 2j
			5-	0 + 2j
			6-	21 - 3j

		After step 7:
			1-	4 + 5j
			2-	3 - 3j
			3-	4 + 3j
			4-	0 + 2j
			5-	21 - 3j

		After step 8:
			1-	4 + 5j
			2-	3 - 3j
			3-	4 + 3j
			4-	0 + 2j
			5-	21 - 3j
			6-	1.24 + 0.32j
