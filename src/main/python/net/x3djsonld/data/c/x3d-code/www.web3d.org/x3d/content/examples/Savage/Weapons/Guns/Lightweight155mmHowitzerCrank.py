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
    meta(content='Lightweight155mmHowitzerCrank.x3d',name='title'),
    meta(content='Lightweight 155mm Howitzer crank or rotation wheel.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='8 June 2001',name='created'),
    meta(content='29 September 2002',name='modified'),
    meta(content='Lightweight155mmHowitzer.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Guns/Lightweight155mmHowitzerCrank.x3d',name='identifier'),
    meta(content='Steering Wheel, Crank',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(position=(0,0,2.5)),
    LOD(DEF='Crank',range=[25],
      children=[
      Group(
        children=[
        Transform(DEF='CircularHandle',
          children=[
          Shape(
            geometry=Extrusion(beginCap=False,creaseAngle=1.57,crossSection=[(0.1,0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0,-0.1),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0,0.1),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0)],endCap=False,scale=[(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6)],spine=[(0.3,0,0),(0.276,-0.114,0),(0.213,-0.213,0),(0.114,-0.276,0),(0,-0.3,0),(-0.114,-0.276,0),(-0.213,-0.213,0),(-0.276,-0.114,0),(-0.3,0,0),(-0.276,0.114,0),(-0.213,0.213,0),(-0.114,0.276,0),(0,0.3,0),(0.114,0.276,0),(0.213,0.213,0),(0.276,0.114,0),(0.3,0,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,1))))]),
        Transform(DEF='CrankShaft',translation=(0,0,-0.05),
          children=[
          Transform(DEF='Shaft',rotation=(1,0,0,1.57),
            children=[
            Shape(
              geometry=Cylinder(height=0.02,radius=0.08),
              appearance=Appearance(
                material=Material(diffuseColor=(0,1,1))))]),
          Transform(DEF='Top',rotation=(1,0,0,1.57),translation=(0,0,-0.1),
            children=[
            Shape(
              geometry=Cylinder(height=0.2,radius=0.05),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,1))))]),
          Transform(DEF='TopBall',translation=(0,0,-0.01),
            children=[
            Shape(
              geometry=Sphere(radius=0.05),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,1))))])]),
        Transform(DEF='Struts',
          children=[
          Transform(DEF='StrutOne',rotation=(1,0,0,0.21),translation=(0,0.04,-0.05725),
            children=[
            Shape(
              geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.01,0),(0.0092,-0.0038),(0.0071,-0.0071),(0.0038,-0.0092),(0,-0.01),(-0.0038,-0.0092),(-0.0071,-0.0071),(-0.0092,-0.0038),(-0.01,0),(-0.0092,0.0038),(-0.0071,0.0071),(-0.0038,0.0092),(0,0.01),(0.0038,0.0092),(0.0071,0.0071),(0.0092,0.0038),(0.01,0)],scale=[(4,2),(2,2),(2,2),(2,2),(2,4)],spine=[(0,0,0),(0,0.125,0),(0,0.25,0),(0,0.255,0),(0,0.275,0)]),
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,0))))]),
          Transform(DEF='StrutTwo',rotation=(0,0,1,2.09),
            children=[
            Transform(USE='StrutOne')]),
          Transform(DEF='StrutThree',rotation=(0,0,-1,2.09),
            children=[
            Transform(USE='StrutOne')])])]),
      WorldInfo(info=["null node"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Lightweight155mmHowitzerCrank.py")
