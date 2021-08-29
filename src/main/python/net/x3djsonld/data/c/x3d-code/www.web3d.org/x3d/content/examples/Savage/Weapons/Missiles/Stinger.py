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
    meta(content='Stinger.x3d',name='title'),
    meta(content='Stinger Surface-to-Air Missile',name='description'),
    meta(content='Turgut AKGUL',name='creator'),
    meta(content='22 September 2003',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='StingerRaytheon.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/land/stinger.htm',name='reference'),
    meta(content='http://www.howstuffworks.com/stinger.htm',name='reference'),
    meta(content='Stinger surface-to-air missile',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/Stinger.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.0,0.0,0.1),(0.0,0.1,0.3),(0.3,0.3,0.6)],skyAngle=[1.309,1.571],skyColor=[(1.0,0.0,0.8),(0.5,0.0,0.8),(0.0,0.0,0.8)]),
    Viewpoint(description='view1',orientation=(0.682,-0.687,-0.252,3.138),position=(-2.6,1.5,-6.7)),
    Viewpoint(description='view2',orientation=(-0.105,0.994,0.039,1.3696),position=(11.7,-0.1,2.6)),
    Transform(
      children=[
      Group(
        children=[
        Transform(DEF='StingerMissile',scale=(4,4,4),
          children=[
          Transform(
            #  Built as well as possible to scale from pictures on FAS web site. Missile speed and distance for engagement are not what they are in real life for demonstration purposes. 
            children=[
            Transform(
              children=[
              Group(DEF='MISSILEBODY',
                children=[
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(DEF='GREY',diffuseColor=(0.6,0.6,0.6),shininess=.7)),
                    geometry=Cylinder(height=1.31,radius=0.069))]),
                Transform(translation=(0.069,0.515,0),
                  children=[
                  Group(DEF='HEADFINS',
                    children=[
                    Transform(
                      children=[
                      Shape(DEF='HEADFIN1',
                        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                          coord=Coordinate(point=[(0,0,0),(0,0.0400,0),(0.0800,0.0400,0),(0.0800,0.0,0),(0,0,0)])),
                        appearance=Appearance(DEF='FINCOLOR2',
                          material=Material(USE='GREY'))),
                      Shape(DEF='HEADFIN1HOLE',
                        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                          coord=Coordinate(point=[(0,0,-0.004),(0,0,0.004),(0,-0.0800,0.004),(0,-0.08,-0.004),(0,0,-0.004)])),
                        appearance=Appearance(
                          material=Material(DEF='FinHoleColor',diffuseColor=(0.1,0.1,0.1))))]),
                    Transform(translation=(-.138,0,0),
                      children=[
                      Shape(DEF='HEADFIN2',
                        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                          coord=Coordinate(point=[(0,0,0),(0,0.0400,0),(-0.0800,0.0400,0),(-0.0800,0.0,0),(0,0,0)])),
                        appearance=Appearance(
                          material=Material(USE='GREY'))),
                      Shape(DEF='HEADFIN2HOLE',
                        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                          coord=Coordinate(point=[(0,0,-0.004),(0,0,0.004),(0,-0.0800,0.004),(0,-0.08,-0.004),(0,0,-0.004)])),
                        appearance=Appearance(
                          material=Material(USE='FinHoleColor')))]),
                    Transform(translation=(-0.069,0,0.069),
                      children=[
                      Shape(DEF='HEADFIN3',
                        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                          coord=Coordinate(point=[(0,0,0),(0,0.0400,0),(0,0.0400,0.0800),(0,0.0,0.0800),(0,0,0)])),
                        appearance=Appearance(
                          material=Material(USE='GREY'))),
                      Shape(DEF='HEADFIN3HOLE',
                        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                          coord=Coordinate(point=[(-0.004,0,0),(0.004,0,0),(0.004,-0.0800,0),(-0.004,-0.08,0),(-0.004,0,0)])),
                        appearance=Appearance(
                          material=Material(USE='FinHoleColor')))]),
                    Transform(translation=(-0.069,0,-0.069),
                      children=[
                      Shape(DEF='HEADFIN4',
                        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                          coord=Coordinate(point=[(0,0,0),(0,0.0400,0),(0,0.0400,-0.0800),(0,0.0,-0.0800),(0,0,0)])),
                        appearance=Appearance(
                          material=Material(USE='GREY'))),
                      Shape(DEF='HEADFIN4HOLE',
                        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                          coord=Coordinate(point=[(-0.004,0,0),(0.004,0,0),(0.004,-0.0800,0),(-0.004,-0.08,0),(-0.004,0,0)])),
                        appearance=Appearance(
                          material=Material(USE='FinHoleColor')))])])])]),
              Transform(scale=(1.31,1.31,1.31),translation=(0,0.655,0),
                children=[
                Group(DEF='HEAD',
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='GREY')),
                    geometry=Extrusion(creaseAngle=1.785,crossSection=[(0.053727,0.000),(0.04648,-0.02696),(0.02696,-0.04648),(0.0,-0.053727),(-0.02696,-0.04648),(-0.04648,-0.02696),(-0.053727,0.000),(-0.04648,0.02696),(-0.02696,0.04648),(0.0,0.053727),(0.02696,0.04648),(0.04648,0.02696),(0.053727,0.0)],scale=[(1.00,1.00),(0.95,0.95),(0.88,0.88),(0.76,0.76),(0.48,0.48)],spine=[(0.00,0.00,0.00),(0.00,0.01,0.00),(0.00,0.02,0.00),(0.00,0.03,0.00),(0.00,0.04,0.00)]))])]),
              Transform(
                children=[
                Group(DEF='TAIL',
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='GREY')),
                    geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,scale=[(0.069,0.069),(0.068,0.068),(0.067,0.067),(0.066,0.066),(0.065,0.065),(0.064,0.064),(0.063,0.063),(0.062,0.062),(0.061,0.061),(0.060,0.060),(0.059,0.059),(0.058,0.058),(0.057,0.057),(0.056,0.056),(0.055,0.055),(0.054,0.054),(0.053,0.053),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052),(0.052,0.052)],solid=False,spine=[(0.0,-0.655,0.0),(0.0,-0.659,0.0),(0.0,-0.663,0.0),(0.0,-0.667,0.0),(0.0,-0.671,0.0),(0.0,-0.675,0.0),(0.0,-0.679,0.0),(0.0,-0.683,0.0),(0.0,-0.687,0.0),(0.0,-0.691,0.0),(0.0,-0.695,0.0),(0.0,-0.699,0.0),(0.0,-0.703,0.0),(0.0,-0.707,0.0),(0.0,-0.711,0.0),(0.0,-0.715,0.0),(0.0,-0.719,0.0),(0.0,-0.723,0.0),(0.0,-0.727,0.0),(0.0,-0.731,0.0),(0.0,-0.735,0.0),(0.0,-0.739,0.0),(0.0,-0.743,0.0),(0.0,-0.747,0.0),(0.0,-0.751,0.0),(0.0,-0.755,0.0),(0.0,-0.759,0.0),(0.0,-0.763,0.0),(0.0,-0.767,0.0),(0.0,-0.771,0.0),(0.0,-0.775,0.0),(0.0,-0.779,0.0),(0.0,-0.784,0.0),(0.0,-0.789,0.0),(0.0,-0.793,0.0),(0.0,-0.797,0.0),(0.0,-0.801,0.0),(0.0,-0.805,0.0),(0.0,-0.809,0.0),(0.0,-0.829,0.0)]))])]),
              Transform(translation=(0,.780,0),
                children=[
                Group(DEF='TAILFINS',
                  children=[
                  Transform(translation=(.052,-1.59,0),
                    children=[
                    Shape(DEF='FIN1',
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                        coord=Coordinate(point=[(0,0,0),(0,0.0600,0),(0.0800,0.0400,0),(0.0800,0.0200,0),(0,0,0)])),
                      appearance=Appearance(DEF='FINCOLOR',
                        material=Material(DEF='FinColor')))]),
                  Transform(translation=(-.052,-1.59,0),
                    children=[
                    Shape(DEF='FIN2',
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                        coord=Coordinate(point=[(0,0,0),(0,0.0600,0),(-0.0800,0.0400,0),(-0.0800,0.0200,0),(0,0,0)])),
                      appearance=Appearance(
                        material=Material(USE='FinColor')))]),
                  Transform(translation=(0,-1.59,0.052),
                    children=[
                    Shape(DEF='FIN3',
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                        coord=Coordinate(point=[(0,0,0),(0,0.0600,0),(0,0.0400,0.0800),(0,0.0200,0.0800),(0,0,0)])),
                      appearance=Appearance(
                        material=Material(USE='FinColor')))]),
                  Transform(translation=(0,-1.59,-0.052),
                    children=[
                    Shape(DEF='FIN4',
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                        coord=Coordinate(point=[(0,0,0),(0,0.0600,0),(0,0.0400,-0.0800),(0,0.0200,-0.0800),(0,0,0)])),
                      appearance=Appearance(
                        material=Material(USE='FinColor')))])])]),
              Transform(translation=(0,-.88,0),
                children=[
                Shape(DEF='EjectMotor',
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.4,0.4,0.4),shininess=.7)),
                  geometry=Cylinder(height=0.10,radius=0.06))]),
              Transform(translation=(0,-.93,0),
                children=[
                Shape(DEF='EjectMotorBehind',
                  appearance=Appearance(
                    material=Material(USE='GREY')),
                  geometry=Extrusion(creaseAngle=1.785,crossSection=[(0.053727,0.000),(0.04648,-0.02696),(0.02696,-0.04648),(0.0,-0.053727),(-0.02696,-0.04648),(-0.04648,-0.02696),(-0.053727,0.000),(-0.04648,0.02696),(-0.02696,0.04648),(0.0,0.053727),(0.02696,0.04648),(0.04648,0.02696),(0.053727,0.0)],scale=[(1.00,1.00),(0.85,0.85),(0.85,0.85),(0.76,0.76),(0.76,0.76)],spine=[(0.00,0.00,0.00),(0.00,-0.01,0.00),(0.00,-0.02,0.00),(0.00,-0.03,0.00),(0.00,-0.04,0.00)])),
                Transform(DEF='EXHAUST',rotation=(0,1,0,3.14),scale=(0.5,0.5,0.5),translation=(0,-0.7,0),
                  #  Exhaust flames are from the torch example in the source book. 
                  children=[
                  Shape(DEF='Flames',
                    #  No appearance, use emissive shading 
                    geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,3,4,5,-1,6,7,8,-1],
                      coord=Coordinate(point=[(0.25,0.0,0.00),(0.15,1.0,0.10),(0.05,0.0,0.15),(0.18,0.0,0.05),(0.00,1.2,0.05),(-0.10,0.0,0.05),(-0.00,0.0,0.15),(-0.13,0.8,0.10),(-0.25,-0.25,0.00)]),
                      color=Color(color=[(1.0,0.0,0.0),(0.9,0.5,0),(1.0,0.0,0.0),(0.9,0.3,0),(1.0,1.0,0.0),(0.9,0.3,0),(0.7,0.1,0.2),(0.9,0.8,0),(1.0,0.0,0.0)])),
                    appearance=Appearance(
                      material=Material(transparency=.15))),
                  Transform(rotation=(0,1,0,1.57),scale=(0.9,0.9,1),
                    children=[
                    Shape(USE='Flames')]),
                  Transform(rotation=(0,1,0,-1.57),scale=(0.9,0.9,1),
                    children=[
                    Shape(USE='Flames')]),
                  PositionInterpolator(DEF='EXHINT',key=[0,.25,.5,.75,1],keyValue=[(1.4,1.4,1.4),(2,2,2),(2.5,2.5,2.5),(2,2,2),(1.4,1.4,1.4)]),
                  TimeSensor(DEF='EXHAUSTCLOCK',loop=True),
                  TimeSensor(DEF='RGMCLOCK',cycleInterval=28)])])])])]),
        Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]),
        TouchSensor(DEF='MyTouchSensor',description='touch to start clock'),
        TimeSensor(DEF='CLOCK',cycleInterval=0.5),
        OrientationInterpolator(DEF='CubePathInterpolator',key=[0.0,0.50,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)]),
        PlaneSensor(DEF='MyPlaneSensor',description='drag stinger in plane')]),
      Script(DEF='Unfinished',
        field=[
        field(accessType='inputOnly',name='set_startTime',type='SFTime'),
        field(accessType='initializeOnly',name='startTime',type='SFTime',value=0),
        field(accessType='outputOnly',name='delayCompleteTime',type='SFTime'),
        field(accessType='initializeOnly',name='delayInterval',type='SFTime',value=1),
        field(accessType='inputOnly',name='set_delayInterval',type='SFTime')])]),
    ROUTE(fromField='touchTime',fromNode='MyTouchSensor',toField='startTime',toNode='CLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='CubePathInterpolator'),
    ROUTE(fromField='value_changed',fromNode='CubePathInterpolator',toField='set_rotation',toNode='StingerMissile'),
    ROUTE(fromField='translation_changed',fromNode='MyPlaneSensor',toField='set_translation',toNode='StingerMissile')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Stinger.py")
