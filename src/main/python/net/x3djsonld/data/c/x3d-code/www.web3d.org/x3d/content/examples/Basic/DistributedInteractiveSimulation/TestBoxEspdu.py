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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(level=1,name='DIS'),
    meta(content='TestBoxEspdu.x3d',name='title'),
    meta(content='Don Brutzman, Don McGregor',name='creator'),
    meta(content='1 January 2007',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A simple EspduTransform test to move a Box.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/TestBoxEspdu.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestBoxEspdu.x3d'),
    Viewpoint(description='EspduTransform moves Box',position=(0,0,25)),
    Background(skyColor=[(0.5,0.6,0.8)]),
    EspduTransform(address='239.1.2.3',entityID=2,marking='TestBox',networkMode='networkReader',port=62040,
      children=[
      Shape(
        geometry=Box(size=(2,4,6)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.748014,0.62085,0),shininess=0.93,specularColor=(0.860606,0.860606,0.860599))))]),
    Transform(scale=(5,5,5),
      children=[
      Inline(url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestBoxEspdu.py")
