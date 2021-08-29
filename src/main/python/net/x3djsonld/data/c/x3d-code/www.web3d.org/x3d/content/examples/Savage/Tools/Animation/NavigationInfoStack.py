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
    meta(content='NavigationInfoStack.x3d',name='title'),
    meta(content='Attempt to control NavigationInfo speed and stack.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='13 June 2004',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='under development',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/NavigationInfoStack.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='NavigationInfoStackGroup',
      children=[
      NavigationInfo(DEF='NavInfoDefault'),
      #  ========== 
      NavigationInfo(DEF='NavInfo10mps',speed=10),
      BooleanTrigger(DEF='NavSpeed10BooleanTrigger'),
      ProximitySensor(DEF='NavSpeed10ProximitySensor',size=(200,200,200)),
      ROUTE(fromField='triggerTrue',fromNode='NavSpeed10BooleanTrigger',toField='set_bind',toNode='NavInfo10mps'),
      ROUTE(fromField='exitTime',fromNode='NavSpeed10ProximitySensor',toField='set_triggerTime',toNode='NavSpeed10BooleanTrigger'),
      #  ========== 
      NavigationInfo(DEF='NavInfo100mps',speed=100),
      ProximitySensor(DEF='NavSpeed100ProximitySensor',size=(2000,2000,2000)),
      BooleanTrigger(DEF='NavSpeed100BooleanTrigger'),
      ROUTE(fromField='triggerTrue',fromNode='NavSpeed100BooleanTrigger',toField='set_bind',toNode='NavInfo100mps'),
      ROUTE(fromField='exitTime',fromNode='NavSpeed100ProximitySensor',toField='set_triggerTime',toNode='NavSpeed100BooleanTrigger'),
      #  ========== 
      NavigationInfo(DEF='NavInfo1000mps',speed=1000),
      ProximitySensor(DEF='NavSpeed1000ProximitySensor',size=(20000,20000,20000)),
      BooleanTrigger(DEF='NavSpeed1000BooleanTrigger'),
      ROUTE(fromField='triggerTrue',fromNode='NavSpeed1000BooleanTrigger',toField='set_bind',toNode='NavInfo1000mps'),
      ROUTE(fromField='exitTime',fromNode='NavSpeed1000ProximitySensor',toField='set_triggerTime',toNode='NavSpeed1000BooleanTrigger'),
      #  ========== 
      Script(DEF='NavSpeedMonitorScript',
        field=[
        field(accessType='inputOnly',name='speed1Bound',type='SFBool'),
        field(accessType='inputOnly',name='speed10Bound',type='SFBool'),
        field(accessType='inputOnly',name='speed100Bound',type='SFBool'),
        field(accessType='inputOnly',name='speed1000Bound',type='SFBool'),
        field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=True)]),
      ROUTE(fromField='isBound',fromNode='NavInfoDefault',toField='speed1Bound',toNode='NavSpeedMonitorScript'),
      ROUTE(fromField='isBound',fromNode='NavInfo10mps',toField='speed10Bound',toNode='NavSpeedMonitorScript'),
      ROUTE(fromField='isBound',fromNode='NavInfo100mps',toField='speed100Bound',toNode='NavSpeedMonitorScript'),
      ROUTE(fromField='isBound',fromNode='NavInfo1000mps',toField='speed1000Bound',toNode='NavSpeedMonitorScript')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NavigationInfoStack.py")
