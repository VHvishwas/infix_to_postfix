# infix_to_postfix

following program is a simple application of stack
to convert an infix expression to postfix 
for eg:

### infix expression :
2+(3-4)*5
## its corrosponding postfix expression will be:
firstly bracket is done 
# eg: postfix(a+b)--> ab+
# 2+34-*5-->> 
now multiplication is done
# 2+34-5*-->>
now addition is done
# 234-5*+
final postifix conversion
# algorithm required to do this
Algorithm
1. Scan the infix expression from left to right.
2. If the scanned character is an operand, output it.
3. Else,
…..3.1 If the precedence of the scanned operator is greater than the precedence of the operator in the stack(or the stack is empty), push it.
…..3.2 Else, Pop the operator from the stack until the precedence of the scanned operator is less-equal to the precedence of the operator residing on the top of the stack. Push the scanned operator to the stack.
4. If the scanned character is an ‘(‘, push it to the stack.
5. If the scanned character is an ‘)’, pop and output from the stack until an ‘(‘ is encountered.
6. Repeat steps 2-6 until infix expression is scanned.
7. Pop and output from the stack until it is not empty.

# now the evaluation of expression will be very easy once u are done with conversion of infix to postfix
 put the operand into stack 
 and depeding upon the type of operator eg:(binary and uniary)
 pop that much element from your stack 
 and calcualte the expression as per your operator
 now push that result again into stack 
 and repeate the above algorithm
 
 
 :)HAPPY CODING
