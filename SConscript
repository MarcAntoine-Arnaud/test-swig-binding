import os
import ConfigParser

config = ConfigParser.RawConfigParser()

config.read(['scons.cfg', os.path.expanduser('../scons.cfg')])

pyInclude = config.get( 'PYTHON', 'inc' )


env = Environment().Clone()

env.Append(
	CPPPATH = [
			pyInclude,
			"srcCpp",
		]
	)

env.Append(
	CXXFLAGS = [
			'-std=gnu++0x',
			'-Wall',
		]
	)

env.Append(
	LINKFLAGS = [
		]
	)

hello = env.StaticLibrary(
	'helloWorld',
	Glob( 'srcCpp/*.cpp' ),
	)

envPy = env

envPy.Append(
		SWIGFLAGS = [
			'-python',
			'-c++',
			'-shadow',
			'-Wall',
		]
	)

envPy.Append(
		SHLIBPREFIX = '_'
	)

pyHello = envPy.SharedLibrary(
	'_helloBinding',
	[
		Glob( 'srcCpp/*.cpp' ),
		Glob( 'srcCpp/*.i' ),
	],
	)
