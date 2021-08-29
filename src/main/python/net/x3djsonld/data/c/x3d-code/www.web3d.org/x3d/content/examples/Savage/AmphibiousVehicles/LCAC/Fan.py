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
    meta(content='Fan.x3d',name='title'),
    meta(content='Fan with Cowling, Shaft and Control Surfaces for the LCAC',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='13 June 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac.htm',name='reference'),
    meta(content='http://www.surfpac.navy.mil/acu5/lcac.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/Fan.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='LCAC Propellor',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Scale verified by http://www.surfpac.navy.mil/acu5/lcac.htm 
    children=[
    Background(skyColor=[(0.2,0.66,1)]),
    Viewpoint(description='LCAC Fan from Aft'),
    Transform(DEF='Fan',rotation=(1,0,0,1.57),
      children=[
      Transform(DEF='Cowling',
        children=[
        LOD(range=[80],
          children=[
          Transform(rotation=(0,1,0,0.758),scale=(1,6,1),
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(url=["CowlingPaint.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/CowlingPaint.jpg"])),
              geometry=Extrusion(beginCap=False,convex=False,creaseAngle=12.56,crossSection=[(0.1,0.00),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.00,-0.10),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.10,-0.00),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.00,0.10),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.10,0.00)],endCap=False,spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]))]),
          Transform(rotation=(0,1,0,0.758),scale=(1,6,1),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.9,0.9,0.9))),
              geometry=Extrusion(beginCap=False,convex=False,creaseAngle=12.56,crossSection=[(0.1,0.00),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.00,-0.10),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.10,-0.00),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.00,0.10),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.10,0.00)],endCap=False,spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]))])]),
        LOD(range=[80],
          children=[
          Transform(DEF='Grate',translation=(0,0.5025,0),
            children=[
            Shape(
              geometry=Cylinder(height=0.05,radius=2),
              appearance=Appearance(
                material=Material(transparency=0.6),
                texture=ImageTexture(url=["grate.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/grate.jpg"])))]),
          Transform(DEF='NoGrate',translation=(0,0.5025,0),
            children=[
            Shape(
              geometry=Cylinder(height=0.05,radius=2),
              appearance=Appearance(
                material=Material(transparency=0.6)))])]),
        LOD(range=[60],
          children=[
          Transform(
            children=[
            Transform(DEF='Strut',rotation=(0,0,1,1.57),translation=(0,0.05,0.4),
              children=[
              Transform(DEF='SurfaceOne',
                children=[
                Shape(
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                    coord=Coordinate(point=[(0,0,-0.25),(0.4,0,-0.25),(0.3,0,1.5),(0.1,0,1.5),(0,0,-0.25)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.25,0.5,0.95))))]),
              Transform(DEF='SurfaceTwo',
                children=[
                Shape(
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                    coord=Coordinate(point=[(0,-0.01,-0.25),(0.4,-0.01,-0.25),(0.3,-0.01,1.5),(0.1,-0.01,1.5),(0,-0.01,-0.25)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.25,0.5,0.95))))]),
              Transform(DEF='SideOne',
                children=[
                Shape(
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                    coord=Coordinate(point=[(0.3,0,1.5),(0.4,0,-0.25),(0.4,-0.01,-0.25),(0.3,-0.01,1.5),(0.3,0,1.5)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.25,0.5,0.95))))]),
              Transform(DEF='SideTwo',
                children=[
                Shape(
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                    coord=Coordinate(point=[(0,0,-0.25),(0,-0.01,-0.25),(0.4,-0.01,-0.25),(0.4,0,-0.25),(0,0,-0.25)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.25,0.5,0.95))))]),
              Transform(DEF='SideThree',
                children=[
                Shape(
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                    coord=Coordinate(point=[(0,0,-0.25),(0,-0.01,-0.25),(0.1,-0.01,1.5),(0.1,0,1.5),(0,0,-0.25)])),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.25,0.75,0.25))))])]),
            Transform(DEF='StrutTwo',rotation=(0,1,0,1.26),
              children=[
              Transform(USE='Strut')]),
            Transform(DEF='StrutThree',rotation=(0,1,0,2.51),
              children=[
              Transform(USE='Strut')]),
            Transform(DEF='StrutFour',rotation=(0,1,0,3.77),
              children=[
              Transform(USE='Strut')]),
            Transform(DEF='StrutFive',rotation=(0,-1,0,1.26),
              children=[
              Transform(USE='Strut')])]),
          Transform(),]),
        LOD(range=[80,120],
          children=[
          Transform(DEF='RearGrate',rotation=(1,0,0,3.14),translation=(0,-1,0),
            children=[
            Shape(
              geometry=Cone(bottom=False,bottomRadius=2,height=1),
              appearance=Appearance(
                material=Material(transparency=0.6),
                texture=ImageTexture(url=["RearGrate.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/RearGrate.jpg"])))]),
          Transform(DEF='RearNoGrate',rotation=(1,0,0,3.14),translation=(0,-1,0),
            children=[
            Shape(
              geometry=Cone(bottom=False,bottomRadius=2,height=1),
              appearance=Appearance(
                material=Material(diffuseColor=(0.6,0.6,0.6),transparency=0.6)))]),
          Transform(),])]),
      Transform(DEF='PropellorLOD',translation=(0,-0.3,0),
        children=[
        LOD(range=[40],
          children=[
          Transform(DEF='Propellor',
            children=[
            Transform(rotation=(0,0,-1,1.57),
              children=[
              Transform(DEF='Blade',rotation=(0,-1,0,0.79),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.8,0.25,0))),
                  geometry=Extrusion(creaseAngle=1.785,crossSection=[(1,0),(0.3,0.28),(-0.1,0.38),(-0.4,0.35),(-0.7,0.2),(-0.8,0.1),(-0.85,0),(-0.8,-0.15),(-0.4,-0.28),(0,-0.21),(0.3,-0.14),(0.6,-0.08),(1,0)],scale=[(0.2,0.2),(0.185,0.185),(0.166,0.166),(0.133,0.133),(0.11667,0.11667),(0.105,0.105),(0.095,0.095),(0.088,0.088),(0.076,0.076)],solid=False,spine=[(0,0.1667,0),(0,0.333,0),(0,0.4667,0),(0,0.666,0),(0,1,0),(0,1.1667,0),(0,1.333,0),(0,1.666,0),(0,2,0)]))]),
              Transform(rotation=(1,0,0,1.57),
                children=[
                Transform(USE='Blade')]),
              Transform(rotation=(1,0,0,3.14),
                children=[
                Transform(USE='Blade')]),
              Transform(rotation=(1,0,0,4.71),
                children=[
                Transform(USE='Blade')])]),
            OrientationInterpolator(DEF='PropSpin',key=[0.0,0.5,1.0],keyValue=[(0.0,1.0,0.0,0.00),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)]),
            TimeSensor(DEF='Clock',cycleInterval=2,loop=True)]),
          Transform(
            children=[
            Shape(
              geometry=Cylinder(height=0.0125,radius=1.75),
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.25,0),transparency=0.5)))])])]),
      Transform(DEF='Shaft',translation=(0,-0.3,0),
        children=[
        Transform(translation=(0,-1.9167,0),
          children=[
          Shape(
            geometry=Cylinder(height=4,radius=0.1667),
            appearance=Appearance(
              material=Material(),))]),
        Transform(rotation=(1,0,0,3.14),translation=(0,0.25,0),
          children=[
          Shape(
            geometry=Extrusion(creaseAngle=1.785,crossSection=[(0.267,0.000),(0.231,-0.134),(0.134,-0.231),(0.0,-0.267),(-0.134,-0.231),(-0.231,-0.134),(-0.267,0.000),(-0.231,0.134),(-0.134,0.231),(0.0,0.267),(0.134,0.231),(0.231,0.134),(0.267,0.0)],scale=[(1,1),(1,1),(1,1),(1,1),(0.95,0.95),(0.88,0.88),(0.76,0.76),(0.48,0.48)],spine=[(0,0,0),(0,0.1,0),(0,0.2,0),(0,0.3,0),(0,0.4,0),(0,0.5,0),(0,0.6,0),(0,0.7,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.1,0.2))))]),
        Transform(DEF='NoseCone',translation=(0,0.25,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))),
            geometry=Extrusion(creaseAngle=1.785,crossSection=[(0.267,0.000),(0.231,-0.134),(0.134,-0.231),(0.0,-0.267),(-0.134,-0.231),(-0.231,-0.134),(-0.267,0.000),(-0.231,0.134),(-0.134,0.231),(0.0,0.267),(0.134,0.231),(0.231,0.134),(0.267,0.0)],scale=[(1,1),(1,1),(1,1),(1,1),(0.95,0.95),(0.88,0.88),(0.76,0.76),(0.48,0.48)],spine=[(0,0,0),(0,0.1,0),(0,0.2,0),(0,0.3,0),(0,0.4,0),(0,0.5,0),(0,0.6,0),(0,0.7,0)]))])]),
      Transform(DEF='PropellorControlSurfaces',
        children=[
        Transform(rotation=(0.58,0.58,0.58,2.09),scale=(4,1,1),translation=(-1,0.825,-1.75),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.15,0.8,0.8))),
            geometry=Extrusion(creaseAngle=1.785,crossSection=[(0.1,0),(0.03,0.028),(-0.01,0.038),(-0.04,0.035),(-0.07,0.02),(-0.08,0.01),(-0.085,0),(-0.08,-0.015),(-0.04,-0.028),(0,-0.021),(0.03,-0.014),(0.06,-0.008),(0.1,0)],solid=False,spine=[(0,0,0),(0,0.1667,0),(0,0.333,0),(0,0.4667,0),(0,0.666,0),(0,1,0),(0,1.1667,0),(0,1.333,0),(0,1.666,0),(0,3,0),(0,3.5,0)]))]),
        Transform(rotation=(0.58,0.58,0.58,2.09),scale=(4,1,1),translation=(1,0.825,-1.75),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.15,0.8,0.8))),
            geometry=Extrusion(creaseAngle=1.785,crossSection=[(0.1,0),(0.03,0.028),(-0.01,0.038),(-0.04,0.035),(-0.07,0.02),(-0.08,0.01),(-0.085,0),(-0.08,-0.015),(-0.04,-0.028),(0,-0.021),(0.03,-0.014),(0.06,-0.008),(0.1,0)],solid=False,spine=[(0,0,0),(0,0.1667,0),(0,0.333,0),(0,0.4667,0),(0,0.666,0),(0,1,0),(0,1.1667,0),(0,1.333,0),(0,1.666,0),(0,3,0),(0,3.5,0)]))])])]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='PropSpin'),
    ROUTE(fromField='value_changed',fromNode='PropSpin',toField='rotation',toNode='Propellor')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Fan.py")
