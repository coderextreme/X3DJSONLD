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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='AmelaExampleScene.x3d',name='title'),
    meta(content='Amela example developed at VRST 99. Place mouse over geometry to light the Cylinder. PointLight is coincident with the Sphere.',name='description'),
    meta(content='1 December 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/AmelaExampleScene.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='AmelaExampleScene.x3d'),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.9,.9,.9))),
        geometry=Cylinder(),)]),
    Transform(translation=(0,-2,4),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(0,0,0.8))),
        geometry=Sphere(radius=.2)),
      PointLight(DEF='MyPointLight',color=(0,0,1),on=False)]),
    TouchSensor(DEF='MyTouchSensor',description='pointing device over geometry turns on light'),
    ROUTE(fromField='isOver',fromNode='MyTouchSensor',toField='on',toNode='MyPointLight')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AmelaExampleScene.py")
