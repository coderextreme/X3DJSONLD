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
    meta(content='HotAirBalloon.x3d',name='title'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='Hot Air Balloon that fires and lifts off from the pad. The balloon is built by scaling a circle around a straight spline.',name='description'),
    meta(content='3 September 2000',name='created'),
    meta(content='1 August 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftMiscellaneous/Balloon/HotAirBalloon.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Computational cost of Extrusion compared to IndexedFaceSet: quicker to download, takes time to calculate polygonal faces and normals during initial loading, equally fast at run time. 
    #  Authoring capabilities of Extrusion compared to IndexedFaceSet: can be more complicated to express, but also can provide great detail with much less effort. 
    #  First position and rotate viewpoint into positive-X-Y-Z octant using a Transform 
    children=[
    Transform(rotation=(0,1,0,0.758),translation=(10,5,0),
      children=[
      Viewpoint(description='Wide Angle',orientation=(1,0,0,-0.3),position=(0,10,25))]),
    Transform(DEF='Balloon',
      children=[
      Group(
        children=[
        Transform(translation=(0,-1,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(.8,.8,.8))),
            geometry=Box(size=(.85,.85,.85)))]),
        Transform(translation=(0,-.65,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(.8,.8,.8))),
            geometry=Cylinder(height=.7,radius=.2,top=False))]),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1))),
          geometry=Extrusion(beginCap=False,creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.6,.6),(1.0,1.0),(1.3,1.3),(1.5,1.5),(1.7,1.7),(1.9,1.9),(2.15,2.15),(2.35,2.35),(2.4,2.4),(2.32,2.32),(2.2,2.2),(1.85,1.85),(1.5,1.5),(0.4,0.4)],solid=False,spine=[(0.0,0.0,0.0),(0.0,0.4,0.0),(0.0,0.8,0.0),(0.0,1.2,0.0),(0.0,1.6,0.0),(0.0,2.0,0.0),(0.0,2.4,0.0),(0.0,2.8,0.0),(0.0,3.2,0.0),(0.0,3.6,0.0),(0.0,4.0,0.0),(0.0,4.4,0.0),(0.0,4.8,0.0),(0.0,5.2,0.0)])),
        Transform(
          children=[
          Group(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))),
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(.4,-.85,.4),(.45,0,.45)]))),
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))),
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(-.4,-.85,.4),(-.45,0,.45)]))),
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))),
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(.4,-.85,-.4),(.45,0,-.45)]))),
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))),
              geometry=IndexedLineSet(coordIndex=[0,1],
                coord=Coordinate(point=[(-.4,-.85,-.4),(-.45,0,-.45)])))])]),
        Transform(DEF='Fire',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(.8,.8,.0))),
            geometry=Cylinder(height=.7,radius=.18))])])]),
    Transform(translation=(0,-2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Box(size=(20,.1,20)))]),
    TimeSensor(DEF='FireClock',cycleInterval=4,loop=True),
    PositionInterpolator(DEF='FirePath',key=[0,.05,.7,.75],keyValue=[(0,-.7,0),(0,0,0),(0,0,0),(0,-.7,0)]),
    TimeSensor(DEF='BalloonClock',cycleInterval=20,loop=True),
    PositionInterpolator(DEF='BalloonPath',key=[0,.1,.15,.2,.25,.3,.5,1],keyValue=[(0,0,0),(0,0,0),(0,.5,0),(0,1,0),(0,2,0),(0,4,0),(0,12,0),(0,28,0)]),
    ROUTE(fromField='fraction_changed',fromNode='FireClock',toField='set_fraction',toNode='FirePath'),
    ROUTE(fromField='value_changed',fromNode='FirePath',toField='set_translation',toNode='Fire'),
    ROUTE(fromField='fraction_changed',fromNode='BalloonClock',toField='set_fraction',toNode='BalloonPath'),
    ROUTE(fromField='value_changed',fromNode='BalloonPath',toField='set_translation',toNode='Balloon')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HotAirBalloon.py")
