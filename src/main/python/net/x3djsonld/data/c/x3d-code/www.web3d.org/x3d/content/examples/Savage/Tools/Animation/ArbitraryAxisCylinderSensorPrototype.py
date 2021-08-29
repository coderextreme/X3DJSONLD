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
    meta(content='ArbitraryAxisCylinderSensorPrototype.x3d',name='title'),
    meta(content="Modified CylinderSensor oriented about an arbitrary axis, relative to peer/child geometry that remains oriented to its original axis. Originally authored by Don Brutzman's MV4204 class, with modifications by Maj James Breitinger USMC to include min/max angles of rotation and object center. Motivation: Modify example shown by Chapter 9 Figure 7 to build a PROTO for a CylinderSensor oriented about an arbitrary axis.",name='description'),
    meta(content='ArbitraryAxisCylinderSensor operates on its children, NOT on its peers. This variation is necessary in order to accomplish the desired Transform rotation to a new orientation axis.',name='info'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='1 October 1998',name='created'),
    meta(content='25 December 2014',name='modified'),
    meta(content='ArbitraryAxisCylinderSensorExamples.x3d',name='reference'),
    meta(content='ArbitraryAxisCylinderSensorPrototypeOriginal.wrl',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.x3d',name='identifier'),
    meta(content='The VRML 2.0 Sourcebook (Copyright 1997 By Andrea L. Ames, David R. Nadeau, and John L. Moreland)',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Modified CylinderSensor with children nodes oriented about an arbitrary axis. Warning: ArbitraryAxisCylinderSensor affects children, not peers.',name='ArbitraryAxisCylinderSensor',
      ProtoInterface=ProtoInterface(
        #  All default fields and events of a regular CylinderSensor are exposed without modification. 
        #  Transparent viewing-assist geometry shows orientation and cylindrical mapping of mouse movements by sensor. Since viewCylinderSensorShape connects to a Script, it is a initialize-time field instead of a run-time exposedField. 
        field=[
        field(accessType='initializeOnly',appinfo='shifted axis of rotation from local vertical, default 1 0 0 0',name='shiftRotationAxis',type='SFRotation',value=(1,0,0,0)),
        field(accessType='initializeOnly',appinfo='local center for axis of rotation, default 0 0 0',name='center',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='whether to show visualization shape to show orientation and cylindrical mapping of mouse movements by sensor, default true',name='showCylinderSensorShape',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='scale for visualization shape, default 1 1 1',name='scaleCylinderSensorShape',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='color for visualization shape, default 0.9 0.9 0.4',name='colorCylinderSensorShape',type='SFColor',value=(0.9,0.9,0.4)),
        field(accessType='inputOutput',appinfo='transparency for visualization shape',name='transparencyCylinderSensorShape',type='SFFloat',value=0.8),
        field(accessType='inputOutput',appinfo='children nodes affected by ArbitraryAxisCylinderSensor',name='children',type='MFNode',
          #  initialization nodes (if any) go here 
          ),
        field(accessType='inputOutput',appinfo='determines whether previous offset values are remembered/accumulated, default true',name='autoOffset',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='Text tooltip displayed for user interaction',name='description',type='SFString',value='Select and drag to rotate ArbitraryAxisCylinderSensor'),
        field(accessType='inputOutput',appinfo='diskAngle 0 forces disk-like behavior, diskAngle 1.57 (90 degrees) forces cylinder-like behavior, default 0.262, range [0,pi/2]',name='diskAngle',type='SFFloat',value=0.262),
        field(accessType='inputOutput',appinfo='enables/disables node operation, default true',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='clamps rotation_changed events, default 0, range [-2pi,2pi]',name='minAngle',type='SFFloat',value=0),
        field(accessType='inputOutput',appinfo='clamps rotation_changed events, default -1, range [-2pi,2pi]',name='maxAngle',type='SFFloat',value=-1),
        field(accessType='initializeOnly',appinfo='sends event and remembers last value sensed, default 0, range (-infinity,infinity)',name='offset',type='SFFloat',value=0),
        field(accessType='outputOnly',appinfo='output event isActive=true when primary mouse button is pressed, output event isActive=false when released.',name='isActive',type='SFBool'),
        field(accessType='outputOnly',appinfo='rotation_changed events equal sum of relative bearing changes plus offset value about Y-axis in local coordinate system',name='rotation_changed',type='SFRotation'),
        field(accessType='outputOnly',appinfo="trackPoint_changed events give intersection point of bearing with sensor's virtual geometry",name='trackPoint_changed',type='SFVec3f')]),
      ProtoBody=ProtoBody(
        #  Prototype body follows. First rotate local frame about center to axis of interest, then perform the rotation about the desired center. 
        children=[
        Transform(DEF='ArbitraryAxisTransform',
          IS=IS(
            connect=[
            connect(nodeField='rotation',protoField='shiftRotationAxis'),
            connect(nodeField='center',protoField='center')]),
          children=[
          CylinderSensor(DEF='RotatedCylinderSensor',
            IS=IS(
              connect=[
              connect(nodeField='autoOffset',protoField='autoOffset'),
              connect(nodeField='description',protoField='description'),
              connect(nodeField='diskAngle',protoField='diskAngle'),
              connect(nodeField='enabled',protoField='enabled'),
              connect(nodeField='minAngle',protoField='minAngle'),
              connect(nodeField='maxAngle',protoField='maxAngle'),
              connect(nodeField='offset',protoField='offset'),
              connect(nodeField='isActive',protoField='isActive'),
              connect(nodeField='rotation_changed',protoField='rotation_changed'),
              connect(nodeField='trackPoint_changed',protoField='trackPoint_changed')])),
          #  CylinderSensorRotationTransform rotation value is overridden by RotatedCylinderSensor, so leave it alone! 
          Transform(DEF='CylinderSensorRotationTransform',
            #  ROUTEd rotation to RestorationTransform negates (and offsets) arbitrary-axis rotation in RestorationTransform, so children geometry is returned to original orientation. 
            #  Perform the rotation about the same center. 
            children=[
            Transform(DEF='RestorationTransform',
              IS=IS(
                connect=[
                connect(nodeField='center',protoField='center'),
                connect(nodeField='children',protoField='children')])),
            #  Prototype children field finally appears above... 
            Switch(DEF='ScaleSensorSwitch',whichChoice=0,
              children=[
              Transform(DEF='ScaleSensorShape',
                IS=IS(
                  connect=[
                  connect(nodeField='scale',protoField='scaleCylinderSensorShape')]),
                children=[
                Shape(
                  geometry=Cylinder(height=2.5,radius=0.1),
                  appearance=Appearance(DEF='SensorShapeAppearance',
                    material=Material(DEF='SensorShapeMaterial',
                      IS=IS(
                        connect=[
                        connect(nodeField='diffuseColor',protoField='colorCylinderSensorShape'),
                        connect(nodeField='transparency',protoField='transparencyCylinderSensorShape')])))),
                Shape(
                  geometry=Cylinder(height=0.2,radius=1.5),
                  appearance=Appearance(USE='SensorShapeAppearance'))])])]),
          Script(DEF='NegationScript',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='shiftRotationAxis',type='SFRotation'),
            field(accessType='initializeOnly',name='offset',type='SFFloat'),
            field(accessType='outputOnly',name='rotationRestore',type='SFRotation'),
            field(accessType='initializeOnly',name='CylinderSensorRotationTransform',type='SFNode',
              children=[
              Transform(USE='CylinderSensorRotationTransform')]),
            #  local variables 
            field(accessType='initializeOnly',name='rotationOffset',type='SFRotation',value=(0,1,0,0)),
            field(accessType='initializeOnly',name='rotationIntermediate',type='SFRotation',value=(0,1,0,0))],
            IS=IS(
              connect=[
              connect(nodeField='offset',protoField='offset'),
              connect(nodeField='shiftRotationAxis',protoField='shiftRotationAxis')])),
          Script(DEF='HideSensorShapeScript',
            field=[
            field(accessType='initializeOnly',name='showCylinderSensorShape',type='SFBool'),
            field(accessType='outputOnly',name='choiceScaleSensor',type='SFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='showCylinderSensorShape',protoField='showCylinderSensorShape')]))]),
        ROUTE(fromField='rotation_changed',fromNode='RotatedCylinderSensor',toField='set_rotation',toNode='CylinderSensorRotationTransform'),
        ROUTE(fromField='rotationRestore',fromNode='NegationScript',toField='rotation',toNode='RestorationTransform'),
        ROUTE(fromField='choiceScaleSensor',fromNode='HideSensorShapeScript',toField='whichChoice',toNode='ScaleSensorSwitch')]
        #  Add any ROUTEs here, going from Script to other nodes in ProtoBody 
        )),
    #  Example use of this prototype is in ArbitraryAxisCylinderSensorExample.x3d, .wrl 
    Viewpoint(description='click message to view example',position=(0,0,8)),
    #  Redirection text in case a user examines this PROTO file via a 3D browser: 
    Anchor(description='Touch text for example',url=["ArbitraryAxisCylinderSensorExamples.x3d","https://savage.nps.edu/Savage/Tools/Animation/ArbitraryAxisCylinderSensorExamples.x3d","ArbitraryAxisCylinderSensorExamples.wrl","https://savage.nps.edu/Savage/Tools/Animation/ArbitraryAxisCylinderSensorExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["ArbitraryAxisCylinderSensorPrototype","is a Prototype (PROTO) definition file.","","To see an example scene using this new node","click this text and view","ArbitraryAxisCylinderSensorExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5))),
      Shape(DEF='SelectionAssist',
        geometry=Box(size=(9,4,.001)),
        appearance=Appearance(
          material=Material(transparency=0.9)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ArbitraryAxisCylinderSensorPrototype.py")
