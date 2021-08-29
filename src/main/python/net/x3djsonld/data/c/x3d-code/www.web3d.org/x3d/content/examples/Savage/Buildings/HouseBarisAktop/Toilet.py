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
    meta(content='Toilet.x3d',name='title'),
    meta(content='Toilet for bathroom.',name='description'),
    meta(content='Baris AKTOP',name='creator'),
    meta(content='12 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Toilet.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(rotation=(0,0,1,-1.57),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='toiletapp',diffuseColor=(0.9,0.95,0.95))),
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-1,1),(-0.92,1.38),(-0.71,1.71),(-0.38,1.92),(0,2),(0.38,1.92),(0.71,1.71),(0.92,1.38),(1,1),(1,0.001),(1.2,0.001),(1.2,1),(1.104,1.456),(0.852,1.852),(0.456,2.104),(0,2.2),(-0.456,2.104),(-0.852,1.852),(-1.104,1.456),(-1.2,1),(-1.2,0),(-1.104,-0.456),(-0.852,-0.852),(-0.456,-1.104),(0,-1.2),(0.456,-1.104),(0.852,-0.852),(1.104,-0.456),(1.2,0),(1,0)],scale=[(0.5,0.5),(0.45,0.45),(0.4,0.4),(0.35,0.35),(0.3,0.3),(0.25,0.25),(0.35,0.35),(0.45,0.45),(0.6,0.6),(0.8,0.8),(0.9,0.9),(0.95,0.95),(1,1),(0.9,0.9)],solid=False,spine=[(0,0,0),(0,0.1,0),(0,0.15,0),(0,0.35,0),(0,0.55,0),(0,0.65,0),(0,0.75,0),(0,0.85,0),(0,0.95,0),(0,1.1,0),(0,1.25,0),(0,1.4,0),(0,1.95,0),(0,2,0)]))]),
      Transform(DEF='coverOpen',center=(0,0,-1),scale=(1.1,1,1),translation=(2,0,0),
        children=[
        Inline(url=["Flip.x3d","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Flip.x3d","Flip.wrl","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Flip.wrl"]),
        CylinderSensor(DEF='open',description='drag to rotate',maxAngle=1.6),
        ROUTE(fromField='rotation_changed',fromNode='open',toField='set_rotation',toNode='coverOpen')]),
      Transform(DEF='coverOpen1',center=(0,0,-1),scale=(1,1.05,1.05),translation=(2.1,0,-0.1),
        children=[
        Inline(url=["Flip2.x3d","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Flip2.x3d","Flip2.wrl","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Flip2.wrl"]),
        CylinderSensor(DEF='open1',description='drag to rotate',maxAngle=1.6),
        ROUTE(fromField='rotation_changed',fromNode='open1',toField='set_rotation',toNode='coverOpen1')]),
      Transform(rotation=(0,0,1,-1.57),scale=(2,1.3,2),translation=(2.2,0,-1.35),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.5,-0.05),(0.475,-0.025),(0.45,0),(-0.45,0),(-0.475,-0.025),(-0.5,-0.05),(-0.5,-0.45),(-0.475,-0.475),(-0.45,-0.5),(0.45,-0.5),(0.475,-0.475),(0.5,-0.45),(0.5,-0.05)],scale=[(0.8,0.8),(0.85,0.85),(0.9,0.9),(1,1),(1,1),(0.95,0.95)],solid=False,spine=[(0,0,0),(0,0.05,0),(0,0.1,0),(0,0.5,0),(0,1,0),(0,0.95,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9)))),
        Transform(rotation=(1,0,0,3.14),scale=(0.1,0.1,0.1),translation=(0,0.3,-0.2),
          children=[
          Transform(rotation=(0,1,0,3.14),
            children=[
            Shape(
              geometry=Extrusion(creaseAngle=3.14,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],spine=[(0,0,0),(0,5,0),(0,6.76,0.16),(0,7.42,0.58),(0,7.84,1.24),(0,8,2),(0,7.84,2.76),(0,7.42,3.42)]),
              appearance=Appearance(DEF='fountainapp',
                material=Material(diffuseColor=(0.95,0.95,0.95),shininess=1)))])])])]),
    Group(
      children=[
      Sound(maxBack=30,maxFront=30,minBack=15,minFront=15,
        source=AudioClip(DEF='Source',description='flush toilet',url=["flushtoilet.wav","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/flushtoilet.wav"])),
      TouchSensor(DEF='Touch',description='touch to activate'),
      Transform(scale=(0.05,0.05,0.05),translation=(3.5,0,-1.75),
        children=[
        Shape(
          geometry=Sphere(radius=2),
          appearance=Appearance(USE='fountainapp'))])]),
    ROUTE(fromField='touchTime',fromNode='Touch',toField='set_startTime',toNode='Source')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Toilet.py")
