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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='TemplePretty.x3d',name='title'),
    meta(content='Temple with nice Background.',name='description'),
    meta(content='Martin Reddy SRI authored the original temple scene.',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='22 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.geovrml.org/examples',name='reference'),
    meta(content='X3D geospatial example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TemplePretty.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TemplePretty.x3d'),
    Viewpoint(description='Temple',position=(0.0,0.0,30.0)),
    Background(groundAngle=[1.25,1.37],groundColor=[(0.01,0.09,0.2),(0.05,0.65,0.47),(0.4,0.95,0.85)],skyAngle=[1.3,1.37],skyColor=[(0.0,0.0,0.2),(0.1,0.1,0.8),(0.7,0.7,1.0)]),
    Transform(translation=(-11.0,2.5,-11.0),
      children=[
      Shape(DEF='COLUMN',
        appearance=Appearance(
          material=Material(diffuseColor=(1.0,0.9,0.8)),
          texture=ImageTexture(DEF='stone6',url=["images/stone6.png","images/stone6.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone6.gif"])),
        geometry=Cylinder(height=5.0,radius=0.6))]),
    Transform(translation=(-9.0,2.5,-11.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-7.0,2.5,-11.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-5.0,2.5,-11.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-3.0,2.5,-11.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-1.0,2.5,-11.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(1.0,2.5,-11.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(3.0,2.5,-11.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(5.0,2.5,-11.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(7.0,2.5,-11.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(9.0,2.5,-11.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-11.0,2.5,-9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-9.0,2.5,-9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-7.0,2.5,-9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-5.0,2.5,-9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-3.0,2.5,-9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-1.0,2.5,-9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(1.0,2.5,-9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(3.0,2.5,-9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(5.0,2.5,-9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(7.0,2.5,-9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(9.0,2.5,-9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-11.0,2.5,-7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-9.0,2.5,-7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(7.0,2.5,-7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(9.0,2.5,-7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-11.0,2.5,-5.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-9.0,2.5,-5.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(7.0,2.5,-5.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(9.0,2.5,-5.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-11.0,2.5,-3.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-9.0,2.5,-3.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(7.0,2.5,-3.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(9.0,2.5,-3.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-11.0,2.5,-1.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-9.0,2.5,-1.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(7.0,2.5,-1.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(9.0,2.5,-1.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-11.0,2.5,1.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-9.0,2.5,1.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(7.0,2.5,1.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(9.0,2.5,1.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-11.0,2.5,3.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-9.0,2.5,3.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(7.0,2.5,3.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(9.0,2.5,3.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-11.0,2.5,5.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-9.0,2.5,5.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(7.0,2.5,5.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(9.0,2.5,5.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-11.0,2.5,7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-9.0,2.5,7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-7.0,2.5,7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-5.0,2.5,7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-3.0,2.5,7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-1.0,2.5,7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(1.0,2.5,7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(3.0,2.5,7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(5.0,2.5,7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(7.0,2.5,7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(9.0,2.5,7.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-11.0,2.5,9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-9.0,2.5,9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-7.0,2.5,9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-5.0,2.5,9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-3.0,2.5,9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-1.0,2.5,9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(1.0,2.5,9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(3.0,2.5,9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(5.0,2.5,9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(7.0,2.5,9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(9.0,2.5,9.0),
      children=[
      Shape(USE='COLUMN')]),
    Transform(translation=(-1.0,-0.5,-1.0),
      children=[
      Transform(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,1.0,1.0)),
            texture=ImageTexture(DEF='stone5',url=["images/stone5.png","images/stone5.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone5.gif"])),
          geometry=Box(size=(22.0,1.0,22.0)))])]),
    Transform(translation=(-1.0,-1.5,-1.0),
      children=[
      Transform(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,1.0,1.0)),
            texture=ImageTexture(USE='stone5')),
          geometry=Box(size=(24.0,1.0,24.0)))])]),
    Transform(translation=(-1.0,-2.5,-1.0),
      children=[
      Transform(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,1.0,1.0)),
            texture=ImageTexture(USE='stone5')),
          geometry=Box(size=(26.0,1.0,26.0)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TemplePretty.py")
