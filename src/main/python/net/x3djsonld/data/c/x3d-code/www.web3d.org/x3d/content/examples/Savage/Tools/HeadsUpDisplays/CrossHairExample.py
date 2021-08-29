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
    meta(content='CrossHairExample.x3d',name='title'),
    meta(content='Example use of a heads-up display (HUD) crosshair showing center of screen, useful for assessing lookAt point.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='1 February 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d',name='identifier'),
    meta(content='crosshair display',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  ======================== 
    #  Copy this ExternProtoDeclare and ProtoInstance for use in another scene 
    children=[
    ExternProtoDeclare(appinfo='CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point',name='CrossHair',url=["../../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"],
      field=[
      field(accessType='initializeOnly',appinfo='whether CrossHair prototype is enabled or not',name='enabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='control whether enabled/disabled',name='set_enabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='color of CrossHair marker',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='size of CrossHair in meters',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='distance in front of HUD viewpoint',name='positionOffsetFromCamera',type='SFVec3f')]),
    ProtoInstance(DEF='CrossHairInstance',name='CrossHair',
      fieldValue=[
      fieldValue(name='enabled',value=True),
      fieldValue(name='markerColor',value=(1,0.5,0)),
      fieldValue(name='scale',value=(1,1,1)),
      fieldValue(name='positionOffsetFromCamera',value=(0,0,-6))]),
    #  ======================== 
    #  Test scene and background, to see that HUD remains fixed relative to viewpoint. 
    Viewpoint(description='walk and rotate to test heads-up display (HUD)'),
    Viewpoint(description='outside proximity box turns crosshair off',position=(0,0,20)),
    NavigationInfo(speed=10,type=["FLY","ANY"]),
    Background(skyColor=[(0.7,0.7,0.9)]),
    Shape(
      geometry=Text(string=["Click text, zoom out/in,","or switch viewpoints to","toggle CrossHair HUD"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.4,0.13)))),
    #  ======================== 
    #  Turn CrossHair on/off depending on toggling Box touch 
    TouchSensor(DEF='TouchBox',description='touch to toggle CrossHair'),
    BooleanToggle(DEF='TouchToggle'),
    ROUTE(fromField='isActive',fromNode='TouchBox',toField='set_boolean',toNode='TouchToggle'),
    #  TouchToggle toggle_changed should likely revert to TouchToggle toggle when inputOutput fields supported in Script, or native implementation provided. 
    ROUTE(fromField='toggle_changed',fromNode='TouchToggle',toField='set_enabled',toNode='CrossHairInstance'),
    #  ======================== 
    #  Turn CrossHair on/off depending on proximity to a target location 
    Group(
      children=[
      ProximitySensor(DEF='ProximityBox',size=(21,21,21)),
      BooleanTrigger(DEF='EnterProximityBox'),
      ROUTE(fromField='enterTime',fromNode='ProximityBox',toField='set_triggerTime',toNode='EnterProximityBox'),
      ROUTE(fromField='triggerTrue',fromNode='EnterProximityBox',toField='set_enabled',toNode='CrossHairInstance'),
      BooleanTrigger(DEF='ExitProximityBox'),
      BooleanFilter(DEF='ExitFilter'),
      ROUTE(fromField='exitTime',fromNode='ProximityBox',toField='set_triggerTime',toNode='ExitProximityBox'),
      ROUTE(fromField='triggerTrue',fromNode='ExitProximityBox',toField='set_boolean',toNode='ExitFilter'),
      ROUTE(fromField='inputNegate',fromNode='ExitFilter',toField='set_enabled',toNode='CrossHairInstance')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CrossHairExample.py")
