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
    meta(content='DirectionalLightExample.x3d',name='title'),
    meta(content='An example of the DirectionalLight node showing no shadows on the lit geometry.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='24 April 2006',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='DirectionalLightFigure.png',name='Image'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter11LightingEnvironmentalEffects/DirectionalLightExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='DirectionalLight.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Book Viewpoint',orientation=(0.627,-0.707,-0.326,-0.93),position=(6.03,6.69,9.25)),
    NavigationInfo(headlight=False),
    DirectionalLight(),
    Transform(translation=(0,1.5,7),
      children=[
      Group(DEF='Arrow',
        children=[
        Transform(rotation=(1,0,0,1.57),
          children=[
          Shape(
            appearance=Appearance(DEF='ArrowApp',
              material=Material(DEF='ArrowColor')),
            geometry=Cylinder(radius=.1))]),
        Transform(rotation=(1,0,0,-1.57),translation=(0,0,-1),
          children=[
          Shape(
            appearance=Appearance(USE='ArrowApp'),
            geometry=Cone(bottomRadius=.25,height=.5))])])]),
    Transform(translation=(0,.5,7),
      children=[
      Group(USE='Arrow')]),
    Transform(translation=(0,-.5,7),
      children=[
      Group(USE='Arrow')]),
    Transform(translation=(0,-1.5,7),
      children=[
      Group(USE='Arrow')]),
    Transform(
      children=[
      Transform(DEF='Box',translation=(0,0,4),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Box(size=(2,2,.2)))]),
      Transform(DEF='rod',translation=(0,0,1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,.8,0))),
          geometry=Cylinder(height=4))]),
      Transform(DEF='hat',rotation=(0,0,1,1.57),translation=(1,0,-2),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1))),
          geometry=Cone(height=4))]),
      Transform(DEF='ball',translation=(3,0,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,1))),
          geometry=Sphere(radius=2))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DirectionalLightExample.py")
