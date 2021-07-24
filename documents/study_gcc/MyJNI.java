public class MyJNI {
	static {
		System.loadLibrary("test");
	}
	public static native int test();
}
