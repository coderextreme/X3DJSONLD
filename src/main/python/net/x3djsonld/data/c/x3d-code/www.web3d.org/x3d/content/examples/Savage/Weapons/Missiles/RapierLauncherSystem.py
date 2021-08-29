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
    meta(content='RapierLauncherSystem.x3d',name='title'),
    meta(content='Oliver Tan',name='creator'),
    meta(content='28 January 2004',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='Rapier Launcher System.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/RapierLauncherSystem.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='http://www.army-technology.com/projects/jernas/jernas1.html',name='reference'),
    meta(content='Rapier, Rapier missile, missile, missile launcher, launcher',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  This NavigationInfo node is added to many scenes, making examination of objects easier. 
    children=[
    Viewpoint(description='Rapier Launcher',orientation=(-0.343,0.935,0.095,0.6232),position=(1.3,0.7,2.7)),
    Background(groundAngle=[0.1,1.309,1.570796],groundColor=[(0,0,0),(0,0.1,0.3),(0,0.2,0.5),(0,0.3,0.8)],skyAngle=[0.1,0.15,1.309,1.571],skyColor=[(0.4,0.4,0.1),(0.4,0.4,0.1),(0,0.1,0.3),(0,0.2,0.6),(0.8,0.8,0.8)]),
    ExternProtoDeclare(name='RapierMissileSystem',url=["RapierMissileSystemPrototype.wrl#RapierMissileSystem","RapierMissileSystemPrototype.x3d#RapierMissileSystem"],
      field=[
      field(accessType='initializeOnly',name='material',type='SFNode'),
      field(accessType='initializeOnly',name='imageTexture',type='SFNode')]),
    Transform(DEF='Launcher',
      #  This is only a representational model. It is not created to scale. 
      children=[
      Shape(DEF='LauncherBody',
        geometry=Cylinder(radius=0.6),
        appearance=Appearance(DEF='LauncherSkin',
          material=Material(diffuseColor=(.3,.6,.9)),
          texture=ImageTexture(DEF='LauncherTexture',url=["cammie1.jpg","https://savage.nps.edu/Savage/AircraftFixedWing/AV8bHarrierUnitedStates/cammie1.jpg"]))),
      CylinderSensor(DEF='LauncherRotation',description='Rotates the entire missile launcher system.',maxAngle=1.3,minAngle=-1.3),
      Transform(DEF='LauncherTop',scale=(1,0.2,1),translation=(0,1,0),
        children=[
        Shape(
          geometry=Sphere(radius=0.6),
          appearance=Appearance(USE='LauncherSkin'))]),
      Transform(DEF='LauncherCap',translation=(0,1,0),
        children=[
        Shape(
          geometry=Cylinder(height=0.35,radius=0.2),
          appearance=Appearance(USE='LauncherSkin'))]),
      Transform(DEF='LauncherArms',translation=(0,0.1,0),
        children=[
        Transform(translation=(0.55,0,0),
          children=[
          Transform(DEF='SmallArm',
            children=[
            Shape(
              geometry=Box(size=(0.2,0.3,0.9)),
              appearance=Appearance(USE='LauncherSkin')),
            Transform(rotation=(1,0,0,1.571),translation=(0.1,0.1,0),
              children=[
              Shape(
                geometry=Cylinder(height=1.2,radius=0.02),
                appearance=Appearance(USE='LauncherSkin'))])])]),
        Transform(rotation=(0,1,0,3.142),translation=(-0.55,0,0),
          children=[
          Transform(
            children=[
            Transform(USE='SmallArm')])]),
        Transform(translation=(0,0.05,0.65),
          children=[
          Shape(DEF='BigArm',
            geometry=Box(size=(1.3,0.4,0.4)),
            appearance=Appearance(USE='LauncherSkin')),
          Transform(
            children=[
            Transform(rotation=(0,0,1,1.571),translation=(0,0.1,0.4),
              children=[
              Transform(
                children=[
                CylinderSensor(DEF='RadarRotation',description='Rotates the radar dish.',maxAngle=0.9),
                Transform(DEF='Radar',center=(0,0,-0.1),
                  children=[
                  Transform(rotation=(1,0,0,1.571),scale=(0.5,0.5,0.5),
                    children=[
                    Transform(translation=(0,1,0),
                      children=[
                      Group(
                        children=[
                        Shape(
                          geometry=Cylinder(height=0.15,radius=0.2),
                          appearance=Appearance(USE='LauncherSkin')),
                        Transform(translation=(0,-0.1,0),
                          children=[
                          Shape(
                            geometry=Cylinder(height=0.2,radius=0.1),
                            appearance=Appearance(USE='LauncherSkin'))])]),
                      Transform(DEF='RadarSpokePair',
                        children=[
                        Transform(center=(0,0.707,0),rotation=(1,0,0,-0.7),translation=(0,-0.6,0.1),
                          children=[
                          Shape(DEF='RadarSpoke',
                            geometry=Cylinder(height=1.25,radius=0.05),
                            appearance=Appearance(USE='LauncherSkin'))]),
                        Transform(center=(0,0.707,0),rotation=(1,0,0,0.7),translation=(0,-0.6,-0.1),
                          children=[
                          Shape(USE='RadarSpoke')])]),
                      Transform(rotation=(0,1,0,1.571),
                        children=[
                        Transform(USE='RadarSpokePair')])]),
                    Transform(
                      children=[
                      Shape(DEF='RadarDish',
                        appearance=Appearance(USE='LauncherSkin'),
                        geometry=Extrusion(creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(1.0,1.0),(0.001,0.001)],spine=[(0,0.1,0),(0,0,0)]))])]),
                  Transform(translation=(0,0.2,-0.1),
                    children=[
                    Transform(rotation=(1,0,0,1.571),translation=(0,0,0.05),
                      children=[
                      Shape(
                        geometry=Cylinder(height=0.125,radius=0.025),
                        appearance=Appearance(USE='LauncherSkin'))])]),
                  Transform(translation=(0,-0.2,-0.1),
                    children=[
                    Transform(rotation=(1,0,0,1.571),translation=(0,0,0.05),
                      children=[
                      Shape(
                        geometry=Cylinder(height=0.125,radius=0.025),
                        appearance=Appearance(USE='LauncherSkin'))])])])])])]),
          Transform(translation=(0,0.1,0),
            children=[
            Transform(translation=(-0.35,0,0.15),
              children=[
              Transform(DEF='RadarArm1',center=(0,-0.15,0),rotation=(1,0,0,0.785),
                children=[
                Shape(
                  geometry=Box(size=(0.1,0.3,0.1)),
                  appearance=Appearance(USE='LauncherSkin'))])]),
            Transform(translation=(0.35,0,0.15),
              children=[
              Transform(USE='RadarArm1')]),
            Transform(rotation=(0,0,1,1.571),translation=(0,0,0.3),
              children=[
              Shape(
                geometry=Cylinder(height=0.8,radius=0.03),
                appearance=Appearance(USE='LauncherSkin'))])]),
          ROUTE(fromField='rotation_changed',fromNode='RadarRotation',toField='rotation',toNode='Radar')]),
        Transform(translation=(0,0.05,-0.65),
          children=[
          Shape(USE='BigArm'),
          Transform(translation=(0.45,0.2,0),
            children=[
            Shape(
              geometry=Cylinder(height=0.1,radius=0.15),
              appearance=Appearance(USE='LauncherSkin'))])])]),
      Transform(translation=(0,0.6,0),
        children=[
        Shape(
          geometry=Cylinder(height=0.04,radius=0.64),
          appearance=Appearance(USE='LauncherSkin')),
        Transform(scale=(0.2,1,1),
          children=[
          Shape(
            appearance=Appearance(USE='LauncherSkin'),
            geometry=Cylinder(height=0.039,radius=0.66))]),
        Transform(rotation=(0,1,0,0.7855),scale=(0.2,1,1),
          children=[
          Shape(
            appearance=Appearance(USE='LauncherSkin'),
            geometry=Cylinder(height=0.039,radius=0.66))]),
        Transform(rotation=(0,1,0,1.571),scale=(0.2,1,1),
          children=[
          Shape(
            appearance=Appearance(USE='LauncherSkin'),
            geometry=Cylinder(height=0.039,radius=0.66))])]),
      ROUTE(fromField='rotation_changed',fromNode='LauncherRotation',toField='rotation',toNode='Launcher'),
      Transform(
        children=[
        Transform(translation=(0.8,0.1,0),
          children=[
          Transform(scale=(1.3,1.3,1.8),
            children=[
            ProtoInstance(name='RapierMissileSystem',
              fieldValue=[
              fieldValue(name='material',
                children=[
                Material(diffuseColor=(.3,.6,.9))]),
              fieldValue(name='imageTexture',
                children=[
                ImageTexture(USE='LauncherTexture')])])])])]),
      Transform(
        children=[
        Transform(translation=(-0.8,0.1,0),
          children=[
          Transform(scale=(1.3,1.3,1.8),
            children=[
            ProtoInstance(name='RapierMissileSystem',
              fieldValue=[
              fieldValue(name='material',
                children=[
                Material(diffuseColor=(.3,.6,.9))]),
              fieldValue(name='imageTexture',
                children=[
                ImageTexture(USE='LauncherTexture')])])])])]),
      Transform(translation=(0,0.1,0),
        children=[
        Transform(rotation=(0,0,1,1.571),
          children=[
          Shape(
            appearance=Appearance(USE='LauncherSkin'),
            geometry=Cylinder(height=1.7,radius=0.05))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RapierLauncherSystem.py")
