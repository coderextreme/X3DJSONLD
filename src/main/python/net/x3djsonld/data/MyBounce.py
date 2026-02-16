####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python MyBounce.py
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
    meta(name='title',content='MyBounce.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='description',content='3 prismatic spheres'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    Transform(DEF='transform',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.7,.7,.7),specularColor=(.5,.5,.5))),
        geometry=Sphere(),)]),
    Script(DEF='Bounce2',
      field=[
      field(name='set_translation',accessType='inputOnly',type='SFVec3f',value=(0,0,0)),
      field(name='translation_changed',accessType='outputOnly',type='SFVec3f',value=(0,0,0)),
      field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
      field(name='velocity',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
      field(name='set_fraction',accessType='inputOnly',type='SFTime')],

    sourceCode="""
ecmascript:
			function newBubble() {
			    translation = new SFVec3f(0, 0, 0);
			    velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			function set_fraction() {
			    translation = new SFVec3f(
			    	translation.x + velocity.x,
				translation.y + velocity.y,
				translation.z + velocity.z);
				if (Math.abs(translation.x) > 10) {
					newBubble();
				} else if (Math.abs(translation.y) > 10) {
					newBubble();
				} else if (Math.abs(translation.z) > 10) {
					newBubble();
				} else {
					velocity = new SFVec3f(
						velocity.x + Math.random() * 0.2 - 0.1,
						velocity.y + Math.random() * 0.2 - 0.1,
						velocity.z + Math.random() * 0.2 - 0.1
					);
				}
			}

			function initialize() {
			     newBubble();
			}
"""),
    TimeSensor(DEF='TourTime',cycleInterval=0.150,loop=True),
    ROUTE(fromNode='TourTime',fromField='cycleTime',toNode='Bounce2',toField='set_fraction'),
    ROUTE(fromNode='Bounce2',fromField='translation_changed',toNode='transform',toField='set_translation')])
)
### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for MyBounce.py:')
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

print("python MyBounce.py load and self-test diagnostics complete.")
