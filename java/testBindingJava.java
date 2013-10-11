public class testBindingJava {
	public static void main( String argv[] ) {
		//System.out.println(System.getProperty("java.library.path"));
		System.loadLibrary( "helloBinding" );
		System.out.println("Starting");
		HelloWorld hw = new HelloWorld( );
		hw.printElem();
		hw.setString("java with swig");
		hw.printElem();
		System.out.println("Ending");
	}
}
