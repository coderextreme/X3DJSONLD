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
    meta(content='SharkLeftyLocale.x3d',name='title'),
    meta(content='Lefty Shark with animation to traverse the tank',name='description'),
    meta(content='Tim McLean',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 June 1998',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://faculty.nps.edu/brutzman/kelp',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLeftyLocale.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SharkLeftyLocale.x3d'),
    Transform(DEF='_0',translation=(0.0,-5.5,-1.0),
      children=[
      Inline(url=["SharkLefty.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLefty.x3d","SharkLefty.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLefty.wrl"]),
      Group(
        children=[
        TimeSensor(DEF='SHARK2_CLOCK',cycleInterval=110.0,loop=True),
        PositionInterpolator(DEF='SHARK2_POSITION',key=[0.0,0.152,0.194,0.224,0.288,0.35,0.427,0.549,0.632,0.7,0.813,1.0],keyValue=[(0.0,-4.25,-1.0),(3.75,-4.5,-0.75),(4.75,-4.5,-1.0),(4.75,-4.5,-2.0),(3.25,-4.0,-2.5),(1.75,-4.0,-2.75),(0.0,-4.0,-3.25),(-3.0,-3.5,-4.0),(-5.0,-4.0,-2.5),(-5.75,-4.5,0.0),(-4.5,-4.5,0.25),(0.0,-4.25,-1.0)]),
        OrientationInterpolator(DEF='SHARK2_ORIENTATION',key=[0.0,0.152,0.194,0.224,0.288,0.35,0.427,0.549,0.632,0.7,0.813,1.0],keyValue=[(0.0,1.0,0.0,6.2134),(0.0,1.0,0.0,0.244),(0.0,1.0,0.0,1.57),(0.1564,0.9974,-0.0262,2.8141),(0.0,1.0,0.0,2.967),(0.0,1.0,0.0,2.7227),(0.0872,0.9961,-0.0107,2.8982),(-0.1218,0.9917,-0.0407,3.7824),(-0.1469,0.9832,-0.1087,4.3995),(0.0,1.0,0.0,6.0912),(0.0,1.0,0.0,0.2618),(0.0,1.0,0.0,6.2134)])])]),
    TimeSensor(DEF='_4',loop=True),
    Script(DEF='sharkSwimmingInTankTrigger_5',
      field=[
      field(accessType='inputOnly',name='triggerIn',type='SFTime'),
      field(accessType='outputOnly',name='startTime',type='SFTime'),
      field(accessType='outputOnly',name='firstTime',type='SFBool')]),
    ROUTE(fromField='startTime',fromNode='sharkSwimmingInTankTrigger_5',toField='set_startTime',toNode='SHARK2_CLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='SHARK2_CLOCK',toField='set_fraction',toNode='SHARK2_POSITION'),
    ROUTE(fromField='fraction_changed',fromNode='SHARK2_CLOCK',toField='set_fraction',toNode='SHARK2_ORIENTATION'),
    ROUTE(fromField='value_changed',fromNode='SHARK2_POSITION',toField='set_translation',toNode='_0'),
    ROUTE(fromField='value_changed',fromNode='SHARK2_ORIENTATION',toField='set_rotation',toNode='_0'),
    ROUTE(fromField='firstTime',fromNode='sharkSwimmingInTankTrigger_5',toField='set_enabled',toNode='_4'),
    ROUTE(fromField='time',fromNode='_4',toField='triggerIn',toNode='sharkSwimmingInTankTrigger_5')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SharkLeftyLocale.py")
