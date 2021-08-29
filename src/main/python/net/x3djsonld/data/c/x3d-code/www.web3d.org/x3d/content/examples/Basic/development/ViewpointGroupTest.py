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
    component(level=3,name='Navigation'),
    meta(content='ViewpointGroupTest.x3d',name='title'),
    meta(content='Test browser support for ViewpointGroup node',name='description'),
    meta(content='28 February 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ViewpointGroupTest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ViewpointGroupTest.x3d'),
    Viewpoint(description='Entry view 10m'),
    ViewpointGroup(description='Side views',
      children=[
      Viewpoint(description='Side view 8m',position=(0,0,8)),
      Viewpoint(description='Side view 4m',position=(0,0,4))]),
    ViewpointGroup(description='Top views',
      children=[
      ViewpointGroup(description='Nested ViewpointGroup',
        children=[
        Viewpoint(description='Top down 8m',orientation=(1,0,0,-1.57),position=(0,8,0)),
        Viewpoint(description='Top down 4m',orientation=(1,0,0,-1.57),position=(0,4,0))])]),
    Transform(translation=(0,-1.5,0),
      children=[
      Shape(
        geometry=Text(string=["Check viewpoint list for","nested ViewpointGroup entries"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(.3,.6,.9))))]),
    Transform(translation=(0,1.5,0),
      children=[
      Shape(
        geometry=Cylinder(),
        appearance=Appearance(
          material=Material(diffuseColor=(.9,.6,.3))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ViewpointGroupTest.py")
