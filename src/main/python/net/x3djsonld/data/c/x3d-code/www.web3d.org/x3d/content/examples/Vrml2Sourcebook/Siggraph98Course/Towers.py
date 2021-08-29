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
    meta(content='Towers.x3d',name='title'),
    meta(content='This world illustrates the use of translation, rotation, and scaling to build a multi-level tower.',name='description'),
    meta(content='David R. Nadeau, John L. Moreland, Michael M. Heck',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 July 1998',name='created'),
    meta(content='2 February 2014',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/towers.wrl',name='reference'),
    meta(content='http://www.siggraph.org/s98',name='reference'),
    meta(content='http://www.siggraph.org/s98/conference/courses/18.html',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/slides/mt0051.htm',name='reference'),
    meta(content='http://www.sdsc.edu/~moreland/courses/Siggraph98/vrml97/vrml97.htm',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/Towers.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  A tower is built starting with a single pole and archway inlined from towerprt.wrl. This part is instanced 12 times around the perimeter of the tower by doing successive rotations. Add a cylinder for the ceiling, and a level is complete. 
    #  A level is then instanced three more times to build the next three upper levels of the tower. Each instance moves up to the next level, then scales the generic level down a bit and puts it there. This repeated scaling is what gives the tower it's diminishing size for the upper levels. 
    #  A glowing, rotating cube is added to the top of the generic tower. An OrientationInterpolator keeps the cube rotating. 
    #  Things to experiment with: 
    #  Add sound! 
    #  Add a spiraling ramp that leads to the upper levels. Perhaps put something interesting on each level. Perhaps make the rotating cube on top do something... such as be an Anchor leading to another world! 
    children=[
    WorldInfo(info=["Copyright (c) 1997, David R. Nadeau"],title='The Tower'),
    Viewpoint(description='Entry view',orientation=(1.0,0.0,0.0,0.2),position=(0.0,1.6,20.0)),
    NavigationInfo(headlight=False,speed=2.0),
    Background(skyAngle=[1.37,1.57],skyColor=[(0.0,0.0,0.0),(0.0,0.0,0.0),(0.0,0.5,0.0)]),
    DirectionalLight(ambientIntensity=0.2,direction=(1.0,-0.5,-1.0)),
    DirectionalLight(ambientIntensity=0.2,color=(0.0,0.3,1.0),direction=(-1.0,1.0,-1.0),intensity=0.7),
    Transform(scale=(0.4,0.4,0.4),
      children=[
      Transform(DEF='OneLevel',scale=(2.0,1.0,2.0),translation=(0.0,3.5,0.0),
        children=[
        Group(DEF='HalfLevel',
          children=[
          Transform(DEF='Part',rotation=(0.0,1.0,0.0,0.26),translation=(0.0,0.0,7.73),
            children=[
            Inline(url=["TowerPart.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/TowerPart.x3d","TowerPart.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/TowerPart.wrl"])]),
          Transform(rotation=(0.0,1.0,0.0,0.52),
            children=[
            Transform(USE='Part')]),
          Transform(rotation=(0.0,1.0,0.0,1.05),
            children=[
            Transform(USE='Part')]),
          Transform(rotation=(0.0,1.0,0.0,1.57),
            children=[
            Transform(USE='Part')]),
          Transform(rotation=(0.0,1.0,0.0,2.09),
            children=[
            Transform(USE='Part')]),
          Transform(rotation=(0.0,1.0,0.0,2.62),
            children=[
            Transform(USE='Part')])]),
        Transform(rotation=(0.0,1.0,0.0,3.14),
          children=[
          Group(USE='HalfLevel')]),
        Transform(translation=(0.0,3.5,0.0),
          children=[
          Shape(
            appearance=Appearance(
              textureTransform=TextureTransform(),
              material=Material(ambientIntensity=0.6),
              texture=ImageTexture(url=["marble_g.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/marble_g.jpg"])),
            geometry=Cylinder(height=0.05,radius=8.2,side=False))])]),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.0,0.0,0.0),transparency=0.25)),
        geometry=Cylinder(bottom=False,height=0.05,radius=16.4,side=False)),
      Transform(rotation=(0.0,1.0,0.0,0.26),scale=(0.8,0.9,0.8),translation=(0.0,7.0,0.0),
        children=[
        Transform(USE='OneLevel')]),
      Transform(scale=(0.6,0.8,0.6),translation=(0.0,13.3,0.0),
        children=[
        Transform(USE='OneLevel')]),
      Transform(rotation=(0.0,1.0,0.0,0.26),scale=(0.4,0.7,0.4),translation=(0.0,18.9,0.0),
        children=[
        Transform(USE='OneLevel')]),
      Transform(DEF='Thing',translation=(0.0,31.0,0.0),
        children=[
        Transform(rotation=(-1.0,1.0,1.0,0.785),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1.0,diffuseColor=(0.0,1.0,0.0)),
              texture=ImageTexture(DEF='BlurImage',url=["fire_g.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Siggraph98Course/fire_g.jpg"])),
            geometry=Box(size=(3.0,3.0,3.0)))])])]),
    Shape(
      appearance=Appearance(
        textureTransform=TextureTransform(scale=(5.0,5.0)),
        material=Material(ambientIntensity=0.8,diffuseColor=(0.0,1.0,0.3)),
        texture=ImageTexture(USE='BlurImage')),
      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
        coord=Coordinate(point=[(-40.0,0.0,80.0),(40.0,0.0,80.0),(40.0,0.0,-40.0),(-40.0,0.0,-40.0)]))),
    TimeSensor(DEF='ThingTimer',cycleInterval=4.0,loop=True,startTime=1.0),
    OrientationInterpolator(DEF='ThingSpinner',key=[0.0,0.5,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)]),
    ROUTE(fromField='fraction_changed',fromNode='ThingTimer',toField='set_fraction',toNode='ThingSpinner'),
    ROUTE(fromField='value_changed',fromNode='ThingSpinner',toField='set_rotation',toNode='Thing')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Towers.py")
