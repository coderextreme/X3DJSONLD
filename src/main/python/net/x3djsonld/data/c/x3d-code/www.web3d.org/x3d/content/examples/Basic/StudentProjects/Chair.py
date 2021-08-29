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
    meta(content='Chair.x3d',name='title'),
    meta(content='A chair for a room, modeled as a Prototype for reuse.',name='description'),
    meta(content='Frederic Roussille',name='creator'),
    meta(content='Don Brutzman',name='contributor'),
    meta(content='1 April 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Chair.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Chair.x3d'),
    Viewpoint(description='Chair example ProtoInstance',position=(0,0,4)),
    ProtoDeclare(name='Chair',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='diffuseColor',type='SFColor',value=(0.7,0.7,0.4))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(scale=(0.15,0.15,0.15),translation=(0,0.52,0),
          children=[
          Transform(DEF='seat',
            children=[
            Transform(rotation=(1,0,0,1.57),
              #  seat 
              children=[
              Shape(
                appearance=Appearance(DEF='chair_color',
                  material=Material(DEF='color',
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='diffuseColor')]))),
                geometry=Extrusion(DEF='ExtrusionSeatCushion',ccw=False,creaseAngle=1.57,crossSection=[(-2,0),(2,0),(2.3,0.3),(2.4,0.4),(2.5,0.5),(2.5,1),(-2,1),(-2,0)],scale=[(0.5,1)],solid=False,spine=[(1,0,0),(0.92,-0.38,0),(0.71,-0.71,0),(0.38,-0.92,0),(0,-1,0),(-0.38,-0.92,0),(-0.71,-0.71,0),(-0.92,-0.38,0),(-1,0,0),(-0.92,0.38,0),(-0.71,0.71,0),(-0.38,0.92,0),(0,1,0),(0.38,0.92,0),(0.71,0.71,0),(0.92,0.38,0),(1,0,0)]))]),
            Transform(translation=(0,1,1),
              #  back 
              children=[
              Shape(
                appearance=Appearance(USE='chair_color'),
                geometry=Extrusion(DEF='ExtrusionSeatBack',convex=False,creaseAngle=1.57,crossSection=[(1,0),(0.8,0),(0.736,0.304),(0.568,0.568),(0.304,0.736),(0,0.8),(-0.304,0.736),(-0.568,0.568),(-0.736,0.304),(-0.8,0),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0),(0.8,0)],scale=[(1.4,1),(2,1)],solid=False,spine=[(0,0,0),(0,4,0)]))]),
            CylinderSensor(DEF='SeatRotationCylinderSensor',description='Swivel chair')]),
          Transform(rotation=(1,0,0,-1.57),
            #  foot 
            children=[
            Shape(
              appearance=Appearance(USE='chair_color'),
              geometry=Extrusion(DEF='ExtrusionSeatBase',beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(0,0),(0.2,0),(0.23,2),(0.28,3),(1,3.3),(1.5,3.5),(0,3.5),(0,0)],endCap=False,solid=False,spine=[(0.1,0,0),(0.092,-0.038,0),(0.071,-0.071,0),(0.038,-0.092,0),(0,-0.1,0),(-0.038,-0.092,0),(-0.071,-0.071,0),(-0.092,-0.038,0),(-0.1,0,0),(-0.092,0.038,0),(-0.071,0.071,0),(-0.038,0.092,0),(0,0.1,0),(0.038,0.092,0),(0.071,0.071,0),(0.092,0.038,0),(0.1,0,0)]))])]),
        ROUTE(fromField='rotation_changed',fromNode='SeatRotationCylinderSensor',toField='set_rotation',toNode='seat')])),
    ProtoInstance(DEF='chaise',name='Chair')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Chair.py")
