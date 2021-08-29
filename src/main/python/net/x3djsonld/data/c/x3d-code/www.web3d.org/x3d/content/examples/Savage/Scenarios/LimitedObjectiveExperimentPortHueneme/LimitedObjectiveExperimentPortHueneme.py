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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='LimitedObjectiveExperimentPortHueneme.x3d',name='title'),
    meta(content='Scenario created prior to C3F sponsored AT/FP exercise in Port Hueneme. Provides a spatial represenetation of the scenario to examine potential interactions and weaknesses.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='29 January 2002',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='US NIMA Chart 18725',name='reference'),
    meta(content='http://www.mapquest.com',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/LimitedObjectiveExperimentPortHueneme/LimitedObjectiveExperimentPortHueneme.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',url=["../../Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console.',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node - developer use only can be ignored.',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime.',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position.',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation.',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint',name='outputViewpointString',type='MFString')]),
    ExternProtoDeclare(appinfo='Circular set of compass bearings that follow the active viewpoint set at 360/12 = 30 degree intervals. North = +X axis East = +Z axis up = +Y axis.',name='CameraCompass12',url=["../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass12","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass12","../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass12","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass12"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f'),
      field(accessType='inputOutput',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',name='labelColor',type='SFColor')]),
    ExternProtoDeclare(appinfo='Rigid Hull Inflatable Boat',name='RHIB',url=["../../Scenarios/UssColeTerroristAttack/RHIBPrototype.x3d#RHIB","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RHIBPrototype.x3d#RHIB","../../Scenarios/UssColeTerroristAttack/RHIBPrototype.wrl#RHIB","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RHIBPrototype.wrl#RHIB"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    ExternProtoDeclare(appinfo='Sense-Decide-Act Engagement Range',name='SenseDecideActEngagePrototype',url=["EngagementRangePrototype.x3d#SenseDecideActEngagePrototype","https://savage.nps.edu/Savage/Scenarios/LimitedObjectiveExperimentPortHueneme/EngagementRangePrototype.x3d#SenseDecideActEngagePrototype","EngagementRangePrototype.wrl#SenseDecideActEngagePrototype","https://savage.nps.edu/Savage/Scenarios/LimitedObjectiveExperimentPortHueneme/EngagementRangePrototype.wrl#SenseDecideActEngagePrototype"],
      field=[
      field(accessType='inputOutput',name='engagementPosition',type='SFVec3f'),
      field(accessType='inputOutput',name='engagementTextPosition',type='SFVec3f')]),
    ExternProtoDeclare(appinfo='Arleigh Burke class destroyer',name='ArleighBurke',url=["../../ShipsMilitary/DDGArleighBurkeUnitedStates//ArleighBurkePrototype.x3d#ArleighBurke","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates//ArleighBurkePrototype.x3d#ArleighBurke","../../ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkePrototype.wrl#ArleighBurke","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkePrototype.wrl#ArleighBurke"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    ExternProtoDeclare(name='TerroristBoat',url=["../UssColeTerroristAttack/TerroristBoatBoxManOnboardPrototype.x3d#TerroristBoat","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/TerroristBoatBoxManOnboardPrototype.x3d#TerroristBoat","../UssColeTerroristAttack/TerroristBoatBoxManOnboardPrototype.wrl#TerroristBoat","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/TerroristBoatBoxManOnboardPrototype.wrl#TerroristBoat"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    ExternProtoDeclare(name='NetLauncher',url=["../../Weapons/Guns/NonLethalNetLauncherPrototype.x3d#NetLauncher","https://savage.nps.edu/Savage/Weapons/Guns/NonLethalNetLauncherPrototype.x3d#NetLauncher","../../Weapons/Guns/NonLethalNetLauncherPrototype.wrl#NetLauncher","https://savage.nps.edu/Savage/Weapons/Guns/NonLethalNetLauncherPrototype.wrl#NetLauncher"],
      field=[
      field(accessType='inputOnly',name='startLaunchToStbd',type='SFTime'),
      field(accessType='inputOnly',name='startLaunchToPort',type='SFTime'),
      field(accessType='outputOnly',name='netTranslation',type='SFVec3f'),
      field(accessType='outputOnly',name='netScale',type='SFVec3f'),
      field(accessType='outputOnly',name='netOrientation',type='SFRotation'),
      field(accessType='outputOnly',name='nettingScale',type='SFVec3f')]),
    NavigationInfo(avatarSize=[2,1.6,.75],speed=10,type=[EXAMINE","FLY","'ANY'],visibilityLimit=30000),
    Background(groundAngle=[1.309],groundColor=[(0.2,0.2,0.8),(1.0,1.0,1.0)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
    Viewpoint(description='Port Hueneme Satellite View',position=(0,3,5.2)),
    Viewpoint(description='Main Scene Entry Point',orientation=(-.983,-.117,.141,.3313),position=(6143.9,910,8685.6)),
    ProtoInstance(name='ViewPositionOrientation',
      fieldValue=[
      fieldValue(name='enabled',value=True)]),
    #  ****Geography, Pier, and other objects go here*** 
    Transform(translation=(0,3,0),
      children=[
      Inline(url=["../../Locations/PortHuenemeCalifornia/PortHuenemeHarbor.x3d","https://savage.nps.edu/Savage/Locations/PortHuenemeCalifornia/PortHuenemeHarbor.x3d","../../Locations/PortHuenemeCalifornia/PortHuenemeHarbor.wrl","https://savage.nps.edu/Savage/Locations/PortHuenemeCalifornia/PortHuenemeHarbor.wrl"])]),
    Transform(translation=(0,3,2),
      children=[
      Anchor(description='Click Text To Begin Simulation',url=["Start.bat","https://savage.nps.edu/Savage/Scenarios/LimitedObjectiveExperimentPortHueneme/Start.bat"],
        children=[
        Shape(
          geometry=Text(string=["CLICK HERE","TO BEGIN"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=.5,style_='BOLD')),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1))))])]),
    Transform(rotation=(0,1,0,1.57),translation=(5551,0,6602),
      children=[
      Inline(url=["../../Locations/PortHuenemeCalifornia/PortHuenemePiers.x3d","https://savage.nps.edu/Savage/Locations/PortHuenemeCalifornia/PortHuenemePiers.x3d","../../Locations/PortHuenemeCalifornia/PortHuenemePiers.wrl","https://savage.nps.edu/Savage/Locations/PortHuenemeCalifornia/PortHuenemePiers.wrl"])]),
    #  ****Scene Compass **** 
    Transform(DEF='Compass',rotation=(0,1,0,1.57),
      children=[
      ProtoInstance(name='CameraCompass12',
        fieldValue=[
        fieldValue(name='enabled',value=True),
        fieldValue(name='positionOffsetFromCamera',value=(0,5,0)),
        fieldValue(name='markerColor',value=(0.3,0.3,0.8)),
        fieldValue(name='labelColor',value=(1,1,1))])]),
    #  ****DDG here*** 
    Transform(rotation=(0,1,0,6.245),translation=(5991.755,0,5894.995),
      children=[
      Transform(DEF='ColeTransform',rotation=(0,1,0,1.57),translation=(0,9,0),
        children=[
        Transform(DEF='ShockTransform',
          children=[
          ProtoInstance(DEF='DDG-51',name='ArleighBurke'),
          Transform(rotation=(0,1,0,3.0),translation=(0,-4.55,0),
            children=[
            Inline(DEF='NancyStandShootRifleM24',url=["../../../Basic/HumanoidAnimation/NancyStandShootRifleM24.x3d","http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyStandShootRifleM24.x3d","../../../Basic/HumanoidAnimation/NancyStandShootRifleM24.wrl","http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyStandShootRifleM24.wrl"]),
            Transform(translation=(0,1.5,0),
              children=[
              ProtoInstance(DEF='myRanges',name='SenseDecideActEngagePrototype',
                fieldValue=[
                fieldValue(name='engagementPosition',value=(400,400,400)),
                fieldValue(name='engagementTextPosition',value=(0,400,0))])])])])])]),
    #  ****RHIB Here**** 
    Transform(rotation=(1,0,0,.78),translation=(5872.4,1.2,5908.3),
      children=[
      Transform(DEF='FinalNetTransform',scale=(.01,.01,.01),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0),shininess=1)),
          geometry=Cylinder(height=1.4,radius=.12)),
        Transform(DEF='FinalNettingTransform',rotation=(0,1,0,1.57),scale=(.01,.01,.01),translation=(0,0,1),
          children=[
          Shape(DEF='FinalNETTING',
            appearance=Appearance(
              material=Material(),
              texture=ImageTexture(url=["grill.png","../../Weapons/Guns/grill.png","../../../Weapons/Guns/grill.png","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18-TextureMapping/grill.png"]),
              textureTransform=TextureTransform(center=(0.5,0.5),scale=(32,8))),
            geometry=IndexedFaceSet(DEF='FinalScreen',coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
              coord=Coordinate(point=[(-1,-.4,0.1),(1,-.4,0.1),(1,.4,.1),(-1,.4,.1)]),
              texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)])))])]),
      Viewpoint(description='Net Viewpoint')]),
    Transform(DEF='RhibTranslation',translation=(5866.4,.9,5908.3),
      children=[
      ProtoInstance(DEF='ColeRhib1',name='RHIB'),
      Transform(translation=(1,-.5,0),
        children=[
        Inline(USE='NancyStandShootRifleM24'),
        Transform(translation=(0,1.5,0),
          children=[
          ProtoInstance(USE='myRanges')])]),
      Transform(translation=(6,.3,0),
        children=[
        ProtoInstance(DEF='myLauncher',name='NetLauncher'),
        TouchSensor(DEF='netTouch',description='touch to launch net'),
        ROUTE(fromField='touchTime',fromNode='netTouch',toField='startLaunchToStbd',toNode='myLauncher')]),
      ROUTE(fromField='netTranslation',fromNode='myLauncher',toField='set_translation',toNode='FinalNetTransform'),
      ROUTE(fromField='netScale',fromNode='myLauncher',toField='set_scale',toNode='FinalNetTransform'),
      ROUTE(fromField='nettingScale',fromNode='myLauncher',toField='set_scale',toNode='FinalNettingTransform'),
      ROUTE(fromField='netOrientation',fromNode='myLauncher',toField='set_rotation',toNode='FinalNetTransform')]),
    #  ****Terrorist Boat with Boxman here **** 
    Transform(translation=(5889.9,.5,6220),
      children=[
      Transform(DEF='TerroristBoatTransform',rotation=(0,1,0,1.57),
        children=[
        ProtoInstance(DEF='Boat',name='TerroristBoat')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LimitedObjectiveExperimentPortHueneme.py")
