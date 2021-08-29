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
    meta(content='CrewHouseHatch.x3d',name='title'),
    meta(content='Crew House Hatch for the LCAC',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='6 July 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.hazegray.org/features/nato/us/lcac',name='reference'),
    meta(content='lcac.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac.htm',name='reference'),
    meta(content='lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='lcac-kb97_8.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-kb97_8.jpg',name='reference'),
    meta(content='lcac-dvic076.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-dvic076.jpg',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/CrewHouseHatch.x3d',name='identifier'),
    meta(content='LCAC Crew House Hatch',name='subject'),
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
      fieldValue=[
      fieldValue(name='minAngle',value=-0.01),
      fieldValue(name='maxAngle',value=3),
      fieldValue(name='showCylinderSensorShape',value=False),
      fieldValue(name='children',
        children=[
        Group(DEF='PilotHouseHatch',
          children=[
          Transform(translation=(0.53125,0,-0.1),
            children=[
            Transform(rotation=(0.58,0.58,0.58,2.09),
              children=[
              Transform(DEF='Hatch',translation=(0,0,-0.9),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.7,0.75,0.85))),
                  geometry=Extrusion(crossSection=[(0.9,-0.2),(0.89,-0.24),(0.87,-0.27),(0.84,-0.29),(0.8,-0.3),(-0.8,-0.3),(-0.84,-0.29),(-0.87,-0.27),(-0.89,-0.24),(-0.9,-0.2),(-0.9,0.2),(-0.89,0.24),(-0.87,0.27),(-0.84,0.29),(-0.8,0.3),(0.8,0.3),(0.84,0.29),(0.87,0.27),(0.89,0.24),(0.9,0.2),(0.9,-0.2),(0.89,-0.24),(0.87,-0.27),(0.84,-0.29),(0.8,-0.3),(-0.8,-0.3),(-0.84,-0.29),(-0.87,-0.27),(-0.89,-0.24),(-0.9,-0.2),(0.9,-0.2)],scale=[(1,1),(1,1),(1.02,1.2),(1.02,1.2)],spine=[(0,0,0),(0,0.11225,0),(0,0.11225,0),(0,0.125,0)]))]),
              Transform(DEF='HatchPorthole',translation=(0.5,0.07,-0.9),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.1,0.1,0.15),shininess=1,specularColor=(0.75,0.75,0.9))),
                  geometry=Cylinder(height=0.15,radius=0.125))]),
              Transform(DEF='Hinges',scale=(0.9,1,0.9),
                children=[
                Transform(DEF='Upperhinge',translation=(0.5,0.1,-0.466),
                  children=[
                  Transform(rotation=(0,0,1,1.57),translation=(0,0,-0.125),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.7,0.75,0.85))),
                      geometry=Cylinder(height=0.05,radius=0.1))]),
                  Transform(translation=(0,0,-0.225),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.7,0.75,0.85))),
                      geometry=Box(size=(0.1125,0.1125,0.25)))])]),
                Transform(DEF='LowerHinge',translation=(-0.5,0.1,-0.466),
                  children=[
                  Transform(rotation=(0,0,1,1.57),translation=(0,0,-0.125),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.7,0.75,0.85))),
                      geometry=Cylinder(height=0.05,radius=0.1))]),
                  Transform(translation=(0,0,-0.225),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.7,0.75,0.85))),
                      geometry=Box(size=(0.1125,0.1125,0.25)))])]),
                Transform(DEF='HatchHandle',translation=(0.3,0.1,-1.4),
                  children=[
                  Shape(
                    geometry=Box(size=(0.0525,0.1125,0.2)),
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.7,0.75,0.85))))])])])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CrewHouseHatch.py")
