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
    meta(content='ExtrusionHeart.x3d',name='title'),
    meta(content='Simple extrusion of a Valentine heart.',name='description'),
    meta(content='Class participants in course Introduction to VRML/X3D.',name='creator'),
    meta(content='14 February 2001',name='created'),
    meta(content='27 November 2015',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Extrusion Heart',orientation=(1,0,0,1.57),position=(0,-4,0)),
    Transform(translation=(0,-0.5,0),
      children=[
      Shape(
        geometry=Extrusion(creaseAngle=3.14159,crossSection=[(0,0.8),(0.2,1),(0.7,0.95),(1,0.5),(0.8,0),(0.5,-0.3),(0,-0.7),(-0.5,-0.3),(-0.8,0),(-1,0.5),(-0.7,0.95),(-0.2,1),(0,0.8)],scale=[(0.01,0.01),(0.8,0.8),(1,1),(0.8,0.8),(0.01,0.01)],solid=False,spine=[(0,0,0),(0,0.1,0),(0,0.5,0),(0,0.9,0),(0,1,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.3,0.3))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for ExtrusionHeart.py")
