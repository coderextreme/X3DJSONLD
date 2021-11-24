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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Example09.x3d',name='title'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='26 June 2000',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D working group',name='creator'),
    meta(content='VRML 97 specification example: A DirectionalLight source illuminates only the objects in its enclosing grouping node. The light illuminates everything within this coordinate system, including the objects that precede it in the scene graph.',name='description'),
    meta(content='originals/exampleD_9.wrl',name='reference'),
    meta(content='VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.9 Directional light',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.9',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example09.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Example09.x3d'),
    Group(
      children=[
      Transform(DEF='UnlitShapeOne',translation=(-3.0,0.0,0.0),
        children=[
        Shape(
          geometry=Box(),
          appearance=Appearance(DEF='App',
            material=Material(diffuseColor=(0.8,0.4,0.2))))]),
      Group(DEF='LitParent',
        children=[
        Transform(DEF='LitShapeOne',translation=(0.0,2.0,0.0),
          children=[
          Shape(
            geometry=Sphere(),
            appearance=Appearance(USE='App'))]),
        DirectionalLight(),
        Transform(DEF='LitShapeTwo',translation=(0.0,-2.0,0.0),
          children=[
          Shape(
            geometry=Cylinder(),
            appearance=Appearance(USE='App'))])]),
      Transform(DEF='UnlitShapeTwo',translation=(3.0,0.0,0.0),
        children=[
        Shape(
          geometry=Cone(),
          appearance=Appearance(USE='App'))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Example09.py")
