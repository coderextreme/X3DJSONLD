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
    meta(content='RobotHead.x3d',name='title'),
    meta(content="JetFire's Robotic Head.",name='description'),
    meta(content='Kreg L. Kelly',name='creator'),
    meta(content='Kreg L. Kelly',name='translator'),
    meta(content='22 September 2002',name='created'),
    meta(content='27 March 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Robots/JetFireTransformerToy/RobotHead.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(
      children=[
      Shape(
        appearance=Appearance(DEF='MyBlueGrey',
          material=Material(diffuseColor=(.7,.8,.8))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,-1,0,1,10,9,-1,1,2,11,10,-1,2,3,12,11,-1,3,4,13,12,-1,4,5,14,13,-1,5,6,15,14,-1,6,7,16,15,-1,7,8,17,16,-1,8,0,9,17,-1,18,19,20,21,-1,21,20,22,23,-1,23,22,26,27,-1,27,26,25,28,-1,20,24,25,26,22,-1,21,23,27,28,29,-1,20,24,25,31,30,-1,31,25,28,32,-1,21,33,32,28,29,-1,48,47,44,43,-1,47,46,45,44,-1,42,19,20,30,-1,43,42,30,31,-1,48,43,31,34,35,36,37,38,39,40,41,-1,41,5,48,-1,1,56,63,-1,63,56,55,54,53,52,51,50,49,32,-1,62,63,58,59,-1,62,59,60,61,-1,57,32,21,18,-1,58,63,32,57,-1,57,18,19,42,-1,59,58,43,44,-1,60,59,44,45,-1,61,60,45,46,-1,62,61,46,47,-1,63,62,47,48,-1,5,41,56,1,-1,41,40,55,56,-1,40,39,54,55,-1,39,38,53,54,-1,38,37,52,53,-1,37,36,51,52,-1,36,35,50,51,-1,35,34,49,50,-1],solid=False,
          coord=Coordinate(point=[(0.33,0,-0.495),(0.165,0.055,-0.275),(0.1166,0.1375,-0.1375),(0,0.275,-0),(-0.1166,0.1375,-0.1375),(-0.165,0.055,-0.275),(-0.33,0,-0.495),(-0.44,0,-1.155),(0.44,0,-1.155),(0.33,0.55,-0.495),(0.165,0.55,-0.22),(0.1166,0.55,-0.11),(0,0.55,-0),(-0.1166,0.55,-0.11),(-0.165,0.55,-0.22),(-0.33,0.55,-0.495),(-0.44,0.55,-1.155),(0.44,0.55,-1.155),(0.275,1.1,0.3),(-0.275,1.1,0.3),(-0.275,1.155,0.33),(0.275,1.155,0.33),(-0.275,1.375,-0.275),(0.275,1.375,-0.275),(-0.3025,1.32,-1.32),(-0.3025,1.32,-1.347),(-0.275,1.375,-1.32),(0.275,1.375,-1.32),(0.3025,1.32,-1.347),(0.3025,1.32,-1.32),(-0.4675,1.25,-0.275),(-0.495,1.25,-1.35),(0.495,1.25,-1.35),(0.4675,1.25,-0.275),(-0.495,1.21,-1.375),(-0.495,1.151,-1.466),(-0.495,1.081,-1.536),(-0.495,0.99,-1.66),(-0.495,0.458,-1.536),(-0.495,0.389,-1.466),(-0.495,0.33,-1.375),(-0.4125,0.275,-0.66),(-0.385,1.045,-0.275),(-0.385,0.825,-0.275),(-0.275,0.825,0.3),(-0.165,0.33,0.245),(-0.165,0.33,0.19),(-0.2475,0.44,0.025),(-0.3025,0.44,-1.35),(0.495,1.21,-1.375),(0.495,1.151,-1.466),(0.495,1.081,-1.536),(0.495,0.99,-1.66),(0.495,0.458,-1.536),(0.495,0.389,-1.466),(0.495,0.33,-1.375),(0.4125,0.275,-0.66),(0.385,1.045,-0.275),(0.385,0.825,-0.275),(0.275,0.825,0.3),(0.165,0.33,0.245),(0.165,0.33,0.19),(0.2475,0.44,0.025),(0.3025,0.44,-1.35)])))]),
    Transform(scale=(.35,.35,.35),translation=(0,0,-0.8),
      children=[
      Shape(
        appearance=Appearance(USE='MyBlueGrey'),
        geometry=Extrusion(creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],spine=[(0,-1,0),(0,1,0)]))]),
    Transform(translation=(0,0.925,-0.275),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0),transparency=.5)),
        geometry=Box(size=(.6,0.255,0.8)))]),
    Transform(scale=(0.4,1,1),translation=(0.495,0.84,-1.12),
      children=[
      Shape(DEF='CannonTurret',
        appearance=Appearance(DEF='CannonColor',
          material=Material(diffuseColor=(.2,.2,.2),shininess=0.75)),
        geometry=Sphere(radius=0.4))]),
    Transform(scale=(0.4,1,1),translation=(-0.495,0.84,-1.12),
      children=[
      Shape(USE='CannonTurret')]),
    Transform(rotation=(1,0,0,1.82),scale=(0.75,0.65,0.75),translation=(-0.575,0.65,-0.3),
      children=[
      Shape(DEF='Cannon',
        appearance=Appearance(USE='CannonColor'),
        geometry=Extrusion(creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.1,0.1),(0.15,0.15),(0.05,0.05)],spine=[(0,-1,0),(0,-0.5,0),(0,1,0)]))]
      #  Upright Cannon Position = Translation = -0.575 1.6 -0.8 Rotation = 1 0 0 0.25 
      ),
    Transform(rotation=(1,0,0,1.32),scale=(0.75,0.65,0.75),translation=(-0.575,1.2,-0.3),
      children=[
      Shape(USE='Cannon')]
      #  Upright Cannon position = Translation = -0.575 1.6 -1.4 Rotation = 1 0 0 -0.25 
      ),
    Transform(rotation=(1,0,0,1.32),scale=(0.75,0.65,0.75),translation=(0.575,1.2,-0.3),
      children=[
      Shape(USE='Cannon')]
      #  Upright Cannon Position = Translation = 0.575 1.6 -1.4 Rotation = 1 0 0 -0.25 
      ),
    Transform(rotation=(1,0,0,1.82),scale=(0.75,0.65,0.75),translation=(0.575,0.65,-0.3),
      children=[
      Shape(USE='Cannon')]
      #  Upright Cannon position = Translation = 0.575 1.6 -0.8 Rotation = 1 0 0 0.25 
      )])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RobotHead.py")
