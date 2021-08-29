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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='GuidedTour.x3d',name='title'),
    meta(content='X3D encodings example: provides control of the viewpoint through use of a script. This is useful for things such as guided tours, merry-go-round rides, and transportation devices such as buses and elevators. These next two examples show a couple of ways to use this feature. This example is a simple guided tour through the world. Upon entry, a guide orb hovers in front of the viewer. Click on this and a tour through the world begins. The orb follows the user around on his tour. A ProximitySensor ensures that the tour is started only if the user is close to the initial starting point. Note that this is done without scripts thanks to the touchTime output of the TouchSensor.',name='description'),
    meta(content='Don Brutzman and Joe Williams',name='creator'),
    meta(content='1 June 2002',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, Annex C.17 Guided tour',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/examples.html#GuidedTour',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/GuidedTour.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='GuidedTour.x3d'),
    Group(
      children=[
      Transform(translation=(0.0,-1.0,0.0),
        children=[
        Shape(
          geometry=Box(size=(30.0,0.2,30.0)),
          appearance=Appearance(
            material=Material(),))]),
      Transform(translation=(-1.0,0.0,0.0),
        children=[
        Shape(
          geometry=Cone(),
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.8,0.0))))]),
      Transform(translation=(1.0,0.0,0.0),
        children=[
        Shape(
          geometry=Cylinder(),
          appearance=Appearance(
            material=Material(diffuseColor=(0.0,0.2,0.7))))]),
      Transform(DEF='GuideTransform',
        children=[
        Viewpoint(DEF='TourGuide',description='Tour Guide',jump=False),
        ProximitySensor(DEF='ProxSensor',size=(50.0,50.0,50.0)),
        TouchSensor(DEF='StartTour',description='click to start guided tour'),
        Transform(translation=(0.6,0.4,8.0),
          children=[
          Shape(
            geometry=Sphere(radius=0.2),
            appearance=Appearance(
              material=Material(diffuseColor=(1.0,0.6,0.0))))])])]),
    PositionInterpolator(DEF='GuidePI',key=[0.0,0.2,0.3,0.5,0.6,0.8,0.9,1.0],keyValue=[(0.0,0.0,0.0),(0.0,0.0,-5.0),(2.0,0.0,-5.0),(2.0,6.0,-15.0),(-4.0,6.0,-15.0),(-4.0,0.0,-5.0),(0.0,0.0,-5.0),(0.0,0.0,0.0)]),
    OrientationInterpolator(DEF='GuideRI',key=[0.0,0.2,0.3,0.5,0.6,0.8,0.9,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,1.2),(0.0,1.0,0.0,3.3),(0.0,1.0,0.0,3.5),(0.0,1.0,0.0,5.0),(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,0.0)]),
    TimeSensor(DEF='TS',cycleInterval=30.0),
    ROUTE(fromField='isActive',fromNode='ProxSensor',toField='enabled',toNode='StartTour'),
    ROUTE(fromField='touchTime',fromNode='StartTour',toField='startTime',toNode='TS'),
    ROUTE(fromField='isActive',fromNode='TS',toField='set_bind',toNode='TourGuide'),
    ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='GuidePI'),
    ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='GuideRI'),
    ROUTE(fromField='value_changed',fromNode='GuidePI',toField='translation',toNode='GuideTransform'),
    ROUTE(fromField='value_changed',fromNode='GuideRI',toField='rotation',toNode='GuideTransform')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GuidedTour.py")
