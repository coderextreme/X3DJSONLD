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
    meta(content='ChassisHatch.x3d',name='title'),
    meta(content='A circular hatch and hinges for the chassis of the AAV7PA1.',name='creator'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='1 June 2001',name='created'),
    meta(content='22 December 2014',name='modified'),
    meta(content='An extruded hatch cover with primitive geometry building the hinges.',name='description'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/ChassisHatch.x3d',name='identifier'),
    meta(content='AAV AAV7PA1 LVTP7',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Modified CylinderSensor with children nodes oriented about an arbitrary axis. Warning: ArbitraryAxisCylinderSensor affects children, not peers.',name='ArbitraryAxisCylinderSensor',url=["../../../Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.x3d#ArbitraryAxisCylinderSensor","https://savage.nps.edu/Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.x3d#ArbitraryAxisCylinderSensor","../../../Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.wrl#ArbitraryAxisCylinderSensor","https://savage.nps.edu/Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.wrl#ArbitraryAxisCylinderSensor"],
      field=[
      field(accessType='initializeOnly',appinfo='shifted axis of rotation from local vertical, default 1 0 0 0',name='shiftRotationAxis',type='SFRotation'),
      field(accessType='initializeOnly',appinfo='local center for axis of rotation, default 0 0 0',name='center',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='whether to show visualization shape to show orientation and cylindrical mapping of mouse movements by sensor, default true',name='showCylinderSensorShape',type='SFBool'),
      field(accessType='inputOutput',appinfo='scale for visualization shape, default 1 1 1',name='scaleCylinderSensorShape',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='color for visualization shape, default 0.9 0.9 0.4',name='colorCylinderSensorShape',type='SFColor'),
      field(accessType='inputOutput',appinfo='transparency for visualization shape',name='transparencyCylinderSensorShape',type='SFFloat'),
      field(accessType='inputOutput',appinfo='children nodes affected by ArbitraryAxisCylinderSensor',name='children',type='MFNode'),
      field(accessType='inputOutput',appinfo='determines whether previous offset values are remembered/accumulated, default true',name='autoOffset',type='SFBool'),
      field(accessType='inputOutput',appinfo='Text tooltip displayed for user interaction',name='description',type='SFString'),
      field(accessType='inputOutput',appinfo='diskAngle 0 forces disk-like behavior, diskAngle 1.57 (90 degrees) forces cylinder-like behavior, default 0.262, range [0,pi/2]',name='diskAngle',type='SFFloat'),
      field(accessType='inputOutput',appinfo='enables/disables node operation, default true',name='enabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='clamps rotation_changed events, default 0, range [-2pi,2pi]',name='minAngle',type='SFFloat'),
      field(accessType='inputOutput',appinfo='clamps rotation_changed events, default -1, range [-2pi,2pi]',name='maxAngle',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='sends event and remembers last value sensed, default 0, range (-infinity,infinity)',name='offset',type='SFFloat'),
      field(accessType='outputOnly',appinfo='output event isActive=true when primary mouse button is pressed, output event isActive=false when released.',name='isActive',type='SFBool'),
      field(accessType='outputOnly',appinfo='rotation_changed events equal sum of relative bearing changes plus offset value about Y-axis in local coordinate system',name='rotation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo="trackPoint_changed events give intersection point of bearing with sensor's virtual geometry",name='trackPoint_changed',type='SFVec3f')]),
    ProtoInstance(name='ArbitraryAxisCylinderSensor',
      #  rotate yAxis to xAxis 
      fieldValue=[
      fieldValue(name='minAngle',value=-2.4),
      fieldValue(name='maxAngle',value=0),
      fieldValue(name='shiftRotationAxis',value=(0,0,1,-1.5707963)),
      fieldValue(name='showCylinderSensorShape',value=False),
      fieldValue(name='children',
        children=[
        Group(
          children=[
          Transform(DEF='FullHatchWithHinges',scale=(2,2,2),translation=(0,0,0.575),
            children=[
            Transform(DEF='FullHatch',scale=(1.5,1.5,1.5),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='OliveDrab',diffuseColor=(0.15,0.66,0.2))),
                geometry=Extrusion(creaseAngle=1,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.16,0.16),(0.16,0.16),(0.16,0.16),(0.155,0.155),(0.15,0.15),(0.13,0.13),(0.12,0.12),(0.1,0.1),(0.07,0.07),(0.02,0.02)],spine=[(0,0,0),(0,0.02,0),(0,0.04,0),(0,0.05,0),(0,0.06,0),(0,0.07,0),(0,0.08,0),(0,0.09,0),(0,0.09025,0),(0,0.090125,0)]))]),
            Transform(DEF='TurretHatchHinges',rotation=(0,1,0,1.57),translation=(-0.015,-0.02,-0.275),
              children=[
              Transform(rotation=(1,0,0,1.57),translation=(0,0.04,-0.08),
                children=[
                Shape(
                  geometry=Cylinder(height=0.025,radius=0.04),
                  appearance=Appearance(
                    material=Material(USE='OliveDrab'))),
                Transform(translation=(-0.09,0,-0.01),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='OliveDrab')),
                    geometry=Box(size=(0.125,0.025,0.04)))]),
                Transform(translation=(0,0.175,0),
                  children=[
                  Shape(
                    geometry=Cylinder(height=0.025,radius=0.04),
                    appearance=Appearance(
                      material=Material(USE='OliveDrab'))),
                  Transform(translation=(-0.09,0,-0.01),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='OliveDrab')),
                      geometry=Box(size=(0.125,0.025,0.04)))])]),
                Transform(translation=(0,0.0875,0),
                  children=[
                  Shape(
                    geometry=Cylinder(height=0.175,radius=0.03),
                    appearance=Appearance(
                      material=Material(USE='OliveDrab')))])])])])])])]),
    Group(
      children=[
      Transform(translation=(0,0,0.575),
        children=[
        Shape(
          geometry=Cylinder(height=0.05,radius=0.45,top=False),
          appearance=Appearance(
            material=Material(USE='OliveDrab')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ChassisHatch.py")
