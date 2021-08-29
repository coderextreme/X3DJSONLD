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
    meta(content='ForeJet.x3d',name='title'),
    meta(content='Selcuk OZTURK',name='creator'),
    meta(content='Zeppelin fore jet.',name='description'),
    meta(content='9 June 2002',name='created'),
    meta(content='12 January 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/ForeJet.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='2.0',name='version'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(scale=(2,0.5,0.5),
      children=[
      Viewpoint(description='ForeJet',orientation=(0,1,0,0.78),position=(5,0,15)),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Extrusion(beginCap=False,creaseAngle=0.7,crossSection=[(2,0),(1.93,0.52),(1.73,1),(1.41,1.41),(1,1.73),(0.52,1.93),(0,2),(-0.52,1.93),(-1,1.73),(-1.41,1.41),(-1.73,1),(-1.93,0.52),(-2,0),(-1.93,-0.52),(-1.73,-1),(-1.41,-1.41),(-1,-1.73),(-0.52,-1.93),(0,-2),(0.52,-1.93),(1,-1.73),(1.41,-1.41),(1.73,-1),(1.93,-0.52),(2,0)],endCap=False,scale=[(0.3,0.3),(1,1),(1,1),(0.7,0.7),(0.5,0.5),(1,1)],solid=False,spine=[(-2,0,0),(-1,0,0),(0,0,0),(0.1,0,0),(1,0,0),(2,0,0)]))]),
    Transform(translation=(-1.5,1,0),
      children=[
      Shape(DEF='CONNECTION',
        appearance=Appearance(
          material=Material(),),
        geometry=Extrusion(creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.1,0.1),(0.1,0.1),(0.1,0.1),(0.1,0.1),(0.1,0.1)],spine=[(0,4,2),(0,1,1),(0,0,0),(0,1,-1),(0,4,-2)]))]),
    Transform(translation=(1,0.6,0),
      children=[
      Shape(USE='CONNECTION')]),
    Transform(DEF='PALX',rotation=(0,1,0,1.57),scale=(0.23,0.23,0.23),translation=(3.5,0,0),
      children=[
      Transform(DEF='CENTER',rotation=(1,0,0,1.57),translation=(0,0,0.27),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Cone(bottomRadius=0.3,height=0.3))]),
      Transform(DEF='PAL1',
        children=[
        Transform(rotation=(1,0,0,0.45),scale=(2,0.6,0.1),translation=(1.7,0,0),
          children=[
          Shape(DEF='X',
            appearance=Appearance(
              material=Material(),),
            geometry=Sphere(),),
          TimeSensor(DEF='Clock',cycleInterval=0.3,loop=True),
          OrientationInterpolator(DEF='CyclePath',key=[0.0,0.5,1.0],keyValue=[(0,0,1,-0.0),(0,0,1,-3.14),(0,0,1,-6.28)])]),
        ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='CyclePath'),
        ROUTE(fromField='value_changed',fromNode='CyclePath',toField='set_rotation',toNode='PAL1')]),
      Transform(DEF='PAL3',
        children=[
        Transform(rotation=(0,1,0,0.45),scale=(0.6,2,0.1),translation=(0,1.7,0),
          children=[
          Shape(USE='X'),
          TimeSensor(DEF='Clock3',cycleInterval=0.3,loop=True),
          OrientationInterpolator(DEF='CyclePath3',key=[0.0,0.5,1.0],keyValue=[(0,0,1,-0.0),(0,0,1,-3.14),(0,0,1,-6.28)])]),
        ROUTE(fromField='fraction_changed',fromNode='Clock3',toField='set_fraction',toNode='CyclePath3'),
        ROUTE(fromField='value_changed',fromNode='CyclePath3',toField='set_rotation',toNode='PAL3')]),
      Transform(DEF='PAL4',
        children=[
        Transform(rotation=(0,1,0,-0.45),scale=(0.6,2,0.1),translation=(0,-1.7,0),
          children=[
          Shape(USE='X'),
          TimeSensor(DEF='Clock4',cycleInterval=0.3,loop=True),
          OrientationInterpolator(DEF='CyclePath4',key=[0.0,0.5,1.0],keyValue=[(0,0,1,-0.0),(0,0,1,-3.14),(0,0,1,-6.28)])]),
        ROUTE(fromField='fraction_changed',fromNode='Clock4',toField='set_fraction',toNode='CyclePath4'),
        ROUTE(fromField='value_changed',fromNode='CyclePath4',toField='set_rotation',toNode='PAL4')]),
      Transform(DEF='PAL2',
        children=[
        Transform(rotation=(1,0,0,-0.45),scale=(2,0.6,0.1),translation=(-1.7,0,0),
          children=[
          Shape(USE='X'),
          TimeSensor(DEF='Clock2',cycleInterval=0.3,loop=True),
          OrientationInterpolator(DEF='CyclePath2',key=[0.0,0.5,1.0],keyValue=[(0,0,1,-0.0),(0,0,1,-3.14),(0,0,1,-6.28)])]),
        ROUTE(fromField='fraction_changed',fromNode='Clock2',toField='set_fraction',toNode='CyclePath2'),
        ROUTE(fromField='value_changed',fromNode='CyclePath2',toField='set_rotation',toNode='PAL2')])]),
    #  Copied from 3DCafe sound repository 
    Sound(maxFront=40,
      source=AudioClip(description='Jet engine',loop=True,url=["JetEngine.wav","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/JetEngine.wav"]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ForeJet.py")
