####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python flowers4.py
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
    component(name='Scripting',level=1),
    component(name='EnvironmentalEffects',level=3),
    component(name='Shaders',level=1),
    component(name='CubeMapTexturing',level=1),
    component(name='Texturing',level=1),
    component(name='Rendering',level=1),
    component(name='Grouping',level=3),
    component(name='Core',level=1),
    meta(content='flowers4.x3d',name='title'),
    meta(content='John Carlson',name='creator'),
    meta(content='manual',name='generator'),
    meta(content='https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d',name='identifier'),
    meta(content='an animated flower',name='description')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"],bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"],frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"],leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"],rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"],topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]),
    Transform(DEF='transform',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.7),specularColor=(0.5,0.5,0.5)),
          shaders=[
          ComposedShader(DEF='shader',language='GLSL',
            field=[
            field(name='cube',accessType='inputOutput',type='SFInt32',value=0),
            field(name='chromaticDispertion',accessType='inputOutput',type='SFVec3f',value=(0.98,1,1.033)),
            field(name='bias',accessType='inputOutput',type='SFFloat',value=0.5),
            field(name='scale',accessType='inputOutput',type='SFFloat',value=0.5),
            field(name='power',accessType='inputOutput',type='SFFloat',value=2.0)],
            parts=[
            ShaderPart(url=["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]),
            ShaderPart(type='FRAGMENT',url=["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"])]),],
          texture=ComposedCubeMapTexture(
            backTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]),
            bottomTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
            frontTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]),
            leftTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]),
            rightTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]),
            topTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]))),
        geometry=IndexedFaceSet(DEF='Orbit',convex=False,
          coord=Coordinate(DEF='OrbitCoordinates')))]),
    Script(DEF='OrbitScript',
      field=[
      field(name='set_fraction',accessType='inputOnly',type='SFFloat'),
      field(name='coordinates',accessType='inputOutput',type='MFVec3f'),
      field(name='coordIndexes',accessType='outputOnly',type='MFInt32')],

    sourceCode="""
ecmascript:
"+
"
"+
"var e = 5;
"+
"var f = 5;
"+
"var g = 5;
"+
"var h = 5;
"+
"
"+
"function initialize() {
"+
"     var resolution = 100;
"+
"     updateCoordinates(resolution);
"+
"     var cis = [];
"+
"     for ( i = 0; i < resolution-1; i++) {
"+
"     	for ( j = 0; j < resolution-1; j++) {
"+
"	     cis.push(i*resolution+j);
"+
"	     cis.push(i*resolution+j+1);
"+
"	     cis.push((i+1)*resolution+j+1);
"+
"	     cis.push((i+1)*resolution+j);
"+
"	     cis.push(-1);
"+
"	}
"+
"    }
"+
"    coordIndexes = new MFInt32(cis);
"+
"}
"+
"
"+
"function updateCoordinates(resolution) {
"+
"     var theta = 0.0;
"+
"     var phi = 0.0;
"+
"     var delta = (2 * 3.141592653) / (resolution-1);
"+
"     var crds = [];
"+
"     for ( i = 0; i < resolution; i++) {
"+
"     	for ( j = 0; j < resolution; j++) {
"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
"+
"		crds.push(new SFVec3f(
"+
"			rho * Math.cos(phi) * Math.cos(theta),
"+
"			rho * Math.cos(phi) * Math.sin(theta),
"+
"			rho * Math.sin(phi)
"+
"		));
"+
"		theta += delta;
"+
"	}
"+
"	phi += delta;
"+
"     }
"+
"     coordinates = new MFVec3f(crds);
"+
"}
"+
"
"+
"function set_fraction(fraction, eventTime) {
"+
"	var choice = Math.floor(Math.random() * 4);
"+
"	switch (choice) {
"+
"	case 0:
"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;
"+
"		break;
"+
"	case 1:
"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;
"+
"		break;
"+
"	case 2:
"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;
"+
"		break;
"+
"	case 3:
"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;
"+
"		break;
"+
"	}
"+
"	if (f < 1) {
"+
"		f = 10;
"+
"	}
"+
"	if (g < 1) {
"+
"		g = 4;
"+
"	}
"+
"	if (h < 1) {
"+
"		h = 4;
"+
"	}
"+
"	var resolution = 100;
"+
"	updateCoordinates(resolution);
"+
"}
"""),
    TimeSensor(DEF='Clock',cycleInterval=16.0,loop=True),
    ROUTE(fromField='coordIndexes',fromNode='OrbitScript',toField='set_coordIndex',toNode='Orbit'),
    ROUTE(fromField='coordinates',fromNode='OrbitScript',toField='set_point',toNode='OrbitCoordinates'),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='OrbitScript')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for flowers4.py:')
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

print("python flowers4.py load and self-test diagnostics complete.")