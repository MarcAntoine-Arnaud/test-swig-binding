import helloBinding

print "*** start of test ***"

hw = helloBinding.HelloWorld( )

hw.printElem()
hw.setString( "hello binding" )
test="test"
hw.setData( test, len(test) )
hw.printElem()
print hw.getData()
print "***   end of test ***"
