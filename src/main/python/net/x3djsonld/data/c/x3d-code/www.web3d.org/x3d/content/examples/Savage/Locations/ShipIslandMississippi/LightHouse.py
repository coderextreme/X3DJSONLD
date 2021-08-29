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
    meta(content='LightHouse.x3d',name='title'),
    meta(content='Abandoned Lighthouse on Ship Island, Mississippi',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='1 November 2001',name='created'),
    meta(content='22 March 2002',name='modified'),
    meta(content='National Oceanographic and Atmospheric Administration map of Mississippi Sound and Approaches (Dauphin Island to Cat Island), published by the U.S Department of Commerce, 10 July 1999.',name='reference'),
    meta(content='Site surveyed during AUVFest 2001.',name='reference'),
    meta(content='*enter photo filename/url here*',name='photo'),
    meta(content='LighthouseModelShipIsland1.jpg',name='Image'),
    meta(content='LighthouseModelShipIsland2.gif',name='Image'),
    meta(content='Lighthouse is measured at 84 feet, converted to meters on a scale of one foot equals 0.305 meters.',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Locations/ShipIslandMississippi/LightHouse.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Light House',position=(0,25,75)),
    Background(skyColor=[(0.2,0.67,0.95)]),
    Group(DEF='Lighthouse',
      children=[
      Transform(scale=(0.305,0.305,0.305),
        children=[
        Transform(DEF='LightHouseWall',
          children=[
          Shape(
            geometry=IndexedFaceSet(ccw=False,coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(16,0,-16),(-16,0,-16),(-6,78,-6),(6,78,-6),(16,0,-16)])),
            appearance=Appearance(DEF='CapeCodeWhite',
              material=Material(diffuseColor=(0.8,0.85,0.85)))),
          Transform(DEF='Window',
            children=[
            Transform(rotation=(1,0,0,-0.14),translation=(0,40,11),
              children=[
              Shape(
                geometry=Box(size=(3,4,0.2)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.1,0.15,0.15))))])]),
          Transform(translation=(0,20,-2.587),
            children=[
            Transform(USE='Window')])]),
        Transform(DEF='WallTwo',rotation=(0,1,0,1.57),
          children=[
          Transform(USE='LightHouseWall')]),
        Transform(DEF='WallThree',rotation=(0,1,0,3.14),
          children=[
          Transform(USE='LightHouseWall')]),
        Transform(DEF='WallFour',rotation=(0,1,0,-1.57),
          children=[
          Transform(USE='LightHouseWall')]),
        Transform(DEF='UpperPlatform',translation=(0,78,0),
          children=[
          Transform(
            children=[
            Shape(
              geometry=Box(size=(15,0.66,15)),
              appearance=Appearance(DEF='CapeCodBlack',
                material=Material(diffuseColor=(0.1,0.25,0.3))))]),
          Transform(DEF='Railing',
            children=[
            Transform(DEF='TopRailing',translation=(0,4,7),
              children=[
              Shape(
                geometry=Box(size=(14,0.2,0.4)),
                appearance=Appearance(USE='CapeCodBlack'))]),
            Transform(translation=(-7,2.125,7),
              children=[
              Shape(
                geometry=Box(size=(0.2,4.25,0.4)),
                appearance=Appearance(USE='CapeCodBlack'))]),
            Transform(translation=(0,2.125,7),
              children=[
              Shape(
                geometry=Box(size=(0.2,4.25,0.4)),
                appearance=Appearance(USE='CapeCodBlack'))]),
            Transform(translation=(7,2.125,7),
              children=[
              Shape(
                geometry=Box(size=(0.2,4.25,0.4)),
                appearance=Appearance(USE='CapeCodBlack'))]),
            Transform(translation=(0,-3,0),
              children=[
              Transform(USE='TopRailing')])]),
          Transform(rotation=(0,1,0,1.57),
            children=[
            Transform(USE='Railing')]),
          Transform(rotation=(0,1,0,3.14),
            children=[
            Transform(USE='Railing')]),
          Transform(rotation=(0,1,0,-1.57),
            children=[
            Transform(USE='Railing')])]),
        Transform(DEF='LightRoom',translation=(0,78,0),
          children=[
          Transform(translation=(0,5,0),
            children=[
            Shape(
              geometry=Cylinder(bottom=False,height=6,radius=3,top=False),
              appearance=Appearance(
                material=Material(diffuseColor=(0.1,0.3,0.35),specularColor=(0.2,0.4,0.45),transparency=0.67)))]),
          Transform(translation=(0,1,0),
            children=[
            Shape(
              geometry=Box(size=(8,2,8)),
              appearance=Appearance(USE='CapeCodBlack'))]),
          Transform(translation=(0,8.5,0),
            children=[
            Shape(
              geometry=Cone(bottomRadius=4,height=1),
              appearance=Appearance(USE='CapeCodBlack'))]),
          Transform(translation=(0,9,0),
            children=[
            Shape(
              geometry=Box(size=(1,2.5,1)),
              appearance=Appearance(USE='CapeCodBlack'))])]),
        Transform(DEF='FrontDoorAndWindows',
          children=[
          Transform(translation=(0,8.5,16),
            children=[
            Shape(
              geometry=Box(size=(9,15,4)),
              appearance=Appearance(USE='CapeCodeWhite'))]),
          Transform(translation=(0,0.625,16),
            children=[
            Shape(
              geometry=Box(size=(12,1.5,6)),
              appearance=Appearance(USE='CapeCodeWhite'))]),
          Transform(translation=(0,7,18.25),
            children=[
            Shape(
              geometry=Box(size=(6,14,1)),
              appearance=Appearance(USE='CapeCodBlack'))]),
          Transform(rotation=(1,0,0,-0.14),translation=(8,12,14.45),
            children=[
            Transform(DEF='BottomWindow',
              children=[
              Shape(
                geometry=Box(size=(3,4,0.2)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.1,0.15,0.15))))])]),
          Transform(rotation=(1,0,0,-0.14),translation=(-8,12,14.45),
            children=[
            Transform(USE='BottomWindow')])]),
        Transform(DEF='Foundation',translation=(0,-0.25,0),
          children=[
          Shape(
            geometry=Box(size=(33,1,33)),
            appearance=Appearance(USE='CapeCodeWhite'))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LightHouse.py")
