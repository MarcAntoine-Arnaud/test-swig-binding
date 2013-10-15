
public class testBindingJava {

	static {
		System.out.println( "loading...");
		System.loadLibrary( "helloBinding" );
	}

	public static void main(String argv[]) {
		//System.out.println(System.getProperty("java.library.path"));

		System.out.println( "loaded, ready to use.");
		
		helloBinding.basicPrintTest();

		HelloWorld hb = new HelloWorld();
		hb.printElem();
		hb.setString( "test from binding java" );
		hb.printElem();
		hb.setString( "Bye bye. Java" );
		hb.printElem();
	}
}
