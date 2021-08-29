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
    meta(content='ExtrusionExamplesTest.x3d',name='title'),
    meta(content='Extrusion examples for testing and debugging',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='18 August 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='several tests (marked TODO) are failing under Xj3D but work satisfactorily on other X3D players',name='warning'),
    meta(content='ExtrusionExamplesTest.BScontact.png',name='Image'),
    meta(content='ExtrusionExamplesTest.Coin3D.png',name='Image'),
    meta(content='ExtrusionExamplesTest.FreeWrl.png',name='Image'),
    meta(content='ExtrusionExamplesTest.H3DViewer.png',name='Image'),
    meta(content='ExtrusionExamplesTest.InstantReality.png',name='Image'),
    meta(content='ExtrusionExamplesTest.OctagaVS.png',name='Image'),
    meta(content='ExtrusionExamplesTest.view3dscene.png',name='Image'),
    meta(content='ExtrusionExamplesTest.X3DOM.png',name='Image'),
    meta(content='ExtrusionExamplesTest.Xj3D.png',name='Image'),
    meta(content='ExtrusionExamplesTestXj3dConsoleOutput.txt',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/ExtrusionExamplesTest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ExtrusionExamplesTest.x3d'),
    Viewpoint(description='Extrusion examples',orientation=(1,0,0,-0.244979),position=(0,4,16)),
    Background(skyColor=[(0.380392,0.607843,1)]),
    Transform(translation=(-6,1,0),
      children=[
      Viewpoint(description='Extrusion1 Default',position=(0,0,4)),
      Shape(
        geometry=Extrusion(DEF='Extrusion1Default'),
        appearance=Appearance(DEF='AppearanceDefault',
          material=Material(emissiveColor=(0.24,0.2,0.8))))]),
    Transform(translation=(-3,1,0),
      children=[
      Viewpoint(description='Extrusion2 CircularCrossSection12',position=(0,0,4)),
      Shape(
        geometry=Extrusion(DEF='Extrusion2CircularCrossSection12',crossSection=[(0,1),(0.5,0.866),(0.866,0.5),(1,0),(0.866,-0.5),(0.5,-0.866),(0,-1),(-0.5,-0.866),(-0.866,-0.5),(-1,-0),(-0.866,0.5),(-0.5,0.866),(0,1)]),
        appearance=Appearance(USE='AppearanceDefault'))]),
    Transform(translation=(0,1,0),
      children=[
      Viewpoint(description='Extrusion3 CircularCrossSection60',position=(0,0,4)),
      Shape(
        geometry=Extrusion(DEF='Extrusion3CircularCrossSection60',crossSection=[(0,1),(0.105,0.995),(0.208,0.978),(0.309,0.951),(0.407,0.914),(0.5,0.866),(0.588,0.809),(0.669,0.743),(0.743,0.669),(0.809,0.588),(0.866,0.5),(0.914,0.407),(0.951,0.309),(0.978,0.208),(0.995,0.105),(1,0),(0.995,-0.105),(0.978,-0.208),(0.951,-0.309),(0.914,-0.407),(0.866,-0.5),(0.809,-0.588),(0.743,-0.669),(0.669,-0.743),(0.588,-0.809),(0.5,-0.866),(0.407,-0.914),(0.309,-0.951),(0.208,-0.978),(0.105,-0.995),(0,-1),(-0.105,-0.995),(-0.208,-0.978),(-0.309,-0.951),(-0.407,-0.914),(-0.5,-0.866),(-0.588,-0.809),(-0.669,-0.743),(-0.743,-0.669),(-0.809,-0.588),(-0.866,-0.5),(-0.914,-0.407),(-0.951,-0.309),(-0.978,-0.208),(-0.995,-0.105),(-1,-0),(-0.995,0.105),(-0.978,0.208),(-0.951,0.309),(-0.914,0.407),(-0.866,0.5),(-0.809,0.588),(-0.743,0.669),(-0.669,0.743),(-0.588,0.809),(-0.5,0.866),(-0.407,0.914),(-0.309,0.951),(-0.208,0.978),(-0.105,0.995),(0,1)]),
        appearance=Appearance(USE='AppearanceDefault'))]),
    Transform(rotation=(0,0,1,0.261799),translation=(3,1,0),
      children=[
      Viewpoint(description='Extrusion4 CircularCrossSection12SemiCircularSpine',position=(0,0,4)),
      Shape(
        #  TODO isolated problem: Xj3D rotations look like SCP is mistaken and (unspecified) scales are bogus. mesh connectivity seems OK. crossSection is closed, spine is open. 
        geometry=Extrusion(DEF='Extrusion4CircularCrossSection12SemiCircularSpine',crossSection=[(0,1),(0.5,0.866),(0.866,0.5),(1,0),(0.866,-0.5),(0.5,-0.866),(0,-1),(-0.5,-0.866),(-0.866,-0.5),(-1,-0),(-0.866,0.5),(-0.5,0.866),(0,1)],scale=[(0.2,0.2)],spine=[(-1,0,0),(-0.866,0.5,0),(-0.5,0.866,0),(0,1,0),(0.5,0.866,0),(0.866,0.5,0),(1,0,0),(0.866,-0.5,0)]),
        appearance=Appearance(USE='AppearanceDefault'))]),
    Transform(translation=(6,2,0),
      children=[
      Viewpoint(description='Extrusion5 CircularCrossSection12CircularSpine',position=(0,0,4)),
      Shape(
        #  TODO isolated problem: Xj3D rotations look like SCP is mistaken and (unspecified) scales are bogus. mesh connectivity seems OK. crossSection is closed, spine is closed. 
        geometry=Extrusion(DEF='Extrusion5CircularCrossSection12CircularSpine',crossSection=[(0,1),(0.5,0.866),(0.866,0.5),(1,0),(0.866,-0.5),(0.5,-0.866),(0,-1),(-0.5,-0.866),(-0.866,-0.5),(-1,-0),(-0.866,0.5),(-0.5,0.866),(0,1)],scale=[(0.2,0.2)],spine=[(0,1,0),(0.5,0.866,0),(0.866,0.5,0),(1,0,0),(0.866,-0.5,0),(0.5,-0.866,0),(0,-1,0),(-0.5,-0.866,0),(-0.866,-0.5,0),(-1,-0,0),(-0.866,0.5,0),(-0.5,0.866,0),(0,1,0)]),
        appearance=Appearance(USE='AppearanceDefault'))]),
    #  ========================================= 
    Transform(translation=(-6.5,-1,0),
      children=[
      Viewpoint(description='Extrusion6 DefaultSideways',position=(0,0,4)),
      Shape(
        geometry=Extrusion(DEF='Extrusion6DefaultSideways',spine=[(0,0,0),(1,0,0)]),
        appearance=Appearance(USE='AppearanceDefault'))]),
    Transform(translation=(-4,-1,0),
      children=[
      Viewpoint(description='Extrusion7 Right45DegreeBends',position=(0,0,4)),
      Shape(
        geometry=Extrusion(DEF='Extrusion7Right45DegreeBends',crossSection=[(0.1,0.1),(0.1,-0.1),(-0.1,-0.1),(-0.1,0.1),(0.1,0.1)],spine=[(0,0,0),(0,0.5,0),(0.5,1,0),(1,1,0),(1.5,1,0),(2,0.5,0),(2,0,0)]),
        appearance=Appearance(USE='AppearanceDefault'))]),
    Transform(translation=(-1,-1,0),
      children=[
      Viewpoint(description='Extrusion8 Right45DegreeBendsClosed',position=(0,0,4)),
      Shape(
        geometry=Extrusion(DEF='Extrusion8Right45DegreeBendsClosed',crossSection=[(0.1,0.1),(0.1,-0.1),(-0.1,-0.1),(-0.1,0.1),(0.1,0.1)],spine=[(0,0,0),(0,0.5,0),(0.5,1,0),(1,1,0),(1.5,1,0),(2,0.5,0),(2,0,0),(2,-0.5,0),(1.5,-1,0),(1,-1,0),(0.5,-1,0),(0,-0.5,0),(0,0,0)]),
        appearance=Appearance(USE='AppearanceDefault'))]),
    Transform(translation=(3,-1,0),
      children=[
      Viewpoint(description='Extrusion9 CircularSpineSquareCrossection',position=(0,0,4)),
      Shape(
        #  TODO isolated problem: Xj3D end segments squeezed (but not shut) when crossSection is closed, regardless of beginCap='true' endCap='true' 
        geometry=Extrusion(DEF='Extrusion9CircularSpineSquareCrossection',crossSection=[(0.1,0.1),(0.1,-0.1),(-0.1,-0.1),(-0.1,0.1),(0.1,0.1)],spine=[(0,1,0),(0.309,0.951,0),(0.588,0.809,0),(0.809,0.588,0),(0.951,0.309,0),(1,0,0),(0.951,-0.309,0),(0.809,-0.588,0),(0.588,-0.809,0),(0.309,-0.951,0),(0,-1,0),(-0.309,-0.951,0),(-0.588,-0.809,0),(-0.809,-0.588,0),(-0.951,-0.309,0),(-1,-0,0),(-0.951,0.309,0),(-0.809,0.588,0),(-0.588,0.809,0),(-0.309,0.951,0),(0,1,0)]),
        appearance=Appearance(USE='AppearanceDefault'))]),
    Transform(translation=(5,-1,0),
      children=[
      Viewpoint(description='Extrusion10 Right45DegreeBendsClosedCircularCrossection',position=(0,0,4)),
      Shape(
        geometry=Extrusion(DEF='Extrusion10Right45DegreeBendsClosedCircularCrossection',crossSection=[(0,0.1),(0.0383,0.0924),(0.0707,0.0707),(0.0924,0.0383),(0.1,0),(0.0924,-0.0383),(0.0707,-0.0707),(0.0383,-0.0924),(0,-0.1),(-0.0383,-0.0924),(-0.0707,-0.0707),(-0.0924,-0.0383),(-0.1,-0),(-0.0924,0.0383),(-0.0707,0.0707),(-0.0383,0.0924),(0,0.1)],spine=[(0,0,0),(0,0.5,0),(0.5,1,0),(1,1,0),(1.5,1,0),(2,0.5,0),(2,0,0),(2,-0.5,0),(1.5,-1,0),(1,-1,0),(0.5,-1,0),(0,-0.5,0),(0,0,0)]),
        appearance=Appearance(USE='AppearanceDefault'))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExtrusionExamplesTest.py")
