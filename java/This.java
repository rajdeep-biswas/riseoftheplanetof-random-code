/* uses of this -
	
1. remove ambiguity
2. 
3. this() is the equivalent of calling the default constructor of a class
	* has to be the first executable line
4. this can be passed as a parameter (to a function)
	* this is a reference variable

ClassName obj; here obj is just a reference variable
obj = new ClassName(); NOW obj is an object

*/

class A5 {
	void m() {
		System.out.println(this);
	}

	public static void main(String args[]) {
		A5 obj = new A5();
		System.out.println(obj);
		obj.m();
	}
}