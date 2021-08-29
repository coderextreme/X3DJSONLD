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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='MastMountedSight.x3d',name='title'),
    meta(content='Mast-Mounted Sight of an OH-58D Kiowa Warrior.',name='description'),
    meta(content='Del Beilstein',name='creator'),
    meta(content='21 September 2001',name='created'),
    meta(content='18 December 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/MastMountedSight.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0.0),(0.4,0.25,0.2),(0.6,0.60,0.6)],skyAngle=[0.785,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
    Viewpoint(DEF='Distant_view',description='Mast Mounted Sight (MMS)'),
    Viewpoint(DEF='Close_up_view',description='Close up view of MMS',jump=False,position=(0,2,3)),
    Group(
      children=[
      Transform(
        children=[
        Shape(
          geometry=Cylinder(DEF='base',height=0.1),
          appearance=Appearance(
            material=Material(DEF='MMS_Color',diffuseColor=(0.0,0.2,0.05))))]),
      Transform(DEF='Mast_Position',translation=(0.0,1.2,0.0),
        children=[
        Shape(
          geometry=Cone(DEF='MMS_Mast',bottomRadius=.5,height=2.3),
          appearance=Appearance(
            material=Material(USE='MMS_Color'))),
        Transform(DEF='MMS_fan_psn',rotation=(1,0,0,1.59),translation=(0,-0.3,0.4),
          children=[
          Shape(
            geometry=Cylinder(DEF='MMS_fan',height=.4,radius=.2),
            appearance=Appearance(
              material=Material(USE='MMS_Color')))])]),
      Transform(DEF='Head_Position',translation=(0.0,2.4,0.0),
        children=[
        Shape(
          geometry=Sphere(DEF='MMS_Head',radius=0.8),
          appearance=Appearance(
            material=Material(USE='MMS_Color'))),
        TouchSensor(DEF='MMS_Sensor_Y',description='touch to activate'),
        TimeSensor(DEF='MMS_Clock_Y',cycleInterval=5),
        ROUTE(fromField='touchTime',fromNode='MMS_Sensor_Y',toField='startTime',toNode='MMS_Clock_Y'),
        OrientationInterpolator(DEF='MMS_Rotator_Y',key=[0.00,0.15,0.30,0.45,0.60,0.75,0.87,1.00],keyValue=[(1,0,0,0.785),(1,0,0,1.590),(1,0,0,0.785),(1,0,0,0.000),(1,0,0,5.400),(1,0,0,4.785),(1,0,0,5.400),(1,0,0,0.0)]),
        ROUTE(fromField='fraction_changed',fromNode='MMS_Clock_Y',toField='set_fraction',toNode='MMS_Rotator_Y'),
        ROUTE(fromField='value_changed',fromNode='MMS_Rotator_Y',toField='rotation',toNode='Head_Position'),
        Transform(DEF='TIS_Window',rotation=(1,0,0,1.59),translation=(0.3,0.1,0.70),
          children=[
          Shape(
            geometry=Cylinder(height=0.2,radius=0.25),
            appearance=Appearance(
              material=Material(USE='MMS_Color'))),
          Transform(DEF='TIS_lense_psn',translation=(0,0.1,0),
            children=[
            Shape(
              geometry=Cylinder(height=.05,radius=.2),
              appearance=Appearance(
                material=Material(DEF='Lens_color',diffuseColor=(0,0,0),transparency=0.5)))])]),
        Transform(DEF='TV_Window',rotation=(1,0,0,1.59),translation=(-0.3,0.1,0.70),
          children=[
          Shape(
            geometry=Cylinder(height=0.2,radius=0.2),
            appearance=Appearance(
              material=Material(USE='MMS_Color'))),
          TouchSensor(DEF='MMS_Sensor_X',description='touch to activate'),
          TimeSensor(DEF='MMS_Clock_X',cycleInterval=5),
          ROUTE(fromField='touchTime',fromNode='MMS_Sensor_X',toField='set_startTime',toNode='MMS_Clock_X'),
          OrientationInterpolator(DEF='MMS_Rotator_X',key=[0.00,0.15,0.30,0.45,0.60,0.75,0.87,1.00],keyValue=[(0,1,0,0.785),(0,1,0,1.590),(0,1,0,0.785),(0,1,0,0.000),(0,1,0,5.400),(0,1,0,4.785),(0,1,0,5.400),(0,1,0,0.0)]),
          ROUTE(fromField='fraction_changed',fromNode='MMS_Clock_X',toField='set_fraction',toNode='MMS_Rotator_X'),
          ROUTE(fromField='value_changed',fromNode='MMS_Rotator_X',toField='set_rotation',toNode='Head_Position'),
          Transform(DEF='TV_lense_psn',translation=(0,0.1,0),
            children=[
            Shape(
              geometry=Cylinder(height=0.05,radius=0.17),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,0))))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MastMountedSight.py")
