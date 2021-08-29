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
    meta(content='Mk45.x3d',name='title'),
    meta(content='Mk45 main gun of Yavuz Class Frigate',name='description'),
    meta(content='Ozan APAYDIN',name='creator'),
    meta(content='17 September 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/weaps/mk-45.htm',name='reference'),
    meta(content='mk45shot.jpg',name='photo'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Mk45.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.7,0.7,0.7)]),
    Sound(maxBack=100,maxFront=100,minBack=0.01,minFront=0.01,
      source=AudioClip(DEF='CannonFireSound',url=["CannonFire.wav","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/CannonFire.wav"])),
    Transform(DEF='CannonTrans',center=(0.75,0,0),
      children=[
      Shape(
        geometry=Extrusion(convex=False,creaseAngle=.9,crossSection=[(-1.1,0.0),(-1.0,0.5),(0.5,1),(2.2,1),(2.6,0.5),(3,0),(2.6,-0.5),(2.2,-1),(0.5,-1),(-1.0,-0.5),(-1.1,0.0)],scale=[(1.0,1.5),(1.2,1.4),(1.1,1.3),(1.0,1.0),(0.5,0.7),(0.001,0.001)],spine=[(0.0,-1.0,0.0),(0.0,1.3,0.0),(0.0,1.9,0.0),(0.0,2.0,0.0),(0.0,2.3,0.0),(0.0,2.5,0.0)]),
        appearance=Appearance(DEF='GunColor',
          material=Material(diffuseColor=(.7,.7,.8)))),
      Transform(translation=(-1,0,0),
        children=[
        Shape(
          geometry=Extrusion(crossSection=[(-0.75,0.78),(0.75,0.78),(0.75,-0.78),(-0.75,-0.78),(-0.75,0.78)],scale=[(1.0,1.0),(0.3,0.855)],spine=[(0.0,-1.0,0.0),(0.0,1.9,0.0)]),
          appearance=Appearance(USE='GunColor')),
        Transform(rotation=(0,0,1,-0.18),translation=(-0.36,1.15,0),
          children=[
          Shape(
            geometry=Box(size=(0.01,1.5,0.8)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.1,0.1))))])]),
      Transform(rotation=(1,0,0,-1.57),
        children=[
        CylinderSensor(DEF='NamluDondur',maxAngle=0.45),
        Transform(DEF='NamluTrans',
          children=[
          Transform(rotation=(1,0,0,1.57),
            children=[
            Transform(rotation=(0,0,1,1.57),translation=(-1.5,0.99,0),
              children=[
              Group(DEF='Namlu',
                children=[
                Shape(
                  geometry=Cylinder(height=0.5,radius=0.2),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.1,0.1,0.1)))),
                Transform(translation=(0.0,0.2,0),
                  children=[
                  Shape(
                    geometry=Cylinder(height=0.6,radius=0.16),
                    appearance=Appearance(
                      material=Material(diffuseColor=(1,1,0),shininess=0.8))),
                  Transform(translation=(0,2.5,0),
                    children=[
                    Shape(
                      geometry=Cylinder(height=4.5,radius=0.12),
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.5,0.5,0.5),shininess=0.8))),
                    Shape(
                      geometry=Cylinder(height=4.501,radius=0.08),
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.1,0.1,0.1)))),
                    Transform(DEF='BoomTransform',scale=(0.00001,0.00001,0.00001),translation=(0.0,3.1,0.0),
                      children=[
                      Shape(
                        geometry=Extrusion(beginCap=False,creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)],endCap=False,spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)]),
                        appearance=Appearance(
                          material=Material(DEF='BoomMaterial'),
                          texture=ImageTexture(url=["Boom1.jpg","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Boom1.jpg"]))),
                      ScalarInterpolator(DEF='TransparencyInterp',key=[0,0.04,0.1,0.7,1.0],keyValue=[1.0,0.2,0.3,1.0,1.0]),
                      PositionInterpolator(DEF='ScaleInterp',key=[0,0.04,0.1,0.7,1.0],keyValue=[(0.00001,0.00001,0.00001),(0.05,0.4,0.05),(0.4,0.6,0.4),(0.5,0.9,0.5),(0.00001,0.0001,0.00001)]),
                      TimeSensor(DEF='BoomTimer',cycleInterval=5.0)])])])])])])]),
        Transform(rotation=(0,0,1,1.57),translation=(0.7,0,2.41),
          children=[
          Transform(rotation=(1,0,0,0.15),
            children=[
            Shape(DEF='FireButton',
              geometry=Box(size=(0.5,0.5,0.001)),
              appearance=Appearance(
                texture=ImageTexture(url=["FireButton.gif","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/FireButton.gif"]))),
            TouchSensor(DEF='FireButtonSensor')])])]),
      Transform(translation=(0.75,-1,0),
        children=[
        Shape(
          geometry=Cylinder(height=0.8),
          appearance=Appearance(USE='GunColor'))]),
      CylinderSensor(DEF='CannonSense',maxAngle=1.7,minAngle=-1.7)]),
    Transform(translation=(0.75,-1.5,0),
      children=[
      Shape(
        geometry=Cylinder(height=0.5,radius=1.8),
        appearance=Appearance(USE='GunColor'))]),
    ROUTE(fromField='rotation_changed',fromNode='CannonSense',toField='set_rotation',toNode='CannonTrans'),
    ROUTE(fromField='rotation_changed',fromNode='NamluDondur',toField='set_rotation',toNode='NamluTrans'),
    ROUTE(fromField='fraction_changed',fromNode='BoomTimer',toField='set_fraction',toNode='ScaleInterp'),
    ROUTE(fromField='value_changed',fromNode='ScaleInterp',toField='set_scale',toNode='BoomTransform'),
    ROUTE(fromField='fraction_changed',fromNode='BoomTimer',toField='set_fraction',toNode='TransparencyInterp'),
    ROUTE(fromField='value_changed',fromNode='TransparencyInterp',toField='set_transparency',toNode='BoomMaterial'),
    ROUTE(fromField='touchTime',fromNode='FireButtonSensor',toField='set_startTime',toNode='BoomTimer'),
    ROUTE(fromField='touchTime',fromNode='FireButtonSensor',toField='startTime',toNode='CannonFireSound')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Mk45.py")
