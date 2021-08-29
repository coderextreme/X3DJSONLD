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
    meta(content='DestroyedBMP.x3d',name='title'),
    meta(content='Michael W. Martin',name='creator'),
    meta(content='1 September 2004',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='A BMP-1 armored fighting vehicle.',name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/TankManeuver/DestroyedBMP.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(translation=(0,.53,0),
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(DEF='Enemy',
              material=Material(diffuseColor=(.2,.2,.2))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,9,10,11,-1,2,5,4,6,7,9,-1,2,3,5,-1,3,4,5,-1,6,8,7,-1,8,9,7,-1,22,24,14,15,20,18,8,6,4,3,-1,9,8,18,19,16,10,-1,23,22,3,2,1,13,-1,22,23,25,24,-1,20,21,19,18,-1,12,17,15,14,-1,26,16,19,21,-1,21,20,15,17,26,-1,10,16,26,11,-1,1,0,27,13,-1,27,25,23,13,-1,27,12,14,24,25,-1,26,17,12,27,-1,11,26,27,0],
              coord=Coordinate(point=[(-.42,.16,-1.4),(-.59,.16,-.33),(-.59,.16,1.04),(-.59,0,1.4),(-.48,.08,1.49),(-.48,.12,1.27),(.48,.08,1.49),(.48,.12,1.27),(.59,0,1.4),(.59,.16,1.04),(.59,.16,-.33),(.42,.16,-1.4),(-.42,-.27,-1.38),(-.59,0,-.33),(-.42,-.35,.92),(.42,-.35,.92),(.59,0,-.33),(.42,-.27,-1.38),(.59,-.13,1.21),(.59,0,1.09),(.42,-.13,1.21),(.42,0,1.09),(-.59,-.13,1.21),(-.59,0,1.09),(-.42,-.13,1.21),(-.42,0,1.09),(.42,0,-1.4),(-.42,0,-1.4)]))),
          Transform(translation=(.5,0,0),
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,-1,19,18,17,16,15,14,13,12,11,10,-1,10,11,1,0,-1,19,10,0,9,-1,18,19,9,8,-1,17,18,8,7,-1,16,17,7,6,-1,15,16,6,5,-1,14,15,5,4,-1,13,14,4,3,-1,12,13,3,2,-1,11,12,2,1,-1],
                coord=Coordinate(point=[(.07,-.04,-1.18),(.07,-.06,1.01),(.07,-.1,1.14),(.07,-.2,1.19),(.07,-.3,1.15),(.07,-.53,.79),(.07,-.53,-.92),(.07,-.28,-1.3),(.07,-.18,-1.32),(.07,-.09,-1.29),(-.07,-.04,-1.18),(-.07,-.06,1.01),(-.07,-.1,1.14),(-.07,-.2,1.19),(-.07,-.3,1.15),(-.07,-.53,.79),(-.07,-.53,-.92),(-.07,-.28,-1.3),(-.07,-.18,-1.32),(-.07,-.09,-1.29)])))]),
          Transform(translation=(-.5,0,0),
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,-1,19,18,17,16,15,14,13,12,11,10,-1,10,11,1,0,-1,19,10,0,9,-1,18,19,9,8,-1,17,18,8,7,-1,16,17,7,6,-1,15,16,6,5,-1,14,15,5,4,-1,13,14,4,3,-1,12,13,3,2,-1,11,12,2,1,-1],
                coord=Coordinate(point=[(.07,-.04,-1.18),(.07,-.06,1.01),(.07,-.1,1.14),(.07,-.2,1.19),(.07,-.3,1.15),(.07,-.53,.79),(.07,-.53,-.92),(.07,-.28,-1.3),(.07,-.18,-1.32),(.07,-.09,-1.29),(-.07,-.04,-1.18),(-.07,-.06,1.01),(-.07,-.1,1.14),(-.07,-.2,1.19),(-.07,-.3,1.15),(-.07,-.53,.79),(-.07,-.53,-.92),(-.07,-.28,-1.3),(-.07,-.18,-1.32),(-.07,-.09,-1.29)])))]),
          Transform(center=(0,0,-.165),rotation=(1,0,0,-1.9),translation=(.36,.16,.4),
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=Cylinder(height=.02,radius=.165))]),
          Transform(translation=(.36,.17,.75),
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=Cylinder(height=.02,radius=.1))]),
          Transform(center=(.08,0,0),rotation=(0,0,1,-2.7),translation=(.16,.17,-.77),
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=Box(size=(.22,.02,.33)))]),
          Transform(translation=(-.16,.17,-.77),
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=Box(size=(.22,.02,.33)))]),
          Transform(center=(.08,0,0),rotation=(0,0,1,-2.5),translation=(.16,.17,-1.15),
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=Box(size=(.22,.02,.33)))]),
          Transform(center=(-.08,0,0),rotation=(0,0,1,.15),translation=(-.16,.17,-1.15),
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=Box(size=(.22,.02,.33)))]),
          Transform(rotation=(1,0,0,-.087),translation=(.19,-.05,-1.4),
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=Box(size=(.36,.38,.06)))]),
          Transform(rotation=(1,0,0,-.087),translation=(-.19,-.05,-1.4),
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=Box(size=(.36,.38,.06)))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,14,13,12,-1,2,3,4,14,-1,14,4,5,6,7,8,12,13,-1,0,12,10,11,-1,12,8,9,10,-1,3,22,5,4,-1,6,5,22,23,-1,8,7,6,23,24,25,-1,8,25,26,9,-1,9,26,27,10,-1,27,11,10,-1,17,27,26,25,-1,3,2,23,22,-1,1,24,23,2,-1,16,17,25,24,-1,19,15,1,0,-1,1,15,20,16,-1,0,11,18,19,-1,16,20,21,17,-1,27,28,18,11,-1,27,17,21,28,-1,19,18,28,21,-1,19,21,20,15],
                coord=Coordinate(point=[(.59,.08,-1.33),(.59,.08,-.3),(.59,.08,1.22),(.59,-.03,1.34),(.63,-.08,1.27),(.63,-.19,1.14),(.63,-.08,.93),(.63,-.08,-.3),(.63,-.08,-1.18),(.63,-.13,-1.4),(.63,-.13,-1.49),(.59,-.08,-1.49),(.63,0,-1.25),(.63,0,-.3),(.63,0,1.14),(.41,.08,-.3),(.59,0,-.3),(.59,0,-1.25),(.41,-.08,-1.49),(.41,.08,-1.33),(.41,0,-.3),(.41,0,-1.25),(.59,-.19,1.14),(.59,-.08,.93),(.59,-.08,-.3),(.59,-.08,-1.18),(.59,-.13,-1.4),(.59,-.13,-1.49),(.41,-.13,-1.49)])))]),
          Transform(
            children=[
            Shape(
              appearance=Appearance(USE='Enemy'),
              geometry=IndexedFaceSet(ccw=False,coordIndex=[0,1,2,14,13,12,-1,2,3,4,14,-1,14,4,5,6,7,8,12,13,-1,0,12,10,11,-1,12,8,9,10,-1,3,22,5,4,-1,6,5,22,23,-1,8,7,6,23,24,25,-1,8,25,26,9,-1,9,26,27,10,-1,27,11,10,-1,17,27,26,25,-1,3,2,23,22,-1,1,24,23,2,-1,16,17,25,24,-1,19,15,1,0,-1,1,15,20,16,-1,0,11,18,19,-1,16,20,21,17,-1,27,28,18,11,-1,27,17,21,28,-1,19,18,28,21,-1,19,21,20,15],
                coord=Coordinate(point=[(-.59,.08,-1.33),(-.59,.08,-.3),(-.59,.08,1.22),(-.59,-.03,1.34),(-.63,-.08,1.27),(-.63,-.19,1.14),(-.63,-.08,.93),(-.63,-.08,-.3),(-.63,-.08,-1.18),(-.63,-.13,-1.4),(-.63,-.13,-1.49),(-.59,-.08,-1.49),(-.63,0,-1.25),(-.63,0,-.3),(-.63,0,1.14),(-.41,.08,-.3),(-.59,0,-.3),(-.59,0,-1.25),(-.41,-.08,-1.49),(-.41,.08,-1.33),(-.41,0,-.3),(-.41,0,-1.25),(-.59,-.19,1.14),(-.59,-.08,.93),(-.59,-.08,-.3),(-.59,-.08,-1.18),(-.59,-.13,-1.4),(-.59,-.13,-1.49),(-.41,-.13,-1.49)])))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DestroyedBMP.py")
