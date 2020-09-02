class TestApp {
	protected int x, y;
}

class Main {
	public static void main(String args[]) {
		TestApp app = new TestApp();
		System.out.println(app.x + " " + app.y);
	}
}