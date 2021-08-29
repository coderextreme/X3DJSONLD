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
    meta(content='WallClock.x3d',name='title'),
    meta(content='A file describing a wall clock',name='description'),
    meta(content='Frederic Roussille',name='creator'),
    meta(content='1 April 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallClock.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='WallClock.x3d'),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='blue',diffuseColor=(0.3,0.2,0.8))),
        geometry=Extrusion(beginCap=False,creaseAngle=1,crossSection=[(0,0),(4,0),(4,0.7),(3.6,0.7),(3.6,0.2),(0,0.2)],endCap=False,spine=[(1,0,0),(0.92,-0.38,0),(0.71,-0.71,0),(0.38,-0.92,0),(0,-1,0),(-0.38,-0.92,0),(-0.71,-0.71,0),(-0.92,-0.38,0),(-1,0,0),(-0.92,0.38,0),(-0.71,0.71,0),(-0.38,0.92,0),(0,1,0),(0.38,0.92,0),(0.71,0.71,0),(0.92,0.38,0),(1,0,0)])),
      Transform(rotation=(1,0,0,1.57),translation=(0,0,0.2),
        children=[
        Shape(
          geometry=Cylinder(height=0.2,radius=2.8))]),
      Group(
        children=[
        Transform(center=(0,0,0.4),rotation=(0,0,1,-0.5233),
          children=[
          Transform(DEF='mark1',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m1',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])]),
        Transform(center=(0,0,0.4),rotation=(0,0,1,-1.0466),
          children=[
          Transform(DEF='mark2',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m2',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])]),
        Transform(center=(0,0,0.4),rotation=(0,0,1,-1.57),
          children=[
          Transform(DEF='mark3',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m3',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])]),
        Transform(center=(0,0,0.4),rotation=(0,0,1,-2.0933),
          children=[
          Transform(DEF='mark4',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m4',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])]),
        Transform(center=(0,0,0.4),rotation=(0,0,1,-2.6166),
          children=[
          Transform(DEF='mark5',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m5',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])]),
        Transform(center=(0,0,0.4),rotation=(0,0,1,-3.1399),
          children=[
          Transform(DEF='mark6',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m6',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])]),
        Transform(center=(0,0,0.4),rotation=(0,0,1,-3.6632),
          children=[
          Transform(DEF='mark7',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m7',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])]),
        Transform(center=(0,0,0.4),rotation=(0,0,1,-4.1865),
          children=[
          Transform(DEF='mark8',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m8',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])]),
        Transform(center=(0,0,0.4),rotation=(0,0,1,-4.7098),
          children=[
          Transform(DEF='mark9',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m9',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])]),
        Transform(center=(0,0,0.4),rotation=(0,0,1,-5.2331),
          children=[
          Transform(DEF='mark10',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m10',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])]),
        Transform(center=(0,0,0.4),rotation=(0,0,1,-5.7564),
          children=[
          Transform(DEF='mark11',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m11',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])]),
        Transform(center=(0,0,0.4),rotation=(0,0,1,-6.2797),
          children=[
          Transform(DEF='mark12',translation=(0,2.2,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='m12',diffuseColor=(0.3,0.2,0.8))),
              geometry=Box(size=(0.25,0.5,0.15)))])])]),
      Transform(DEF='small',center=(0,0,0.4),
        children=[
        Transform(rotation=(1,0,0,-1.57),translation=(0,0,0.5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='blue')),
            geometry=Extrusion(crossSection=[(-0.15,0),(0.15,0),(0,1.4),(-0.15,0)],spine=[(0,0,0),(0,0.15,0)]))])]),
      Transform(DEF='medium',center=(0,0,0.4),
        children=[
        Transform(rotation=(1,0,0,-1.57),translation=(0,0,0.5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='blue')),
            geometry=Extrusion(crossSection=[(-0.11,0),(0.15,0),(0,1.65),(-0.11,0)],spine=[(0,0,0),(0,0.15,0)]))])]),
      Transform(DEF='tall',center=(0,0,0.4),
        children=[
        Transform(translation=(0,0,0.4),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='blue')),
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(point=[(0,0,0),(0,1.8,0)])))])]),
      TimeSensor(DEF='cm',enabled=False,loop=True),
      TimeSensor(DEF='refresh',cycleInterval=0.1,loop=True),
      ColorInterpolator(DEF='cm1p',key=[0,0.0833,0.0833,0.167,0.167,1],keyValue=[(0.3,0.2,0.8),(0.3,0.2,0.8),(1,1,0),(1,1,0),(0.3,0.2,0.8),(0.3,0.2,0.8)]),
      ColorInterpolator(DEF='cm2p',key=[0,0.167,0.167,0.25,0.25,1],keyValue=[(0.3,0.2,0.8),(0.3,0.2,0.8),(1,1,0),(1,1,0),(0.3,0.2,0.8),(0.3,0.2,0.8)]),
      ColorInterpolator(DEF='cm3p',key=[0,0.25,0.25,0.333,0.333,1],keyValue=[(0.3,0.2,0.8),(0.3,0.2,0.8),(1,1,0),(1,1,0),(0.3,0.2,0.8),(0.3,0.2,0.8)]),
      ColorInterpolator(DEF='cm4p',key=[0,0.333,0.333,0.417,0.417,1],keyValue=[(0.3,0.2,0.8),(0.3,0.2,0.8),(1,1,0),(1,1,0),(0.3,0.2,0.8),(0.3,0.2,0.8)]),
      ColorInterpolator(DEF='cm5p',key=[0,0.417,0.417,0.5,0.5,1],keyValue=[(0.3,0.2,0.8),(0.3,0.2,0.8),(1,1,0),(1,1,0),(0.3,0.2,0.8),(0.3,0.2,0.8)]),
      ColorInterpolator(DEF='cm6p',key=[0,0.5,0.5,0.583,0.583,1],keyValue=[(0.3,0.2,0.8),(0.3,0.2,0.8),(1,1,0),(1,1,0),(0.3,0.2,0.8),(0.3,0.2,0.8)]),
      ColorInterpolator(DEF='cm7p',key=[0,0.583,0.583,0.667,0.667,1],keyValue=[(0.3,0.2,0.8),(0.3,0.2,0.8),(1,1,0),(1,1,0),(0.3,0.2,0.8),(0.3,0.2,0.8)]),
      ColorInterpolator(DEF='cm8p',key=[0,0.667,0.667,0.75,0.75,1],keyValue=[(0.3,0.2,0.8),(0.3,0.2,0.8),(1,1,0),(1,1,0),(0.3,0.2,0.8),(0.3,0.2,0.8)]),
      ColorInterpolator(DEF='cm9p',key=[0,0.75,0.75,0.833,0.833,1],keyValue=[(0.3,0.2,0.8),(0.3,0.2,0.8),(1,1,0),(1,1,0),(0.3,0.2,0.8),(0.3,0.2,0.8)]),
      ColorInterpolator(DEF='cm10p',key=[0,0.833,0.833,0.917,0.917,1],keyValue=[(0.3,0.2,0.8),(0.3,0.2,0.8),(1,1,0),(1,1,0),(0.3,0.2,0.8),(0.3,0.2,0.8)]),
      ColorInterpolator(DEF='cm11p',key=[0,0.917,0.917,1,1],keyValue=[(0.3,0.2,0.8),(0.3,0.2,0.8),(1,1,0),(1,1,0),(0.3,0.2,0.8)]),
      ColorInterpolator(DEF='cm12p',key=[0,0.0833,0.0833,1],keyValue=[(1,1,0),(1,1,0),(0.3,0.2,0.8),(0.3,0.2,0.8)]),
      Script(DEF='writing',
        field=[
        field(accessType='inputOnly',name='set_float',type='SFTime'),
        field(accessType='outputOnly',name='string_changed',type='MFString'),
        field(accessType='initializeOnly',name='g',type='SFFloat',value=0)]),
      Transform(translation=(0,1.2,0.3),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.3,0.2,0.8))),
          geometry=Text(DEF='text',
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.3)))]),
      Script(DEF='more_time',
        field=[
        field(accessType='outputOnly',name='second_changed',type='SFRotation'),
        field(accessType='inputOnly',name='set_second',type='SFTime'),
        field(accessType='outputOnly',name='minute_changed',type='SFRotation'),
        field(accessType='outputOnly',name='hour_changed',type='SFRotation')]),
      Script(DEF='cm_enabled',
        field=[
        field(accessType='outputOnly',name='start',type='SFBool'),
        field(accessType='inputOnly',name='set_milli',type='SFTime')])]),
    ROUTE(fromField='cycleTime',fromNode='refresh',toField='set_milli',toNode='cm_enabled'),
    ROUTE(fromField='start',fromNode='cm_enabled',toField='set_enabled',toNode='cm'),
    ROUTE(fromField='cycleTime',fromNode='refresh',toField='set_second',toNode='more_time'),
    ROUTE(fromField='second_changed',fromNode='more_time',toField='set_rotation',toNode='tall'),
    ROUTE(fromField='minute_changed',fromNode='more_time',toField='set_rotation',toNode='medium'),
    ROUTE(fromField='hour_changed',fromNode='more_time',toField='set_rotation',toNode='small'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm1p'),
    ROUTE(fromField='value_changed',fromNode='cm1p',toField='set_diffuseColor',toNode='m1'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm2p'),
    ROUTE(fromField='value_changed',fromNode='cm2p',toField='set_diffuseColor',toNode='m2'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm3p'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm4p'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm5p'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm6p'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm7p'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm8p'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm9p'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm10p'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm12p'),
    ROUTE(fromField='value_changed',fromNode='cm3p',toField='set_diffuseColor',toNode='m3'),
    ROUTE(fromField='value_changed',fromNode='cm4p',toField='set_diffuseColor',toNode='m4'),
    ROUTE(fromField='value_changed',fromNode='cm5p',toField='set_diffuseColor',toNode='m5'),
    ROUTE(fromField='value_changed',fromNode='cm6p',toField='set_diffuseColor',toNode='m6'),
    ROUTE(fromField='value_changed',fromNode='cm7p',toField='set_diffuseColor',toNode='m7'),
    ROUTE(fromField='value_changed',fromNode='cm8p',toField='set_diffuseColor',toNode='m8'),
    ROUTE(fromField='value_changed',fromNode='cm9p',toField='set_diffuseColor',toNode='m9'),
    ROUTE(fromField='value_changed',fromNode='cm10p',toField='set_diffuseColor',toNode='m10'),
    ROUTE(fromField='value_changed',fromNode='cm12p',toField='set_diffuseColor',toNode='m12'),
    ROUTE(fromField='fraction_changed',fromNode='cm',toField='set_fraction',toNode='cm11p'),
    ROUTE(fromField='value_changed',fromNode='cm11p',toField='set_diffuseColor',toNode='m11'),
    ROUTE(fromField='cycleTime',fromNode='refresh',toField='set_float',toNode='writing'),
    ROUTE(fromField='string_changed',fromNode='writing',toField='set_string',toNode='text')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WallClock.py")
