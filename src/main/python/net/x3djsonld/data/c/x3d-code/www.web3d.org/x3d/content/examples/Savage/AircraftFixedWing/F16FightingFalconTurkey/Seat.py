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
    meta(content='Seat.x3d',name='title'),
    meta(content='F16, Fighting Falcon, Turkish Air Force (TUAF) Cockpit Seat',name='description'),
    meta(content='Murat ONDER, LTJG, Turkish Navy',name='creator'),
    meta(content='13 July 2003',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/Seat.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Group(
        children=[
        Transform(translation=(0,0,-0.26),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='Seat_Color',diffuseColor=(.2031,.2031,.0039))),
            geometry=Box(size=(1.8,0.5,2.5)))]),
        Transform(DEF='seatHead',rotation=(-1,0,0,0.17),translation=(0,3.25,0.65),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='Seat_Color')),
            geometry=Box(size=(1,1.25,0.4)))]),
        Transform(DEF='seatBack',translation=(0,1.5,0.75),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='Seat_Color')),
            geometry=Box(size=(1.8,2.7,0.5)))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Seat.py")
