class Student {
	int rollNo;
	String name;

	static String college = "ITS";

	Student(int r, String n) {
		rollNo = r;
		name = n;
	}

	void display() {
		System.out.println(rollNo + " " + name + " " + college);
	}
}

class TestStaticVariable {
	public static void main(String args[]) {
		Student student1 = new Student(1, "rajdeep");
		Student student2 = new Student(2, "biswas");

		student1.college = "IEM";

		student1.display();
		student2.display();
	}
}