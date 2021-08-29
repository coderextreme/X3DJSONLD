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
    meta(content='FortLauderdaleDepthSelection.x3d',name='title'),
    meta(content='Switch between 80m 40m 20m 10m (no 05m) grid-spacing bathymetry for Fort Lauderdale - Hollywood Beach Florida.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 June 2000',name='created'),
    meta(content='20 February 2016',name='modified'),
    meta(content='matlabPerspectivePlot.png',name='Image'),
    meta(content='FortLauderdaleBathymetryMontage.png',name='Image'),
    meta(content='FortLauderdaleDepths80m.fig',name='reference'),
    meta(content='metadata.txt',name='reference'),
    meta(content='shallow.xyz.txt',name='reference'),
    meta(content='convertBathymetryXyzFile.m',name='reference'),
    meta(content='convertBathymetryXyzFile.out',name='reference'),
    meta(content='colorValue.m',name='reference'),
    meta(content='printX3dHeader.m',name='reference'),
    meta(content='printX3dFooter.m',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/FortLauderdaleFlorida/FortLauderdaleDepthSelection.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='WhereAmI',
      #  Viewpoint discovery/debugging in VRML Console window by Leonard Daly http://www.realism.com/Web3D/Examples#Viewpoints http://www.realism.com/vrml/Example/WhereAmI/WhereAmI_Proto.wrl 
      ProtoBody=ProtoBody(
        children=[
        ProximitySensor(DEF='Where',size=(1000000000,1000000000,1000000000)),
        #  hey it's a big old world out there! 
        Script(DEF='WhereDump',
          field=[
          field(accessType='inputOnly',name='position',type='SFVec3f'),
          field(accessType='inputOnly',name='orientation',type='SFRotation')]),
        ROUTE(fromField='position_changed',fromNode='Where',toField='position',toNode='WhereDump'),
        ROUTE(fromField='orientation_changed',fromNode='Where',toField='orientation',toNode='WhereDump')])),
    #  ### Comment/uncomment the following WhereAmI node to disable/enable this feature ### 
    ProtoInstance(name='WhereAmI'),
    #  NavigationInfo: increased speed for responsiveness, increased collision boundary to eliminate aliasing 
    NavigationInfo(avatarSize=[4,1.6,0.75],speed=100,type=["EXAMINE","WALK","ANY"]),
    Transform(translation=(8200,500,1600),
      children=[
      Viewpoint(description='Select spacing bathymetry grid',orientation=(0,1,0,1.57079),position=(10,-2,0)),
      Billboard(
        children=[
        Shape(
          geometry=Text(string=["Select bathymetry grid spacing"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(diffuseColor=(.8,.8,0)))),
        Transform(translation=(0,-1.5,0),
          children=[
          Transform(translation=(-6,0,0),
            children=[
            TouchSensor(DEF='TOUCH_80m',description='touch to activate'),
            Shape(
              geometry=Text(string=["80m"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
              appearance=Appearance(
                material=Material(DEF='MATERIAL_80m',diffuseColor=(0,.8,0)))),
            Shape(DEF='TransparentSelectionBox',
              geometry=Box(size=(1.6,1,0.001)),
              appearance=Appearance(
                material=Material(transparency=1)))]),
          Transform(translation=(-3.5,0,0),
            children=[
            TouchSensor(DEF='TOUCH_40m',description='touch to activate'),
            Shape(
              geometry=Text(string=["40m"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
              appearance=Appearance(
                material=Material(DEF='MATERIAL_40m',diffuseColor=(.8,0,0)))),
            Shape(USE='TransparentSelectionBox')]),
          Transform(translation=(-1,0,0),
            children=[
            TouchSensor(DEF='TOUCH_20m',description='touch to activate'),
            Shape(
              geometry=Text(string=["20m"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
              appearance=Appearance(
                material=Material(DEF='MATERIAL_20m',diffuseColor=(.8,0,0)))),
            Shape(USE='TransparentSelectionBox')]),
          Transform(translation=(1.5,0,0),
            children=[
            TouchSensor(DEF='TOUCH_10m',description='touch to activate'),
            Shape(
              geometry=Text(string=["10m"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
              appearance=Appearance(
                material=Material(DEF='MATERIAL_10m',diffuseColor=(.8,0,0)))),
            Shape(USE='TransparentSelectionBox')]),
          Transform(translation=(4,0,0),
            children=[
            TouchSensor(DEF='TOUCH_05m',description='touch to activate'),
            Shape(
              geometry=Text(string=["(no 5m)"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
              appearance=Appearance(
                material=Material(DEF='MATERIAL_05m',diffuseColor=(.8,0,0))))])])])]),
    Switch(DEF='BATHYMETRY_SWITCH',whichChoice=0,
      children=[
      Inline(url=["FortLauderdaleDepths80m.x3d","https://savage.nps.edu/Savage/Locations/FortLauderdaleFlorida/FortLauderdaleDepths80m.x3d","FortLauderdaleDepths80m.wrl","https://savage.nps.edu/Savage/Locations/FortLauderdaleFlorida/FortLauderdaleDepths80m.wrl"]),
      Inline(url=["FortLauderdaleDepths40m.x3d","https://savage.nps.edu/Savage/Locations/FortLauderdaleFlorida/FortLauderdaleDepths40m.x3d","FortLauderdaleDepths40m.wrl","https://savage.nps.edu/Savage/Locations/FortLauderdaleFlorida/FortLauderdaleDepths40m.wrl"]),
      Inline(url=["FortLauderdaleDepths20m.x3d","https://savage.nps.edu/Savage/Locations/FortLauderdaleFlorida/FortLauderdaleDepths20m.x3d","FortLauderdaleDepths20m.wrl","https://savage.nps.edu/Savage/Locations/FortLauderdaleFlorida/FortLauderdaleDepths20m.wrl"]),
      Inline(url=["FortLauderdaleDepths10m.x3d","https://savage.nps.edu/Savage/Locations/FortLauderdaleFlorida/FortLauderdaleDepths10m.x3d","FortLauderdaleDepths10m.wrl","https://savage.nps.edu/Savage/Locations/FortLauderdaleFlorida/FortLauderdaleDepths10m.wrl"])]),
    Script(DEF='BATHYMETRY_RESOLUTION',
      field=[
      field(accessType='inputOnly',name='touched80m',type='SFBool'),
      field(accessType='inputOnly',name='touched40m',type='SFBool'),
      field(accessType='inputOnly',name='touched20m',type='SFBool'),
      field(accessType='inputOnly',name='touched10m',type='SFBool'),
      field(accessType='outputOnly',name='selection',type='SFInt32'),
      field(accessType='outputOnly',name='color80m',type='SFColor'),
      field(accessType='outputOnly',name='color40m',type='SFColor'),
      field(accessType='outputOnly',name='color20m',type='SFColor'),
      field(accessType='outputOnly',name='color10m',type='SFColor'),
      field(accessType='outputOnly',name='color05m',type='SFColor'),
      field(accessType='inputOnly',name='touched05m',type='SFBool')]),
    ROUTE(fromField='isActive',fromNode='TOUCH_80m',toField='touched80m',toNode='BATHYMETRY_RESOLUTION'),
    ROUTE(fromField='isActive',fromNode='TOUCH_40m',toField='touched40m',toNode='BATHYMETRY_RESOLUTION'),
    ROUTE(fromField='isActive',fromNode='TOUCH_20m',toField='touched20m',toNode='BATHYMETRY_RESOLUTION'),
    ROUTE(fromField='isActive',fromNode='TOUCH_10m',toField='touched10m',toNode='BATHYMETRY_RESOLUTION'),
    ROUTE(fromField='isActive',fromNode='TOUCH_05m',toField='touched05m',toNode='BATHYMETRY_RESOLUTION'),
    ROUTE(fromField='selection',fromNode='BATHYMETRY_RESOLUTION',toField='whichChoice',toNode='BATHYMETRY_SWITCH'),
    ROUTE(fromField='color80m',fromNode='BATHYMETRY_RESOLUTION',toField='diffuseColor',toNode='MATERIAL_80m'),
    ROUTE(fromField='color40m',fromNode='BATHYMETRY_RESOLUTION',toField='diffuseColor',toNode='MATERIAL_40m'),
    ROUTE(fromField='color20m',fromNode='BATHYMETRY_RESOLUTION',toField='diffuseColor',toNode='MATERIAL_20m'),
    ROUTE(fromField='color10m',fromNode='BATHYMETRY_RESOLUTION',toField='diffuseColor',toNode='MATERIAL_10m'),
    ROUTE(fromField='color05m',fromNode='BATHYMETRY_RESOLUTION',toField='diffuseColor',toNode='MATERIAL_05m')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FortLauderdaleDepthSelection.py")
