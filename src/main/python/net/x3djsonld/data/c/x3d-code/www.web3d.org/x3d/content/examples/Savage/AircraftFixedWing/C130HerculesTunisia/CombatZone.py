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
    meta(content='CombatZone.x3d',name='title'),
    meta(content='A simple combat zone to test the aircraft.',name='description'),
    meta(content='Maj. Mounir Sidhom, Tunisian Air Force',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='5 August 2004',name='created'),
    meta(content='13 August 2004',name='translated'),
    meta(content='22 October 2018',name='modified'),
    meta(content='char.png',name='drawing'),
    meta(content='fleche.png',name='drawing'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/CombatZone.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(DEF='MAIN_VP',description='combat zone, main viewpoint',orientation=(0.0,1.0,0.1,-0.47),position=(-9.5,3.0,30.0)),
    Viewpoint(DEF='TURN_VP',description='turning point',orientation=(0.0,1.0,0.0,1.57),position=(35.0,3.5,12.5)),
    Viewpoint(DEF='LIGHT_VP',description='light',orientation=(0.5,1.0,0.0,0.5),position=(35.0,2.0,30.0)),
    SpotLight(color=(0.5,0.7,0.0),direction=(-1.0,-0.5,-0.5),intensity=0.5,location=(-8.0,5.0,15.0)),
    Transform(DEF='ELEVATIONS',translation=(-15.0,0.0,0.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.4,0.3))),
        geometry=ElevationGrid(creaseAngle=0.785,height=[1.1,1.2,1.4,1.5,1.9,2.0,1.9,1.7,1.5,1.1,1.7,2.1,2.2,2.6,2.9,3.0,3.5,3.2,3.1,2.5,2.4,2.2,2.0,2.0,2.1,1.8,1.7,1.5,2.0,2.4,2.9,3.3,3.8,4.0,4.2,4.4,4.8,4.9,5.4,5.5,4.0,4.2,3.5,2.5,2.0,3.0,3.5,4.0,4.6,5.2,5.5,4.5,3.3,2.5,4.0,2.0,2.4,2.9,3.3,3.8,4.0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],xDimension=60,zDimension=28)),
      Transform(translation=(0.0,0.0,5.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.7,0.4,0.3))),
          geometry=ElevationGrid(creaseAngle=0.785,height=[0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.5,0.2,0.5,0.0,0.0,0.0,0.5,0.0,0.0,0.0,0.0,0.0,0.0,2.5,0.5,0.0,0.0,0.0,0.5,0.2,0.0,0.0,0.0,0.0,0.5,0.5,3.0,1.0,0.5,0.0,1.0,0.1,0.0,0.0,0.0,0.0,0.5,2.1,4.5,2.5,1.0,1.5,0.5,0.4,0.0,0.0,1.0,0.1,3.5,4.5,5.5,3.5,3.0,1.5,0.0,0.1,0.0,0.0,0.5,0.0,2.5,2.7,3.5,4.1,2.0,0.7,0.0,0.1,0.0,0.0,0.0,0.0,0.5,1.5,1.0,2.0,3.0,1.4,0.0,0.5,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2.0,1.3,0.0,0.1,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.5,0.0,0.0,0.1,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],xDimension=12,xSpacing=0.8,zDimension=13,zSpacing=0.8))]),
      Transform(translation=(20,0.0,10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.7,0.4,0.3))),
          geometry=ElevationGrid(creaseAngle=1.57,height=[0.0,0.1,0.0,0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.5,0.0,0.0,0.1,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.5,0.2,0.5,0.0,0.0,0.0,0.5,0.0,0.0,0.0,0.0,0.0,0.0,1.9,0.5,0.0,0.0,0.0,0.5,0.2,0.0,0.0,0.0,0.0,0.5,0.5,1.5,1.0,0.5,0.0,1.0,0.1,0.0,0.0,0.0,0.0,0.5,1.7,1.5,2.1,1.0,1.5,0.5,0.4,0.0,0.0,1.0,0.1,2.3,2.5,2.2,2.7,2.6,1.5,0.0,0.1,0.0,0.0,0.5,0.0,2.5,2.7,2.5,2.2,2.0,0.7,0.0,0.1,0.0,0.0,0.0,0.0,0.5,1.5,1.0,2.0,2.3,1.4,0.0,0.5,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,2.0,1.3,0.0,0.1,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.5,0.0,0.0,0.1,0.0,0.0],xDimension=12,zDimension=16))])]),
    Transform(DEF='CBT',scale=(0.5,0.5,0.5),translation=(-8.0,0.0,12.0),
      children=[
      Group(DEF='WHEEL_G',
        children=[
        Transform(rotation=(1.0,0.0,0.0,-1.57),translation=(0.0,0.4,6.0),
          children=[
          Transform(DEF='ROUET',
            children=[
            Shape(DEF='ROUE',
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.4,0.0)),
                texture=ImageTexture(url=["croix.png","https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/croix.png"])),
              geometry=Cylinder(height=0.4,radius=0.4)),
            TimeSensor(DEF='CLOCK2',cycleInterval=2.0,loop=True),
            OrientationInterpolator(DEF='ROUEPATH',key=[0.0,0.5,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)])])]),
        Transform(rotation=(1.0,0.0,0.0,-1.57),translation=(4.0,0.4,6.0),
          children=[
          Transform(USE='ROUET')]),
        Transform(rotation=(1.0,0.0,0.0,-1.57),translation=(2.0,0.4,6.0),
          children=[
          Transform(USE='ROUET')])]),
      Transform(DEF='WHELL_D',translation=(0.0,0.0,-2.0),
        children=[
        Group(USE='WHEEL_G')]),
      Transform(DEF='BODY',translation=(2.0,1.1,5.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.5,0.1))),
          geometry=Box(size=(5.4,0.8,2.5)))]),
      Transform(translation=(2.0,1.5,5.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.35,0.4,0.2))),
          geometry=Cylinder(height=1.0,radius=0.9))]),
      Transform(DEF='CANON',rotation=(0.0,0.0,1.0,-1.25),translation=(3.4,1.9,5.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.35,0.37,0.2),specularColor=(0.5,0.5,0.0))),
          geometry=Cylinder(radius=0.15)),
        Transform(translation=(0.0,1.5,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.35,0.37,0.2),specularColor=(0.5,0.5,0.0))),
            geometry=Cylinder(radius=0.1))])]),
      Transform(DEF='TOP_GATE',translation=(2.0,1.8,5.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.3,0.37,0.15),specularColor=(0.5,0.5,0.0))),
          geometry=Sphere(radius=0.5))])]),
    TimeSensor(DEF='CLOCK',cycleInterval=20.0,loop=True),
    PositionInterpolator(DEF='CbtPath',key=[0.0,0.45,0.55,1.0],keyValue=[(-10.0,0.0,12),(15.0,0.0,12),(15.0,0.0,8),(-12.0,0.0,8)]),
    OrientationInterpolator(DEF='OrientationPath',key=[0.0,0.45,0.55],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14)]),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='CbtPath'),
    ROUTE(fromField='value_changed',fromNode='CbtPath',toField='set_translation',toNode='CBT'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='OrientationPath'),
    ROUTE(fromField='value_changed',fromNode='OrientationPath',toField='set_rotation',toNode='CBT'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK2',toField='set_fraction',toNode='ROUEPATH'),
    ROUTE(fromField='value_changed',fromNode='ROUEPATH',toField='set_rotation',toNode='ROUET'),
    Anchor(description='README gives description in how to use this scene',url=["readme.htm","https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/readme.htm"],
      children=[
      Group(
        children=[
        Transform(rotation=(0.0,1.0,0.0,-1.57),scale=(0.5,0.5,0.5),translation=(25.05,1.5,12.25),
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(url=["fleche.png","https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/fleche.png"])),
            geometry=IndexedFaceSet(coordIndex=[5,6,7,8,9,-1,0,4,3,2,1,-1,7,6,1,2,-1,7,2,3,8,-1,8,3,4,9,-1,9,4,0,5,-1,5,0,1,6,-1],
              coord=Coordinate(point=[(0.0,0.0,0.0),(1.0,0.0,0.0),(1.0,1.0,0.0),(0.0,1.0,0.0),(-0.7,0.5,0.0),(0.0,0.0,0.2),(1.0,0.0,0.2),(1.0,1.0,0.2),(0.0,1.0,0.2),(-0.7,0.5,0.2)])))]),
        Transform(rotation=(1.0,0.0,0.0,1.57),scale=(0.5,0.5,0.5),translation=(25.0,1.0,12.5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.15,0.2),emissiveColor=(0.3,0.3,0.4))),
            geometry=Box(size=(0.2,0.2,2.0)))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CombatZone.py")
