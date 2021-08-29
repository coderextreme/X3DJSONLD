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
    meta(content='LaserTargetTrack.x3d',name='title'),
    meta(content='A metal track that the laser target is mounted on.',name='description'),
    meta(content='Brian Kibel',name='creator'),
    meta(content='4 September 2006',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Space/SatelliteLab/LaserTargetTrack.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    Group(DEF='TrackRails',
      children=[
      Transform(translation=(0,2.2,0),
        children=[
        Shape(DEF='RailShape',
          geometry=Box(size=(8.5,.15,.3)),
          appearance=Appearance(
            material=Material(diffuseColor=(.8,.6,0))))]),
      Transform(translation=(0,2.325,0),
        children=[
        Shape(DEF='RailShape2',
          geometry=Box(size=(8.2,.1,.3)),
          appearance=Appearance(
            material=Material(diffuseColor=(.8,.8,.8))))]),
      Transform(scale=(.8,2.5,.8),translation=(0,2,0),
        children=[
        Shape(USE='RailShape')])]),
    Group(DEF='TrackSupport',
      children=[
      Transform(scale=(.45,.45,.45),translation=(-3.25,0,0),
        children=[
        Inline(DEF='TargetTrackSupport',url=["LaserTargetTrackSupport.x3d","LaserTargetTrackSupport.wrl"])]),
      Transform(scale=(.45,.45,.45),translation=(-2.1625,0,0),
        children=[
        Inline(USE='TargetTrackSupport')]),
      Transform(scale=(.45,.45,.45),translation=(-1.085,0,0),
        children=[
        Inline(USE='TargetTrackSupport')]),
      Transform(scale=(.45,.45,.45),
        children=[
        Inline(USE='TargetTrackSupport')]),
      Transform(scale=(.45,.45,.45),translation=(1.085,0,0),
        children=[
        Inline(USE='TargetTrackSupport')]),
      Transform(scale=(.45,.45,.45),translation=(2.1625,0,0),
        children=[
        Inline(USE='TargetTrackSupport')]),
      Transform(scale=(.45,.45,.45),translation=(3.25,0,0),
        children=[
        Inline(USE='TargetTrackSupport')])]),
    Group(DEF='MovingTarget',
      children=[
      Transform(DEF='TargetPosition',
        children=[
        Transform(DEF='TargetStartPosition',translation=(0,3.3,.16),
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4],solid=False,
              coord=Coordinate(point=[(-.5,.5,0),(.5,.5,0),(.5,-.5,0),(-.5,-.5,0),(-.5,.5,0)]))),
          Transform(scale=(.1,.1,.1),translation=(0,0,.005),
            children=[
            Shape(
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4],solid=False,
                coord=Coordinate(point=[(-.5,.5,0),(.5,.5,0),(.5,-.5,0),(-.5,-.5,0),(-.5,.5,0)])),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,0))))]),
          Transform(translation=(0,-.3,-.2),
            children=[
            Shape(
              geometry=Box(size=(.2,1.3,.3)),
              appearance=Appearance(
                material=Material(diffuseColor=(.8,.8,.8))))])])]),
      PlaneSensor(DEF='TargetPlaneSensor',description='Drag Target stays in X plane',maxPosition=(4,0),minPosition=(-4,0)),
      ROUTE(fromField='translation_changed',fromNode='TargetPlaneSensor',toField='set_translation',toNode='TargetPosition')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LaserTargetTrack.py")
