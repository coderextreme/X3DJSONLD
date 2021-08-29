###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='TestRegularExpressionChecks.x3d',name='title'),
    meta(content='Conformance test for regular expression checks. Tests are performed by build.xml target processScenes.regularExpressionChecks.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='19 March 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='this scene contains intentional errors in floating point arrays in order to test regular expression (regex) checking',name='error'),
    meta(content='../build.xml',name='reference'),
    meta(content='X3D regular expression conformance test',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestRegularExpressionChecks.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestRegularExpressionChecks.x3d'),
    Background(skyColor=[(1,0.768627,0.321569)]),
    Shape(
      geometry=Text(string=["This scene is a","conformance test for","regular expression checks"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.8,0.6),shininess=0.8))),
    ScalarInterpolator(DEF='MergedFloatsErrorDetectionTest',key=[0,0.250.5,0.75,1],keyValue=[0,1,2,3,4,5]),
    ScalarInterpolator(DEF='LeadingZerosErrorDetectionTest',key=[0,0.25,0.5,0.75,01],keyValue=[0,01,2,3,4,5])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestRegularExpressionChecks.py")
