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
    meta(content='NanuchkaMissileCorvette.x3d',name='title'),
    meta(content='Weng Wah LO',name='creator'),
    meta(content='27 Stember 2000',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Using Extrusion to model Nanuchka Missile Corvette',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNanuchkaLighthouseRussia/NanuchkaMissileCorvette.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Horizon Background 
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.0,0.3,0.7),(.0,.1,.8),(0.0,0.0,0.0)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1,1,1)]),
    Group(
      children=[
      Viewpoint(description='Nanuchka starboard side 50m',orientation=(1,0,0,-0.5),position=(0,30,50)),
      Viewpoint(description='Nanuchka bow 120m',orientation=(0,1,0,1.57),position=(120,20,0)),
      Viewpoint(description='Nanuchka port side 50m',orientation=(0,1,0,3.14),position=(0,10,-50)),
      Viewpoint(description='Nanuchka directly overhead',orientation=(1,0,0,-1.4),position=(10,50,10))]),
    SpotLight(ambientIntensity=0.3,beamWidth=1.570796,color=(0.7,0.6,0.1),cutOffAngle=.785398,direction=(-1,0,-1),intensity=0.6,location=(80,10,50)),
    #  Extrusion of Ship Hull 
    Shape(
      geometry=Extrusion(creaseAngle=1.57,crossSection=[(0,0),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(0,0)],orientation=[(0,1,0,0),(0,1,0,0),(0,1,0,0),(0,1,0,0),(0,0,1,-0.5)],scale=[(.1,4.75),(4.75,4.75),(5.6,5.6),(5.9,5.9),(5.9,.1)],solid=False,spine=[(-29.65,0.25,0),(-29,0,0),(0,0,0),(10.62,0,0),(29.65,0.25,0)]),
      appearance=Appearance(
        material=Material(),)),
    #  Extrusion of Ship Deck 
    Shape(
      geometry=Extrusion(creaseAngle=1.57,crossSection=[(0,-0.9),(0,0),(0,0.9)],orientation=[(0,1,0,0),(0,1,0,0),(0,1,0,0),(0,1,0,0),(0,0,1,-0.5)],scale=[(.08,4.7),(4.7,4.7),(5.5,5.5),(5.8,5.8),(5.8,.08)],solid=False,spine=[(-29.5,0.25,0),(-29,0.25,0),(0,0.25,0),(10.62,0.25,0),(29.5,0.25,0)]),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,1),emissiveColor=(0.2,0,0)))),
    #  Group of 3 Missile Launchers Starboard Side 
    Transform(DEF='StarboardLaunchers',rotation=(0,0,1,-1.5),translation=(5,1.6,2.5),
      children=[
      Shape(DEF='Missile_Canister',
        #  Construction of Missiles 
        geometry=Cylinder(height=10,radius=0.9),
        appearance=Appearance(
          material=Material(diffuseColor=(.2,.5,.3),emissiveColor=(0.2,0.5,0.3)))),
      Transform(translation=(0,0,1.8),
        children=[
        Shape(USE='Missile_Canister')]),
      Transform(translation=(-1.7,0,0.9),
        children=[
        Shape(USE='Missile_Canister')])]),
    #  Group of 3 Missile Launchers Port Side 
    Transform(translation=(0,0,-6.8),
      children=[
      Transform(USE='StarboardLaunchers')]),
    #  Ship Island Level 1 
    Shape(DEF='Island_Level1',
      appearance=Appearance(
        material=Material(DEF='Ship_Camo_Paint',diffuseColor=(0.62,0.639,0.612))),
      #  Top, Bottom, Side 
      geometry=IndexedFaceSet(ccw=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,-1,11,12,131415,16,17,18,19,20,21,-1,0,1,2,3,4,5,6,7,8,9,10,0,11,21,20,19,18,17,16,15,14,13,12,11,-1],solid=False,
        #  Coord on top, Coord on bottom 
        coord=Coordinate(DEF='Level1',point=[(-21,2.8,0),(-21,2.8,-2.5),(-16.0,2.8,-2.5),(-6.5,2.8,-3.5),(0.0,2.8,-1.5),(13.0,2.8,-1.5),(13.0,2.8,1.5),(0.0,2.8,1.5),(-6.5,2.8,3.5),(-16.0,2.8,2.5),(-21,2.8,2.5),(-21.8,0.05,0),(-21.8,0.05,-2.5),(-16.0,0.05,-2.5),(-6.5,0.05,-3.5),(0.0,0.05,-1.5),(14.4,0.05,-1.5),(14.4,0.05,1.5),(0.0,0.05,1.5),(-6.5,0.05,3.5),(-16.0,0.05,2.5),(-21.8,0.05,2.5)]))),
    #  Ship Island Level 2 
    Shape(DEF='Island_Level2',
      appearance=Appearance(
        material=Material(USE='Ship_Camo_Paint')),
      #  Top, Bottom, Side1, Side2, Side3 
      geometry=IndexedFaceSet(ccw=False,coordIndex=[0,1,2,3,4,-1,15,16,17,18,19,-1,0,1,2,3,4,0,5,9,8,7,6,5,-1,5,6,7,8,9,5,10,14,13,12,11,10,-1,10,11,12,13,14,10,15,19,18,17,16,15,-1],solid=False,
        #  Coord on top, Coord at top-middle, Coord at bottom-middle, Coord on bottom 
        coord=Coordinate(DEF='Level2',point=[(-4.85,5.5,0),(-4.85,5.5,-1.4),(9.75,5.5,-1.4),(9.75,5.5,1.4),(-4.85,5.5,1.4),(-5.1,4.6,0),(-5.1,4.6,-1.4),(14.15,4.6,-1.4),(14.15,4.6,1.4),(-5.1,4.6,1.4),(-5.3,3.55,0),(-5.3,3.55,-1.4),(13.7,3.55,-1.4),(13.7,3.55,1.4),(-5.3,3.55,1.4),(-5.5,2.8,0),(-5.5,2.8,-1.4),(13,2.8,-1.4),(13,2.8,1.4),(-5.5,2.8,1.4)]))),
    #  Ship Island Level 3 
    Shape(DEF='Island_Level3',
      appearance=Appearance(
        material=Material(USE='Ship_Camo_Paint')),
      #  Top, Bottom, Side 
      geometry=IndexedFaceSet(ccw=False,coordIndex=[0,1,2,3,4,-1,5,6,7,8,9,-1,0,1,2,3,4,0,5,9,8,7,6,5,-1],solid=False,
        #  Coord on top, Coord on bottom 
        coord=Coordinate(DEF='Level3',point=[(-2.2,8.4,0),(-2.2,8.4,-1.4),(6.6,8.4,-1.4),(6.6,8.4,1.4),(-2.2,8.4,1.4),(-2.85,5.55,0),(-2.85,5.55,-1.4),(7.5,5.55,-1.4),(7.5,5.55,1.4),(-2.85,5.55,1.4)]))),
    #  Construction of Main Radar Dome 
    Transform(translation=(4.85,9.725,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(USE='Ship_Camo_Paint')),
        geometry=Cylinder(height=2.65,radius=1.5)),
      Transform(translation=(0,1.325,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='Ship_Camo_Paint')),
          geometry=Sphere(radius=1.5))])]),
    #  Construction of Search Radar 
    Transform(translation=(-9.3,3.9,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(USE='Ship_Camo_Paint')),
        geometry=Box(size=(2,2.2,2))),
      Transform(translation=(0,1.1,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='Ship_Camo_Paint')),
          geometry=Box(size=(3,0.2,3))),
        Transform(rotation=(0,0,1,0.785),translation=(-0.4,1.2,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='Ship_Camo_Paint')),
            geometry=Cylinder(height=1.6,radius=.65))])])]),
    #  Construction of 76.2mm gun 
    Transform(DEF='Gun',scale=(1,0.82,1.2),translation=(-24,1.5,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(USE='Ship_Camo_Paint')),
        geometry=Sphere(radius=1.875)),
      Transform(rotation=(0,0,1,-1.57),translation=(-2,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='Ship_Camo_Paint')),
          geometry=Cylinder(height=4.5,radius=0.1))])]),
    #  Construction of 57mm gun 
    Transform(scale=(0.4,0.4,0.4),translation=(-10.5,2.9,0),
      children=[
      Transform(USE='Gun')]),
    #  Construction of Antenna Mast 
    Shape(
      appearance=Appearance(
        material=Material(USE='Ship_Camo_Paint')),
      geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1,8,9,10,11,8,-1,12,13,14,15,12,-1,16,17,18,19,16,-1,0,14,-1,3,13,-1,12,18,-1,15,17,-1,16,6,-1,19,5,-1,17,7,-1,18,4,-1,12,6,-1,13,7,-1,14,4,-1,15,5,-1,16,2,-1,17,3,-1,18,0,-1,19,1,-1,8,14,-1,9,15,-1,10,12,-1,11,13,-1],
        #  Top, Bottom, Midpoints1, Midpoints2, Midpoints3 
        coord=Coordinate(point=[(-3.1,14.8,-1),(-0.9,14.8,-1),(-0.9,14.8,1),(-3.1,14.8,1),(-4.81,5.5,-1.35),(-0.9,8.41,-1.3),(-0.9,8.41,1.3),(-4.81,5.5,1.35),(-4.295,8.3,-1.25),(-2,8.3,-1.27),(-2,8.3,1.27),(-4.295,8.3,1.25),(-3.90,10.5,-1.15),(-0.9,10.5,-1.17),(-0.9,10.5,1.17),(-3.90,10.5,1.15),(-3.485,12.7,-1.05),(-0.9,12.7,-1.07),(-0.9,12.7,1.07),(-3.485,12.7,1.05)]))),
    Transform(translation=(-2.9,14.81,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0))),
        geometry=Box(size=(3.8,0.2,2))),
      Transform(translation=(1,0.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Cone(bottomRadius=0.2,height=1)),
        Transform(DEF='RotatingAntennaMast',translation=(0,0.5,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0))),
            geometry=Box(size=(1.3,.3,.2))),
          Viewpoint(description='Nanuchka Rotating Antenna Mast',orientation=(1,0,0,-0.2),position=(0,3,20)),
          TimeSensor(DEF='Clock',cycleInterval=20,loop=True),
          OrientationInterpolator(DEF='ColumnPath',key=[0,0.5,1],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)]),
          ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='ColumnPath'),
          ROUTE(fromField='value_changed',fromNode='ColumnPath',toField='set_rotation',toNode='RotatingAntennaMast')])])]),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0,0,0))),
      geometry=IndexedLineSet(coordIndex=[0,4,-1,1,4,-1,2,4,-1,3,4,-1],
        #  Base, Top 
        coord=Coordinate(point=[(-4.4,14.81,-0.5),(-3.1,14.81,-0.5),(-3.1,14.81,0.5),(-4.4,14.81,0.5),(-3.3,18.35,0)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NanuchkaMissileCorvette.py")
