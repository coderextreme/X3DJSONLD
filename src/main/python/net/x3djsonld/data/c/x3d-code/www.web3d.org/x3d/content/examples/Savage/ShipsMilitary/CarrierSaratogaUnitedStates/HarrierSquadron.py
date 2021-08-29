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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='HarrierSquadron.x3d',name='title'),
    meta(content='Harrier Av8b',name='description'),
    meta(content='Soji Yamakawa',name='creator'),
    meta(content='Daniel Siew and Chun Hock Sng',name='translator'),
    meta(content='1 February 2001',name='created'),
    meta(content='27 February 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/HarrierSquadron.x3d',name='identifier'),
    meta(content='http://ciel.me.cmu.edu/soji/aircraft/aircrafte.html',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(rotation=(0,1,0,0.2),scale=(0.7,0.7,0.7),translation=(95,2.65,-15),
      children=[
      Group(
        children=[
        Inline(DEF='Harrier',url=["HarrierFlying.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/HarrierFlying.x3d","HarrierFlying.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/HarrierFlying.wrl"]),
        Transform(rotation=(0,1,0,3.14),
          children=[
          Transform(rotation=(0,1,0,1.57),translation=(0.01,1.3,6),
            children=[
            Transform(rotation=(0,0,1,1.70),
              children=[
              Shape(
                geometry=Text(string=["Daniel"],
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=.5)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,1,1))))])])])])]),
    Transform(rotation=(0,1,0,0.2),scale=(0.7,0.7,0.7),translation=(105,2.65,-15),
      children=[
      Group(
        children=[
        Inline(USE='Harrier'),
        Transform(rotation=(0,1,0,3.14),
          children=[
          Transform(rotation=(0,1,0,1.57),translation=(0.01,1.3,6),
            children=[
            Transform(rotation=(0,0,1,1.70),
              children=[
              Shape(
                geometry=Text(string=["Sng"],
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=.5)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,1,1))))])])])])]),
    Transform(rotation=(0,1,0,0.2),scale=(0.7,0.7,0.7),translation=(115,2.65,-15),
      children=[
      Group(
        children=[
        Inline(USE='Harrier'),
        Transform(rotation=(0,1,0,3.14),
          children=[
          Transform(rotation=(0,1,0,1.57),translation=(0.01,1.3,6),
            children=[
            Transform(rotation=(0,0,1,1.70),
              children=[
              Shape(
                geometry=Text(string=["Keith"],
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=.5)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,1,1))))])])])])]),
    Transform(rotation=(0,1,0,0.2),scale=(0.7,0.7,0.7),translation=(125,2.65,-15),
      children=[
      Group(
        children=[
        Inline(USE='Harrier'),
        Transform(rotation=(0,1,0,3.14),
          children=[
          Transform(rotation=(0,1,0,1.57),translation=(0.01,1.3,6),
            children=[
            Transform(rotation=(0,0,1,1.70),
              children=[
              Shape(
                geometry=Text(string=["Foo"],
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=.5)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,1,1))))])])])])]),
    Viewpoint(description='Harrier Squadron',orientation=(0,1,0,-0.85),position=(80,5,-10))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HarrierSquadron.py")
