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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Chassis.x3d',name='title'),
    meta(content='This group of indexed face sets builds the chassis of the AAVP7A1, the USMC fully tracked amphibious assault vehicle.',name='description'),
    meta(content='Jeffrey D. Weekley',name='creator'),
    meta(content='16 March 2001',name='created'),
    meta(content='18 December 2014',name='modified'),
    meta(content='triangular hole in front of forward left mud guard',name='TODO'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/Chassis.x3d',name='identifier'),
    meta(content='Chassis AAV Gator AAV7PA1',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='AAVChassis',
      children=[
      Transform(scale=(0.22,0.22,0.22),
        children=[
        Group(
          children=[
          Transform(DEF='LeftHeadLightRecess',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='OliveDrab',diffuseColor=(0.15,0.66,0.2))),
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1],
                coord=Coordinate(point=[(11,6,6),(9,6,6),(9,7.625,6),(11,7.5,6)]))),
            Transform(
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1],
                  coord=Coordinate(point=[(9,7.625,6),(9,6,6),(9.1,6,4),(9.1,7.625,4)])))]),
            Transform(
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1],
                  coord=Coordinate(point=[(9.1,7.625,4),(9.1,6,4),(11,6,4),(11,7.5,4)])))]),
            Transform(
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,3,-1],
                  coord=Coordinate(point=[(11,6,6),(9,6,6),(9.1,6,4),(11,6,4)])))])]),
          Transform(DEF='RightHeadLightRecess',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='OliveDrab')),
              geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,3,-1],
                coord=Coordinate(point=[(11,6,-6),(9,6,-6),(9,7.625,-6),(11,7.5,-6)]))),
            Transform(
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,3,-1],
                  coord=Coordinate(point=[(9,7.625,-6),(9,6,-6),(9.1,6,-4),(9.1,7.625,-4)])))]),
            Transform(
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,3,-1],
                  coord=Coordinate(point=[(9.1,7.625,-4),(9.1,6,-4),(11,6,-4),(11,7.5,-4)])))]),
            Transform(
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1],
                  coord=Coordinate(point=[(11,6,-6),(9,6,-6),(9.1,6,-4),(11,6,-4)])))])]),
          Transform(DEF='FrontPlate',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='OliveDrab')),
              geometry=IndexedFaceSet(convex=False,coordIndex=[1,2,3,4,5,6,7,8,9,10,11,12,-1],
                coord=Coordinate(point=[(11,7.5,6),(10.75,7.5,7.5),(10.75,3.5,7.5),(10.75,3.5,-7.5),(10.75,7.5,-7.5),(11,7.5,-6),(11,6,-6),(11,6,-4),(11,7.5,-4),(11,7.5,4),(11,6,4),(11,6,6),(11,7.5,6)])))]),
          Transform(DEF='FrontBottom',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='OliveDrab')),
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,-1],creaseAngle=1.5,solid=False,
                coord=Coordinate(point=[(5.25,-2.75,7.5),(10.75,3.5,7.5),(10.75,3.5,6),(10.75,3.5,6),(10.75,3.5,-7.5),(5.25,-2.75,-7.5),(5.25,-2.75,7.5)])))]),
          Group(DEF='RightFender',
            children=[
            Transform(DEF='RightNotches',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,-1],
                  coord=Coordinate(point=[(-6.4,8,-10.5),(-4,5,-10),(-4,8,-7.25)]))),
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1],
                  coord=Coordinate(point=[(-4,8,-7.25),(0,8,-7),(0,5.5,-10),(-4,5,-10)]))),
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,-1],
                  coord=Coordinate(point=[(0,8,-7),(6.25,7.75,-8.25),(0,5.5,-10)])))]),
            Transform(DEF='RightLowerFender',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1],creaseAngle=2,
                  coord=Coordinate(point=[(6.25,7.75,-8.25),(10.75,7.5,-7.5),(10.75,3.5,-7.5),(6.25,3,-8.25),(0,5.5,-10)])))]),
            Transform(DEF='RearRightFender',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,-1],creaseAngle=2,
                  coord=Coordinate(point=[(-6.4,3.25,-10),(-6.4,1.25,-10),(-10,1.25,-10),(-10,2.25,-10),(-25,2.75,-8.25),(-25,5.5,-8.25),(-12,5.5,-8.25),(-10,8,-10),(-6.4,8,-10.5)])))])]),
          Group(DEF='LeftFender',
            children=[
            Transform(
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1],
                  coord=Coordinate(point=[(10.75,7.5,7.5),(0,8,10.75),(-1,8,10),(-3,8,10),(-4,8,11),(-10,8,10),(-12,5.5,8.25),(-25,5.5,8.25),(-25,2.75,8.25),(-10,2.25,10),(-10,1.25,10),(-6.4,1.25,10),(-6.4,2.25,10),(0,2.6,10),(6.25,2.65,8.25),(10.75,3.5,7.5),(10.75,7.5,7.5)])))])]),
          Transform(DEF='Bottom',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='OliveDrab')),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
                coord=Coordinate(point=[(5.25,-2.75,-7.5),(5.25,-2.75,7.5),(-25,-2.75,6),(-25,-2.75,-6)])))]),
          Transform(DEF='Back',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='OliveDrab')),
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,-1],
                coord=Coordinate(point=[(-25,7,7),(-25,7,-7),(-25,5.5,-8.25),(-25,2.75,-8.25),(-25,2.25,-6),(-25,-2.75,-6),(-25,-2.75,6),(-25,2.25,6),(-25,2.75,8.25),(-25,5.5,8.25),(-25,7,7)])))]),
          Group(DEF='Top',
            children=[
            Transform(DEF='TopFront',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1],solid=False,
                  coord=Coordinate(point=[(0,8,10.75),(10.75,7.5,7.5),(10.75,7.5,7.5),(11,7.5,6),(9,7.625,6),(9.1,7.625,4),(11,7.5,4),(11,7.5,-4),(9.1,7.625,-4),(9.1,7.625,-6),(11,7.5,-6),(10.75,7.5,-7.5),(6.25,7.75,-8.25),(0,8,-7),(0,8,10.75)])))]),
            Transform(DEF='TopMiddle',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,-1],solid=False,
                  coord=Coordinate(point=[(0,8,10.75),(0,8,-7),(-4,8,-7.25),(-6.4,8,-10.5),(-10,8,-10),(-10,8,10),(-4,8,11),(-3,8,10),(-1,8,10)])))]),
            Transform(DEF='TopSlantToRear',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1],solid=False,
                  coord=Coordinate(point=[(-10,8,-10),(-12.25,7,-7),(-12.25,7,7),(-10,8,10)])))]),
            Transform(DEF='TopRear',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1],solid=False,
                  coord=Coordinate(point=[(-12.25,7,-7),(-25,7,-7),(-25,7,7),(-12.25,7,7)])))]),
            Transform(DEF='RightTopTriangleSlantToSide',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,-1],
                  coord=Coordinate(point=[(-10,8,-10),(-12.25,7,-7),(-12,5.5,-8.25)])))]),
            Transform(DEF='LeftTopTirangleSlantToSide',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,-1],
                  coord=Coordinate(point=[(-10,8,10),(-12.25,7,7),(-12,5.5,8.25)])))]),
            Transform(DEF='RightSlantToSide',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1],
                  coord=Coordinate(point=[(-25,7,-7),(-12.25,7,-7),(-12,5.5,-8.25),(-25,5.5,-8.25)])))]),
            Transform(DEF='LeftSalntToSide',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
                  coord=Coordinate(point=[(-10,5.5,8.25),(-12.25,7,7),(-25,7,7),(-25,5.5,8.25)])))])]),
          Transform(DEF='LeftFacetoBottom',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='OliveDrab')),
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,-1],solid=False,
                coord=Coordinate(point=[(10.75,3.5,7.5),(6.25,2.65,8.25),(0,2.6,10),(-6.4,2.25,10),(-6.4,1.25,10),(-10,1.25,10),(-10,2.25,10),(-25,2.75,8.25),(-25,2.25,6),(-25,2.25,6),(-25,-2.75,6),(5.25,-2.75,7.5)])))]),
          Transform(DEF='RightFaceToBottom',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='OliveDrab')),
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,-1],solid=False,
                coord=Coordinate(point=[(10.75,3.5,-7.5),(6.25,3,-8.25),(0,5.5,-10),(-4,5,-10),(-6.4,8,-10.5),(-6.4,2.25,-10),(-6.4,1.25,-10),(-10,1.25,-10),(-10,2.25,-10),(-25,2.75,-8.25),(-25,2.25,-6),(-25,2.25,-6),(-25,-2.75,-6),(5.25,-2.75,-7.5)])))])]),
        Transform(DEF='LeftFrontFenderFlair',
          children=[
          Transform(DEF='LeftFirstTriangle',
            children=[
            Shape(
              geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,3,-1],solid=False,
                coord=Coordinate(point=[(10.75,3.5,-7.5),(9.75,2.5,-11.5),(9.75,1.5,-11.5),(8,0,-11.5)])),
              appearance=Appearance(
                material=Material(USE='OliveDrab')))]),
          Transform(DEF='LeftTopTriangle',
            children=[
            Shape(
              geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,-1],solid=False,
                coord=Coordinate(point=[(10.75,3.5,-7.5),(-6.4,1.25,-10),(9.75,2.5,-11.5)])),
              appearance=Appearance(
                material=Material(USE='OliveDrab')))]),
          Transform(DEF='LeftOutsideFlairCover',
            children=[
            Shape(
              geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(-6.4,1.25,-10),(0,-1,-11.5),(8,-1,-11.5),(9.75,1.5,-11.5),(9.75,2.5,-11.5)])),
              appearance=Appearance(
                material=Material(USE='OliveDrab')))])]),
        Transform(DEF='FrontFenderFlair',
          children=[
          Transform(DEF='FirstTriangle',
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1],solid=False,
                coord=Coordinate(point=[(10.75,3.5,7.5),(9.75,2.5,11.5),(9.75,1.5,11.5),(8,0,11.5)])),
              appearance=Appearance(
                material=Material(USE='OliveDrab')))]),
          Transform(DEF='TopTriangle',
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,-1],solid=False,
                coord=Coordinate(point=[(10.75,3.5,7.5),(-6.4,1.25,10),(9.75,2.5,11.5)])),
              appearance=Appearance(
                material=Material(USE='OliveDrab')))]),
          Transform(DEF='RightOutsideFlairCover',
            children=[
            Shape(
              geometry=IndexedFaceSet(ccw=False,convex=False,coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(-6.4,1.25,10),(0,-1,11.5),(8,-1,11.5),(9.75,1.5,11.5),(9.75,2.5,11.5)])),
              appearance=Appearance(
                material=Material(USE='OliveDrab')))])]),
        Transform(DEF='LeftPropHouse',translation=(-23.5,1.5,-7),
          children=[
          Shape(
            geometry=Cylinder(height=3,radius=1.2475),
            appearance=Appearance(
              material=Material(USE='OliveDrab')))]),
        Transform(DEF='RightPropHouse',translation=(-23.5,1.5,7),
          children=[
          Shape(
            geometry=Cylinder(height=3,radius=1.2475),
            appearance=Appearance(
              material=Material(USE='OliveDrab')))])]),
      Transform(translation=(-2,0.01,0),
        children=[
        Shape(
          geometry=Box(size=(5.75,1.15,3.6)),
          appearance=Appearance(
            material=Material(USE='OliveDrab')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Chassis.py")
