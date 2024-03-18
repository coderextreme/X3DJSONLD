####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python extrusion.py
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
    meta(content='John W Carlson',name='creator'),
    meta(content='December 13 2015',name='created'),
    meta(content='extrusion.x3d',name='title'),
    meta(content='https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d',name='identifier'),
    meta(content='beginnings of a force directed graph in 3D',name='description'),
    meta(content='Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,0))),
        geometry=Extrusion(DEF='extrusion',creaseAngle=0.785,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],spine=[(-50,-50,0),(50,50,0)])),
      TimeSensor(DEF='TourTime',loop=True),
      Script(DEF='MoveCylinder',
        field=[
        field(name='set_cycle',accessType='inputOnly',type='SFTime'),
        field(name='spine',accessType='inputOutput',type='MFVec3f',value=[(-50,-50,0),(50,50,0)])],

      sourceCode="""
ecmascript:
"+
"
"+
"                function set_cycle(value) {
"+
"                        Browser.print(value);
"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);
"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);
"+
"		        spine = new MFVec3f([endA, endB]);
"+
"                }
"""),
      ROUTE(fromField='cycleTime',fromNode='TourTime',toField='set_cycle',toNode='MoveCylinder'),
      ROUTE(fromField='spine_changed',fromNode='MoveCylinder',toField='set_spine',toNode='extrusion')])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for extrusion.py:')
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

print("python extrusion.py load and self-test diagnostics complete.")
