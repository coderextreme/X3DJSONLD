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
    meta(content='Torch.x3d',name='title'),
    meta(content='Example torch using MovieTexture and flickering lights.',name='description'),
    meta(content='Panos Michalopoulos',name='creator'),
    meta(content='19 February 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Torch.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Torch.x3d'),
    NavigationInfo(headlight=False),
    Viewpoint(description='Standard',orientation=(0,1,0,0.1),position=(0.5,0,8)),
    Transform(scale=(0.2,0.2,0.2),translation=(-2.3,1,0),
      children=[
      Group(DEF='Torch',
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=2,crossSection=[(-1,0),(0,1),(1,0),(0,-1),(-1,0)],scale=[(0.1,0.1),(0.2,0.2)],spine=[(0,-1,0),(0,1,0)]),
          appearance=Appearance(DEF='TorchMetal',
            material=Material(diffuseColor=(1,0.9,0.3)))),
        Transform(translation=(0,1.15,0),
          children=[
          Shape(
            geometry=Cylinder(height=0.3,radius=0.3),
            appearance=Appearance(USE='TorchMetal'))]),
        Transform(rotation=(0,1,0,-1.7),scale=(1.5,1.5,1.5),translation=(0,1.3,0),
          children=[
          Shape(
            geometry=Extrusion(crossSection=[(-1,0),(0,1),(1,0),(0,-1),(-1,0)],scale=[(0.1,0.1),(0.3,0.3),(0.5,0.5),(0.5,0.5),(0.3,0.3),(0.1,0.1),(0.001,0.001)],spine=[(0,0,0),(0,0.2,0),(0,0.5,0),(0,0.6,0),(0,1,0),(0,1.5,0),(0,2,0)]),
            appearance=Appearance(DEF='Flame',
              texture=MovieTexture(DEF='flames',loop=True,repeatS=False,repeatT=False,url=["flames.mpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/flames.mpg"])))]),
        PointLight(DEF='Light',ambientIntensity=0.3,attenuation=(0,0,0.1),color=(1,1,0.5),location=(0,2,0)),
        TimeSensor(DEF='LightTimer',cycleInterval=1.5,loop=True),
        ScalarInterpolator(DEF='LightValues',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[1,0.7,0.5,0.8,1,0.5,0.8,0.7,1,0.5,1])])]),
    Transform(scale=(0.2,0.2,0.2),translation=(2.3,1,0),
      children=[
      Group(USE='Torch')]),
    Transform(translation=(0,-2.5,0),
      children=[
      Shape(
        geometry=Box(size=(5,0.1,5)),
        appearance=Appearance(DEF='Wall',
          material=Material(diffuseColor=(0.9,0.9,0.9),specularColor=(0,0.1,0)),
          texture=ImageTexture(DEF='Soil1',url=["Soil1.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Soil1.jpg"])))]),
    Transform(translation=(0,2.5,0),
      children=[
      Shape(
        geometry=Box(size=(5,0.1,5)),
        appearance=Appearance(USE='Wall'))]),
    Transform(translation=(-2.5,0,0),
      children=[
      Shape(
        geometry=Box(size=(0.1,5,5)),
        appearance=Appearance(USE='Wall'))]),
    Transform(translation=(2.5,0,0),
      children=[
      Shape(
        geometry=Box(size=(0.1,5,5)),
        appearance=Appearance(USE='Wall'))]),
    Transform(translation=(0,0,-2.5),
      children=[
      Shape(
        geometry=Box(size=(5,5,0.1)),
        appearance=Appearance(USE='Wall'))]),
    ROUTE(fromField='fraction_changed',fromNode='LightTimer',toField='set_fraction',toNode='LightValues'),
    ROUTE(fromField='value_changed',fromNode='LightValues',toField='set_intensity',toNode='Light')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Torch.py")
