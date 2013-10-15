#!/usr/bin/python

import helloBinding

hb = helloBinding.HelloWorld()

hb.printElem()
hb.setString( "test from binding python" )
hb.printElem()
data="testPassingData."
hb.setData( data, len(data) )
hb.printElem()
print hb.getData()

hb.setString( "Bye bye. Python" )
hb.printElem()
