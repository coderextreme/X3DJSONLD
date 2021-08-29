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
    meta(content='RearHatch.x3d',name='title'),
    meta(content='Osprey MV-22 rear hatch.',name='description'),
    meta(content='Major William C. James USMC',name='creator'),
    meta(content='23 September 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='Amended from VRML Sourcebook Figure 8.4 (used as base)',name='reference'),
    meta(content='http://www.navair.navy.mil/v22',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/RearHatch.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(.2,.2,.7)]),
    Script(DEF='ToggleScript',
      field=[
      field(accessType='inputOnly',name='toggle',type='SFBool'),
      field(accessType='initializeOnly',name='state',type='SFBool'),
      field(accessType='outputOnly',name='stateTurnedTrue',type='SFBool'),
      field(accessType='outputOnly',name='stateTurnedFalse',type='SFBool')]),
    Script(DEF='TimeFilter',
      field=[
      field(accessType='inputOnly',name='setStart',type='SFBool'),
      field(accessType='inputOnly',name='setStop',type='SFBool'),
      field(accessType='outputOnly',name='startEventTime',type='SFTime'),
      field(accessType='outputOnly',name='stopEventTime',type='SFTime')]),
    #  Rear Hatch 
    Group(DEF='Rear_Hatch',
      children=[
      Transform(DEF='RearHatchTransform',rotation=(0,0,-1,1.57),translation=(0,-4.6,-6.2),
        children=[
        Group(DEF='RearHatch',
          children=[
          Transform(DEF='RearHatchRotationSupport',rotation=(0,1,0,.45),
            children=[
            Shape(DEF='RotatingBar',
              geometry=Cylinder(height=3.9,radius=.2),
              appearance=Appearance(
                material=Material(diffuseColor=(.5,.5,.5),shininess=.5))),
            Transform(DEF='Hatch',
              children=[
              Transform(rotation=(0,0,-1,1.57),translation=(0,0,-2.5),
                children=[
                Shape(
                  geometry=Box(size=(3.85,.2,5)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.5,.5,.5),shininess=.5)))])])])])]),
      TouchSensor(DEF='RearHatchSensor',description='touch to open'),
      TimeSensor(DEF='CLOCK1',cycleInterval=4),
      OrientationInterpolator(DEF='RearHatchInterpolator',key=[0.0,1.0],keyValue=[(0.0,1.0,0.0,0.45),(0.0,1.0,0.0,-0.2)]),
      #  Up_Ramp 
      TimeSensor(DEF='CLOCK2',cycleInterval=4),
      OrientationInterpolator(DEF='RearHatchInterpolator1',key=[0.0,1.0],keyValue=[(0.0,1.0,0.0,-.2),(0.0,1.0,0.0,0.45)])]),
    #  Down_Ramp_Code 
    ROUTE(fromField='touchTime',fromNode='RearHatchSensor',toField='set_startTime',toNode='CLOCK1'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK1',toField='set_fraction',toNode='RearHatchInterpolator'),
    ROUTE(fromField='value_changed',fromNode='RearHatchInterpolator',toField='set_rotation',toNode='RearHatchRotationSupport'),
    #  Toggle_Code 
    ROUTE(fromField='isActive',fromNode='RearHatchSensor',toField='toggle',toNode='ToggleScript'),
    ROUTE(fromField='value_changed',fromNode='RearHatchInterpolator1',toField='set_rotation',toNode='RearHatchRotationSupport'),
    #  Up_Ramp_Code 
    ROUTE(fromField='fraction_changed',fromNode='CLOCK2',toField='set_fraction',toNode='RearHatchInterpolator1'),
    ROUTE(fromField='stateTurnedTrue',fromNode='ToggleScript',toField='setStart',toNode='TimeFilter'),
    ROUTE(fromField='stateTurnedTrue',fromNode='ToggleScript',toField='setStop',toNode='TimeFilter'),
    ROUTE(fromField='startEventTime',fromNode='TimeFilter',toField='set_startTime',toNode='CLOCK1'),
    ROUTE(fromField='startEventTime',fromNode='TimeFilter',toField='set_startTime',toNode='CLOCK2')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RearHatch.py")
