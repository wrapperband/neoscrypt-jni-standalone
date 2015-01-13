public class NeoscryptWrapper {

	static
	{
		System.loadLibrary("neoscryptwrapper");
	}
	
	public static void main(String[] args) {
		NeoscryptWrapper neoScrypt = new NeoscryptWrapper();
		neoScrypt.printText();
		
		byte[] input = "myString".getBytes();
		byte[] output = input.clone();
		System.out.println("input-"+input.toString());
		neoScrypt.neoscrypt(input, output);
		System.out.println("input-"+input.toString());
		System.out.println("output-"+output.toString());
	}
	
	public native void printText();
	public native void neoscrypt(byte[] input,byte[] output);

}
