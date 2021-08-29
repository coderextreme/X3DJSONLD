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
    meta(content='NetworkReroutingNetwork.x3d',name='title'),
    meta(content='This scene represents a simple computer network. The blue boxes at either end represent servers, or alternatively a source / destination pair. The red boxes represent routers and the translucent pipes are the links that connect them.',name='description'),
    meta(content='Bill Fischer',name='creator'),
    meta(content='22 March 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='NetworkReroutingAlternateRoutes.x3d',name='reference'),
    meta(content='NetworkReroutingAlternateRoutes.png',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingNetwork.x3d',name='identifier'),
    meta(content='NetworkReroutingRoutes.x3d',name='reference'),
    meta(content='NetworkReroutingAlternateRoutes.x3d',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NetworkReroutingNetwork.x3d'),
    Group(DEF='server_group',
      children=[
      Transform(scale=(.3,.6,.4),translation=(-6,0,0),
        children=[
        Shape(DEF='server',
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.8,0.7))),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,7,6,5,4,-1,1,5,6,2,-1,3,7,4,0],
            coord=Coordinate(point=[(-1.0,1.0,1.0),(1.0,1.0,1.0),(1.0,1.0,-1.0),(-1.0,1.0,-1.0),(-1.0,-1.0,1.0),(1.0,-1.0,1.0),(1.0,-1.0,-1.0),(-1.0,-1.0,-1.0)]))),
        Shape(DEF='serverFront',
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["serverfront.jpg","https://www.web3d.org/x3d/content/examples/Basic/Networking/serverfront.jpg"])),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3],
            coord=Coordinate(point=[(-1.0,1.0,1.0),(-1.0,-1.0,1.0),(1.0,-1.0,1.0),(1.0,1.0,1.0)]))),
        Shape(DEF='serverBack',
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["serverback.jpg","https://www.web3d.org/x3d/content/examples/Basic/Networking/serverback.jpg"])),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3],
            coord=Coordinate(point=[(-1.0,1.0,-1.0),(1.0,1.0,-1.0),(1.0,-1.0,-1.0),(-1.0,-1.0,-1.0)])))]),
      Transform(scale=(.3,.6,.4),translation=(6,0,0),
        children=[
        Shape(USE='server'),
        Shape(USE='serverFront'),
        Shape(USE='serverBack')])]),
    Group(DEF='router_group',
      children=[
      Transform(scale=(.5,.15,.5),translation=(0,-.5,0),
        children=[
        Shape(DEF='router',
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["routerbody.jpg","https://www.web3d.org/x3d/content/examples/Basic/Networking/routerbody.jpg"])),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,7,6,5,4,-1,1,5,6,2,-1,3,7,4,0],
            coord=Coordinate(point=[(-1.0,1.0,1.0),(1.0,1.0,1.0),(1.0,1.0,-1.0),(-1.0,1.0,-1.0),(-1.0,-1.0,1.0),(1.0,-1.0,1.0),(1.0,-1.0,-1.0),(-1.0,-1.0,-1.0)]))),
        Shape(DEF='routerFront',
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["routerfront.jpg","https://www.web3d.org/x3d/content/examples/Basic/Networking/routerfront.jpg"])),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3],
            coord=Coordinate(point=[(-1.0,1.0,1.0),(-1.0,-1.0,1.0),(1.0,-1.0,1.0),(1.0,1.0,1.0)]))),
        Shape(DEF='routerBack',
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["routerback.jpg","https://www.web3d.org/x3d/content/examples/Basic/Networking/routerback.jpg"])),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3],
            coord=Coordinate(point=[(-1.0,1.0,-1.0),(1.0,1.0,-1.0),(1.0,-1.0,-1.0),(-1.0,-1.0,-1.0)])))]),
      Transform(scale=(.5,.15,.5),translation=(-4,-.5,0),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')]),
      Transform(scale=(.5,.15,.5),translation=(-2,-.5,-2),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')]),
      Transform(scale=(.5,.15,.5),translation=(-2,-.5,2),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')]),
      Transform(scale=(.5,.15,.5),translation=(0,-.5,-4),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')]),
      Transform(scale=(.5,.15,.5),translation=(0,-.5,4),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')]),
      Transform(scale=(.5,.15,.5),translation=(2,-.5,2),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')]),
      Transform(scale=(.5,.15,.5),translation=(2,-.5,-2),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')]),
      Transform(scale=(.5,.15,.5),translation=(4,-.5,0),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')]),
      Transform(scale=(.5,.15,.5),translation=(-4,-.5,-4),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')]),
      Transform(scale=(.5,.15,.5),translation=(-4,-.5,4),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')]),
      Transform(scale=(.5,.15,.5),translation=(4,-.5,-4),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')]),
      Transform(scale=(.5,.15,.5),translation=(4,-.5,4),
        children=[
        Shape(USE='router'),
        Shape(USE='routerFront'),
        Shape(USE='routerBack')])]),
    Group(DEF='connections',
      children=[
      Transform(rotation=(0,0,1,1.57),translation=(-5,-.5,0),
        children=[
        Shape(DEF='link',
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5),transparency=.6)),
          geometry=Cylinder(radius=.08))]),
      Transform(rotation=(0,0,1,1.57),translation=(-2,-.5,4),
        children=[
        Shape(DEF='long_link',
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.5,.5),transparency=.6)),
          geometry=Cylinder(height=4,radius=.08))]),
      Transform(rotation=(0,1,0,.785),translation=(-3,-.5,-1),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='link')])]),
      Transform(rotation=(0,1,0,-.785),translation=(-3,-.5,1),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='link')])]),
      Transform(rotation=(0,1,0,-.785),translation=(-3,-.5,-3),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='link')])]),
      Transform(rotation=(0,1,0,.785),translation=(-1,-.5,1),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='link')])]),
      Transform(rotation=(0,1,0,.785),translation=(-3,-.5,3),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='link')])]),
      Transform(rotation=(0,1,0,.785),translation=(1,-.5,3),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='link')])]),
      Transform(rotation=(0,1,0,-.785),translation=(1,-.5,1),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='link')])]),
      Transform(rotation=(0,1,0,-.785),translation=(3,-.5,3),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='link')])]),
      Transform(rotation=(0,1,0,.785),translation=(3,-.5,-3),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='link')])]),
      Transform(rotation=(0,1,0,-.785),translation=(3,-.5,-1),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='link')])]),
      Transform(rotation=(0,1,0,.785),translation=(3,-.5,1),
        children=[
        Transform(rotation=(0,0,1,1.57),
          children=[
          Shape(USE='link')])]),
      Transform(rotation=(0,0,1,1.57),translation=(5,-.5,0),
        children=[
        Shape(USE='link')]),
      Transform(rotation=(0,0,1,1.57),translation=(-2,-.5,-4),
        children=[
        Shape(USE='long_link')]),
      Transform(rotation=(0,0,1,1.57),translation=(2,-.5,-4),
        children=[
        Shape(USE='long_link')]),
      Transform(rotation=(0,0,1,1.57),translation=(2,-.5,4),
        children=[
        Shape(USE='long_link')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NetworkReroutingNetwork.py")
