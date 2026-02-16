####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python geobubbles.py
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
    component(level=1,name='Geospatial'),
    meta(name='title',content='geobubbles.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d'),
    meta(name='description',content='geo bubbles')]),
  Scene=Scene(
    children=[
    Comment('Viewpoint DEF=\'Tour\' position=\'0 0 4\' orientation=\'1 0 0 0\' description=\'Tour Views\'/'),
    Comment('PositionInterpolator DEF=\'TourPosition\' key=\'0 1\' keyValue=\'-0.5 -0.5 4 -0.5 0.5 4\'/'),
    GeoViewpoint(DEF='Tour',position=(0,0,4),orientation=(1,0,0,0),description='Tour Views'),
    Background(backUrl=["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"],bottomUrl=["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"],frontUrl=["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"],leftUrl=["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"],rightUrl=["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"],topUrl=["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"]),
    Transform(
      children=[
      Shape(
        geometry=Sphere(),
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.7,0.7),specularColor=(0.5,0.5,0.5))))]),
    TimeSensor(DEF='TourTime',cycleInterval=5,loop=True),
    GeoPositionInterpolator(DEF='TourPosition',key=[0,1],keyValue=[(0.0015708,0,4),(0,0.0015708,4)]),
    Script(DEF='RandomTourTime',
      field=[
      field(name='set_cycle',accessType='inputOnly',type='SFTime'),
      field(name='val',accessType='inputOutput',type='SFFloat',value=0),
      field(name='positions',accessType='inputOutput',type='MFVec3d',value=[(0.0015708,0,4),(0,0.0015708,4)]),
      field(name='position',accessType='inputOutput',type='MFVec3d',value=[(0.0015708,0,4),(0,0.0015708,4)])],

    sourceCode="""
ecmascript:

               function set_cycle(value) {
                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo
                        var ov = val;
			// Browser.print('old '+ov);
                        do {
                                val = Math.floor(Math.random()*2);
                                var vc = val;
                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);
                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);
			// Browser.println(positions[ov]);
			// Browser.println(positions[vc]);
                        position = new MFVec3d();
                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);
                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);
               }
"""),
    ROUTE(fromNode='TourTime',fromField='cycleTime',toNode='RandomTourTime',toField='set_cycle'),
    ROUTE(fromNode='RandomTourTime',fromField='position',toNode='TourPosition',toField='keyValue'),
    ROUTE(fromNode='TourTime',fromField='fraction_changed',toNode='TourPosition',toField='set_fraction'),
    ROUTE(fromNode='TourPosition',fromField='geovalue_changed',toNode='Tour',toField='set_position')])
)
### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for geobubbles.py:')
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

print("python geobubbles.py load and self-test diagnostics complete.")
