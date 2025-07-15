####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python flower3.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(name='title',content='flower3.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d'),
    meta(name='description',content='a flower')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    DirectionalLight(direction=(0,-0.8,-0.2),intensity=0.5),
    Background(skyColor=[(1.000,1.000,1.000)]),
    Viewpoint(description='One mathematical orbital',position=(0,0,50)),
    Transform(DEF='OrbitTransform',translation=(8,0,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.5,1),specularColor=(0,0.5,1))),
        geometry=IndexedFaceSet(convex=False,DEF='Orbit',
          coord=Coordinate(DEF='OrbitCoordinates')))]),
    Script(DEF='OrbitScript',
      field=[
      field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
      field(accessType='outputOnly',name='coordinates',type='MFVec3f'),
      field(accessType='outputOnly',name='coordIndexes',type='MFInt32')]
      # 
        <field accessType="inputOutput" name="e" type="SFFloat" value="5"/>
        <field accessType="inputOutput" name="f" type="SFFloat" value="5"/>
        <field accessType="inputOutput" name="g" type="SFFloat" value="5"/>
        <field accessType="inputOutput" name="h" type="SFFloat" value="5"/>
        <field accessType="inputOutput" name="t" type="SFFloat" value="0"/>
        <field accessType="inputOutput" name="p" type="SFFloat" value="0"/>
        <field accessType="initializeOnly" name="resolution" type="SFInt32" value="100"/>
	
      ,

    sourceCode="""
ecmascript:
    
var e = 5;
var f = 5;
var g = 5;
var h = 5;
var resolution = 100;
var t = 0;
var p = 0;

function initialize() {
     generateCoordinates(resolution);
     var localci = new MFInt32();
     var arrIndex = 0;
     for (var i = 0; i < resolution-1; i++) {
     	for (var j = 0; j < resolution-1; j++) {
	     localci[arrIndex++] = i*resolution+j;
	     localci[arrIndex++] = i*resolution+j+1;
	     localci[arrIndex++] = (i+1)*resolution+j+1;
	     localci[arrIndex++] = (i+1)*resolution+j;
	     localci[arrIndex++] = -1;
	}
    }
    coordIndexes = localci;
}

function generateCoordinates(resolution) {
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var localc = new MFVec3f();
     var arrIndex = 0;
     for (var  i = 0; i < resolution; i++) {
     	for (var  j = 0; j < resolution; j++) {
		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
		localc[arrIndex++] = new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		);
		theta += delta;
	}
	phi += delta;
     }
     coordinates = localc;
}

function set_fraction(fraction, eventTime) {
	t += 0.5;
	p += 0.5;
	var choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		e += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		f += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		g += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		h += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	if (f < 1) {
		f = 10;
	}
	if (g < 1) {
		g = 4;
	}
	if (h < 1) {
		h = 4;
	}
	generateCoordinates(resolution);
}
"""),
    TimeSensor(DEF='Clock',cycleInterval=16,loop=True),
    ROUTE(fromNode='OrbitScript',fromField='coordIndexes',toNode='Orbit',toField='set_coordIndex'),
    ROUTE(fromNode='OrbitScript',fromField='coordinates',toNode='OrbitCoordinates',toField='point'),
    ROUTE(fromNode='Clock',fromField='fraction_changed',toNode='OrbitScript',toField='set_fraction')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for flower3.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python flower3.py load and self-test diagnostics complete.")
