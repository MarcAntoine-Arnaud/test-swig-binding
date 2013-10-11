import os
import ConfigParser

config = ConfigParser.RawConfigParser()
config.read('scons.cfg')

env = Environment().Clone()
env.Append(
	CPPPATH = [
		'#',
		config.get('PYTHON', 'inc')
		]
	)

env.Append(
	CXXFLAGS = [
		'-std=gnu++0x',
		#'-Wall', '-small' , '-fcompact', '-O', '-modern'
		]
	)

env.Append(
	LINKFLAGS = [
		]
	)

env.StaticLibrary(
	'helloWorld',
	Glob( 'srcCpp/*.cpp' ),
	)

env.SharedLibrary(
	'helloBinding',
	Glob( 'srcCpp/*.c*' ),
	shared=True,
	SHLIBPREFIX='_',
	)

