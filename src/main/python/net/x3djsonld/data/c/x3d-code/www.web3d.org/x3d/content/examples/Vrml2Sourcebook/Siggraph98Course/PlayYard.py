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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='PlayYard.x3d',name='title'),
    meta(content='A playyard to demonstrate NavigationInfo operation. This world illustrates the use of a NavigationInfo node to set the size of the users avatar (width, height, stepsize). The playyard contains several obstacles, some of which the users can get past and others they cannot, all because of the size of the avatar.',name='description'),
    meta(content='John L. Moreland',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 July 1998',name='created'),
    meta(content='2 February 2014',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/playyard.wrl',name='reference'),
    meta(content='http://www.siggraph.org/s98',name='reference'),
    meta(content='http://www.siggraph.org/s98/conference/courses/18.html',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/slides/mt0364.htm',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/vrml97.htm',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/PlayYard.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Copyright (c) 1998, John L. Moreland"],title='Playyard'),
    NavigationInfo(avatarSize=[0.25,1.6,0.6],headlight=False,speed=2.0,type=["WALK","ANY"]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.0,0.1,0.0),(0.0,0.2,0.0),(0.2,0.5,0.2)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
    DirectionalLight(ambientIntensity=0.5,direction=(-0.5,-1.0,-0.5)),
    Viewpoint(description='Away',orientation=(1.0,0.0,0.0,-0.57),position=(0.0,5.5,9.0)),
    Viewpoint(description='Monkey Bars - End',position=(-4.0,1.6,4.0)),
    Viewpoint(description='Monkey Bars - Side',orientation=(0.0,1.0,0.0,1.57),position=(0.0,1.6,0.0)),
    Viewpoint(description='Chin-Up Bar - Short',orientation=(1.0,0.0,0.0,-0.57),position=(-1.0,1.6,-2.0)),
    Viewpoint(description='Chin-Up Bar - Tall',position=(1.0,1.6,0.0)),
    Viewpoint(description='Slide - Ladder',orientation=(1.0,0.0,0.0,-0.57),position=(4.0,1.6,4.0)),
    Viewpoint(description='Slide - Shoot',orientation=(0.0,1.0,0.5,3.14159),position=(4.0,1.6,-4.0)),
    Shape(
      appearance=Appearance(
        textureTransform=TextureTransform(scale=(16.0,16.0)),
        material=Material(),
        texture=ImageTexture(url=["sand.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/sand.jpg"])),
      geometry=Box(size=(10.0,0.02,10.0))),
    Transform(translation=(2.0,0.0,-10.0),
      children=[
      Billboard(DEF='Palm',
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["palm.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/palm.png"])),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
            texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(1.0,1.0),(0.0,1.0)]),
            coord=Coordinate(point=[(-0.83,0.0,0.0),(0.83,0.0,0.0),(0.83,3.75,0.0),(-0.83,3.75,0.0)]))),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0,0.0,0.0),transparency=0.5),
            texture=ImageTexture(url=["palmsh.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/palmsh.png"])),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
            texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(1.0,1.0),(0.0,1.0)]),
            coord=Coordinate(point=[(-1.0,0.02,1.0),(1.0,0.02,1.0),(1.0,0.02,-1.0),(-1.0,0.02,-1.0)])))])]),
    Transform(translation=(-6.0,0.0,-1.0),
      children=[
      Billboard(USE='Palm')]),
    Group(
      children=[
      Transform(DEF='Fence',translation=(0.0,0.0,-5.0),
        children=[
        Shape(
          appearance=Appearance(
            textureTransform=TextureTransform(center=(0.5,0.5),rotation=0.7853982,scale=(17.0,17.0)),
            material=Material(),
            texture=ImageTexture(url=["grill.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/grill.png"])),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1,32,33,34,35,-1,36,37,38,39,-1],solid=False,texCoordIndex=[0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1,0,1,2,3,-1],
            texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(1.0,1.0),(0.0,1.0)]),
            coord=Coordinate(point=[(4.0,0.0,0.0),(5.0,0.0,0.0),(5.0,1.0,0.0),(4.0,1.0,0.0),(3.0,0.0,0.0),(4.0,0.0,0.0),(4.0,1.0,0.0),(3.0,1.0,0.0),(2.0,0.0,0.0),(3.0,0.0,0.0),(3.0,1.0,0.0),(2.0,1.0,0.0),(1.0,0.0,0.0),(2.0,0.0,0.0),(2.0,1.0,0.0),(1.0,1.0,0.0),(0.0,0.0,0.0),(1.0,0.0,0.0),(1.0,1.0,0.0),(0.0,1.0,0.0),(-1.0,0.0,0.0),(0.0,0.0,0.0),(0.0,1.0,0.0),(-1.0,1.0,0.0),(-2.0,0.0,0.0),(-1.0,0.0,0.0),(-1.0,1.0,0.0),(-2.0,1.0,0.0),(-3.0,0.0,0.0),(-2.0,0.0,0.0),(-2.0,1.0,0.0),(-3.0,1.0,0.0),(-4.0,0.0,0.0),(-3.0,0.0,0.0),(-3.0,1.0,0.0),(-4.0,1.0,0.0),(-5.0,0.0,0.0),(-4.0,0.0,0.0),(-4.0,1.0,0.0),(-5.0,1.0,0.0)]))),
        Transform(translation=(0.0,0.5,0.05),
          children=[
          Shape(DEF='Post',
            appearance=Appearance(DEF='Galvanized',
              material=Material(ambientIntensity=0.3,diffuseColor=(0.3,0.3,0.3),shininess=0.1,specularColor=(0.7,0.7,0.8))),
            geometry=Cylinder(height=1.0,radius=0.05))]),
        Transform(translation=(4.95,0.5,0.05),
          children=[
          Shape(USE='Post')])]),
      Transform(rotation=(0.0,1.0,0.0,1.57),
        children=[
        Transform(USE='Fence')]),
      Transform(rotation=(0.0,1.0,0.0,3.14159),
        children=[
        Transform(USE='Fence')]),
      Transform(rotation=(0.0,1.0,0.0,-1.57),
        children=[
        Transform(USE='Fence')])]),
    Transform(translation=(-4.0,0.0,0.0),
      children=[
      Transform(translation=(-0.3,1.0,-2.0),
        children=[
        Shape(DEF='Lumber',
          appearance=Appearance(DEF='Wood',
            material=Material(diffuseColor=(0.8,0.6,0.4)),
            texture=ImageTexture(url=["wood.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/wood.jpg"])),
          geometry=Box(size=(0.1,2.0,0.1)))]),
      Transform(translation=(0.3,1.0,-2.0),
        children=[
        Shape(USE='Lumber')]),
      Transform(translation=(-0.3,1.0,2.0),
        children=[
        Shape(USE='Lumber')]),
      Transform(translation=(0.3,1.0,2.0),
        children=[
        Shape(USE='Lumber')]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,1.8,0.0),
        children=[
        Group(DEF='Ladder',
          children=[
          Transform(translation=(-0.3,0.0,0.0),
            children=[
            Shape(DEF='Pole',
              appearance=Appearance(USE='Galvanized'),
              geometry=Cylinder(height=4.0,radius=0.025))]),
          Transform(translation=(0.3,0.0,0.0),
            children=[
            Shape(USE='Pole')]),
          Transform(rotation=(0.0,0.0,1.0,1.57),scale=(1.0,0.15,1.0),
            children=[
            Shape(USE='Pole')]),
          Transform(rotation=(0.0,0.0,1.0,1.57),scale=(1.0,0.15,1.0),translation=(0.0,0.5,0.0),
            children=[
            Shape(USE='Pole')]),
          Transform(rotation=(0.0,0.0,1.0,1.57),scale=(1.0,0.15,1.0),translation=(0.0,-0.5,0.0),
            children=[
            Shape(USE='Pole')]),
          Transform(rotation=(0.0,0.0,1.0,1.57),scale=(1.0,0.15,1.0),translation=(0.0,1.0,0.0),
            children=[
            Shape(USE='Pole')]),
          Transform(rotation=(0.0,0.0,1.0,1.57),scale=(1.0,0.15,1.0),translation=(0.0,-1.0,0.0),
            children=[
            Shape(USE='Pole')]),
          Transform(rotation=(0.0,0.0,1.0,1.57),scale=(1.0,0.15,1.0),translation=(0.0,1.5,0.0),
            children=[
            Shape(USE='Pole')]),
          Transform(rotation=(0.0,0.0,1.0,1.57),scale=(1.0,0.15,1.0),translation=(0.0,-1.5,0.0),
            children=[
            Shape(USE='Pole')])])]),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0,0.0,0.0),transparency=0.5),
          texture=ImageTexture(url=["ladrshad.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/ladrshad.png"])),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
          texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(1.0,1.0),(0.0,1.0)]),
          coord=Coordinate(point=[(-0.3,0.02,2.0),(0.3,0.02,2.0),(0.3,0.02,-2.0),(-0.3,0.02,-2.0)])))]),
    Transform(translation=(0.0,0.0,-4.0),
      children=[
      Transform(scale=(1.0,0.5,1.0),translation=(-2.0,0.5,0.0),
        children=[
        Shape(USE='Lumber')]),
      Transform(translation=(0.0,1.0,0.0),
        children=[
        Shape(USE='Lumber')]),
      Transform(translation=(2.0,1.0,0.0),
        children=[
        Shape(USE='Lumber')]),
      Transform(rotation=(0.0,0.0,1.0,1.57),scale=(1.0,0.5,1.0),translation=(-1.0,0.8,0.0),
        children=[
        Shape(USE='Pole')]),
      Transform(rotation=(0.0,0.0,1.0,1.57),scale=(1.0,0.5,1.0),translation=(1.0,1.8,0.0),
        children=[
        Shape(USE='Pole')]),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0,0.0,0.0),transparency=0.5)),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
          texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(1.0,1.0),(0.0,1.0)]),
          coord=Coordinate(point=[(-2.0,0.02,0.05),(2.0,0.02,0.05),(2.0,0.02,-0.05),(-2.0,0.02,-0.05)])))]),
    Transform(translation=(4.0,0.0,0.0),
      children=[
      Transform(scale=(1.0,1.5,1.0),translation=(-0.3,1.5,0.0),
        children=[
        Shape(USE='Lumber')]),
      Transform(scale=(1.0,1.5,1.0),translation=(0.3,1.5,0.0),
        children=[
        Shape(USE='Lumber')]),
      Transform(translation=(0.0,1.4,1.4),
        children=[
        Transform(rotation=(1.0,0.0,0.0,-0.7853975),
          children=[
          Group(USE='Ladder')])]),
      Transform(translation=(0.0,2.8,0.0),
        children=[
        Shape(
          appearance=Appearance(USE='Galvanized'),
          geometry=Extrusion(beginCap=False,crossSection=[(-0.05,0.3),(0.05,0.3),(0.05,-0.3),(-0.05,-0.3)],endCap=False,solid=False,spine=[(0.0,0.0,0.0),(0.0,-2.1,-3.0),(0.0,-2.1,-3.5)]))]),
      Transform(scale=(1.0,0.35,1.0),translation=(0.3,0.35,-3.5),
        children=[
        Shape(USE='Lumber')]),
      Transform(scale=(1.0,0.35,1.0),translation=(-0.3,0.35,-3.5),
        children=[
        Shape(USE='Lumber')]),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0,0.0,0.0),transparency=0.5)),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
          texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(1.0,1.0),(0.0,1.0)]),
          coord=Coordinate(point=[(-0.3,0.02,0.0),(0.3,0.02,0.0),(0.3,0.02,-3.5),(-0.3,0.02,-3.5)]))),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0,0.0,0.0),transparency=0.5),
          texture=ImageTexture(url=["ladrshad.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/ladrshad.png"])),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
          texCoord=TextureCoordinate(point=[(0.0,0.0),(1.0,0.0),(1.0,1.0),(0.0,1.0)]),
          coord=Coordinate(point=[(-0.3,0.02,2.8),(0.3,0.02,2.8),(0.3,0.02,0.0),(-0.3,0.02,0.0)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PlayYard.py")
