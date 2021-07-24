public class Main {
	public static void main(String[] args) {
                System.out.println(System.getProperty("java.library.path"));
		int result = MyJNI.test();
		System.out.println(result);
	}
}
