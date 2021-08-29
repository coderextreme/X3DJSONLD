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
    meta(content='DicassExample.x3d',name='title'),
    meta(content='AN/SSQ-62B/C/D/E Directional Command Activated Sonobuoy System (DICASS) Sonobuoy',name='description'),
    meta(content='x=East, z=North, y=Up',name='coordinateSystem'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='30 January 2003',name='created'),
    meta(content='23 June 2014',name='modified'),
    meta(content='under development, updating script code to X3D',name='warning'),
    meta(content='DICASS-an-ssq-62.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/weaps/an-ssq-62.htm',name='reference'),
    meta(content='NAVY TRAINING SYSTEM PLAN FOR THE NAVY CONSOLIDATED SONOBUOYS N88-NTSP-A-50-8910B/A SEPTEMBER 1998',name='reference'),
    meta(content='ntsp-Sonobuoy.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/weaps/docs/ntsp-Sonobuoy.pdf',name='reference'),
    meta(content='http://www.avtechtra.navy.mil/pdf/Sonobuoys_a.PDF',name='reference'),
    meta(content='http://www.ultra-scs.com/sonobuoys/dicass.htm',name='reference'),
    meta(content='http://www.ultra-ussg.com/company/sonobuoy_history.cfm',name='reference'),
    meta(content='DICASS sonobuoy',name='subject'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DicassExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='AN/SSQ-62B/C/D/E Directional Command Activated Sonobuoy System (DICASS) Sonobuoy',name='DICASS',url=["DicassPrototype.x3d#DICASS","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DicassPrototype.x3d#DICASS","DicassPrototype.wrl#DICASS","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DicassPrototype.wrl#DICASS"],
      field=[
      field(accessType='inputOutput',appinfo='identifier label for this buoy',name='ID',type='MFString'),
      field(accessType='initializeOnly',appinfo='default value: AN/SSQ-62B',name='version',type='SFString'),
      field(accessType='initializeOnly',appinfo='local surface coordinates X=North Z=East',name='initialPositionXZ',type='SFVec2f'),
      field(accessType='inputOnly',appinfo='local surface coordinates X=North Z=East',name='orderedPositionXZ',type='SFVec2f'),
      field(accessType='initializeOnly',appinfo='meters depth use negative numbers for subsurface',name='initialDepth',type='SFFloat'),
      field(accessType='inputOnly',appinfo='meters depth use negative numbers for subsurface',name='orderedDepth',type='SFFloat'),
      field(accessType='inputOnly',appinfo='trigger event to bind/unbind viewpoint',name='bindViewpoint',type='SFBool'),
      field(accessType='outputOnly',appinfo='local coordinates X=North Y=altitude Z=East',name='location_changed',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='maximum audible sonar detection range meters',name='maxRange',type='SFFloat'),
      field(accessType='outputOnly',appinfo='pingDuration corresponds to maxRange at 1500m/sec sound speed',name='pingDuration',type='SFTime'),
      field(accessType='initializeOnly',appinfo='in-water sound speed m/s, default value 1500',documentation='https://en.wikipedia.org/wiki/Speed_of_sound#Seawater',name='soundSpeed',type='SFFloat'),
      field(accessType='inputOnly',appinfo='trigger event to start single ping',name='startPing',type='SFBool'),
      field(accessType='inputOnly',appinfo='trigger event to start continuous ping sequence',name='startContinuousPings',type='SFBool'),
      field(accessType='inputOutput',appinfo='Can add linkable text for further information',name='linkText',type='MFString'),
      field(accessType='inputOutput',appinfo='url for linkable text',name='linkUrl',type='MFString'),
      field(accessType='inputOutput',appinfo='target window for linkable text',name='linkTargetWindow',type='MFString')]),
    #  Rendered scene begins here 
    Background(DEF='AquaTealBackground',groundColor=[(0.0,0.25,0.25)],skyColor=[(0,1,1)]),
    NavigationInfo(speed=100,type=["EXAMINE","FLY","ANY"]),
    ProtoInstance(DEF='DicassExample',name='DICASS',
      fieldValue=[
      fieldValue(name='ID',value=["DicassExample"]),
      fieldValue(name='initialPositionXZ',value=(0,0)),
      fieldValue(name='initialDepth',value=-1),
      fieldValue(name='linkText',value=["click for online SAVAGE Archive"]),
      fieldValue(name='linkUrl',value=["https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/index.html"]),
      fieldValue(name='linkTargetWindow',value=["target=_blank"])]),
    #  Interface to test DICASS buoy 
    Transform(translation=(0,0,2000),
      children=[
      Viewpoint(description='DICASS 2 km'),
      Transform(translation=(-3.5,-3,0),
        children=[
        Shape(
          geometry=Text(string=["single ping"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.9)),
          appearance=Appearance(
            material=Material(DEF='InterfaceMaterial',diffuseColor=(0.8,0.5,0.1)))),
        TouchSensor(DEF='SinglePingTouch',description='Single Ping TouchSensor'),
        ROUTE(fromField='isActive',fromNode='SinglePingTouch',toField='startPing',toNode='DicassExample')]),
      Transform(translation=(2.5,-3,0),
        children=[
        Shape(
          geometry=Text(string=["continuous pings"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.9)),
          appearance=Appearance(
            material=Material(USE='InterfaceMaterial'))),
        TouchSensor(DEF='ContinuousPingTouch',description='Continuous Ping TouchSensor'),
        ROUTE(fromField='isActive',fromNode='ContinuousPingTouch',toField='startContinuousPings',toNode='DicassExample')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DicassExample.py")
