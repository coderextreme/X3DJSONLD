####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python flowers2.py
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
    component(level=1,name='Scripting'),
    meta(name='title',content='flowers2.x3d'),
    meta(content='John Carlson',name='creator'),
    meta(content='23 January 2005',name='created'),
    meta(content='9 November 2024',name='modified'),
    meta(content='2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)',name='description'),
    meta(content='https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d',name='identifier'),
    meta(content='manually written',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    Viewpoint(description='Two mathematical orbitals',position=(0,0,50)),
    Group(
      children=[
      DirectionalLight(direction=(1,1,1)),
      ProtoDeclare(name='orbit',
        ProtoInterface=ProtoInterface(
          field=[
          field(name='translation',accessType='inputOutput',type='SFVec3f',value=(-8,0,0)),
          field(name='diffuseColor',accessType='inputOutput',type='SFColor',value=(1,0.5,0)),
          field(name='specularColor',accessType='inputOutput',type='SFColor',value=(1,0.5,0)),
          field(name='transparency',accessType='inputOutput',type='SFFloat',value=0.75)]),
        ProtoBody=ProtoBody(
          children=[
          Group(
            children=[
            TimeSensor(DEF='Clock',cycleInterval=16,loop=True),
            OrientationInterpolator(DEF='OrbitPath',key=[0.0,0.50,1.0],keyValue=[(1.0,0.0,0.0,0.0),(1.0,0.0,0.0,3.14),(1.0,0.0,0.0,6.28)]),
            Transform(DEF='OrbitTransform',
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='translation')]),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='diffuseColor'),
                      connect(nodeField='specularColor',protoField='specularColor'),
                      connect(nodeField='transparency',protoField='transparency')]))),
                # 
				  <IndexedFaceSet DEF="Orbit">
				    <Coordinate DEF="OrbitCoordinates"/>
				  </IndexedFaceSet>
				  
                geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,-1],DEF='Orbit',
                  coord=Coordinate(DEF='OrbitCoordinates',point=[(0,0,1),(0,1,0),(1,0,0)])))]),
            Script(DEF='OrbitScript',
              field=[
              field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
              field(accessType='inputOutput',name='coordinates',type='MFVec3f'),
              field(accessType='inputOutput',name='coordIndexes',type='MFInt32'),
              field(accessType='inputOutput',name='e',type='SFFloat',value=5),
              field(accessType='inputOutput',name='f',type='SFFloat',value=5),
              field(accessType='inputOutput',name='g',type='SFFloat',value=5),
              field(accessType='inputOutput',name='h',type='SFFloat',value=5),
              field(accessType='inputOutput',name='resolution',type='SFInt32',value=50)],

            sourceCode="""
ecmascript:

			function initialize() {
			     generateCoordinates();
			     var arrIndex = 0;
			     for (var i = 0; i < resolution-1; i++) {
				for (var j = 0; j < resolution-1; j++) {
				     coordIndexes[arrIndex++] = i*resolution+j;
				     coordIndexes[arrIndex++] = i*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j;
				     coordIndexes[arrIndex++] = -1;
				}
			    }
			}

			function generateCoordinates() {
			     var theta = 0.0;
			     var phi = 0.0;
			     var delta = (2 * 3.141592653) / (resolution-1);
			     var arrIndex = 0;
			     for (var i = 0; i < resolution; i++) {
				for (var j = 0; j < resolution; j++) {
					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
					coordinates[arrIndex++] = new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					);
					theta += delta;
				}
				phi += delta;
			     }
			}

			function set_fraction(fraction, eventTime) {
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
				if (e < 1) {
					f = 10;
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
				generateCoordinates();
			}
"""),
            ROUTE(fromNode='OrbitScript',fromField='coordIndexes',toNode='Orbit',toField='set_coordIndex'),
            ROUTE(fromNode='OrbitScript',fromField='coordinates',toNode='OrbitCoordinates',toField='point'),
            ROUTE(fromNode='Clock',fromField='fraction_changed',toNode='OrbitScript',toField='set_fraction'),
            ROUTE(fromNode='OrbitPath',fromField='value_changed',toNode='OrbitTransform',toField='rotation'),
            ROUTE(fromNode='Clock',fromField='fraction_changed',toNode='OrbitPath',toField='set_fraction')])])),
      ProtoInstance(name='orbit',
        fieldValue=[
        fieldValue(name='translation',value=(-8,0,0)),
        fieldValue(name='diffuseColor',value=(1,0.5,0)),
        fieldValue(name='specularColor',value=(1,0.5,0)),
        fieldValue(name='transparency',value=0.75)]),
      ProtoInstance(name='orbit',
        fieldValue=[
        fieldValue(name='translation',value=(8,0,0)),
        fieldValue(name='diffuseColor',value=(0,0.5,1)),
        fieldValue(name='specularColor',value=(0,0.5,1)),
        fieldValue(name='transparency',value=0.5)])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for flowers2.py:')
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

print("python flowers2.py load and self-test diagnostics complete.")
