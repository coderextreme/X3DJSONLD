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
    meta(content='HudControlPanelPrototype.x3d',name='title'),
    meta(content='Prototype for a "heads-up" control panel. This node defines an object that maintains its orientation to the current viewpoint. Also present is a border that allows the panel to be dragged anywhere on the screen. All of the touchSensor events relating to texture maps are available as output events from this node.',name='description'),
    meta(content='Leonard Daly',name='creator'),
    meta(content='Dan Kucik',name='translator'),
    meta(content='1999',name='created'),
    meta(content='8 June 2003',name='translated'),
    meta(content='14 January 2014',name='modified'),
    meta(content='HUD does not sit still when navigating',name='error'),
    meta(content='http://www.realism.com/Web3D/Examples/examples.cgi?ID=5',name='reference'),
    meta(content='This code may be reused in part or total. Please include this paragraph when it is used. Copyright 1999, Leonard Daly #****************',name='rights'),
    meta(content='Heads-up display example',name='subject'),
    meta(content='Original VRML File: http://www.realism.com/vrml/Example/HUD/HUD_proto.wrl',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HudControlPanelPrototype.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Heads Up Display (HUD) Control Panel',name='HudControlPanel',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='SFVec3f Position of the panel relative to the viewpoint. The X and Y components can be changed by dragging the window around.',name='translation',type='SFVec3f',value=(0.0,0.0,-10.0)),
        field(accessType='inputOutput',appinfo='SFRotation This field should be the object of a ROUTE statement from the orientation_changed event from a ProximitySensor. For some reason the ProximitySensor does not correctly report the current viewpoint when the sensor is located inside of the PROTO.',name='orientation',type='SFRotation',value=(0.0,1.0,0.0,0.0)),
        field(accessType='outputOnly',appinfo='Out - SFBool event is generated when the cursor is over the texture mapped region of the control panel. Set to false when the cursor leaves the texture mapped region.',name='isOver',type='SFBool'),
        field(accessType='outputOnly',appinfo='Out - SFVec2f The X/Y normalized coordinates (S and T) of the cursor location when isOver is true.',name='hitTexCoord_changed',type='SFVec2f'),
        field(accessType='inputOutput',appinfo='SFColor The color of the panel border. This is the region that can be used to drag the panel around the screen.',name='borderColor',type='SFColor',value=(0.6,0.6,0.6)),
        field(accessType='initializeOnly',appinfo='SFVec3f Size of the panel. The texture mapped area (see textureMap) is 95% in X and 90% in Y of this size.',name='scale',type='SFVec3f',value=(2.5,1.5,0.05)),
        field(accessType='inputOutput',appinfo='SFVec3f This field should be the object of a ROUTE statement from the position_changed event from a ProximitySensor. See orientation for more details.',name='position',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='inputOutput',appinfo='MFString The texture map URLs. This is specified in the same manner as the URL field in ImageTexture. The first one that can be loaded is the that is displayed. If this field is not specified then this region of the object is painted white.',name='textureMap',type='MFString'),
        field(accessType='outputOnly',appinfo='Out - SFTime The time when a mouse button is released provided that the just prior to release isOver and isActive are true.',name='touchTime',type='SFTime'),
        field(accessType='outputOnly',appinfo='Out - SFBool A true event is generated when the mouse button is depressed and the cursor is over the texture mapped region. A false event is generated when the button is released or when isOver becomes false.',name='isActive',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='Main',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='position'),
            connect(nodeField='rotation',protoField='orientation')]),
          children=[
          Transform(DEF='CtlPnlOffset',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='translation'),
              connect(nodeField='scale',protoField='scale')]),
            children=[
            DirectionalLight(),
            PlaneSensor(DEF='MovePanel',description='Select item'),
            Shape(
              appearance=Appearance(
                material=Material(DEF='_IS_0',
                  IS=IS(
                    connect=[
                    connect(nodeField='diffuseColor',protoField='borderColor')]))),
              geometry=IndexedFaceSet(DEF='Panel',coordIndex=[0,1,2,3,-1],
                coord=Coordinate(point=[(1.0,1.0,0.0),(-1.0,1.0,0.0),(-1.0,-1.0,0.0),(1.0,-1.0,0.0)]))),
            Transform(scale=(0.95,0.9,1.0),translation=(0.0,0.0,0.01),
              children=[
              TouchSensor(description='Select item',
                IS=IS(
                  connect=[
                  connect(nodeField='isOver',protoField='isOver'),
                  connect(nodeField='isActive',protoField='isActive'),
                  connect(nodeField='hitTexCoord_changed',protoField='hitTexCoord_changed'),
                  connect(nodeField='touchTime',protoField='touchTime')])),
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(1.0,1.0,1.0)),
                  texture=ImageTexture(DEF='_IS_1',
                    IS=IS(
                      connect=[
                      connect(nodeField='url',protoField='textureMap')]))),
                geometry=IndexedFaceSet(USE='Panel'))])])]),
        Script(DEF='MoveScript',
          field=[
          field(accessType='outputOnly',name='position',type='SFVec3f'),
          field(accessType='inputOnly',name='move',type='SFVec3f'),
          field(accessType='initializeOnly',name='Iscale',type='SFVec3f'),
          field(accessType='initializeOnly',name='Ioffset',type='SFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='Iscale',protoField='scale'),
            connect(nodeField='Ioffset',protoField='translation')])),
        ROUTE(fromField='translation_changed',fromNode='MovePanel',toField='move',toNode='MoveScript'),
        ROUTE(fromField='position',fromNode='MoveScript',toField='translation',toNode='CtlPnlOffset')])),
    #  ==================== 
    Anchor(description='HudControlPanel Example',parameter=["target=_blank"],url=["HudControlPanelExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HudControlPanelExample.x3d","HudControlPanelExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HudControlPanelExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["HudControlPanelPrototype","is a Prototype definition file.","","To see an example scene","using this new node","click this text and view","HudControlPanelExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HudControlPanelPrototype.py")
