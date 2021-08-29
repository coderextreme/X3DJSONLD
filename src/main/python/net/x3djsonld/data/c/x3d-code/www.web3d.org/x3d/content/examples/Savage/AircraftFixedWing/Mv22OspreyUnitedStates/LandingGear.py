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
    meta(content='LandingGear.x3d',name='title'),
    meta(content='Osprey MV-22: Landing Gear',name='description'),
    meta(content='Major William C. James USMC',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='23 September 2001',name='created'),
    meta(content='1 September 2003',name='translated'),
    meta(content='22 October 2018',name='modified'),
    meta(content='Amended from VRML Sourcebook Figure 8.4 (used as base)',name='reference'),
    meta(content='http://www.navair.navy.mil/v22',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/v-22.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/LandingGear.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.2,0.2,0.7)]),
    Viewpoint(description='Front, level',position=(0.0,0.0,30.0)),
    Group(DEF='LandingGear',
      children=[
      Transform(DEF='Landing_Gear_Transform',
        children=[
        Group(DEF='Landing_Gear',
          children=[
          Transform(DEF='FrontWheelRotationSupport',translation=(0.0,-4.0,5.5),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.7,0.7,0.7))),
              geometry=Box(size=(1.0,0.2,1.0))),
            Transform(DEF='Front_Wheels',scale=(0.1,0.1,0.1),translation=(0.2,-1.5,0.0),
              children=[
              Group(DEF='Wheel_Group',
                children=[
                Group(DEF='Wheel_Grp',
                  children=[
                  Transform(DEF='Wheels',rotation=(1.0,0.0,0.0,1.57),
                    children=[
                    Transform(rotation=(0.0,0.0,1.0,1.57),
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(0.0,0.0,0.0),shininess=0.5)),
                        geometry=Extrusion(DEF='wheels',beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)],endCap=False,spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)]))])])]),
                Group(
                  children=[
                  Transform(translation=(-4.0,0.0,0.0),
                    children=[
                    Group(USE='Wheel_Grp')])]),
                Group(DEF='Axil',
                  children=[
                  Transform(rotation=(0.0,0.0,1.0,1.57),translation=(-2.0,0.0,0.0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.3,0.3,0.3))),
                      geometry=Cylinder(height=5.0))])]),
                Group(
                  children=[
                  Transform(DEF='FrontWheelVerticalSupport',rotation=(0.0,0.0,1.0,-1.57),scale=(2.5,1.0,1.0),translation=(-2.0,0.0,0.0),
                    children=[
                    Group(USE='Axil')])])])])]),
          Transform(DEF='RearRightWheelsRotationSupport',translation=(2.5,-3.5,-4.5),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.7,0.7,0.7))),
              geometry=Box(size=(1.0,0.2,1.0))),
            Transform(DEF='Rear_Right_Wheels',scale=(0.2,0.2,0.2),translation=(0.4,-2.0,0.0),
              children=[
              Group(USE='Wheel_Group')])]),
          Transform(DEF='RearLeftWheelsRotationSupport',translation=(-2.5,-3.5,-4.5),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.7,0.7,0.7))),
              geometry=Box(size=(1.0,0.2,1.0))),
            Transform(DEF='Rear_Left_Wheels',scale=(0.2,0.2,0.2),translation=(0.4,-2.0,0.0),
              children=[
              Group(USE='Wheel_Group')])])])]),
      TouchSensor(DEF='Landing_Gear_Sensor',description='touch to retract'),
      TimeSensor(DEF='CLOCK',cycleInterval=4.0),
      OrientationInterpolator(DEF='LandingGearInterpolator',key=[0.0,1.0],keyValue=[(1.0,0.0,0.0,0.0),(1.0,0.0,0.0,1.57)]),
      OrientationInterpolator(DEF='RLandingGearInterpolator',key=[0.0,1.0],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,-1.57)]),
      OrientationInterpolator(DEF='LLandingGearInterpolator',key=[0.0,1.0],keyValue=[(0.0,0.0,-1.0,0.0),(0.0,0.0,-1.0,-1.57)])]),
    ROUTE(fromField='touchTime',fromNode='Landing_Gear_Sensor',toField='set_startTime',toNode='CLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='LandingGearInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='RLandingGearInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='LLandingGearInterpolator'),
    ROUTE(fromField='value_changed',fromNode='RLandingGearInterpolator',toField='set_rotation',toNode='RearRightWheelsRotationSupport'),
    ROUTE(fromField='value_changed',fromNode='LandingGearInterpolator',toField='set_rotation',toNode='FrontWheelRotationSupport'),
    ROUTE(fromField='value_changed',fromNode='LLandingGearInterpolator',toField='set_rotation',toNode='RearLeftWheelsRotationSupport')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LandingGear.py")
