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
    meta(content='ArbitraryAxisCylinderSensorExamples.x3d',name='title'),
    meta(content="Modified CylinderSensor oriented about an arbitrary axis, relative to peer/child geometry that remains oriented to its original axis. Select and drag each object to rotate. Originally authored by Don Brutzman's MV4204 class, with modifications by Maj James Breitinger USMC to include min/max angles of rotation and object center. Motivation: Modify example shown by Chapter 9 Figure 7 to build a PROTO for a CylinderSensor oriented about an arbitrary axis.",name='description'),
    meta(content='ArbitraryAxisCylinderSensor operates on its children, NOT on its peers. This variation is necessary in order to accomplish the desired Transform rotation to a new orientation axis.',name='warning'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='1 October 1998',name='created'),
    meta(content='22 December 2014',name='modified'),
    meta(content='ArbitraryAxisCylinderSensorExamples.png',name='Image'),
    meta(content='ArbitraryAxisCylinderSensorPrototype.x3d',name='reference'),
    meta(content='ArbitraryAxisCylinderSensorExampleOriginal.wrl',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/ArbitraryAxisCylinderSensorExamples.x3d',name='identifier'),
    meta(content='The VRML 2.0 Sourcebook',name='reference'),
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
    Viewpoint(description='ArbitraryAxisCylinderSensor Examples'),
    Group(
      #  Leftmost shape is red with ArbitraryAxisCylinderSensor oriented around X-axis 
      children=[
      Transform(DEF='Example1-Cylinder',translation=(-3,2,0),
        children=[
        ProtoInstance(name='ArbitraryAxisCylinderSensor',
          #  rotate yAxis to xAxis 
          fieldValue=[
          fieldValue(name='shiftRotationAxis',value=(0,0,1,-1.5707963)),
          fieldValue(name='children',
            children=[
            Shape(
              geometry=Cylinder(),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))))])])]),
      #  Middle shape is green with ordinary CylinderSensor oriented around Y-axis 
      Group(DEF='Example2-Box',
        children=[
        Transform(DEF='MiddleTransformY',translation=(0,2,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(
              material=Material(diffuseColor=(0,1,0)))),
          CylinderSensor(DEF='SensorMiddleTransformY',description='Select and drag regular CylinderSensor to rotate'),
          ROUTE(fromField='rotation_changed',fromNode='SensorMiddleTransformY',toField='rotation',toNode='MiddleTransformY')])]),
      #  Rightmost shape blue with ArbitraryAxisCylinderSensor oriented around Z-axis 
      Transform(DEF='Example3-Cone',translation=(3,2,0),
        children=[
        ProtoInstance(name='ArbitraryAxisCylinderSensor',
          #  rotate yAxis to zAxis 
          fieldValue=[
          fieldValue(name='shiftRotationAxis',value=(1,0,0,1.5707963)),
          fieldValue(name='children',
            children=[
            Shape(
              geometry=Cone(),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,1))))])])]),
      #  bottom white shape shows use of ArbitraryAxisCylinderSensor center field 
      Transform(DEF='Example4-Cone',translation=(-3.5,-1,0),
        children=[
        ProtoInstance(name='ArbitraryAxisCylinderSensor',
          #  rotate yAxis to zAxis 
          #  rotate yAxis halfway to xAxis 
          fieldValue=[
          fieldValue(name='shiftRotationAxis',value=(0,0,1,-0.785)),
          fieldValue(name='center',value=(0,-2,0)),
          fieldValue(name='showCylinderSensorShape',value=True),
          fieldValue(name='scaleCylinderSensorShape',value=(1,2,1)),
          fieldValue(name='colorCylinderSensorShape',value=(0.4,0.9,0.9)),
          fieldValue(name='transparencyCylinderSensorShape',value=0.4),
          fieldValue(name='description',value='Select and drag to rotate'),
          fieldValue(name='children',
            children=[
            Shape(
              geometry=Cone(),
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1))))])])]),
      #  Finally some explanation text. Try setting showIcon to true. 
      Transform(DEF='Example5-Text',translation=(1.8,-1.5,0),
        children=[
        ProtoInstance(name='ArbitraryAxisCylinderSensor',
          #  rotate yAxis to zAxis 
          #  rotate yAxis halfway to -xAxis 
          fieldValue=[
          fieldValue(name='shiftRotationAxis',value=(0,0,1,0.785)),
          fieldValue(name='center',value=(0,0,0)),
          fieldValue(name='showCylinderSensorShape',value=False),
          fieldValue(name='scaleCylinderSensorShape',value=(0.05,2,0.05)),
          fieldValue(name='colorCylinderSensorShape',value=(1,1,1)),
          fieldValue(name='transparencyCylinderSensorShape',value=0.9),
          fieldValue(name='children',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
              geometry=Text(string=["ArbitraryAxisCylinderSensor","Examples"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6))),
            Shape(
              geometry=Box(size=(6.4,1.4,0.05)),
              appearance=Appearance(
                material=Material(transparency=1)))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ArbitraryAxisCylinderSensorExamples.py")
