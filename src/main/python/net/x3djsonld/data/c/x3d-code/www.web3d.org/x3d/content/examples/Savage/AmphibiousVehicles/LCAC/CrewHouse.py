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
    meta(content='CrewHouse.x3d',name='title'),
    meta(content='Crew House for the LCAC',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='5 July 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.hazegray.org/features/nato/us/lcac',name='reference'),
    meta(content='LCAC Crew House',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/CrewHouse.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    #  Country names: http://www.din.de/gremien/nas/nabd/iso3166ma 
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.8,0.95,1)]),
    Group(DEF='Roof',
      children=[
      Transform(
        children=[
        Group(DEF='LifeBoat',
          children=[
          Transform(rotation=(0,1,0,1.57),translation=(0.66,0.32,-0.8),
            children=[
            Inline(url=["LifeBoatPod.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/LifeBoatPod.x3d","LifeBoatPod.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/LifeBoatPod.wrl"])])]),
        Transform(DEF='BubbleBase',translation=(0.6,0.0325,1),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.25,0.325,0.325))),
            geometry=Cylinder(height=0.0625,radius=0.325))]),
        Transform(DEF='Bubble',translation=(0.6,-0.03,1),
          children=[
          Shape(
            geometry=Sphere(radius=0.3),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.2,0.6),shininess=1,specularColor=(1,1,1),transparency=0.5)))]),
        Transform(DEF='Top',
          children=[
          Shape(
            geometry=Box(size=(2,0.1,3.1)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.75,0.725,0.775))))]),
        Transform(DEF='BoxOfUnspecifiedPurpose',translation=(-0.75,0.16125,0.66),
          children=[
          Shape(
            geometry=Box(size=(0.4,0.325,0.6)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.75,0.8,0.95))))])])]),
    Group(DEF='BulkHeads',
      children=[
      Transform(rotation=(0,0,1,3.14),
        children=[
        Transform(DEF='Bulkhead',
          children=[
          Shape(
            geometry=Extrusion(convex=False,crossSection=[(1.1,-1.05),(1,-1.05),(1,-1.55),(-1,-1.55),(-1,1.55),(1,1.55),(1,0.95),(1.1,0.95),(1.1,1.65),(-1.1,1.65),(-1.1,-1.65),(1.1,-1.65),(1.1,-1.05)],solid=False,spine=[(0,0.2,0),(0,1,0),(0,2,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.75,0.8))))]),
        Transform(DEF='TopBulkhead',
          children=[
          Shape(
            geometry=Extrusion(convex=False,crossSection=[(1.1,0.35),(1,0.35),(1,-1.55),(-1,-1.55),(-1,1.55),(1,1.55),(1,0.35),(1.1,0.35),(1.1,1.65),(-1.1,1.65),(-1.1,-1.65),(1.1,-1.65),(1.1,0.35)],solid=False,spine=[(0,2,0),(0,2.2,0),(0,2.25,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.75,0.8))))]),
        Transform(DEF='BottomBulkhead',
          children=[
          Shape(
            geometry=Extrusion(convex=False,crossSection=[(1.1,0.35),(1,0.35),(1,-1.55),(-1,-1.55),(-1,1.55),(1,1.55),(1,0.35),(1.1,0.35),(1.1,1.65),(-1.1,1.65),(-1.1,-1.65),(1.1,-1.65),(1.1,0.35)],solid=False,spine=[(0,0,0),(0,0.1,0),(0,0.2,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.75,0.8))))]),
        Transform(DEF='BetweenTheDoors',rotation=(0,0,1,3.14),translation=(1.05,1.1,-0.05),
          children=[
          Shape(
            geometry=Box(size=(0.1,1.8,0.8)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.75,0.8))))]),
        Transform(DEF='Corners',translation=(0.5,0,-2.35),
          children=[
          Transform(DEF='URDoorCorner',rotation=(0,0,1,1.57),translation=(0.6,2,1.3),
            children=[
            Transform(scale=(0.025,1,0.025),
              children=[
              Shape(DEF='CornerExtrusion',
                geometry=Extrusion(convex=False,crossSection=[(0,0),(0,4),(-0.2,3),(-0.3,2.6),(-0.45,2.2),(-0.6,1.9),(-0.8,1.6),(-1,1.35),(-1.35,1),(-1.6,0.8),(-1.9,0.6),(-2.2,0.45),(-2.6,0.3),(-3,0.2),(-4,0),(0,0)],solid=False,spine=[(0,0,0),(0,0.1,0)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.8,0.75,0.8))))])]),
          Transform(DEF='ULDoorCorner',rotation=(0,0,-1,1.57),translation=(0.5,2,1.9),
            children=[
            Transform(rotation=(0,1,0,3.14),scale=(0.025,1,0.025),
              children=[
              Shape(USE='CornerExtrusion')])]),
          Transform(DEF='LLDoorCorner',rotation=(0,0,1,1.57),translation=(0.6,0.2,1.9),
            children=[
            Transform(rotation=(0,1,0,3.14),scale=(0.025,1,0.025),
              children=[
              Shape(USE='CornerExtrusion')])]),
          Transform(DEF='LRDoorCorner',rotation=(0,0,1,1.57),translation=(0.6,0.2,1.3),
            children=[
            Transform(rotation=(0,1,0,1.57),scale=(0.025,1,0.025),
              children=[
              Shape(USE='CornerExtrusion')])])])]),
      Transform(DEF='FrontBulkheadSlope',translation=(0,-2.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.75,0.8))),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
            coord=Coordinate(point=[(-1.1,2.5,1.65),(-1.1,0.25,2.15),(1.1,0.25,2.15),(1.1,2.5,1.65),(-1.1,2.5,1.65)]))),
        Transform(DEF='PortSlopeTriangle',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.75,0.8))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(1.1,2.5,1.65),(1.1,0.25,2.15),(1.1,0.25,1.65),(1.1,2.5,1.65)])))]),
        Transform(DEF='StarboardSlopeTriangle',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.75,0.8))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
              coord=Coordinate(point=[(-1.1,2.5,1.65),(-1.1,0.25,2.15),(-1.1,0.25,1.65),(-1.1,2.5,1.65)])))])]),
      Transform(DEF='LifeBuoy',rotation=(1,0,0,1.5),scale=(0.125,0.08,0.125),translation=(0.4,-0.75,1.95),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.95,0.1,0.1))),
          geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)])),
        Transform(translation=(0,-1,-0.9),
          children=[
          Shape(
            geometry=Extrusion(crossSection=[(0.1,0.00),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.00,-0.10),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.10,-0.00),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.00,0.10),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.10,0.00)],spine=[(0,-1.5,0),(0,1,0),(0,1.9,-0.5),(0,2,-0.75)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.7,0.75,0.85))))])]),
      Transform(DEF='HullNumber',rotation=(0,1,0,1.57),translation=(1.1,-1.3,1.25),
        children=[
        Shape(
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],
            coord=Coordinate(point=[(0,0,0),(2,0,0),(2,1,0),(0,1,0),(0,0,0)])),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.75,0.8)),
            texture=ImageTexture(url=["LCAC-1.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/LCAC-1.jpg"])))])]),
    Group(DEF='Hatches',
      children=[
      Transform(DEF='Hatch',rotation=(0,1,0,4.71),translation=(-1.11,-1.1,1),
        children=[
        Inline(url=["CrewHouseHatch.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/CrewHouseHatch.x3d","CrewHouseHatch.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/CrewHouseHatch.wrl"])]),
      Transform(rotation=(0,1,0,4.71),translation=(-1.11,-1.1,-1.2),
        children=[
        Inline(url=["PilotHouseHatch.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/PilotHouseHatch.x3d","PilotHouseHatch.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/PilotHouseHatch.wrl"])]),
      Transform(DEF='LeftCorners',rotation=(0,0,1,3.14),translation=(-0.5,0,-0.95),
        children=[
        Transform(DEF='LUDoorCorner',rotation=(0,0,1,1.57),translation=(0.6,2,1.3),
          children=[
          Transform(scale=(0.025,1,0.025),
            children=[
            Shape(DEF='CornerExtrusionOne',
              geometry=Extrusion(convex=False,crossSection=[(0,0),(0,4),(-0.2,3),(-0.3,2.6),(-0.45,2.2),(-0.6,1.9),(-0.8,1.6),(-1,1.35),(-1.35,1),(-1.6,0.8),(-1.9,0.6),(-2.2,0.45),(-2.6,0.3),(-3,0.2),(-4,0),(0,0)],solid=False,spine=[(0,0,0),(0,0.1,0)]),
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.75,0.8))))])]),
        Transform(DEF='LLUDoorCorner',rotation=(0,0,-1,1.57),translation=(0.5,2,1.9),
          children=[
          Transform(rotation=(0,1,0,3.14),scale=(0.025,1,0.025),
            children=[
            Shape(USE='CornerExtrusion')])]),
        Transform(DEF='LLLDoorCorner',rotation=(0,0,1,1.57),translation=(0.6,0.2,1.9),
          children=[
          Transform(rotation=(0,1,0,3.14),scale=(0.025,1,0.025),
            children=[
            Shape(USE='CornerExtrusion')])]),
        Transform(DEF='LLRDoorCorner',rotation=(0,0,1,1.57),translation=(0.6,0.2,1.3),
          children=[
          Transform(rotation=(0,1,0,1.57),scale=(0.025,1,0.025),
            children=[
            Shape(USE='CornerExtrusion')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CrewHouse.py")
