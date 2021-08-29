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
    meta(content='BMP1Turret.x3d',name='title'),
    meta(content='Michael W. Martin',name='creator'),
    meta(content='1 September 2004',name='created'),
    meta(content='18 October 2004',name='modified'),
    meta(content='A BMP-1 armored fighting vehicle.',name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/TankManeuver/BMP1Turret.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(translation=(0,.53,0),
        children=[
        Transform(translation=(0,.26,-.18),
          children=[
          Shape(
            appearance=Appearance(DEF='Enemy',
              material=Material(diffuseColor=(1,0,0))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,-1,16,17,1,0,-1,17,18,2,1,-1,18,19,3,2,-1,19,20,4,3,-1,20,21,5,4,-1,21,22,6,5,-1,22,23,7,6,-1,23,24,8,7,-1,24,25,9,8,-1,25,26,10,9,-1,26,27,11,10,-1,27,28,12,11,-1,28,29,13,12,-1,29,30,14,13,-1,30,31,15,14,-1,31,16,0,15,-1],creaseAngle=.5,
              coord=Coordinate(point=[(0.24,0.1,-0.035),(0.2208,0.1,-0.1262),(0.1704,0.1,-0.2054),(0.0912,0.1,-0.2558),(0,0.1,-0.275),(-0.0912,0.1,-0.2558),(-0.1704,0.1,-0.2054),(-0.2208,0.1,-0.1262),(-0.24,0.1,-0.035),(-0.2208,0.1,0.0562),(-0.1704,0.1,0.1354),(-0.0912,0.1,0.1858),(0,0.1,0.205),(0.0912,0.1,0.1858),(0.1704,0.1,0.1354),(0.2208,0.1,0.0562),(0.355,-0.1,0),(0.3266,-0.1,-0.1349),(0.25205,-0.1,-0.25205),(0.1349,-0.1,-0.3266),(0,-0.1,-0.355),(-0.1349,-0.1,-0.3266),(-0.25205,-0.1,-0.25205),(-0.3266,-0.1,-0.1349),(-0.355,-0.1,0),(-0.3266,-0.1,0.1349),(-0.25205,-0.1,0.25205),(-0.1349,-0.1,0.3266),(0,-0.1,0.355),(0.1349,-0.1,0.3266),(0.25205,-0.1,0.25205),(0.3266,-0.1,0.1349)]))),
          Transform(translation=(0,0,.25),
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=Box(size=(.17,.18,.21))),
            Transform(rotation=(1,0,0,1.57),translation=(0,.02,.43),
              children=[
              Shape(
                appearance=Appearance(USE='Enemy'),
                geometry=Cylinder(height=.66,radius=.035))]),
            Transform(rotation=(1,0,0,-.14),translation=(0,.11,.29),
              children=[
              Shape(
                appearance=Appearance(USE='Enemy'),
                geometry=Box(size=(.06,.02,.42))),
              Transform(rotation=(1,0,0,1.57),translation=(0,.035,-.04),
                children=[
                Shape(
                  appearance=Appearance(USE='Enemy'),
                  geometry=Cylinder(height=.32,radius=.03)),
                Transform(translation=(0,.2,0),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Enemy'),
                    geometry=Cone(bottomRadius=.03,height=.08))]),
                Transform(rotation=(0,1,0,.785),translation=(0,-.06,0),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Enemy'),
                    geometry=Box(size=(.01,.06,.17)))]),
                Transform(rotation=(0,1,0,-.785),translation=(0,-.06,0),
                  children=[
                  Shape(
                    appearance=Appearance(USE='Enemy'),
                    geometry=Box(size=(.01,.06,.17)))])])])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BMP1Turret.py")
