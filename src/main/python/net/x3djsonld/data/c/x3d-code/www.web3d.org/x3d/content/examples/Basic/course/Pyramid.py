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
    meta(content='Pyramid.x3d',name='title'),
    meta(content='MV4204 class',name='creator'),
    meta(content='8 July 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Constructing a Pyramid geometric primitive in order to show use of points and coordinate indices.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/course/Pyramid.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Viewpoint is 1m left of center to provide good contrast 
    children=[
    WorldInfo(title='Pyramid.x3d'),
    Viewpoint(description='Pyramid',orientation=(0,1,0,.2),position=(4,0,25)),
    Transform(translation=(0,-5,0),
      children=[
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,1,3,2,-1,2,3,0,-1,3,1,0],
          coord=Coordinate(point=[(0,0,0),(10,0,0),(5,0,8.3),(5,8.3,2.8)])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.8,0.2),specularColor=(0,0,0.5))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Pyramid.py")
