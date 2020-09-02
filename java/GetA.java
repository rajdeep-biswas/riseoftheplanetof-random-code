class A {
	A getA() {
		return this;
	}

	void message() {
		System.out.println("Hello java");
	}
}

class Test {
	public static void main(String args[]) {
		new A().getA().msg();
	}
}