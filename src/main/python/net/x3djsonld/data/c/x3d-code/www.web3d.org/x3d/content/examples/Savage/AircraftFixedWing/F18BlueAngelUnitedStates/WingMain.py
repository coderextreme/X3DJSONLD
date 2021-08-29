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
    meta(content='WingMain.x3d',name='title'),
    meta(content='The main wing of a Blue Angel. Wings are Mid-mounted, semidelta with prominent leading edge root extension on sides of fuselage from the front of the cockpit. The U.S. Navy insignias are attached.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='23 August 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WingMain.x3d',name='identifier'),
    meta(content='Main wing',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='MainWings',scale=(0.16,0.16,0.16),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.1,0.25,0.5),specularColor=(0,0.2,0.3))),
        geometry=Extrusion(DEF='Wing',ccw=False,creaseAngle=3.14,crossSection=[(0.00,1.00),(-5.2,0.00),(4,-.5),(4.6,-.4),(4.8,-.2),(4.9,.1),(4.9,.3),(4.5,.6),(4,.8),(3,1),(1,1.1),(0.00,1.00)],orientation=[(0,0,1,.6),(0,0,1,0),(0,0,1,-.6)],scale=[(.6,.6),(2.2,2.2),(.6,.6)],spine=[(-19.5,.1,23.4),(-6.5,.6,0),(-19.5,.1,-23.4)]))]),
    Background(skyColor=[(0.5,0.5,0.5)]),
    Transform(DEF='WingEdges',scale=(0.16,0.16,0.16),
      children=[
      Shape(
        appearance=Appearance(DEF='MainWEdge',
          material=Material(diffuseColor=(1,0.8,0),specularColor=(1,0.8,0))),
        geometry=Extrusion(DEF='WingEdge',ccw=False,creaseAngle=3.14,crossSection=[(0.00,1.00),(-5.2,0.00),(4,-.5),(4.6,-.4),(4.8,-.2),(4.9,.1),(4.9,.3),(4.5,.6),(4,.8),(3,1),(1,1.1),(0.00,1.00)],orientation=[(0,0,1,.6),(0,0,1,0),(0,0,1,-.6)],scale=[(.58,.58),(0.5,0.5),(.58,.58)],spine=[(-19.8,.095,24),(-6.5,.6,0),(-19.8,.095,-24)]))]),
    Transform(translation=(-3.6,0,3.9),
      children=[
      Shape(
        appearance=Appearance(USE='MainWEdge'),
        geometry=Extrusion(convex=False,creaseAngle=1.57,crossSection=[(0.1,0.0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,0.0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0.0)],scale=[(.2,.2),(.5,.5),(.6,.6),(.5,.5),(.2,.2)],spine=[(0.0,0.0,0.0),(0.2,0.0,0.0),(0.7,0.0,0.0),(1.2,0.0,0.0),(1.4,0.0,0.0)])),
      Transform(translation=(0.5,0,-0.09),
        children=[
        Shape(
          appearance=Appearance(USE='MainWEdge'),
          geometry=Box(size=(0.5,0.01,0.1)))])]),
    Transform(translation=(-3.6,0,-3.9),
      children=[
      Shape(
        appearance=Appearance(USE='MainWEdge'),
        geometry=Extrusion(convex=False,creaseAngle=1.57,crossSection=[(0.1,0.0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,0.0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0.0)],scale=[(.2,.2),(.5,.5),(.6,.6),(.5,.5),(.2,.2)],spine=[(0.0,0.0,0.0),(0.2,0.0,0.0),(0.7,0.0,0.0),(1.2,0.0,0.0),(1.4,0.0,0.0)])),
      Transform(translation=(0.5,0,0.09),
        children=[
        Shape(
          appearance=Appearance(USE='MainWEdge'),
          geometry=Box(size=(0.5,0.01,0.1)))])]),
    #  U.S. NAVY title attached to the bottom of wing. 
    Transform(rotation=(-0.82,-0,0.57,3.14),scale=(0.5,0.7,0.5),translation=(-5.8,-0.32,3),
      #  rotation X = -180, Y = -70, Z = 0 
      children=[
      Transform(rotation=(0.58,-0.58,0.58,2.09),scale=(0.4,0.4,0.4),translation=(0.5,-0.43,-5),
        #  U.S.NAVY title attached bottom part of the Main Wing. 
        children=[
        Group(
          children=[
          Transform(translation=(2,0,0),
            children=[
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(2,2.3,2),translation=(-2,-0.8,0),
              children=[
              Shape(
                geometry=Text(string=["U."],
                  fontStyle=FontStyle(DEF='USNavy_font',family=["SANS"],size=1.5)),
                appearance=Appearance(DEF='USNavy',
                  material=Material(diffuseColor=(1,0.8,0),specularColor=(1,0.8,0))))]
              #  Rotation (Y=180, Z=-90) 
              ),
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(2,2.5,2),translation=(-2,-3,0),
              children=[
              Shape(
                geometry=Text(string=["S."],
                  fontStyle=FontStyle(USE='USNavy_font')),
                appearance=Appearance(USE='USNavy'))]
              #  Rotation (Y=180, Z=-90) 
              ),
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(2.3,3,2.3),translation=(-2,-5.5,0),
              children=[
              Shape(
                geometry=Text(string=["N"],
                  fontStyle=FontStyle(USE='USNavy_font')),
                appearance=Appearance(USE='USNavy'))]
              #  Rotation (Y=180, Z=-90) 
              ),
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(2.5,3.5,2.5),translation=(-2,-7.5,0),
              children=[
              Shape(
                geometry=Text(string=["A"],
                  fontStyle=FontStyle(USE='USNavy_font')),
                appearance=Appearance(USE='USNavy'))]
              #  Rotation (Y=180, Z=-90) 
              ),
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(2.8,3.65,2.8),translation=(-2,-8.9,0),
              children=[
              Shape(
                geometry=Text(string=["V"],
                  fontStyle=FontStyle(USE='USNavy_font')),
                appearance=Appearance(USE='USNavy'))]
              #  Rotation (Y=180, Z=-90) 
              ),
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(3,3.85,3),translation=(-2,-11.2,0),
              children=[
              Shape(
                geometry=Text(string=["Y"],
                  fontStyle=FontStyle(USE='USNavy_font')),
                appearance=Appearance(USE='USNavy'))]
              #  Rotation (Y=180, Z=-90) 
              )])])])]),
    Transform(rotation=(-0.57,-0,0.82,3.14),scale=(0.5,0.7,0.5),translation=(-4.6,-0.33,0.2),
      #  rotation X = -180, Y = -70, Z = 0 
      children=[
      Transform(rotation=(0.58,-0.58,0.58,2.09),scale=(0.4,0.4,0.4),translation=(0.5,-0.43,-5),
        #  U.S.NAVY text bottom of left wing. 
        children=[
        Group(
          children=[
          Transform(translation=(2,0,0),
            children=[
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(3,3.85,3),translation=(-2,-0.8,0),
              children=[
              Shape(
                geometry=Text(string=["U."],
                  fontStyle=FontStyle(USE='USNavy_font')),
                appearance=Appearance(USE='USNavy'))]
              #  Rotation (Y=180, Z=-90) 
              ),
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(2.8,3.65,2.8),translation=(-2,-4,0),
              children=[
              Shape(
                geometry=Text(string=["S."],
                  fontStyle=FontStyle(USE='USNavy_font')),
                appearance=Appearance(USE='USNavy'))]
              #  Rotation (Y=180, Z=-90) 
              ),
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(2.5,3.4,2.5),translation=(-2,-6.9,0),
              children=[
              Shape(
                geometry=Text(string=["N"],
                  fontStyle=FontStyle(USE='USNavy_font')),
                appearance=Appearance(USE='USNavy'))]
              #  Rotation (Y=180, Z=-90) 
              ),
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(2.3,3,2.3),translation=(-2,-9.1,0),
              children=[
              Shape(
                geometry=Text(string=["A"],
                  fontStyle=FontStyle(USE='USNavy_font')),
                appearance=Appearance(USE='USNavy'))]
              #  Rotation (Y=180, Z=-90) 
              ),
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(2,2.5,2),translation=(-2,-10.5,0),
              children=[
              Shape(
                geometry=Text(string=["V"],
                  fontStyle=FontStyle(USE='USNavy_font')),
                appearance=Appearance(USE='USNavy'))]
              #  Rotation (Y=180, Z=-90) 
              ),
            Transform(rotation=(-0.71,0.71,-0,3.14),scale=(2,2.3,2),translation=(-2,-12.3,0),
              children=[
              Shape(
                geometry=Text(string=["Y"],
                  fontStyle=FontStyle(USE='USNavy_font')),
                appearance=Appearance(USE='USNavy'))]
              #  Rotation (Y=180, Z=-90) 
              )])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WingMain.py")
