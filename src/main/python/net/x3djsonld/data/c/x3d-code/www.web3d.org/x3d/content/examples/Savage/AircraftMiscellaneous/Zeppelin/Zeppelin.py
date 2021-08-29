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
    meta(content='Zeppelin.x3d',name='title'),
    meta(content='SELCUK OZTURK',name='creator'),
    meta(content='A simple Zeppelin as an introductory course final project.',name='description'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='10 August 2002',name='created'),
    meta(content='12 October 2002',name='translated'),
    meta(content='27 November 2015',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Zeppelin.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Zeppelin Left',position=(0.0,-2.0,15.0)),
    Viewpoint(description='Zeppelin Right',orientation=(0.0,1.0,0.0,3.14),position=(0.0,-2.0,-15.0)),
    Viewpoint(description='Zeppelin Back',orientation=(0.0,1.0,0.0,1.57),position=(6.0,-1.0,0.0)),
    Viewpoint(description='MountainView',orientation=(1.0,0.0,0.0,-1.57),position=(0.0,10.0,0.0)),
    Viewpoint(description='Zeppelin Front',orientation=(0.0,1.0,0.0,-1.57),position=(-6.0,0.0,0.0)),
    Transform(DEF='ZEPPLIN_ROUTE',center=(0.0,0.0,-10.0),rotation=(0.0,0.0,1.0,-0.1),
      children=[
      Group(
        children=[
        Transform(center=(-2.0,0.0,-2.0),
          children=[
          Transform(scale=(3.5,0.8,0.7),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Sphere(),),
            TouchSensor(DEF='MyTouchSensor',description='touch to activate'),
            TimeSensor(DEF='CLOCK',cycleInterval=25.0),
            OrientationInterpolator(DEF='CubePathInterpolator',key=[0.0,0.5,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,-3.14),(0.0,1.0,0.0,-6.28)])])]),
        Transform(scale=(0.2,0.2,0.2),translation=(-1.0,-0.95,0.3),
          children=[
          Inline(url=["Cabin.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Cabin.x3d","Cabin.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Cabin.wrl"])]),
        Transform(translation=(2.75,0.0,0.0),
          children=[
          Transform(rotation=(0.0,0.0,1.0,1.57),scale=(0.4,0.4,0.03),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cone(bottomRadius=1.5))]),
          Transform(rotation=(0.0,0.0,1.0,1.57),scale=(0.03,0.4,0.4),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cone(bottomRadius=1.5))])]),
        Transform(scale=(0.05,0.05,0.05),translation=(-2.5,-0.65,0.15),
          children=[
          Inline(DEF='ForeJet',url=["ForeJet.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/ForeJet.x3d","ForeJet.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/ForeJet.wrl"])]),
        Transform(scale=(0.05,0.05,0.05),translation=(-2.5,-0.65,-0.15),
          children=[
          Inline(USE='ForeJet')]),
        Transform(rotation=(0.0,0.0,1.0,1.57),scale=(0.03,0.4,0.4),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cone(bottomRadius=3.0))])])]),
    Transform(translation=(-200.0,-5.0,-500.0),
      children=[
      Inline(url=["Sun.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Sun.x3d","Sun.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Sun.wrl"])]),
    Transform(translation=(0.0,-60.0,0.0),
      children=[
      Inline(url=["MountainStraight.x3d","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainStraight.x3d","MountainStraight.wrl","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainStraight.wrl"])]),
    Background(skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
    Fog(visibilityRange=100.0)])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Zeppelin.py")
