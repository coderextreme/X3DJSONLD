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
    meta(content='AllenDuttonVillage.x3d',name='title'),
    meta(content='LT Allen Dutton',name='creator'),
    meta(content='26 February 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Primitive village. Move mouse over the hut roofs to see a demonstration of sensors and interpolators',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/AllenDuttonVillage.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='AllenDuttonVillage.x3d'),
    Viewpoint(description='View from 80m away',orientation=(-1,0,0,0.5),position=(0,60,100)),
    Viewpoint(description='Default viewpoint at (0 0 10) is way too close!! That is a bad place to be, provide a replacement viewpoint instead.'),
    Background(skyColor=[(0,0,.7)]),
    DirectionalLight(color=(1,1,0.8),direction=(0,-1,0),intensity=0.5),
    Group(
      children=[
      Transform(translation=(0,-3.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,.7,0)),
            texture=ImageTexture(DEF='grass',url=["grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"]),
            textureTransform=TextureTransform(scale=(20,20))),
          geometry=Box(size=(160,1,160)))])]),
    Group(
      children=[
      Transform(rotation=(0,1,0,2.7),scale=(0.01,0.01,0.01),translation=(5,12.3,30),
        children=[
        Inline(url=["ALLEN.WRL","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ALLEN.WRL"])]),
      Transform(translation=(5,0,30),
        children=[
        Shape(
          geometry=Box(size=(5,5,5)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5))))])]),
    Group(DEF='HUT',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='BROWN',diffuseColor=(0.5,0.4,0.3)),
          texture=ImageTexture(DEF='wood',url=["wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"]),
          textureTransform=TextureTransform(rotation=1.57079,scale=(1.0,4.0))),
        geometry=Cylinder(bottom=False,height=6,radius=4,top=False)),
      Transform(DEF='ROOF_TRANSFORM',translation=(0,4,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='YELLOW',diffuseColor=(0.8,0.8,0)),
            texture=ImageTexture(DEF='straw',url=["straw.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/straw.jpg"])),
          geometry=Cone(bottomRadius=6,height=4)),
        TouchSensor(DEF='MyTouchSensor',description='raise the roof')]),
      TimeSensor(DEF='CLOCK',cycleInterval=4,enabled=False,loop=True),
      OrientationInterpolator(DEF='RoofRotateInterpolator',key=[0.0,0.50,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)]),
      PositionInterpolator(DEF='RoofTranslateInterpolator',key=[0.0,0.5,1.0],keyValue=[(0.0,4.0,0.0),(0.0,8.0,0.0),(0.0,4.0,0.0)])]),
    Group(DEF='CONE_TREE',
      children=[
      Transform(translation=(10,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='BROWN'),
            texture=ImageTexture(USE='wood')),
          geometry=Cylinder(bottom=False,height=6,radius=0.5,top=False))]),
      Transform(translation=(10,3,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,.3,0)),
            texture=ImageTexture(DEF='leaves',url=["leaves.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/leaves.jpg"])),
          geometry=Cone(bottomRadius=2,height=6))])]),
    Group(DEF='SPHERE_TREE',
      children=[
      Transform(translation=(-30,0,-3),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='BROWN'),
            texture=ImageTexture(USE='wood')),
          geometry=Cylinder(bottom=False,height=6,radius=0.5,top=False))]),
      Transform(translation=(-30,6,-3),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,.3,0)),
            texture=ImageTexture(USE='leaves')),
          geometry=Sphere(radius=3.5))])]),
    Group(
      children=[
      Transform(scale=(.8,1,.8),translation=(-45,0,10),
        children=[
        Group(USE='HUT'),
        Transform(translation=(0,11,0),
          children=[
          Shape(
            geometry=Text(string=["Visitor\'s","Center"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=5.0,style_='BOLDITALIC')),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.1,0.4))))])])]),
    Group(
      children=[
      Transform(scale=(1.5,1,1.5),translation=(30,0,20),
        children=[
        Group(USE='HUT'),
        Transform(translation=(1,8,0),
          children=[
          Shape(
            geometry=Text(string=["Chief\'s Hut"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=4.0,style_='BOLD')),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.1,0.4))))])])]),
    Group(
      children=[
      Transform(scale=(.5,1,.5),translation=(-10,0,20),
        children=[
        Group(USE='HUT'),
        Transform(translation=(0,24,0),
          children=[
          Shape(
            geometry=Text(string=["Outhouse"],
              fontStyle=FontStyle(family=["SANS"],horizontal=False,justify=["MIDDLE","MIDDLE"],size=5.0,style_='BOLD')),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.1,0.4))))])])]),
    Group(
      children=[
      Transform(scale=(0.5,1.0,0.5),translation=(30,0,30),
        children=[
        Group(USE='SPHERE_TREE')])]),
    Group(
      children=[
      Transform(scale=(2,1.0,2),translation=(-45,0,30),
        children=[
        Group(USE='CONE_TREE')])]),
    ROUTE(fromField='isOver',fromNode='MyTouchSensor',toField='set_enabled',toNode='CLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='RoofRotateInterpolator'),
    ROUTE(fromField='value_changed',fromNode='RoofRotateInterpolator',toField='set_rotation',toNode='ROOF_TRANSFORM'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='RoofTranslateInterpolator'),
    ROUTE(fromField='value_changed',fromNode='RoofTranslateInterpolator',toField='set_translation',toNode='ROOF_TRANSFORM')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AllenDuttonVillage.py")
