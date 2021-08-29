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
    meta(content='Turret.x3d',name='title'),
    meta(content='AAAV Gun Turret',name='description'),
    meta(content='William Geissler',name='creator'),
    meta(content='27 January 2001',name='created'),
    meta(content='21 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/Turret.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["AAAV 30mm cannon turret"],title='AAAV Turret'),
    Viewpoint(description='Entry',orientation=(0,-1,0,1.57),position=(-40,0,0)),
    Transform(rotation=(0,1,0,1.57),translation=(14,12,0),
      children=[
      Viewpoint(description='Atop Turret',orientation=(1,0,0,-.5),position=(0,0,0))]),
    Transform(DEF='Turret',
      children=[
      Transform(DEF='TurretBody',
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["cammie3.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/cammie3.jpg"])),
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,9,8,7,6,5,4,3,2,1,0,-1,10,11,12,13,14,15,16,17,18,10,-1,2,3,13,12,2,-1,1,2,12,11,1,-1,0,1,11,10,0,-1,9,0,10,18,9,-1,8,9,18,17,8,-1,7,8,17,16,7,-1,6,7,16,15,6,-1,3,4,5,6,20,19,3,-1,14,13,3,19,14,-1,15,14,19,6,15,-1],
            coord=Coordinate(point=[(2.0,0.0,-2.7),(-1.4,0.0,-2.7),(-3.0,0.0,-1.9),(-3.0,0.0,0.7),(-3.0,0.0,1.7),(-1.4,0.0,2.7),(0.0,0.0,2.7),(2.0,0.0,2.7),(3.0,0.0,1.7),(3.0,0.0,-1.7),(1.9,1.4,-2.5),(-1.2,1.4,-2.5),(-2.2,1.4,-2.0),(-2.2,1.4,0.7),(0.0,1.4,0.7),(0.0,1.4,2.5),(1.9,1.4,2.5),(2.8,1.4,1.5),(2.8,1.4,-1.5),(0.0,0.5,0.7),(0.0,0.5,2.5),(-2.2,0.0,0.7)]))),
        Shape(
          geometry=Extrusion(ccw=False,crossSection=[(0.4,1.0),(-0.4,1.0),(-1.0,0.4),(-1.0,-0.4),(-0.4,-1.0),(0.4,-1.0),(1.0,-0.4),(1.0,0.4),(0.4,1.0)],spine=[(0.6,1.4,-0.9),(0.6,1.7,-0.9)]),
          appearance=Appearance(
            material=Material(ambientIntensity=0.26,diffuseColor=(0.15,0.05,0.0),shininess=0.08,specularColor=(0.75,0.33,0.0)))),
        Transform(translation=(0.6,1.75,-0.9),
          children=[
          Shape(
            geometry=Cylinder(height=0.1,radius=1.1),
            appearance=Appearance(
              texture=ImageTexture(url=["cammie2.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/cammie2.jpg"])))]),
        Transform(translation=(0.0,1.0,1.6),
          children=[
          Shape(
            geometry=Box(size=(0.2,0.6,1.4)),
            appearance=Appearance(
              material=Material(ambientIntensity=0.3,diffuseColor=(0.15,0.15,0.25),shininess=0.1,specularColor=(0.35,0.35,0.4))))])]),
      Transform(DEF='Gun',rotation=(0,1,0,-1.57),scale=(0.6,0.6,0.6),translation=(-2.4,0.7,0),
        children=[
        Inline(url=["Bushmaster.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/Bushmaster.x3d","Bushmaster.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/Bushmaster.wrl"])]),
      CylinderSensor(DEF='FIRST_CYLINDERSENSOR',description='select to rotate',maxAngle=1.57,minAngle=-1.57)]),
    ROUTE(fromField='rotation_changed',fromNode='FIRST_CYLINDERSENSOR',toField='set_rotation',toNode='Turret')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Turret.py")
