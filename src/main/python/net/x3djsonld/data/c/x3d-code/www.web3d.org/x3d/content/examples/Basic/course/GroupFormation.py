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
    meta(content='GroupFormation.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='8 November 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Simple example to demonstrate rotating a Group of copied, elongated Boxes.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/course/GroupFormation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='GroupFormation.x3d'),
    Viewpoint(description='watch the boxes',position=(0,2,10)),
    #  Translate and rotate the entire formation here. 90 degrees around y axis turns to West. 
    Transform(rotation=(0,1,0,-0.345),
      children=[
      Group(DEF='LEAD_ENTITY',
        children=[
        Shape(DEF='FLYING_BOX',
          geometry=Box(size=(.5,.5,3)),
          appearance=Appearance(
            material=Material(diffuseColor=(0,.2,.8))))]),
      Transform(DEF='SECOND_ENTITY',translation=(5,0,-2),
        children=[
        Shape(USE='FLYING_BOX')]),
      Transform(DEF='THIRD_ENTITY',translation=(-5,0,-2),
        children=[
        Shape(USE='FLYING_BOX')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GroupFormation.py")
