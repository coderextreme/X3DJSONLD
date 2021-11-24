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
    meta(content='KeySensorActivationKeySwitchTest.x3d',name='title'),
    meta(content='A simple scene to show KeySensor functionality using Text nodes.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='22 June 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content="This doesn't work because there is no KeySensor implementation yet! Prototype script (written in Java) or native node support for KeySensor is needed.",name='warning'),
    meta(content='enabled accessType needs to be changed to exposedField once supported by Script capabilities',name='warning'),
    meta(content='https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor',name='reference'),
    meta(content='https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTest.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTest.x3d',name='reference'),
    meta(content='KeySensor',name='subject'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  The KeySensor prototype can be omitted if native-node Keysensor support is provided by the VRML browser. 
    children=[
    WorldInfo(title='KeySensorActivationKeySwitchTest.x3d'),
    ProtoDeclare(name='KeySensor',
      ProtoInterface=ProtoInterface(
        #  warning: enabled needs to become an exposedField once Scripts support exposedField 
        field=[
        field(accessType='initializeOnly',name='enabled',type='SFBool',value=True),
        field(accessType='inputOnly',name='set_enabled',type='SFBool'),
        field(accessType='outputOnly',name='enabled_changed',type='SFBool'),
        field(accessType='outputOnly',name='isActive',type='SFBool'),
        field(accessType='outputOnly',name='keyPress',type='SFInt32'),
        field(accessType='outputOnly',name='keyRelease',type='SFInt32'),
        field(accessType='outputOnly',name='actionKeyPress',type='SFInt32'),
        field(accessType='outputOnly',name='actionKeyRelease',type='SFInt32'),
        field(accessType='outputOnly',name='altKey',type='SFBool'),
        field(accessType='outputOnly',name='controlKey',type='SFBool'),
        field(accessType='outputOnly',name='shiftKey',type='SFBool')]),
      ProtoBody=ProtoBody(
        #  First node in prototype indicates node type, use Group so that this sensor is ChildNodeType. 
        children=[
        Group(
          children=[
          Script(DEF='KeySensorScript',
            field=[
            field(accessType='outputOnly',name='altKey',type='SFBool'),
            field(accessType='outputOnly',name='keyPress',type='SFInt32'),
            field(accessType='inputOnly',name='set_enabled',type='SFBool'),
            field(accessType='outputOnly',name='keyRelease',type='SFInt32'),
            field(accessType='initializeOnly',name='enabled',type='SFBool'),
            field(accessType='outputOnly',name='shiftKey',type='SFBool'),
            field(accessType='outputOnly',name='actionKeyRelease',type='SFInt32'),
            field(accessType='outputOnly',name='isActive',type='SFBool'),
            field(accessType='outputOnly',name='actionKeyPress',type='SFInt32'),
            field(accessType='outputOnly',name='enabled_changed',type='SFBool'),
            field(accessType='outputOnly',name='controlKey',type='SFBool')],
            IS=IS(
              connect=[
              connect(nodeField='enabled',protoField='enabled'),
              connect(nodeField='set_enabled',protoField='set_enabled'),
              connect(nodeField='enabled_changed',protoField='enabled_changed'),
              connect(nodeField='isActive',protoField='isActive'),
              connect(nodeField='keyPress',protoField='keyPress'),
              connect(nodeField='keyRelease',protoField='keyRelease'),
              connect(nodeField='actionKeyPress',protoField='actionKeyPress'),
              connect(nodeField='actionKeyRelease',protoField='actionKeyRelease'),
              connect(nodeField='altKey',protoField='altKey'),
              connect(nodeField='controlKey',protoField='controlKey'),
              connect(nodeField='shiftKey',protoField='shiftKey')]))])])),
    #  ============================================ 
    #  Enabling this KeySensor (from TouchSensor.isActive) disables all other KeySensors. 
    KeySensor(DEF='SingleKeySensor',enabled=False),
    Billboard(
      children=[
      Transform(translation=(0,2,0),
        children=[
        Shape(
          geometry=Text(string=["Touch this text to enable","KeySensor activation keys then","press activation keys to test"],
            fontStyle=FontStyle(DEF='MiddleMiddle',justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.4)))),
        TouchSensor(DEF='StartMessageTouched',description='Touch this text to enable KeySensor activation keys then press activation keys to test'),
        ROUTE(fromField='isOver',fromNode='StartMessageTouched',toField='enabled',toNode='SingleKeySensor')]),
      Transform(translation=(0,-1,0),
        children=[
        Switch(DEF='ActivationKeyMessageSwitch',whichChoice=0,
          #  ROUTE is not treated as a selectable child of Switch 
          children=[
          ROUTE(fromField='actionKeyPress',fromNode='SingleKeySensor',toField='whichChoice',toNode='ActivationKeyMessageSwitch'),
          Shape(DEF='Zero',
            geometry=Text(string=["No activation keypress sensed...."],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(DEF='SelectionAppearance',
              material=Material(diffuseColor=(0,1,0)))),
          Shape(DEF='One',
            geometry=Text(string=["F1"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Two',
            geometry=Text(string=["F2"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Three',
            geometry=Text(string=["F3"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Four',
            geometry=Text(string=["F4"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Five',
            geometry=Text(string=["F5"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Six',
            geometry=Text(string=["F6"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Seven',
            geometry=Text(string=["F7"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Eight',
            geometry=Text(string=["F8"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Nine',
            geometry=Text(string=["F9"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Ten',
            geometry=Text(string=["F10"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Eleven',
            geometry=Text(string=["F11"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Twelve',
            geometry=Text(string=["F12"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Thirteen',
            geometry=Text(string=["13: HOME"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Fourteen',
            geometry=Text(string=["14: END"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Fifteen',
            geometry=Text(string=["15: LEFT"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Sixteen',
            geometry=Text(string=["16: RIGHT"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Seventeen',
            geometry=Text(string=["17: UP"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Eighteen',
            geometry=Text(string=["18: DOWN"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Nineteen',
            geometry=Text(string=["19: PGUP"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance')),
          Shape(DEF='Twenty',
            geometry=Text(string=["20: PGDN"],
              fontStyle=FontStyle(USE='MiddleMiddle')),
            appearance=Appearance(USE='SelectionAppearance'))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for KeySensorActivationKeySwitchTest.py")
