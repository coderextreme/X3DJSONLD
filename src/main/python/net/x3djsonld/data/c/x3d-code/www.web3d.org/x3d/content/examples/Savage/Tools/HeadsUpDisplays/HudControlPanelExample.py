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
    meta(content='HudControlPanelExample.x3d',name='title'),
    meta(content="Example world using an adjustable Heads-Up Display (HUD) or control panel. The panel always appears in the same position in the brower's window, independent of view point. The HUD can be dragged around the window by grabbing onto the border and sliding.",name='description'),
    meta(content='Leonard Daly',name='creator'),
    meta(content='Dan Kucik',name='translator'),
    meta(content='1999',name='created'),
    meta(content='8 June 2003',name='translated'),
    meta(content='14 January 2014',name='modified'),
    meta(content='HUD does not sit still when navigating',name='error'),
    meta(content='http://www.realism.com/Web3D/Examples/examples.cgi?ID=5',name='reference'),
    meta(content='This code may be reused in part or total. Please include this paragraph when it is used. Copyright 1999, Leonard Daly #****************',name='rights'),
    meta(content='http://www.realism.com/vrml/Example/HUD/CP.gif',name='Image'),
    meta(content='Heads-up display example',name='subject'),
    meta(content='Original VRML File: http://www.realism.com/vrml/Example/HUD/HUD.wrl',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HudControlPanelExample.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Heads Up Display (HUD) Control Panel',name='HudControlPanel',url=["HudControlPanelPrototype.x3d#HudControlPanel","../../Tools/HeadsUpDisplays/HudControlPanelPrototype.x3d#HudControlPanel","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HudControlPanelPrototype.x3d#HudControlPanel","../../Tools/HeadsUpDisplays/HudControlPanelPrototype.wrl#HudControlPanel","HudControlPanelPrototype.wrl#HudControlPanel","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HudControlPanelPrototype.wrl#HudControlPanel"],
      field=[
      field(accessType='initializeOnly',appinfo='SFVec3f Position of the panel relative to the viewpoint. The X and Y components can be changed by dragging the window around.',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='SFRotation This field should be the object of a ROUTE statement from the orientation_changed event from a ProximitySensor. For some reason the ProximitySensor does not correctly report the current viewpoint when the sensor is located inside of the PROTO.',name='orientation',type='SFRotation'),
      field(accessType='outputOnly',appinfo='Out - SFBool event is generated when the cursor is over the texture mapped region of the control panel. Set to false when the cursor leaves the texture mapped region.',name='isOver',type='SFBool'),
      field(accessType='outputOnly',appinfo="Out - SFVec2f The X/Y normalized coordinates (S and T) of the cursor location when 'isOver' is true.",name='hitTexCoord_changed',type='SFVec2f'),
      field(accessType='inputOutput',appinfo='SFColor The color of the panel border. This is the region that can be used to drag the panel around the screen.',name='borderColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='SFVec3f Size of the panel. The texture mapped area (see textureMap) is 95% in X and 90% in Y of this size.',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',appinfo="SFVec3f This field should be the object of a ROUTE statement from the position_changed event from a ProximitySensor. See 'orientation' for more details.",name='position',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='MFString The texture map URLs. This is specified in the same manner as the URL field in ImageTexture. The first one that can be loaded is the that is displayed. If this field is not specified then this region of the object is painted white.',name='textureMap',type='MFString'),
      field(accessType='outputOnly',appinfo="Out - SFTime The time when a mouse button is released provided that the just prior to release 'isOver' and 'isActive' are true.",name='touchTime',type='SFTime'),
      field(accessType='outputOnly',appinfo="Out - SFBool A true event is generated when the mouse button is depressed and the cursor is over the texture mapped region. A false event is generated when the button is released or when 'isOver' becomes false.",name='isActive',type='SFBool')]),
    NavigationInfo(DEF='NavInfo',type=["FLY","EXAMINE","ANY"]),
    Viewpoint(DEF='SIDE_VP',description='Side View',jump=False),
    Viewpoint(DEF='TOP_VP',description='Top View',jump=False,orientation=(1.0,0.0,0.0,-1.57),position=(0.0,10.0,0.0)),
    Transform(DEF='Revolver',
      children=[
      Transform(DEF='Body1',translation=(3.0,0.0,0.0),
        children=[
        PointLight(color=(0.0,0.0,1.0)),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,0.0,0.0),emissiveColor=(0.0,0.0,1.0),specularColor=(0.0,1.0,0.0))),
          geometry=Sphere(radius=0.75))]),
      Transform(DEF='Body2',translation=(-3.0,0.0,0.0),
        children=[
        SpotLight(beamWidth=1.57,direction=(0.0,-1.0,0.0)),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0,1.0,1.0))),
          geometry=Cone(bottomRadius=0.75,height=1.5))])]),
    TimeSensor(DEF='Timer1',cycleInterval=5.0,loop=True,startTime=1.0),
    TimeSensor(DEF='Timer2',cycleInterval=3.0,loop=True,startTime=1.0),
    OrientationInterpolator(DEF='Spinner',key=[0.0,0.333,0.667,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,2.09),(0.0,1.0,0.0,4.18),(0.0,1.0,0.0,0.0)]),
    OrientationInterpolator(DEF='Tumble',key=[0.0,0.14,0.28,0.43,0.57,0.71,0.86,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.5,0.898),(0.0,0.5,1.0,1.795),(0.5,0.0,1.0,2.693),(1.0,0.2,0.8,3.59),(1.0,0.8,0.5,4.488),(0.5,1.0,0.0,5.386),(0.0,1.0,0.0,6.283)]),
    ROUTE(fromField='fraction_changed',fromNode='Timer1',toField='set_fraction',toNode='Spinner'),
    ROUTE(fromField='fraction_changed',fromNode='Timer2',toField='set_fraction',toNode='Tumble'),
    ROUTE(fromField='value_changed',fromNode='Spinner',toField='rotation',toNode='Revolver'),
    ROUTE(fromField='value_changed',fromNode='Tumble',toField='rotation',toNode='Body2'),
    ProtoInstance(DEF='HUD',name='HudControlPanel',
      fieldValue=[
      fieldValue(name='translation',value=(4,-2,-10)),
      fieldValue(name='orientation',value=(0.0,1.0,0.0,0.0)),
      fieldValue(name='borderColor',value=(0.0,0.4,0.0)),
      fieldValue(name='scale',value=(2.5,1.5,0.05)),
      fieldValue(name='position',value=(0.0,0.0,0.0)),
      fieldValue(name='textureMap',value=["HudControlPanel.gif","http://www.realism.com/vrml/Example/HUD/CP.gif","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HudControlPanel.gif"])]),
    ProximitySensor(DEF='Where',size=(1000.0,1000.0,1000.0)),
    Script(DEF='Controller',
      field=[
      field(accessType='outputOnly',name='Headlight',type='SFBool'),
      field(accessType='inputOnly',name='Position',type='SFVec2f'),
      field(accessType='inputOnly',name='Touch',type='SFTime'),
      field(accessType='initializeOnly',name='Light',type='SFBool',value=True)]),
    ROUTE(fromField='hitTexCoord_changed',fromNode='HUD',toField='Position',toNode='Controller'),
    ROUTE(fromField='touchTime',fromNode='HUD',toField='Touch',toNode='Controller'),
    ROUTE(fromField='Headlight',fromNode='Controller',toField='headlight',toNode='NavInfo')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HudControlPanelExample.py")
