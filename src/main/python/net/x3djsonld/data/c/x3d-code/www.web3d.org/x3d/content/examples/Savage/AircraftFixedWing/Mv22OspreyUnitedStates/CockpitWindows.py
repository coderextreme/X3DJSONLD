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
    meta(content='CockpitWindows.x3d',name='title'),
    meta(content='Osprey MV-22 cockpit windows.',name='description'),
    meta(content='Major William C. James USMC',name='creator'),
    meta(content='23 September 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='http://www.navair.navy.mil/v22',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/v-22.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/Mv22OspreyUnitedStates/CockpitWindows.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(.2,.2,.7)]),
    Viewpoint(description='Front, level',position=(0,0,30)),
    #  Cockpit_Windows 
    Group(
      children=[
      Transform(rotation=(1,0,0,-2.5),
        children=[
        Shape(DEF='Front_Window',
          geometry=Extrusion(ccw=False,crossSection=[(0,0),(2,0),(2,.25),(-2,.25),(-2,0),(0,0)],scale=[(1,1),(.6,1)],solid=False,spine=[(0,0,0),(0,0,-2)]),
          appearance=Appearance(
            material=Material(diffuseColor=(.9,.9,.9),shininess=.5)))]),
      Transform(DEF='R_Side_Window',rotation=(0,1,0,3.12),translation=(2.2,-1.5,-.07),
        children=[
        Transform(rotation=(0,1,0,-.40),scale=(.7,.7,.7),
          children=[
          Shape(DEF='RSide_Window',
            geometry=Extrusion(ccw=False,crossSection=[(0,0),(.125,0),(.125,2),(-.125,2),(-.125,0),(0,0)],scale=[(1,1),(1,.2)],solid=False,spine=[(0,0,0),(0,0,-2)]),
            appearance=Appearance(
              material=Material(diffuseColor=(.9,.9,.9),shininess=.5)))])]),
      Transform(DEF='L_Side_Window',rotation=(0,1,0,3.12),translation=(-2.2,-1.5,-.07),
        children=[
        Transform(rotation=(0,1,0,.45),scale=(.7,.7,.7),
          children=[
          Shape(DEF='LSide_Window',
            geometry=Extrusion(ccw=False,crossSection=[(0,0),(.125,0),(.125,2),(-.125,2),(-.125,0),(0,0)],scale=[(1,1),(1,.2)],solid=False,spine=[(0,0,0),(0,0,-2)]),
            appearance=Appearance(
              material=Material(diffuseColor=(.9,.9,.9),shininess=.5)))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CockpitWindows.py")
