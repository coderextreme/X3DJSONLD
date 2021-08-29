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
    meta(content='FullTrack.x3d',name='title'),
    meta(content='AAV tracks and road wheels - place mouse over geometry to make the tracks move.',name='description'),
    meta(content='William Geissler, Jeffrey Weekley',name='creator'),
    meta(content='31 January 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/FullTrack.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["AAAV Track & Road Wheels"],title='Track'),
    Transform(translation=(3.5,0,4.8),
      children=[
      Group(DEF='Track',
        children=[
        Transform(DEF='Horizontal',
          children=[
          Group(DEF='SingleTrack',
            children=[
            Shape(
              geometry=Box(size=(1,.05,.3)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.4,0.4)))),
            Transform(translation=(-0.25,-0.05,0.0),
              children=[
              Shape(
                geometry=Box(size=(.35,.05,.2)),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.2,.2))))]),
            Transform(translation=(0.25,-0.05,0.0),
              children=[
              Shape(
                geometry=Box(size=(.35,.05,.2)),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.2,.2))))]),
            Transform(translation=(0.0,0.075,0.0),
              children=[
              Shape(
                geometry=Box(size=(.1,.1,.4)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.6,0.6,0.6))))]),
            Transform(rotation=(0,0,1,1.57),translation=(0.0,0.075,0.2),
              children=[
              Shape(
                geometry=Cylinder(height=.12,radius=.06),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.4,0.4,0.4))))])]),
          Transform(translation=(0.0,0.0,-0.4),
            children=[
            Group(USE='SingleTrack')]),
          Transform(translation=(0.0,0.0,-0.8),
            children=[
            Group(USE='SingleTrack')]),
          Transform(translation=(0.0,0.0,-1.2),
            children=[
            Group(USE='SingleTrack')]),
          #  CLOCK TimeSensor node controls speed of all track movement. 
          TimeSensor(DEF='CLOCK',cycleInterval=.5,enabled=False,loop=True),
          #  TRACKPATH node moves SingleTrack along flat path. 
          PositionInterpolator(DEF='TRACKPATH',key=[0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.99],keyValue=[(0.0,0.0,0.00),(0.0,0.0,-0.04),(0.0,0.0,-0.08),(0.0,0.0,-0.12),(0.0,0.0,-0.16),(0.0,0.0,-0.20),(0.0,0.0,-0.24),(0.0,0.0,-0.28),(0.0,0.0,-0.32),(0.0,0.0,-0.36),(0.0,0.0,-0.40)]),
          Transform(translation=(0.0,0.0,-1.6),
            children=[
            Group(USE='SingleTrack')]),
          Transform(translation=(0.0,0.0,-2.0),
            children=[
            Group(USE='SingleTrack')])]),
        Transform(translation=(0.0,0.0,-2.4),
          children=[
          Transform(USE='Horizontal')]),
        Transform(translation=(0.0,0.0,-4.8),
          children=[
          Transform(USE='Horizontal')]),
        Transform(translation=(0.0,0.0,-7.2),
          children=[
          Transform(USE='Horizontal')]),
        Transform(DEF='Pivot1',center=(0,1,0),translation=(0.0,0.0,-9.5),
          children=[
          Group(USE='SingleTrack'),
          #  PIVOTPATH1 nodes moves SingleTrack along 30 deg curve. 
          OrientationInterpolator(DEF='PIVOTPATH1',key=[0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.99],keyValue=[(1,0,0,0.000),(1,0,0,0.052),(1,0,0,0.104),(1,0,0,0.156),(1,0,0,0.208),(1,0,0,0.260),(1,0,0,0.312),(1,0,0,0.364),(1,0,0,0.416),(1,0,0,0.468),(1,0,0,0.520)])]),
        Transform(DEF='Pivot2',center=(0,1,0),
          children=[
          Group(USE='SingleTrack'),
          #  PIVOTPATH2 nodes moves SingleTrack along -30 deg curve. 
          OrientationInterpolator(DEF='PIVOTPATH2',key=[0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.99],keyValue=[(1,0,0,-0.520),(1,0,0,-0.468),(1,0,0,-0.416),(1,0,0,-0.364),(1,0,0,-0.312),(1,0,0,-0.260),(1,0,0,-0.208),(1,0,0,-0.156),(1,0,0,-0.104),(1,0,0,-0.052),(1,0,0,0.0)])]),
        Transform(DEF='Pivot2High',center=(0,1,0),translation=(0,0.125,1.5),
          children=[
          Group(DEF='CircleTrack',
            children=[
            Transform(rotation=(1,0,0,-0.524),translation=(0.0,0.307,0.4),
              children=[
              Group(USE='SingleTrack')]),
            Transform(rotation=(1,0,0,-1.05),translation=(0.0,0.6,0.69),
              children=[
              Group(USE='SingleTrack')]),
            Transform(rotation=(1,0,0,-1.57),translation=(0.0,1.0,0.8),
              children=[
              Group(USE='SingleTrack')]),
            Transform(rotation=(1,0,0,-2.09),translation=(0.0,1.4,0.69),
              children=[
              Group(USE='SingleTrack')]),
            Transform(rotation=(1,0,0,-2.62),translation=(0.0,1.69,0.4),
              children=[
              Group(USE='SingleTrack')]),
            Transform(rotation=(1,0,0,-3.14),translation=(0.0,1.8,0.0),
              children=[
              Group(USE='SingleTrack')])])]),
        #  Runs the track around the rear wheel 
        Transform(DEF='Pivot1High',center=(0,1,0),translation=(0,0.25,-11),
          children=[
          Transform(rotation=(0,1,0,3.14),
            children=[
            Group(USE='CircleTrack')])]),
        Transform(rotation=(0,0,1,-1.57),scale=(0.7,0.7,0.7),translation=(0,0.7,0),
          children=[
          Transform(DEF='RoadWheel',
            children=[
            Group(
              children=[
              Shape(DEF='Hub',
                geometry=Cylinder(height=0.4,radius=.15),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.2,0)))),
              Shape(DEF='Wheel',
                geometry=Cylinder(height=.1,radius=0.9,side=False),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.1,0.2,0.05)))),
              Shape(DEF='Rim',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.2,0))),
                geometry=Extrusion(ccw=False,creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,0.38),(0.71,0.71),(0.38,0.92),(0.00,1.00),(-0.38,0.92),(-0.71,0.71),(-0.92,0.38),(-1.00,0.00),(-0.92,-0.38),(-0.71,-0.71),(-0.38,-0.92),(0.00,-1.00),(0.38,-0.92),(0.71,-0.71),(0.92,-0.38),(1.00,0.00),(0.80,0.00),(0.74,-0.31),(0.57,-0.57),(0.31,-0.74),(0.00,-0.80),(-0.31,-0.74),(-0.57,-0.57),(-0.74,-0.31),(-0.80,0.00),(-0.74,0.31),(-0.57,0.57),(-0.31,0.74),(0.00,0.80),(0.31,0.74),(0.57,0.57),(0.74,0.31),(0.80,0.00)],spine=[(0.0,-0.2,0.0),(0.0,0.2,0.0)]))]),
            #  WHEELPATH node rotates RoadWheel 66 deg. 
            OrientationInterpolator(DEF='WHEELPATH',key=[0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.99],keyValue=[(0,1,0,0.000),(0,1,0,1.115),(0,1,0,1.23),(0,1,0,1.345),(0,1,0,1.46),(0,1,0,1.575),(0,1,0,1.690),(0,1,0,1.805),(0,1,0,1.92),(0,1,0,2.035),(0,1,0,2.15)])])]),
        Transform(DEF='RoadWheels',
          children=[
          Group(
            children=[
            Transform(rotation=(0,0,1,-1.57),scale=(0.7,0.7,0.7),translation=(0,0.7,-1.6),
              children=[
              Transform(USE='RoadWheel')]),
            Transform(rotation=(0,0,1,-1.57),scale=(0.7,0.7,0.7),translation=(0,0.7,-3.2),
              children=[
              Transform(USE='RoadWheel')]),
            Transform(rotation=(0,0,1,-1.57),scale=(0.7,0.7,0.7),translation=(0,0.7,-4.8),
              children=[
              Transform(USE='RoadWheel')]),
            Transform(rotation=(0,0,1,-1.57),scale=(0.7,0.7,0.7),translation=(0,0.7,-6.4),
              children=[
              Transform(USE='RoadWheel')]),
            Transform(rotation=(0,0,1,-1.57),scale=(0.7,0.7,0.7),translation=(0,0.7,-8.0),
              children=[
              Transform(USE='RoadWheel')]),
            Transform(rotation=(0,0,1,-1.57),scale=(0.7,0.7,0.7),translation=(0,0.7,-9.6),
              children=[
              Transform(USE='RoadWheel')]),
            Transform(rotation=(0,0,1,-1.57),scale=(0.7,0.7,0.7),translation=(0,1.125,1.5),
              children=[
              Transform(USE='RoadWheel')]),
            Transform(rotation=(0,0,1,-1.57),scale=(0.7,0.7,0.7),translation=(0,1.25,-11),
              children=[
              Transform(USE='RoadWheel')]),
            Transform(rotation=(0,0,1,-1.57),scale=(0.375,0.375,0.375),translation=(0,1.45,-8.825),
              children=[
              Transform(USE='RoadWheel')]),
            Transform(rotation=(0,0,1,-1.57),scale=(0.375,0.375,0.375),translation=(0,1.45,-4),
              children=[
              Transform(USE='RoadWheel')])])]),
        #  TrackSensor node moves Track node if cursor over shapes. 
        TouchSensor(DEF='TrackSensor',description='point to activate'),
        Transform(DEF='ShortHorizontal',
          children=[
          Group(DEF='ShortSingleTrack',
            children=[
            Transform(translation=(-0.25,-0.05,0.0),
              children=[
              Shape(
                geometry=Box(size=(.35,.05,.2)),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.2,.2))))]),
            Transform(translation=(0.25,-0.05,0.0),
              children=[
              Shape(
                geometry=Box(size=(.35,.05,.2)),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.2,.2))))]),
            Transform(
              children=[
              Shape(
                geometry=Box(size=(1,.05,.3)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.4,0.4,0.4))))]),
            Transform(translation=(0.0,0.075,0.0),
              children=[
              Shape(
                geometry=Box(size=(.1,.1,.4)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.6,0.6,0.6))))]),
            Transform(rotation=(0,0,1,1.57),translation=(0.0,0.075,0.2),
              children=[
              Shape(
                geometry=Cylinder(height=.12,radius=.06),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.4,0.4,0.4))))])]),
          #  CLOCK TimeSensor node controls speed of all track movement. 
          TimeSensor(DEF='CLOCK2',cycleInterval=.5,enabled=False,loop=True),
          #  TRACKPATH node moves SingleTrack along flat path. 
          PositionInterpolator(DEF='ShortTRACKPATH',key=[0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.99],keyValue=[(0.0,0.0,0.00),(0.0,0.0,-0.04),(0.0,0.0,-0.08),(0.0,0.0,-0.12),(0.0,0.0,-0.16),(0.0,0.0,-0.20),(0.0,0.0,-0.24),(0.0,0.0,-0.28),(0.0,0.0,-0.32),(0.0,0.0,-0.36),(0.0,0.0,-0.40)]),
          Transform(translation=(0,0,-0.4),
            children=[
            Group(USE='ShortSingleTrack')]),
          Transform(translation=(0.0,0.0,-0.8),
            children=[
            Group(USE='ShortSingleTrack')]),
          Transform(translation=(0.0,0.0,-1.2),
            children=[
            Group(USE='ShortSingleTrack')])]),
        Transform(DEF='Front',rotation=(1,0,0,6.02),translation=(0,0.5,2.0),
          children=[
          Transform(USE='ShortHorizontal')]),
        Transform(DEF='Rear',rotation=(-1,0,0,6.02),translation=(0,.08,-9.9),
          children=[
          Transform(USE='ShortHorizontal')]),
        Group(DEF='TopOfTracks',
          children=[
          Transform(translation=(0,1.875,-1.335),
            children=[
            Transform(rotation=(1,0,0,3.14),translation=(0.0,0,-6.8),
              children=[
              Transform(USE='Horizontal')]),
            Transform(rotation=(1,0,0,3.14),translation=(0.0,0,-4.4),
              children=[
              Transform(USE='Horizontal')]),
            Transform(rotation=(1,0,0,3.14),translation=(0.0,0,-2.0),
              children=[
              Transform(USE='Horizontal')]),
            Transform(rotation=(1,0,0,3.14),translation=(0.0,0,-1.58),
              children=[
              Transform(USE='Horizontal')]),
            Transform(rotation=(1,0,0,3.14),translation=(0.0,0,-9.2),
              children=[
              Transform(USE='Horizontal')]),
            Transform(rotation=(1,0,0,3.14),translation=(0.0,0,0.4),
              children=[
              Transform(USE='ShortHorizontal')]),
            Transform(rotation=(1,0,0,3.14),translation=(0,0,2),
              children=[
              Transform(DEF='LastSingleTrack',translation=(0,0,2),
                children=[
                Group(USE='SingleTrack')]),
              PositionInterpolator(DEF='LastSingleTrackPath',key=[0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.99],keyValue=[(0.0,0.0,0.00),(0.0,0.0,-0.04),(0.0,0.0,-0.08),(0.0,0.0,-0.12),(0.0,0.0,-0.16),(0.0,0.0,-0.20),(0.0,0.0,-0.24),(0.0,0.0,-0.28),(0.0,0.0,-0.32),(0.0,0.0,-0.36),(0.0,0.0,-0.40)]),
              TimeSensor(DEF='CLOCK3',cycleInterval=.5,enabled=False,loop=True)])])])])]),
    Transform(translation=(-4.75,0,4.8),
      children=[
      Group(USE='Track')]),
    #  TrackSensor Route node sets path from TouchSensor to CLOCK. 
    ROUTE(fromField='isOver',fromNode='TrackSensor',toField='set_enabled',toNode='CLOCK'),
    #  CLOCK Route nodes sets path from TimeSensor to other ROUTES. 
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='TRACKPATH'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='PIVOTPATH1'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='PIVOTPATH2'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='WHEELPATH'),
    #  PATH ROUTE nodes path from TimeSensor to moving shapes. 
    ROUTE(fromField='value_changed',fromNode='TRACKPATH',toField='set_translation',toNode='Horizontal'),
    ROUTE(fromField='value_changed',fromNode='PIVOTPATH1',toField='set_rotation',toNode='Pivot1'),
    ROUTE(fromField='value_changed',fromNode='PIVOTPATH1',toField='set_rotation',toNode='Pivot1High'),
    ROUTE(fromField='value_changed',fromNode='PIVOTPATH2',toField='set_rotation',toNode='Pivot2'),
    ROUTE(fromField='value_changed',fromNode='PIVOTPATH2',toField='set_rotation',toNode='Pivot2High'),
    ROUTE(fromField='value_changed',fromNode='WHEELPATH',toField='set_rotation',toNode='RoadWheel'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK2',toField='set_fraction',toNode='ShortTRACKPATH'),
    ROUTE(fromField='value_changed',fromNode='ShortTRACKPATH',toField='set_translation',toNode='ShortHorizontal'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='ShortTRACKPATH'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK3',toField='set_fraction',toNode='LastSingleTrackPath'),
    ROUTE(fromField='value_changed',fromNode='LastSingleTrackPath',toField='set_translation',toNode='LastSingleTrack'),
    ROUTE(fromField='isOver',fromNode='TrackSensor',toField='set_enabled',toNode='CLOCK2'),
    ROUTE(fromField='isOver',fromNode='TrackSensor',toField='set_enabled',toNode='CLOCK3')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FullTrack.py")
