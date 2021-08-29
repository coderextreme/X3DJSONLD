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
    meta(content='SeaZenith.x3d',name='title'),
    meta(content='A lightweight prototype of SeaZenith point defence gun',name='description'),
    meta(content='Ozan APAYDIN',name='creator'),
    meta(content='20 August 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.futura-dtp.dk/Artilleri/25mmSeaZenith.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/SeaZenith.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Script Node to update the rotation of the gun. 
    children=[
    Script(DEF='RotUpdater',
      #  Variables and methods of the RotUpdater script 
      field=[
      field(accessType='inputOnly',name='set_LRotation',type='SFBool'),
      field(accessType='inputOnly',name='set_RRotation',type='SFBool'),
      field(accessType='inputOnly',name='get_CurRotation',type='SFRotation'),
      field(accessType='initializeOnly',name='isLeft',type='SFBool',value=True),
      field(accessType='initializeOnly',name='isRight',type='SFBool',value=False),
      field(accessType='initializeOnly',name='CurRot',type='SFRotation',value=(0,1,0,0)),
      field(accessType='outputOnly',name='newRotation',type='SFRotation')]),
    #  Script node to update elevation of the gun. 
    Script(DEF='ElevDescUpdater',
      #  Variables and methods of the ElevDescUpdater script script 
      field=[
      field(accessType='inputOnly',name='set_Elevation',type='SFBool'),
      field(accessType='inputOnly',name='set_Descendance',type='SFBool'),
      field(accessType='inputOnly',name='get_CurOrientation',type='SFRotation'),
      field(accessType='initializeOnly',name='isUp',type='SFBool',value=True),
      field(accessType='initializeOnly',name='isDown',type='SFBool',value=False),
      field(accessType='initializeOnly',name='CurOr',type='SFRotation',value=(0,1,0,0)),
      field(accessType='outputOnly',name='newOrientation',type='SFRotation')]),
    #  Gun Controller - Heads up displays and touch sensors 
    Background(skyColor=[(0.1,0.1,0.6)]),
    #  Fire sound effect. 
    Sound(maxBack=35,maxFront=35,
      source=AudioClip(DEF='FireSound',description='machine gun sound',url=["machngun.wav","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/machngun.wav"])),
    #  Modeling the gun 
    Transform(rotation=(0,1,0,3.14),scale=(1.2,1.2,1.2),translation=(0.0,-1.5,0.0),
      children=[
      Group(DEF='GunBase',
        children=[
        Shape(
          geometry=Cylinder(height=1.0),
          appearance=Appearance(DEF='GunAp',
            material=Material(diffuseColor=(.7,.7,.8),shininess=.4))),
        Transform(translation=(0.0,0.4,0.0),
          children=[
          Shape(DEF='Disk',
            geometry=Cylinder(height=0.1,radius=1.05),
            appearance=Appearance(USE='GunAp'))])]),
      #  Mobile part of the gun (DEFLECTION) 
      Transform(DEF='TopDondur',
        children=[
        Group(DEF='GunMount',
          children=[
          Transform(rotation=(0.0,0.0,1.0,0.3),scale=(1.1,1.0,1.5),translation=(-0.385,1.8,0.0),
            children=[
            Shape(DEF='MountBody',
              geometry=Cylinder(radius=0.9),
              appearance=Appearance(USE='GunAp')),
            Transform(scale=(1.0,0.8,1.0),translation=(0.0,1.0,0.0),
              children=[
              Shape(DEF='MountCap',
                geometry=Sphere(radius=0.9),
                appearance=Appearance(USE='GunAp'))]),
            Transform(translation=(0.65,0.0,0.0),
              children=[
              Shape(
                geometry=Box(size=(0.5,1.8,0.7)),
                appearance=Appearance(USE='GunAp')),
              Transform(translation=(0.25,0.0,0.0),
                children=[
                Shape(
                  geometry=Box(size=(0.1,1.8,0.5)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.1,0.1,0.1))))])])]),
          Transform(rotation=(1.0,0.0,0.0,1.57),
            children=[
            CylinderSensor(DEF='NamluSensor',description='click and drag to rotate',maxAngle=0.45),
            #  Mobile part of the gun (ELEVATION) 
            Transform(DEF='NamluDondur',
              children=[
              Transform(rotation=(1.0,0.0,0.0,-1.57),
                children=[
                Group(DEF='NamluGROUP',
                  children=[
                  Transform(rotation=(0.0,0.0,1.0,1.57),translation=(1.0,2.2,0.2),
                    children=[
                    Group(DEF='Namlu',
                      children=[
                      Shape(DEF='InNamlu',
                        geometry=Cylinder(radius=0.08),
                        appearance=Appearance(
                          material=Material(diffuseColor=(.3,.3,.3),shininess=0.6))),
                      Shape(DEF='HoleNamlu',
                        geometry=Cylinder(height=2.02,radius=0.06),
                        appearance=Appearance(
                          material=Material(diffuseColor=(.0,.0,.0),shininess=0.6))),
                      Shape(DEF='OutNamlu',
                        geometry=Cylinder(height=1.2,radius=0.1),
                        appearance=Appearance(
                          material=Material(diffuseColor=(.4,.4,.4),shininess=.6))),
                      Transform(DEF='FireTransform',rotation=(0.0,0.0,1.0,-3.14),scale=(0.0001,0.0001,0.00001),translation=(0.0,-1.35,0.0),
                        children=[
                        Shape(DEF='FireCone',
                          geometry=Cone(bottomRadius=0.05,height=0.5),
                          appearance=Appearance(
                            material=Material(diffuseColor=(0.8,0.3,0.0),shininess=0.7,specularColor=(0.8,0.3,0.0)))),
                        Transform(translation=(0.0,-0.2,0.0),
                          children=[
                          Shape(DEF='InnerFireCone',
                            geometry=Cone(bottomRadius=0.051,height=0.2),
                            appearance=Appearance(
                              material=Material(diffuseColor=(1.0,0.6,0.0),shininess=0.7,specularColor=(1.0,0.6,0.0)))),
                          PositionInterpolator(DEF='ChScale',key=[0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.52,0.56,0.6,0.64,0.68,0.72,0.76,0.8,0.84,0.86,0.9,0.94,1.0],keyValue=[(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001),(1.0,1.0,1.0),(0.00001,0.00001,0.00001)]),
                          TimeSensor(DEF='fireTimer',cycleInterval=1.5)])])])]),
                  Transform(rotation=(0.0,0.0,1.0,1.57),translation=(1.0,2.2,-0.2),
                    children=[
                    Group(USE='Namlu')]),
                  Transform(rotation=(0.0,0.0,1.0,1.57),translation=(1.0,1.8,-0.2),
                    children=[
                    Group(USE='Namlu')]),
                  Transform(rotation=(0.0,0.0,1.0,1.57),translation=(1.0,1.8,0.2),
                    children=[
                    Group(USE='Namlu')])])])])]),
          CylinderSensor(DEF='TopSensor',description='click and drag to rotate',maxAngle=1.7,minAngle=-1.7),
          #  missing ROUTE for OrientationInterpolator, likely due to use of CylinderSensor 
          OrientationInterpolator(DEF='ButtonRotInter',key=[0.0,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,1.7)]),
          TimeSensor(DEF='PortSideTimer',cycleInterval=3.0,enabled=False,loop=True),
          Transform(rotation=(0.0,0.0,1.0,0.3),translation=(-0.1,1.0,0.0),
            children=[
            Shape(
              geometry=Cylinder(height=1.5,radius=0.7),
              appearance=Appearance(USE='GunAp'))])])])]),
    Transform(rotation=(0,1,0,1.57),
      children=[
      Transform(rotation=(1,0,0,-1.4),scale=(1.4,1.4,1.4),translation=(0,0,0.5),
        children=[
        Group(DEF='GunControl',
          children=[
          Transform(translation=(0,0,3),
            children=[
            Group(
              children=[
              Shape(DEF='MenuB',
                geometry=Box(size=(0.5,0.2,0.00001)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,1,0),transparency=0.6))),
              Transform(translation=(-0.2,-0.05,0.005),
                children=[
                Shape(
                  geometry=Text(string=["FIRE"],
                    fontStyle=FontStyle(size=0.2,spacing=0.1,style_='BOLD')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1.0,0.0,0.0))))]),
              TouchSensor(DEF='FireSensor',description='touch to fire')])]),
          Transform(translation=(-0.25,-0.2,3),
            children=[
            Group(
              children=[
              Shape(USE='MenuB'),
              Transform(translation=(-0.2,-0.05,0.005),
                children=[
                Shape(
                  geometry=Text(string=["LROT"],
                    fontStyle=FontStyle(size=0.18,spacing=0.1,style_='BOLD')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1.0,0.0,0.0))))]),
              TouchSensor(DEF='LRotSensor',description='touch to rotate left')])]),
          Transform(translation=(0.25,-0.2,3),
            children=[
            Group(
              children=[
              Shape(USE='MenuB'),
              Transform(translation=(-0.2,-0.05,0.005),
                children=[
                Shape(
                  geometry=Text(string=["RROT"],
                    fontStyle=FontStyle(size=0.18,spacing=0.1,style_='BOLD')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1.0,0.0,0.0))))]),
              TouchSensor(DEF='RRotSensor',description='touch to rotate right')])]),
          Transform(translation=(-0.25,-0.4,3),
            children=[
            Group(
              children=[
              Shape(USE='MenuB'),
              Transform(translation=(-0.2,-0.05,0.005),
                children=[
                Shape(
                  geometry=Text(string=["ELEV"],
                    fontStyle=FontStyle(size=0.18,spacing=0.1,style_='BOLD')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1.0,0.0,0.0))))]),
              TouchSensor(DEF='ElevSensor',description='touch to elevate')])]),
          Transform(translation=(0.25,-0.4,3),
            children=[
            Group(
              children=[
              Shape(USE='MenuB'),
              Transform(translation=(-0.2,-0.05,0.005),
                children=[
                Shape(
                  geometry=Text(string=["DESC"],
                    fontStyle=FontStyle(size=0.18,spacing=0.1,style_='BOLD')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1.0,0.0,0.0))))]),
              TouchSensor(DEF='DescSensor',description='touch to depress downward')])])])])]),
    ROUTE(fromField='rotation_changed',fromNode='TopSensor',toField='set_rotation',toNode='TopDondur'),
    ROUTE(fromField='rotation_changed',fromNode='NamluSensor',toField='set_rotation',toNode='NamluDondur'),
    ROUTE(fromField='fraction_changed',fromNode='fireTimer',toField='set_fraction',toNode='ChScale'),
    ROUTE(fromField='value_changed',fromNode='ChScale',toField='set_scale',toNode='FireTransform'),
    ROUTE(fromField='touchTime',fromNode='FireSensor',toField='set_startTime',toNode='fireTimer'),
    ROUTE(fromField='touchTime',fromNode='FireSensor',toField='set_startTime',toNode='FireSound'),
    ROUTE(fromField='fraction_changed',fromNode='PortSideTimer',toField='set_fraction',toNode='ButtonRotInter'),
    ROUTE(fromField='isActive',fromNode='FireSensor',toField='set_enabled',toNode='PortSideTimer'),
    ROUTE(fromField='isActive',fromNode='LRotSensor',toField='set_LRotation',toNode='RotUpdater'),
    ROUTE(fromField='isActive',fromNode='RRotSensor',toField='set_RRotation',toNode='RotUpdater'),
    ROUTE(fromField='rotation',fromNode='TopDondur',toField='get_CurRotation',toNode='RotUpdater'),
    ROUTE(fromField='newRotation',fromNode='RotUpdater',toField='set_rotation',toNode='TopDondur'),
    ROUTE(fromField='isActive',fromNode='ElevSensor',toField='set_Elevation',toNode='ElevDescUpdater'),
    ROUTE(fromField='isActive',fromNode='DescSensor',toField='set_Descendance',toNode='ElevDescUpdater'),
    ROUTE(fromField='rotation',fromNode='NamluDondur',toField='get_CurOrientation',toNode='ElevDescUpdater'),
    ROUTE(fromField='newOrientation',fromNode='ElevDescUpdater',toField='set_rotation',toNode='NamluDondur')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaZenith.py")
