class Student {
	static int rollNo = 1;
	String name;

	void display() {
		rollNo++;
		System.out.println(rollNo);
	}

	public static void main(String args[]) {
		new Student().display();
	}
}