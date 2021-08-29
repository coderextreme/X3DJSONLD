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
    meta(content='TestContainerFieldValues.x3d',name='title'),
    meta(content='Test default and improperly overridden containerField values. Original test looked at LOD, current version checks Collision node.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='23 May 2003',name='created'),
    meta(content='10 September 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='TestContainerFieldValues.original.wrl',name='reference'),
    meta(content='TestContainerFieldValues.png',name='Image'),
    meta(content="Intentional error for testing: Transform containerField='level' is illegal, use 'children' instead.",name='info'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestContainerFieldValues.x3d',name='identifier'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestContainerFieldValues.x3d'),
    Viewpoint(description='Test containerField values'),
    Collision(DEF='parentCollision',
      #  containerField is now validatable by DTD and schema. Default Collision child containerField="children" 
      children=[
      Transform(),],
      #  Error test: multiple QA tools detect improper use of containerField="level" beneath a Collision node. 
      proxy=Transform(
        children=[
        Shape(
          geometry=Box(),
          appearance=Appearance(
            material=Material(),))])),
    Shape(
      geometry=Text(string=["This scene tests error checking","for proper containerField values.","","View source for details."],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6)),
      appearance=Appearance(
        material=Material(diffuseColor=(0.7,0.35,0))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestContainerFieldValues.py")
