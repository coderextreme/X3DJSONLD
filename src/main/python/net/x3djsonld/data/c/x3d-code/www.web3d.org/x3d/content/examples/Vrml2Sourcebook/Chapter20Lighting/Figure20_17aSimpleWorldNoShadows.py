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
    meta(content='Figure20_17aSimpleWorldNoShadows.x3d',name='title'),
    meta(content='Figure 20.17a, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch20/20fig17a.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='10 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A simple world without fake shadows. Compare Figures 20.17a, 17b.',name='description'),
    meta(content='Figure20_17bSimpleWorldFakeShadows.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter20Lighting/Figure20_17aSimpleWorldNoShadows.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Rotate viewpoint to location 45 degrees clockwise about vertical (Y axis) 
    children=[
    WorldInfo(title='Figure20_17aSimpleWorldNoShadows.x3d'),
    Transform(rotation=(0,1,0,-0.758),
      children=[
      Viewpoint(description='Simple sphere scene',orientation=(1,0,0,-0.52),position=(0,8,12))]),
    Transform(rotation=(0,1,0,1.57),
      children=[
      Viewpoint(description='Simple sphere scene seen from +X axis',orientation=(1,0,0,-0.52),position=(0,8,12))]),
    NavigationInfo(headlight=False),
    Group(
      children=[
      DirectionalLight(direction=(0,-1,0),intensity=0.7),
      Shape(
        geometry=Box(size=(10,0.01,10)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.9,0.9,0.9)))),
      Transform(translation=(0,4,2),
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,0))))]),
      Transform(translation=(2,2,-2),
        children=[
        Shape(
          geometry=Sphere(radius=2),
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,0))))]),
      Transform(translation=(-2,2.5,0),
        children=[
        Shape(
          geometry=Sphere(radius=0.75),
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,1))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure20_17aSimpleWorldNoShadows.py")
